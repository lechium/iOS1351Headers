/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class CSSearchableIndex, NSArray, NSError;

@interface ICIndexItemsOperation : NSOperation {

	CSSearchableIndex* _searchableIndex;
	NSArray* _dataSources;
	unsigned long long _maxBytesPerBatch;
	NSError* _error;

}

@property (nonatomic,retain) CSSearchableIndex * searchableIndex;              //@synthesize searchableIndex=_searchableIndex - In the implementation block
@property (nonatomic,copy) NSArray * dataSources;                              //@synthesize dataSources=_dataSources - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long maxBytesPerBatch;              //@synthesize maxBytesPerBatch=_maxBytesPerBatch - In the implementation block
-(id)init;
-(NSError *)error;
-(void)main;
-(void)setError:(NSError *)arg1 ;
-(NSArray *)dataSources;
-(void)deleteItems;
-(CSSearchableIndex *)searchableIndex;
-(void)setSearchableIndex:(CSSearchableIndex *)arg1 ;
-(void)setDataSources:(NSArray *)arg1 ;
-(id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 ;
-(void)setMaxBytesPerBatch:(unsigned long long)arg1 ;
-(void)indexItems;
-(id)objectIDURIsToDeleteFromDataSource:(id)arg1 ;
-(id)objectIDsToIndexFromDataSource:(id)arg1 ;
-(unsigned long long)maxBytesPerBatch;
@end

