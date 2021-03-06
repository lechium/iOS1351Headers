/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMutableSet, NSArray, NSPersistentHistoryToken, PFHistoryAnalyzerOptions, NSSet;

@interface PFHistoryAnalyzerContext : NSObject {

	NSMutableDictionary* _objectIDToState;
	NSMutableSet* _processedTransactionIDs;
	NSArray* _sortedStates;
	BOOL _isFinished;
	NSPersistentHistoryToken* _finalHistoryToken;
	PFHistoryAnalyzerOptions* _options;

}

@property (nonatomic,readonly) PFHistoryAnalyzerOptions * options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSSet * processedTransactionIDs;                           //@synthesize processedTransactionIDs=_processedTransactionIDs - In the implementation block
@property (nonatomic,readonly) NSPersistentHistoryToken * finalHistoryToken;              //@synthesize finalHistoryToken=_finalHistoryToken - In the implementation block
@property (nonatomic,readonly) BOOL isFinished;                                           //@synthesize isFinished=_isFinished - In the implementation block
-(void)dealloc;
-(PFHistoryAnalyzerOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(BOOL)isFinished;
-(BOOL)reset:(id*)arg1 ;
-(NSPersistentHistoryToken *)finalHistoryToken;
-(BOOL)resetStateForObjectID:(id)arg1 error:(id*)arg2 ;
-(BOOL)processChange:(id)arg1 error:(id*)arg2 ;
-(id)analyzerStateForChangedObjectID:(id)arg1 error:(id*)arg2 ;
-(BOOL)finishProcessing:(id*)arg1 ;
-(id)fetchSortedStates:(id*)arg1 ;
-(id)newAnalyzerStateForChange:(id)arg1 error:(id*)arg2 ;
-(BOOL)processTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldPruneAnalyzerState:(id)arg1 ;
-(void)processFinalState:(id)arg1 ;
-(NSSet *)processedTransactionIDs;
@end

