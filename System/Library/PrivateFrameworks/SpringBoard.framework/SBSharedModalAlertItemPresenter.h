/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_SBAlertControllerDelegate.h>
#import <libobjc.A.dylib/SBModalViewControllerStackDelegate.h>
#import <UIKit/UIAlertControllerCoordinatedActionPerforming.h>
#import <libobjc.A.dylib/SBBarSwipeAffordanceObserver.h>
#import <libobjc.A.dylib/SBBarSwipeAffordanceDelegate.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>
#import <libobjc.A.dylib/SBReachabilityObserver.h>

@protocol SBFLockOutStatusProvider;
@class SBSystemGestureManager, SBHomeGestureParticipant, SBHomeGestureArbiter, SBBarSwipeAffordanceView, SBModalViewControllerStack, SBFWindow, SBAlertItem, NSString;

@interface SBSharedModalAlertItemPresenter : NSObject <_SBAlertControllerDelegate, SBModalViewControllerStackDelegate, UIAlertControllerCoordinatedActionPerforming, SBBarSwipeAffordanceObserver, SBBarSwipeAffordanceDelegate, SBHomeGestureParticipantDelegate, SBReachabilityObserver> {

	id<SBFLockOutStatusProvider> _lockOutProvider;
	SBSystemGestureManager* _systemGestureManager;
	SBHomeGestureParticipant* _homeGestureParticipant;
	SBHomeGestureArbiter* _homeGestureArbiter;
	SBBarSwipeAffordanceView* _barSwipeView;
	SBModalViewControllerStack* _modalViewControllerStack;
	SBFWindow* _window;

}

@property (setter=_setModalViewControllerStack:,getter=_modalViewControllerStack,nonatomic,retain) SBModalViewControllerStack * modalViewControllerStack;              //@synthesize modalViewControllerStack=_modalViewControllerStack - In the implementation block
@property (nonatomic,readonly) SBAlertItem * currentlyPresentedAlertItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_performActionForAlertController:(id)arg1 invokeActionBlock:(/*^block*/id)arg2 dismissControllerBlock:(/*^block*/id)arg3 ;
-(void)alertControllerDidDisappear:(id)arg1 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(void)handleReachabilityYOffsetDidChange;
-(id)initWithLockOutProvider:(id)arg1 systemGestureManager:(id)arg2 homeGestureArbiter:(id)arg3 ;
-(void)dismissAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)barSwipeAffordanceView:(id)arg1 systemGestureTypeForType:(long long)arg2 ;
-(void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1 ;
-(void)presentAlertItem:(id)arg1 isLocked:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateHomeGestureParticipantWithItemCountAdjustment:(long long)arg1 ;
-(void)_updateBarSwipeViewWithAlertController:(id)arg1 ;
-(id)_modalViewControllerStack;
-(SBAlertItem *)currentlyPresentedAlertItem;
-(void)modalViewControllerStack:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)modalViewControllerStack:(id)arg1 didPresentViewController:(id)arg2 ;
-(void)modalViewControllerStack:(id)arg1 willDismissViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)modalViewControllerStack:(id)arg1 didDismissViewController:(id)arg2 ;
-(void)_setModalViewControllerStack:(id)arg1 ;
@end

