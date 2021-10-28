/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:55 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CalAsyncBlockPerformer;
@class NSMutableSet;

@interface CalAsyncBlockQueue : NSObject {

	id<CalAsyncBlockPerformer> _blockPerformer;
	NSMutableSet* _pendingBlocks;

}

@property (nonatomic,readonly) id<CalAsyncBlockPerformer> blockPerformer;              //@synthesize blockPerformer=_blockPerformer - In the implementation block
@property (nonatomic,readonly) NSMutableSet * pendingBlocks;                           //@synthesize pendingBlocks=_pendingBlocks - In the implementation block
-(void)performAsync:(/*^block*/id)arg1 ;
-(NSMutableSet *)pendingBlocks;
-(id<CalAsyncBlockPerformer>)blockPerformer;
-(void)performAfterDelay:(double)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithBlockPerformer:(id)arg1 ;
-(void)cancelAllPendingBlocks;
@end
