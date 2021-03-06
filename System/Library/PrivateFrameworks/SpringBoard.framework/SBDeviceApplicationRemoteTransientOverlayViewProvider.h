/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBDeviceApplicationSceneOverlayViewProvider.h>
#import <libobjc.A.dylib/SBTransientOverlayViewControllerDelegate.h>

@class NSMutableArray, SBDeviceApplicationRemoteTransientOverlayContainerViewController, NSMapTable, NSString;

@interface SBDeviceApplicationRemoteTransientOverlayViewProvider : SBDeviceApplicationSceneOverlayViewProvider <SBTransientOverlayViewControllerDelegate> {

	NSMutableArray* _activePresentationContexts;
	SBDeviceApplicationRemoteTransientOverlayContainerViewController* _containerVC;
	NSMapTable* _keyboardFocusRedirectionsByRemoteVC;
	BOOL _needsDeactivationWithNoActiveTransientOverlays;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredStatusBarStyle;
-(long long)preferredInterfaceOrientationForPresentation;
-(BOOL)isPresentingTransientOverlay:(id)arg1 ;
-(void)dismissRemoteTransientOverlayViewController:(id)arg1 ;
-(void)presentRemoteTransientOverlayViewController:(id)arg1 presentationTarget:(id)arg2 ;
-(id)initWithSceneHandle:(id)arg1 delegate:(id)arg2 ;
-(void)_activateIfPossible;
-(void)_deactivateIfPossible;
-(id)_realOverlayViewController;
-(BOOL)shouldFollowSceneOrientation;
-(unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayViewController:(id)arg1 ;
-(long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayViewController:(id)arg1 ;
-(BOOL)defaultShouldAutorotateForTransientOverlayViewController:(id)arg1 ;
-(BOOL)isKeyboardVisibleForSpringBoardForTransientOverlayViewController:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsContentOpaqueUpdate:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsFeaturePolicyUpdate:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsGestureDismissalStyleUpdate:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsOrientationUpdatesDisabledUpdate:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsProximityDetectionUpdate:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsSceneDeactivationUpdate:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsStatusBarAppearanceUpdate:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsWhitePointAdaptivityStyleUpdate:(id)arg1 ;
-(void)transientOverlayViewControllerWillBeginRotation:(id)arg1 toInterfaceOrientation:(long long)arg2 ;
-(void)transientOverlayViewControllerDidEndRotation:(id)arg1 ;
-(void)_handleCoverSheetDidPresent:(id)arg1 ;
-(void)_handleAppSwitcherWillPresent:(id)arg1 ;
-(void)_dismissRemoteOverlayVC:(id)arg1 ;
@end

