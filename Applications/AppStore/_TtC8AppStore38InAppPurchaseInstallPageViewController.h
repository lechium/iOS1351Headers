//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC8AppStore38InAppPurchaseInstallPageViewController : UIViewController
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *presenter;	// 24 = 0x18
    MISSING_TYPE *objectGraph;	// 32 = 0x20
    MISSING_TYPE *artworkLoader;	// 40 = 0x28
    MISSING_TYPE *installOfferView;	// 48 = 0x30
    MISSING_TYPE *preInstallFreeOfferView;	// 56 = 0x38
    MISSING_TYPE *preInstallPaidOfferView;	// 64 = 0x40
    MISSING_TYPE *inAppPurchaseIntentAction;	// 72 = 0x48
    MISSING_TYPE *activeView;	// 80 = 0x50
    MISSING_TYPE *offerViewTransitionFadeDuration;	// 96 = 0x60
    MISSING_TYPE *appAdamId;	// 104 = 0x68
    MISSING_TYPE *offerMode;	// 120 = 0x78
    MISSING_TYPE *isInBackground;	// 129 = 0x81
    MISSING_TYPE *didProgressWhileForegrounded;	// 130 = 0x82
    MISSING_TYPE *pendingAction;	// 136 = 0x88
    MISSING_TYPE *lifecycleObserver;	// 144 = 0x90
    MISSING_TYPE *overlayView;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00000001000e50b8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000e51a8
- (void)didCompletePurchase:(id)arg1;	// IMP=0x00000001000e4fb4
- (void)askToBuyRequestNotificationReceived:(id)arg1;	// IMP=0x00000001000e4be4
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;	// IMP=0x00000001000e31dc
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000e2f78
- (void)as_viewDidBecomePartiallyVisible;	// IMP=0x00000001000e2e64
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000e2d44
- (void)as_viewWillBecomePartiallyVisible;	// IMP=0x00000001000e2c28
- (void)as_viewDidBecomeFullyVisible;	// IMP=0x00000001000e2be0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000e2b94
- (void)as_viewWillBecomeFullyVisible;	// IMP=0x00000001000e2a7c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000e2a24
- (void)viewDidLoad;	// IMP=0x00000001000e29e4
- (void)didEnterBackground;	// IMP=0x00000001000e2348
- (void)willEnterForeground;	// IMP=0x00000001000e230c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000e22e4

@end
