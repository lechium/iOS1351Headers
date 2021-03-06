//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HFSetupPairingObserver-Protocol.h"
#import "HFSetupPairingPopupDelegate-Protocol.h"
#import "HSPairingSetupStep-Protocol.h"

@class HSPairingStatusViewController, NAFuture, NSString, UINavigationController;
@protocol HFSetupPairingController, HFSetupPairingPopup, HSSetupStepDelegate;

@interface HSSetupPairingViewController : UIViewController <HSPairingSetupStep, HFSetupPairingPopupDelegate, HFSetupPairingObserver>
{
    id <HSSetupStepDelegate> _delegate;	// 8 = 0x8
    NAFuture *_readyToDisplayFuture;	// 16 = 0x10
    id <HFSetupPairingController> _pairingController;	// 24 = 0x18
    HSPairingStatusViewController *_statusViewController;	// 32 = 0x20
    UIViewController<HFSetupPairingPopup> *_pairingPopup;	// 40 = 0x28
    UINavigationController *_pairingPopupNavigationController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000076d0
@property(retain, nonatomic) UINavigationController *pairingPopupNavigationController; // @synthesize pairingPopupNavigationController=_pairingPopupNavigationController;
@property(retain, nonatomic) UIViewController<HFSetupPairingPopup> *pairingPopup; // @synthesize pairingPopup=_pairingPopup;
@property(readonly, nonatomic) HSPairingStatusViewController *statusViewController; // @synthesize statusViewController=_statusViewController;
@property(retain, nonatomic) id <HFSetupPairingController> pairingController; // @synthesize pairingController=_pairingController;
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture; // @synthesize readyToDisplayFuture=_readyToDisplayFuture;
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isViewVisible;
@property(readonly, nonatomic) long long setupState;
- (void)setupDidFailWithError:(id)arg1 forDiscoveredAccessory:(id)arg2;	// IMP=0x00000001000074ec
- (void)didUpdatePairingController:(id)arg1;	// IMP=0x00000001000072d4
- (void)pairingPopupDidCancel:(id)arg1;	// IMP=0x0000000100006fe8
- (void)pairingPopupDidFinish:(id)arg1;	// IMP=0x0000000100006864
- (void)pairingController:(id)arg1 didTransitionToPhase:(unsigned long long)arg2 statusTitle:(id)arg3 statusDescription:(id)arg4;	// IMP=0x0000000100006784
- (void)handleSetupFailedForDiscoveredAccessory:(id)arg1;	// IMP=0x00000001000066a4
- (id)dismissPairingPopup;	// IMP=0x0000000100006464
- (id)presentPairingPopup:(id)arg1;	// IMP=0x000000010000600c
@property(readonly, nonatomic) _Bool canPresentPairingPopup;
- (id)initWithMode:(unsigned long long)arg1 nfcStartFuture:(id)arg2;	// IMP=0x0000000100005ea8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

