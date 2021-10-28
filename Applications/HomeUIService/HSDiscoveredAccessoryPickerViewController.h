//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HSDiscoveredAccessoryGridContentViewControllerDelegate-Protocol.h"
#import "HSNetworkInterfaceManagerDelegate-Protocol.h"
#import "HSSetupStep-Protocol.h"

@class HFAccessoryBrowsingManager, HMSetupAccessoryBrowsingRequest, HSDiscoveredAccessoryGridContentViewController, HSEntitlementContext, HSNetworkInterfaceManager, HSSetupStatusView, HUColoredButton, NAFuture, NSLayoutConstraint, NSString, UIAlertController, UIScrollView, UIStackView, UIView;
@protocol HSSetupStepDelegate;

@interface HSDiscoveredAccessoryPickerViewController : UIViewController <HSDiscoveredAccessoryGridContentViewControllerDelegate, HSNetworkInterfaceManagerDelegate, HSSetupStep>
{
    id <HSSetupStepDelegate> _delegate;	// 8 = 0x8
    HFAccessoryBrowsingManager *_accessoryBrowsingManager;	// 16 = 0x10
    HSEntitlementContext *_entitlementContext;	// 24 = 0x18
    HMSetupAccessoryBrowsingRequest *_browsingRequest;	// 32 = 0x20
    UIScrollView *_scrollView;	// 40 = 0x28
    UIView *_containerView;	// 48 = 0x30
    HSSetupStatusView *_statusView;	// 56 = 0x38
    HSDiscoveredAccessoryGridContentViewController *_gridViewController;	// 64 = 0x40
    UIStackView *_buttonContainerView;	// 72 = 0x48
    HUColoredButton *_accessoryNotListedButton;	// 80 = 0x50
    HUColoredButton *_storeButton;	// 88 = 0x58
    HSNetworkInterfaceManager *_networkInterfaceManager;	// 96 = 0x60
    UIAlertController *_enableBluetoothAndWiFiAlertController;	// 104 = 0x68
    NSLayoutConstraint *_gridHeightConstraint;	// 112 = 0x70
    NSLayoutConstraint *_buttonContainerBottomConstraint;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000010000bc18
@property(retain, nonatomic) NSLayoutConstraint *buttonContainerBottomConstraint; // @synthesize buttonContainerBottomConstraint=_buttonContainerBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *gridHeightConstraint; // @synthesize gridHeightConstraint=_gridHeightConstraint;
@property(retain, nonatomic) UIAlertController *enableBluetoothAndWiFiAlertController; // @synthesize enableBluetoothAndWiFiAlertController=_enableBluetoothAndWiFiAlertController;
@property(retain, nonatomic) HSNetworkInterfaceManager *networkInterfaceManager; // @synthesize networkInterfaceManager=_networkInterfaceManager;
@property(retain, nonatomic) HUColoredButton *storeButton; // @synthesize storeButton=_storeButton;
@property(retain, nonatomic) HUColoredButton *accessoryNotListedButton; // @synthesize accessoryNotListedButton=_accessoryNotListedButton;
@property(retain, nonatomic) UIStackView *buttonContainerView; // @synthesize buttonContainerView=_buttonContainerView;
@property(retain, nonatomic) HSDiscoveredAccessoryGridContentViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
@property(retain, nonatomic) HSSetupStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) HMSetupAccessoryBrowsingRequest *browsingRequest; // @synthesize browsingRequest=_browsingRequest;
@property(readonly, nonatomic) HSEntitlementContext *entitlementContext; // @synthesize entitlementContext=_entitlementContext;
@property(readonly, nonatomic) HFAccessoryBrowsingManager *accessoryBrowsingManager; // @synthesize accessoryBrowsingManager=_accessoryBrowsingManager;
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_alertBaseLocalizationKeyForBluetoothInterfaceStatus:(unsigned long long)arg1 wiFiInterfaceStatus:(unsigned long long)arg2;	// IMP=0x000000010000b998
- (id)_alertLocalizedDescriptionForBluetoothInterfaceStatus:(unsigned long long)arg1 wiFiInterfaceStatus:(unsigned long long)arg2;	// IMP=0x000000010000b8b4
- (id)_alertLocalizedTitleForBluetoothInterfaceStatus:(unsigned long long)arg1 wiFiInterfaceStatus:(unsigned long long)arg2;	// IMP=0x000000010000b7d0
- (void)_updateBluetoothAndWiFiAlert;	// IMP=0x000000010000b188
- (void)_getRequiredScrollViewHeight:(double *)arg1 buttonContainerTopMargin:(double *)arg2;	// IMP=0x000000010000ae98
- (void)networkInterfaceManager:(id)arg1 didUpdateWiFiInterfaceStatus:(unsigned long long)arg2;	// IMP=0x000000010000ae8c
- (void)networkInterfaceManager:(id)arg1 didUpdateBluetoothInterfaceStatus:(unsigned long long)arg2;	// IMP=0x000000010000ae80
@property(readonly, nonatomic) long long setupState;
- (void)setupDidFailWithError:(id)arg1 forDiscoveredAccessory:(id)arg2;	// IMP=0x000000010000ae74
- (void)discoveredAccessoryGrid:(id)arg1 didSelectDiscoveredAccessory:(id)arg2;	// IMP=0x000000010000ad3c
- (void)_openStore:(id)arg1;	// IMP=0x000000010000acbc
- (void)_showTroubleshootingTips:(id)arg1;	// IMP=0x000000010000aba4
- (void)_cancel:(id)arg1;	// IMP=0x000000010000ab5c
- (void)viewWillLayoutSubviews;	// IMP=0x000000010000aa44
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x000000010000a8fc
- (void)_setupConstraints;	// IMP=0x00000001000097b4
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100009744
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000096f4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000964c
- (void)viewDidLoad;	// IMP=0x00000001000086b4
- (void)loadView;	// IMP=0x00000001000085fc
- (id)initWithAccessoryBrowsingManager:(id)arg1 entitlementContext:(id)arg2 browsingRequest:(id)arg3;	// IMP=0x0000000100008364
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100008254
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100008144

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture;
@property(readonly) Class superclass;

@end
