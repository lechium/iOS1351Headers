/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSMutableDictionary, NSMutableSet, BRCAppLibrary, NSArray, NSDictionary;

@interface BRCPCSChainBatchInfo : NSObject {

	NSMutableArray* _fullyChainRecordBatch;
	NSMutableDictionary* _fullyChainRecordInfoMap;
	NSMutableDictionary* _halfChainedRecordMap;
	NSMutableSet* _alreadyHalfChainedRecords;
	NSMutableArray* _recordsForFirstPhase;
	BRCAppLibrary* _appLibrary;
	BOOL _should2PhasePCSChain;

}

@property (nonatomic,readonly) unsigned long long batchCount; 
@property (nonatomic,readonly) unsigned long long chainedRecordsCount; 
@property (nonatomic,readonly) NSArray * recordsForFirstPhase; 
@property (nonatomic,readonly) NSArray * recordsForSecondPhase; 
@property (nonatomic,readonly) NSDictionary * halfChainedRecordMap;                 //@synthesize halfChainedRecordMap=_halfChainedRecordMap - In the implementation block
@property (nonatomic,readonly) BOOL should2PhasePCSChain; 
-(unsigned long long)batchCount;
-(BOOL)should2PhasePCSChain;
-(void)_chainPreppedRecordToParent:(id)arg1 ;
-(id)initWithAppLibrary:(id)arg1 ;
-(BOOL)containsRecordInfo:(id)arg1 ;
-(void)prepareFirstPhaseRecordBatch;
-(void)addFullyChainedRecordInfo:(id)arg1 ;
-(void)chainPreparedRecordBatch:(id)arg1 ;
-(unsigned long long)chainedRecordsCount;
-(NSArray *)recordsForFirstPhase;
-(NSArray *)recordsForSecondPhase;
-(NSDictionary *)halfChainedRecordMap;
@end
