/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PUTilingViewControllerTransition.h>
#import <libobjc.A.dylib/PUInterruptibleViewControllerTransition.h>

@protocol PUTilingViewControllerTransitionPUInterruptibleViewControllerTransition, PUTilingViewControllerTransitionEndPoint;
@class PUViewControllerTransition, PUMaximumChangeRateValueFilter, PUAnimationGroup, PUTilingView, NSArray, NSString;

@interface PUTilingViewTransitionHelper : NSObject <PUTilingViewControllerTransition, PUInterruptibleViewControllerTransition> {

	BOOL _transitionPaused;
	BOOL _hasStarted;
	double _presentationDuration;
	double _dismissalDuration;
	PUViewControllerTransition*<PUTilingViewControllerTransition>*<PUInterruptibleViewControllerTransition> _transition;
	long long __currentOperation;
	double __startTime;
	double __progressSpeed;
	double __transitionProgressOffset;
	double __backgroundProgressOffset;
	PUMaximumChangeRateValueFilter* __transitionProgressValueFilter;
	PUMaximumChangeRateValueFilter* __chromeProgressValueFilter;
	PUAnimationGroup* __tilingViewAnimationGroup;
	PUTilingView* __tilingView;
	id<PUTilingViewControllerTransitionEndPoint> __fromEndPoint;
	id<PUTilingViewControllerTransitionEndPoint> __toEndPoint;
	id<PUTilingViewControllerTransitionEndPoint> __endPointOwningTilingView;
	unsigned long long __interactionOptions;
	NSArray* _transitionPausingCall;

}

@property (assign,setter=_setTransitionPaused:,getter=isTransitionPaused,nonatomic) BOOL transitionPaused;                                                           //@synthesize transitionPaused=_transitionPaused - In the implementation block
@property (assign,setter=_setHasStarted:,nonatomic) BOOL hasStarted;                                                                                                 //@synthesize hasStarted=_hasStarted - In the implementation block
@property (assign,setter=_setCurrentOperation:,nonatomic) long long _currentOperation;                                                                               //@synthesize _currentOperation=__currentOperation - In the implementation block
@property (assign,setter=_setStartTime:,nonatomic) double _startTime;                                                                                                //@synthesize _startTime=__startTime - In the implementation block
@property (assign,setter=_setProgressSpeed:,nonatomic) double _progressSpeed;                                                                                        //@synthesize _progressSpeed=__progressSpeed - In the implementation block
@property (assign,setter=_setTransitionProgressOffset:,nonatomic) double _transitionProgressOffset;                                                                  //@synthesize _transitionProgressOffset=__transitionProgressOffset - In the implementation block
@property (assign,setter=_setBackgroundProgressOffset:,nonatomic) double _backgroundProgressOffset;                                                                  //@synthesize _backgroundProgressOffset=__backgroundProgressOffset - In the implementation block
@property (setter=_setTransitionProgressValueFilter:,nonatomic,retain) PUMaximumChangeRateValueFilter * _transitionProgressValueFilter;                              //@synthesize _transitionProgressValueFilter=__transitionProgressValueFilter - In the implementation block
@property (setter=_setChromeProgressValueFilter:,nonatomic,retain) PUMaximumChangeRateValueFilter * _chromeProgressValueFilter;                                      //@synthesize _chromeProgressValueFilter=__chromeProgressValueFilter - In the implementation block
@property (setter=_setTilingViewAnimationGroup:,nonatomic,retain) PUAnimationGroup * _tilingViewAnimationGroup;                                                      //@synthesize _tilingViewAnimationGroup=__tilingViewAnimationGroup - In the implementation block
@property (assign,setter=_setTilingView:,nonatomic,__weak) PUTilingView * _tilingView;                                                                               //@synthesize _tilingView=__tilingView - In the implementation block
@property (assign,setter=_setFromEndPoint:,nonatomic,__weak) id<PUTilingViewControllerTransitionEndPoint> _fromEndPoint;                                             //@synthesize _fromEndPoint=__fromEndPoint - In the implementation block
@property (assign,setter=_setToEndPoint:,nonatomic,__weak) id<PUTilingViewControllerTransitionEndPoint> _toEndPoint;                                                 //@synthesize _toEndPoint=__toEndPoint - In the implementation block
@property (assign,setter=_setEndPointOwningTilingView:,nonatomic,__weak) id<PUTilingViewControllerTransitionEndPoint> _endPointOwningTilingView;                     //@synthesize _endPointOwningTilingView=__endPointOwningTilingView - In the implementation block
@property (assign,setter=_setInteractionOptions:,nonatomic) unsigned long long _interactionOptions;                                                                  //@synthesize _interactionOptions=__interactionOptions - In the implementation block
@property (nonatomic,copy) NSArray * transitionPausingCall;                                                                                                          //@synthesize transitionPausingCall=_transitionPausingCall - In the implementation block
@property (nonatomic,readonly) double presentationDuration;                                                                                                          //@synthesize presentationDuration=_presentationDuration - In the implementation block
@property (nonatomic,readonly) double dismissalDuration;                                                                                                             //@synthesize dismissalDuration=_dismissalDuration - In the implementation block
@property (assign,nonatomic,__weak) PUViewControllerTransition*<PUTilingViewControllerTransition>*<PUInterruptibleViewControllerTransition> transition;              //@synthesize transition=_transition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerTransitionEndPoint:(id)arg1 forViewController:(id)arg2 ;
+(void)unregisterTransitionEndPoint:(id)arg1 forViewController:(id)arg2 ;
+(id)transitionEndPointWithViewController:(id)arg1 ;
-(id)init;
-(BOOL)hasStarted;
-(double)_startTime;
-(PUViewControllerTransition*<PUTilingViewControllerTransition>*<PUInterruptibleViewControllerTransition>)transition;
-(void)setTransition:(PUViewControllerTransition*<PUTilingViewControllerTransition>*<PUInterruptibleViewControllerTransition>)arg1 ;
-(long long)_currentOperation;
-(PUTilingView *)_tilingView;
-(void)pauseTransition;
-(void)updatePausedTransitionWithProgress:(double)arg1 interactionProgress:(double)arg2 ;
-(void)resumeTransition:(BOOL)arg1 ;
-(BOOL)isTransitionPaused;
-(void)pauseTransitionWithOptions:(unsigned long long)arg1 ;
-(void)_setTilingView:(id)arg1 ;
-(id)initWithPresentationDuration:(double)arg1 dismissalDuration:(double)arg2 ;
-(void)_getTransitionProgress:(double*)arg1 backgroundProgress:(double*)arg2 chromeProgress:(double*)arg3 ;
-(void)animateTransitionWithOperation:(long long)arg1 startedInteractively:(BOOL)arg2 ;
-(BOOL)_validateTransitionFromEndPoint:(id)arg1 toEndPoint:(id)arg2 ;
-(BOOL)_endPointUsesTransientTilingView:(id)arg1 ;
-(long long)_barStyleForEndPoint:(id)arg1 ;
-(void)_transferView:(id)arg1 toSuperview:(id)arg2 ;
-(void)_setEndPointOwningTilingView:(id)arg1 ;
-(double)presentationDuration;
-(double)dismissalDuration;
-(void)_setTransitionPaused:(BOOL)arg1 ;
-(void)_setHasStarted:(BOOL)arg1 ;
-(void)_setCurrentOperation:(long long)arg1 ;
-(void)_setStartTime:(double)arg1 ;
-(double)_progressSpeed;
-(void)_setProgressSpeed:(double)arg1 ;
-(double)_transitionProgressOffset;
-(void)_setTransitionProgressOffset:(double)arg1 ;
-(double)_backgroundProgressOffset;
-(void)_setBackgroundProgressOffset:(double)arg1 ;
-(PUMaximumChangeRateValueFilter *)_transitionProgressValueFilter;
-(void)_setTransitionProgressValueFilter:(id)arg1 ;
-(PUMaximumChangeRateValueFilter *)_chromeProgressValueFilter;
-(void)_setChromeProgressValueFilter:(id)arg1 ;
-(PUAnimationGroup *)_tilingViewAnimationGroup;
-(void)_setTilingViewAnimationGroup:(id)arg1 ;
-(id<PUTilingViewControllerTransitionEndPoint>)_fromEndPoint;
-(void)_setFromEndPoint:(id)arg1 ;
-(id<PUTilingViewControllerTransitionEndPoint>)_toEndPoint;
-(void)_setToEndPoint:(id)arg1 ;
-(id<PUTilingViewControllerTransitionEndPoint>)_endPointOwningTilingView;
-(unsigned long long)_interactionOptions;
-(void)_setInteractionOptions:(unsigned long long)arg1 ;
-(NSArray *)transitionPausingCall;
-(void)setTransitionPausingCall:(NSArray *)arg1 ;
@end
