/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVTTransitionScheduler;
@class NSMutableArray;

@interface AVTTransitionCoordinator : NSObject {

	double _delay;
	id<AVTTransitionScheduler> _scheduler;
	NSMutableArray* _pendingTransitions;
	NSMutableArray* _runningTransitions;

}

@property (nonatomic,retain) id<AVTTransitionScheduler> scheduler;               //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingTransitions;              //@synthesize pendingTransitions=_pendingTransitions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * runningTransitions;              //@synthesize runningTransitions=_runningTransitions - In the implementation block
@property (nonatomic,readonly) double delay;                                     //@synthesize delay=_delay - In the implementation block
+(id)concurrentTransitionCoordinatorWithDelay:(double)arg1 ;
+(id)synchronousTransitionCoordinator;
+(/*^block*/id)eventHandlerForCoordinator:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(double)delay;
-(id<AVTTransitionScheduler>)scheduler;
-(void)setScheduler:(id<AVTTransitionScheduler>)arg1 ;
-(void)addTransition:(id)arg1 ;
-(void)cancelAllTransitions;
-(void)cancelTransitionsMatchingModel:(id)arg1 ;
-(void)startNextTransition;
-(NSMutableArray *)pendingTransitions;
-(NSMutableArray *)runningTransitions;
-(void)didCompleteRunningTransition:(id)arg1 ;
-(id)allTransitions;
-(id)transitionsMatchingModel:(id)arg1 ;
@end

