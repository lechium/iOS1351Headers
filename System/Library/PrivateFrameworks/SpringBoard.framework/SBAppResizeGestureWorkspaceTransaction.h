/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSystemGestureWorkspaceTransaction.h>

@protocol BSInvalidatable;
@class NSSet, NSMutableArray, SBMainDisplaySceneLayoutViewController, SBLayoutElementViewController, UIApplicationSceneDeactivationAssertion, SBBlurViewCoordinator, SBMainWorkspaceTransaction;

@interface SBAppResizeGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction {

	double _previousSlideOffPercent;
	NSSet* _fromApplicationSceneEntities;
	NSSet* _toApplicationSceneEntitiesSuspendPrimary;
	NSSet* _toApplicationSceneEntitiesSuspendSide;
	BOOL _isSceneLayoutViewControllerPushedIn;
	id<BSInvalidatable> _deferOrientationUpdatesForResizeAssertion;
	NSMutableArray* _statusBarAssertions;
	SBMainDisplaySceneLayoutViewController* _layoutViewController;
	SBLayoutElementViewController* _primaryLayoutElementController;
	SBLayoutElementViewController* _sideLayoutElementController;
	UIApplicationSceneDeactivationAssertion* _appDeactivationAssertion;
	SBBlurViewCoordinator* _blurCoordinator;
	SBMainWorkspaceTransaction* _currentWorkspaceTransaction;
	unsigned long long _currentGestureIdentifier;

}

@property (nonatomic,readonly) SBMainDisplaySceneLayoutViewController * layoutViewController;                   //@synthesize layoutViewController=_layoutViewController - In the implementation block
@property (nonatomic,readonly) SBLayoutElementViewController * primaryLayoutElementController;                  //@synthesize primaryLayoutElementController=_primaryLayoutElementController - In the implementation block
@property (nonatomic,readonly) SBLayoutElementViewController * sideLayoutElementController;                     //@synthesize sideLayoutElementController=_sideLayoutElementController - In the implementation block
@property (nonatomic,readonly) UIApplicationSceneDeactivationAssertion * appDeactivationAssertion;              //@synthesize appDeactivationAssertion=_appDeactivationAssertion - In the implementation block
@property (nonatomic,retain) SBBlurViewCoordinator * blurCoordinator;                                           //@synthesize blurCoordinator=_blurCoordinator - In the implementation block
@property (nonatomic,retain) SBMainWorkspaceTransaction * currentWorkspaceTransaction;                          //@synthesize currentWorkspaceTransaction=_currentWorkspaceTransaction - In the implementation block
@property (assign,nonatomic) unsigned long long currentGestureIdentifier;                                       //@synthesize currentGestureIdentifier=_currentGestureIdentifier - In the implementation block
+(double)_rubberbandingStartScreenEdgeMarginInOrientation:(long long)arg1 ;
-(void)dealloc;
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)_didComplete;
-(void)_didInterruptWithReason:(id)arg1 ;
-(double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(BOOL*)arg5 ;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)_finishWithCompletionType:(long long)arg1 ;
-(void)systemGestureStateChanged:(id)arg1 ;
-(CGRect)_convertRectFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(CGRect)arg1 ;
-(void)_addChildWorkspaceTransaction:(id)arg1 ;
-(id)initWithTransitionRequest:(id)arg1 layoutViewController:(id)arg2 ;
-(UIApplicationSceneDeactivationAssertion *)appDeactivationAssertion;
-(SBBlurViewCoordinator *)blurCoordinator;
-(void)_unhideLayoutElementViewControllerStatusBars;
-(SBMainDisplaySceneLayoutViewController *)layoutViewController;
-(long long)_spaceConfigurationForGestureRegion:(long long)arg1 ;
-(long long)_layoutModeForGestureRegion:(long long)arg1 ;
-(double)_maxRubberBandOffset;
-(BOOL)_canResizeToHalfHalf;
-(void)_restartResizeUI;
-(void)_updateResizeUIFromGestureRecognizer:(id)arg1 ;
-(double)_dividerPositionFromPanGestureRecognizer:(id)arg1 ;
-(double)_normalizedVelocityFromPanGestureRecognizer:(id)arg1 ;
-(void)_resizeGestureFinishedWithState:(long long)arg1 gestureDividerPosition:(double)arg2 normalizedVelocity:(double)arg3 ;
-(unsigned long long)currentGestureIdentifier;
-(void)setCurrentGestureIdentifier:(unsigned long long)arg1 ;
-(void)setBlurCoordinator:(SBBlurViewCoordinator *)arg1 ;
-(void)_hideLayoutElementViewControllerStatusBars;
-(void)_pushInSceneLayoutViewController;
-(SBLayoutElementViewController *)primaryLayoutElementController;
-(SBLayoutElementViewController *)sideLayoutElementController;
-(long long)_resizeGestureRegionForLocation:(double)arg1 velocity:(double)arg2 ;
-(void)_getPrimaryLayoutElementViewFrame:(CGRect*)arg1 sideLayoutElementViewFrame:(CGRect*)arg2 separatorViewFrame:(CGRect*)arg3 forResizeGestureRegion:(long long)arg4 location:(double)arg5 allowRubberbanding:(BOOL)arg6 ;
-(long long)_finalActionForGestureRegion:(long long)arg1 ;
-(void)_updateElementViewsAlphaAndGrabberForFinalAction:(long long)arg1 ;
-(void)_resizeGestureFinishedWithFinalAction:(long long)arg1 ;
-(id)_transitionContextForFinalAction:(long long)arg1 ;
-(id)_transactionForExecutingApplicationTransitionContext:(id)arg1 eventLabel:(id)arg2 ;
-(SBMainWorkspaceTransaction *)currentWorkspaceTransaction;
-(void)_dismissResizeUIAnimated:(BOOL)arg1 ;
-(void)_animateElementViewsForFinalAction:(long long)arg1 forLayoutState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(CGRect)_appFrameForElementWithRole:(long long)arg1 inLayoutState:(id)arg2 spaceConfiguration:(long long)arg3 inCoordinateSpace:(id)arg4 ;
-(void)_popOutSceneLayoutViewController;
-(void)setCurrentWorkspaceTransaction:(SBMainWorkspaceTransaction *)arg1 ;
-(void)_resizeGestureDidUpdate:(id)arg1 ;
@end

