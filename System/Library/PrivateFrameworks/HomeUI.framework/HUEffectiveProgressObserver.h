/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NACancelable;
@interface HUEffectiveProgressObserver : NSObject {

	/*^block*/id _observerBlock;
	double _targetEffectiveProgress;
	id<NACancelable> _timerCancellationToken;

}

@property (nonatomic,copy,readonly) id observerBlock;                              //@synthesize observerBlock=_observerBlock - In the implementation block
@property (nonatomic,readonly) double targetEffectiveProgress;                     //@synthesize targetEffectiveProgress=_targetEffectiveProgress - In the implementation block
@property (nonatomic,retain) id<NACancelable> timerCancellationToken;              //@synthesize timerCancellationToken=_timerCancellationToken - In the implementation block
-(id)observerBlock;
-(id)initWithTargetEffectiveProgress:(double)arg1 observerBlock:(/*^block*/id)arg2 ;
-(double)targetEffectiveProgress;
-(id<NACancelable>)timerCancellationToken;
-(void)setTimerCancellationToken:(id<NACancelable>)arg1 ;
@end

