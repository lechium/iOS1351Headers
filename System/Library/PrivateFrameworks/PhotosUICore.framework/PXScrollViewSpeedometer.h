/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXScrollViewControllerObserver.h>

@class PXScrollViewController, NSTimer, NSString;

@interface PXScrollViewSpeedometer : PXObservable <PXScrollViewControllerObserver> {

	BOOL _hasRampedUpForCurrentAnimatedScroll;
	PXScrollViewController* _scrollViewController;
	long long _regime;
	long long _previousRegime;
	double __lastTime;
	NSTimer* __timeoutTimer;
	long long __nextRegime;
	long long __nextRegimeCount;
	CGPoint _scrollVelocity;
	CGPoint _lastScrollDirection;
	CGPoint _scrollAcceleration;
	CGRect __lastVisibleRect;

}

@property (assign,setter=_setLastVisibleRect:,nonatomic) CGRect _lastVisibleRect;                 //@synthesize _lastVisibleRect=__lastVisibleRect - In the implementation block
@property (assign,setter=_setLastTime:,nonatomic) double _lastTime;                               //@synthesize _lastTime=__lastTime - In the implementation block
@property (setter=_setTimeoutTimer:,nonatomic,retain) NSTimer * _timeoutTimer;                    //@synthesize _timeoutTimer=__timeoutTimer - In the implementation block
@property (assign,setter=_setNextRegime:,nonatomic) long long _nextRegime;                        //@synthesize _nextRegime=__nextRegime - In the implementation block
@property (assign,setter=_setNextRegimeCount:,nonatomic) long long _nextRegimeCount;              //@synthesize _nextRegimeCount=__nextRegimeCount - In the implementation block
@property (assign,nonatomic) CGPoint scrollVelocity;                                              //@synthesize scrollVelocity=_scrollVelocity - In the implementation block
@property (assign,nonatomic) CGPoint scrollAcceleration;                                          //@synthesize scrollAcceleration=_scrollAcceleration - In the implementation block
@property (assign,nonatomic) CGPoint lastScrollDirection;                                         //@synthesize lastScrollDirection=_lastScrollDirection - In the implementation block
@property (assign,nonatomic) BOOL hasRampedUpForCurrentAnimatedScroll;                            //@synthesize hasRampedUpForCurrentAnimatedScroll=_hasRampedUpForCurrentAnimatedScroll - In the implementation block
@property (nonatomic,readonly) PXScrollViewController * scrollViewController;                     //@synthesize scrollViewController=_scrollViewController - In the implementation block
@property (nonatomic,readonly) long long regime;                                                  //@synthesize regime=_regime - In the implementation block
@property (nonatomic,readonly) long long previousRegime;                                          //@synthesize previousRegime=_previousRegime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(double)_lastTime;
-(NSTimer *)_timeoutTimer;
-(CGRect)_lastVisibleRect;
-(CGPoint)lastScrollDirection;
-(void)setLastScrollDirection:(CGPoint)arg1 ;
-(id)mutableChangeObject;
-(void)didPerformChanges;
-(void)_setLastTime:(double)arg1 ;
-(void)setScrollVelocity:(CGPoint)arg1 ;
-(CGPoint)scrollVelocity;
-(void)scrollViewControllerWillBeginScrolling:(id)arg1 ;
-(void)scrollViewControllerDidScroll:(id)arg1 ;
-(void)scrollViewControllerDidEndScrolling:(id)arg1 ;
-(void)scrollViewControllerWillBeginScrollingAnimation:(id)arg1 towardsContentEdges:(unsigned long long)arg2 ;
-(void)scrollViewControllerDidEndScrollingAnimation:(id)arg1 ;
-(PXScrollViewController *)scrollViewController;
-(id)initWithScrollController:(id)arg1 ;
-(void)_updateScrollRegime;
-(void)_handleScrollEvent:(id)arg1 didScrollingEnd:(BOOL)arg2 ;
-(void)_setRegime:(long long)arg1 ;
-(void)_setPreviousRegime:(long long)arg1 ;
-(double)mediumLowerThreshold;
-(double)mediumUpperThreshold;
-(double)fastLowerThreshold;
-(double)fastUpperThreshold;
-(void)_scheduleScrubbingTimeout;
-(void)_handleScrubbingTimeout;
-(void)_rescheduleTimeout;
-(void)_handleTimeoutTimer:(id)arg1 ;
-(long long)regime;
-(long long)previousRegime;
-(void)_setLastVisibleRect:(CGRect)arg1 ;
-(void)_setTimeoutTimer:(id)arg1 ;
-(long long)_nextRegime;
-(void)_setNextRegime:(long long)arg1 ;
-(long long)_nextRegimeCount;
-(void)_setNextRegimeCount:(long long)arg1 ;
-(CGPoint)scrollAcceleration;
-(void)setScrollAcceleration:(CGPoint)arg1 ;
-(BOOL)hasRampedUpForCurrentAnimatedScroll;
-(void)setHasRampedUpForCurrentAnimatedScroll:(BOOL)arg1 ;
@end

