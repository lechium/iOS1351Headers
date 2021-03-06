//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import "HSDiscoveredAccessoryGridContentViewControllerDelegate-Protocol.h"
#import "HSSetupStep-Protocol.h"
#import "HSSetupTroubleshootingTipCellDelegate-Protocol.h"

@class HFAccessoryBrowsingManager, HSDiscoveredAccessoryGridContentViewController, HSEntitlementContext, HSTroubleshootingTipsItemManager, NAFuture, NSString;
@protocol HSSetupStepDelegate;

@interface HSTroubleshootingTipsViewController : HUItemTableViewController <HSSetupTroubleshootingTipCellDelegate, HSDiscoveredAccessoryGridContentViewControllerDelegate, HSSetupStep>
{
    id <HSSetupStepDelegate> _delegate;	// 8 = 0x8
    HSEntitlementContext *_entitlementContext;	// 16 = 0x10
    HSDiscoveredAccessoryGridContentViewController *_discoveredAccessoriesGridViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100043644
@property(readonly, nonatomic) HSDiscoveredAccessoryGridContentViewController *discoveredAccessoriesGridViewController; // @synthesize discoveredAccessoriesGridViewController=_discoveredAccessoriesGridViewController;
@property(readonly, nonatomic) HSEntitlementContext *entitlementContext; // @synthesize entitlementContext=_entitlementContext;
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_configureDiscoveredAccessoriesGridViewControllerWithAccessoryBrowsingManager:(id)arg1 entitlementContext:(id)arg2;	// IMP=0x00000001000434bc
- (void)_presentAutomaticPairingViewControllerForDiscoveredAccessory:(id)arg1;	// IMP=0x00000001000433a8
- (void)_presentManualEntryViewController;	// IMP=0x0000000100043300
@property(readonly, nonatomic) long long setupState;
- (void)_presentSoftwareUpdateAlertForAirportExpress;	// IMP=0x0000000100042eac
- (void)_launchAppStore;	// IMP=0x0000000100042b9c
- (void)_launchAirportUtility;	// IMP=0x0000000100042b4c
- (void)discoveredAccessoryGrid:(id)arg1 didSelectDiscoveredAccessory:(id)arg2;	// IMP=0x00000001000429f8
- (void)showManualCodeUIForToubleshootingTipCell:(id)arg1;	// IMP=0x00000001000429ec
- (void)showBridgeSetupForToubleshootingTipCell:(id)arg1;	// IMP=0x000000010004297c
- (id)childViewControllersToPreload;	// IMP=0x0000000100042918
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;	// IMP=0x0000000100042910
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0000000100042908
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;	// IMP=0x000000010004260c
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;	// IMP=0x0000000100042258
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000001000421e8
- (void)_cancel:(id)arg1;	// IMP=0x00000001000421a0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100042128
- (void)viewDidLoad;	// IMP=0x0000000100041eec
@property(readonly, nonatomic) HFAccessoryBrowsingManager *accessoryBrowsingManager;
@property(readonly, nonatomic) unsigned long long page;
- (id)initWithPage:(unsigned long long)arg1 accessoryBrowsingManager:(id)arg2 entitlementContext:(id)arg3;	// IMP=0x0000000100041d78
- (id)init;	// IMP=0x0000000100041c68
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;	// IMP=0x0000000100041b58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HSTroubleshootingTipsItemManager *itemManager; // @dynamic itemManager;
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture;
@property(readonly) Class superclass;

@end

