/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXUIViewControllerTransition.h>

@protocol UIViewControllerContextTransitioning;
@class UIPinchGestureRecognizer, UIView, PXRegionOfInterest, PXPinchTracker;

@interface PXUIViewControllerPinchTransition : PXUIViewControllerTransition {

	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	long long __state;
	id<UIViewControllerContextTransitioning> __transitionContext;
	UIView* __fromView;
	UIView* __toView;
	UIView* __fromSnapshotView;
	UIView* __toSnapshotView;
	UIView* __dimmingView;
	PXRegionOfInterest* __regionOfInterest;
	PXPinchTracker* __pinchTracker;

}

@property (assign,setter=_setState:,nonatomic) long long _state;                                                                     //@synthesize _state=__state - In the implementation block
@property (setter=_setTransitionContext:,nonatomic,retain) id<UIViewControllerContextTransitioning> _transitionContext;              //@synthesize _transitionContext=__transitionContext - In the implementation block
@property (setter=_setFromView:,nonatomic,retain) UIView * _fromView;                                                                //@synthesize _fromView=__fromView - In the implementation block
@property (setter=_setToView:,nonatomic,retain) UIView * _toView;                                                                    //@synthesize _toView=__toView - In the implementation block
@property (setter=_setFromSnapshotView:,nonatomic,retain) UIView * _fromSnapshotView;                                                //@synthesize _fromSnapshotView=__fromSnapshotView - In the implementation block
@property (setter=_setToSnapshotView:,nonatomic,retain) UIView * _toSnapshotView;                                                    //@synthesize _toSnapshotView=__toSnapshotView - In the implementation block
@property (setter=_setDimmingView:,nonatomic,retain) UIView * _dimmingView;                                                          //@synthesize _dimmingView=__dimmingView - In the implementation block
@property (setter=_setRegionOfInterest:,nonatomic,retain) PXRegionOfInterest * _regionOfInterest;                                    //@synthesize _regionOfInterest=__regionOfInterest - In the implementation block
@property (setter=_setPinchTracker:,nonatomic,retain) PXPinchTracker * _pinchTracker;                                                //@synthesize _pinchTracker=__pinchTracker - In the implementation block
@property (nonatomic,retain) UIPinchGestureRecognizer * pinchGestureRecognizer;                                                      //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
+(BOOL)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2 ;
-(long long)_state;
-(void)_update;
-(void)_setState:(long long)arg1 ;
-(BOOL)isInteractive;
-(UIView *)_dimmingView;
-(double)transitionDuration:(id)arg1 ;
-(UIView *)_toView;
-(UIView *)_fromView;
-(void)animateTransition:(id)arg1 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(id<UIViewControllerContextTransitioning>)_transitionContext;
-(void)_setFromView:(id)arg1 ;
-(void)_setToView:(id)arg1 ;
-(void)_setDimmingView:(id)arg1 ;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(UIView *)_fromSnapshotView;
-(UIView *)_toSnapshotView;
-(void)setPinchGestureRecognizer:(UIPinchGestureRecognizer *)arg1 ;
-(PXRegionOfInterest *)_regionOfInterest;
-(void)pinchGestureRecognizerDidChange;
-(void)_setTransitionContext:(id)arg1 ;
-(void)_setFromSnapshotView:(id)arg1 ;
-(void)_setToSnapshotView:(id)arg1 ;
-(void)_setRegionOfInterest:(id)arg1 ;
-(PXPinchTracker *)_pinchTracker;
-(void)_setPinchTracker:(id)arg1 ;
@end

