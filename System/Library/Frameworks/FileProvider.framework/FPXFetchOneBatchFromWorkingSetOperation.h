/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FileProvider/FPOperation.h>

@class FPXSpotlightIndexer, FPXDomainContext, FPXIndexState, NSArray, NSData, NSError;

@interface FPXFetchOneBatchFromWorkingSetOperation : FPOperation {

	FPXSpotlightIndexer* _indexer;
	FPXDomainContext* _domainContext;
	FPXIndexState* _indexState;
	BOOL _hasMore;
	NSArray* _updatedItems;
	NSArray* _deletedItemIDs;
	NSData* _nextAnchor;
	NSError* _error;

}

@property (nonatomic,retain) NSArray * updatedItems;                //@synthesize updatedItems=_updatedItems - In the implementation block
@property (nonatomic,retain) NSArray * deletedItemIDs;              //@synthesize deletedItemIDs=_deletedItemIDs - In the implementation block
@property (nonatomic,retain) NSData * nextAnchor;                   //@synthesize nextAnchor=_nextAnchor - In the implementation block
@property (assign,nonatomic) BOOL hasMore;                          //@synthesize hasMore=_hasMore - In the implementation block
@property (nonatomic,retain) NSError * error;                       //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)main;
-(void)setError:(NSError *)arg1 ;
-(id)initWithIndexer:(id)arg1 queue:(id)arg2 ;
-(NSArray *)updatedItems;
-(void)setUpdatedItems:(NSArray *)arg1 ;
-(NSArray *)deletedItemIDs;
-(void)setDeletedItemIDs:(NSArray *)arg1 ;
-(NSData *)nextAnchor;
-(void)setNextAnchor:(NSData *)arg1 ;
-(BOOL)hasMore;
-(void)handleInsertedItems:(id)arg1 deletedItems:(id)arg2 needsMoreWork:(BOOL)arg3 state:(id)arg4 error:(id)arg5 ;
-(id)observerItemID;
-(void)_indexOnePageFromPage:(id)arg1 ;
-(void)_indexOneChangesBatchFromChangeToken:(id)arg1 ;
-(void)setHasMore:(BOOL)arg1 ;
@end
