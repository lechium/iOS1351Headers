/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_DKKnowledgeStorageEventNotificationDelegate.h>

@protocol OS_dispatch_queue;
@class _DKKnowledgeStorage, _CDSpotlightEventIndexer, NSObject;

@interface _CDIntentSpotlightIndex : NSObject <_DKKnowledgeStorageEventNotificationDelegate> {

	BOOL _includeAdditions;
	_DKKnowledgeStorage* _storage;
	_CDSpotlightEventIndexer* _indexer;
	double _delay;
	unsigned long long _batchSize;
	NSObject*<OS_dispatch_queue> _activityQueue;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) _DKKnowledgeStorage * storage;                         //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) _CDSpotlightEventIndexer * indexer;                    //@synthesize indexer=_indexer - In the implementation block
@property (assign,nonatomic) double delay;                                            //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                            //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> activityQueue;              //@synthesize activityQueue=_activityQueue - In the implementation block
@property (assign,nonatomic) BOOL includeAdditions;                                   //@synthesize includeAdditions=_includeAdditions - In the implementation block
@property (nonatomic,copy) id completion;                                             //@synthesize completion=_completion - In the implementation block
-(void)dealloc;
-(_DKKnowledgeStorage *)storage;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(id)initWithKnowledgeStorage:(id)arg1 ;
-(void)knowledgeStorage:(id)arg1 didInsertLocalEventsWithStreamNameCounts:(id)arg2 ;
-(void)knowledgeStorage:(id)arg1 didTombstoneEventsWithStreamNameCounts:(id)arg2 ;
-(void)triggerIndexIncludingAdditions:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)includeAdditions;
-(void)setIncludeAdditions:(BOOL)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)activityQueue;
-(_CDSpotlightEventIndexer *)indexer;
-(unsigned long long)batchSize;
-(id)completion;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(void)setActivityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
