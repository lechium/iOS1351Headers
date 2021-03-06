/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBTransientOverlayViewController.h>
#import <libobjc.A.dylib/SPUIRemoteSearchViewDelegate.h>

@protocol SBSpotlightTransientOverlayViewControllerDelegate;
@class UIVisualEffectView, SBSpotlightTransientOverlaySpotlightViewController, NSString;

@interface SBSpotlightTransientOverlayViewController : SBTransientOverlayViewController <SPUIRemoteSearchViewDelegate> {

	UIVisualEffectView* _blurEffectView;
	SBSpotlightTransientOverlaySpotlightViewController* _spotlightViewController;
	id<SBSpotlightTransientOverlayViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBSpotlightTransientOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SBSpotlightTransientOverlayViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBSpotlightTransientOverlayViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(BOOL)shouldAutorotate;
-(BOOL)isContentOpaque;
-(void)dismissSearchView;
-(BOOL)handleHomeButtonPress;
-(long long)preferredUnlockedGestureDismissalStyle;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(long long)preferredLockedGestureDismissalStyle;
-(id)preferredDisplayLayoutElementIdentifier;
-(/*^block*/id)sceneDeactivationPredicate;
@end

