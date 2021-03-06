//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BFFFlowItem-Protocol.h"
#import "BFFNavigationControllerDelegate-Protocol.h"
#import "BuddyActivationConfigurationDelegate-Protocol.h"
#import "WFBuddyViewControllerDelegate-Protocol.h"

@class BFFNavigationController, NSString, NSTimer, UIAlertController, WFBuddyViewController, WFNetworkListController;
@protocol BFFFlowItemDelegate;

@interface BuddyWiFiController : NSObject <WFBuddyViewControllerDelegate, BFFNavigationControllerDelegate, BuddyActivationConfigurationDelegate, BFFFlowItem>
{
    WFBuddyViewController *_viewController;	// 8 = 0x8
    BFFNavigationController *_navigationController;	// 16 = 0x10
    WFNetworkListController *_wifiManager;	// 24 = 0x18
    UIAlertController *_badWifiAlert;	// 32 = 0x20
    NSTimer *_wifiTimeoutTimer;	// 40 = 0x28
    _Bool _showingWifiTimeoutSpinner;	// 48 = 0x30
    _Bool _wifiWillPush;	// 49 = 0x31
    _Bool _showNetworkSettings;	// 50 = 0x32
    _Bool _supportsCellularActivation;	// 51 = 0x33
    id <BFFFlowItemDelegate> _delegate;	// 56 = 0x38
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000ee4d4
+ (_Bool)controllerNeedsToRun;	// IMP=0x00000001000ee460
+ (_Bool)deviceHasWiFi;	// IMP=0x00000001000ee39c
+ (_Bool)controllerAffectedByTapFreeSetup;	// IMP=0x00000001000ee394
+ (void)preheat;	// IMP=0x00000001000ee300
- (void).cxx_destruct;	// IMP=0x00000001000f0124
@property(nonatomic) _Bool supportsCellularActivation; // @synthesize supportsCellularActivation=_supportsCellularActivation;
@property(nonatomic) _Bool showNetworkSettings; // @synthesize showNetworkSettings=_showNetworkSettings;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)activationConfigurationChanged;	// IMP=0x00000001000f0080
- (void)buddyViewControllerDidPressAlternateSetupButton:(id)arg1;	// IMP=0x00000001000eff80
- (void)updateActivationState;	// IMP=0x00000001000eff14
- (void)wifiTimeoutFired:(id)arg1;	// IMP=0x00000001000ef974
- (void)_clearWifiTimeoutTimer;	// IMP=0x00000001000ef940
- (void)wifiNetworkJoinStarted:(id)arg1;	// IMP=0x00000001000ef7d8
- (void)wifiNetworkJoinFinished:(id)arg1;	// IMP=0x00000001000ef560
- (void)_resetWifiControllerTimeoutSpinner;	// IMP=0x00000001000ef488
- (void)_showNavBarSpinner;	// IMP=0x00000001000ef3c8
- (void)updateNextButton;	// IMP=0x00000001000ef0fc
- (void)reachabilityChanged:(_Bool)arg1;	// IMP=0x00000001000eef68
- (void)_wifiControllerDone:(id)arg1;	// IMP=0x00000001000ee978
- (void)_wifiControllerReallyDone;	// IMP=0x00000001000ee898
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 operation:(long long)arg3 animated:(_Bool)arg4;	// IMP=0x00000001000ee81c
- (void)controllerWasPopped;	// IMP=0x00000001000ee7d0
- (void)setNavigationController:(id)arg1;	// IMP=0x00000001000ee754
- (id)viewController;	// IMP=0x00000001000ee74c
- (void)stopScanning;	// IMP=0x00000001000ee73c
- (void)startScanning;	// IMP=0x00000001000ee72c
- (id)init;	// IMP=0x00000001000ee4dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

