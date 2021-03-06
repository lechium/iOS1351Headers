//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKit/PKNavigationController.h>

#import "PKAddPaymentPassDevicePickerDelegate-Protocol.h"
#import "PKAddPaymentPassRequestViewControllerDelegate-Protocol.h"
#import "PKExplanationViewDelegate-Protocol.h"
#import "PKPaymentSetupViewControllerDelegate-Protocol.h"
#import "PKPaymentVerificationControllerDelegate-Protocol.h"
#import "PKServiceAddPaymentPassViewControllerProtocol-Protocol.h"

@class NSArray, NSError, NSSet, NSString, PKAddPaymentPassRequestConfiguration, PKAddPaymentPassRequestViewController, PKPaymentPass, PKPaymentVerificationController;

@interface PKServiceAddPaymentPassViewController : PKNavigationController <PKAddPaymentPassRequestViewControllerDelegate, PKExplanationViewDelegate, PKAddPaymentPassDevicePickerDelegate, PKPaymentSetupViewControllerDelegate, PKPaymentVerificationControllerDelegate, PKServiceAddPaymentPassViewControllerProtocol>
{
    PKAddPaymentPassRequestConfiguration *_configuration;	// 8 = 0x8
    PKPaymentPass *_pass;	// 16 = 0x10
    NSSet *_automaticExpressModes;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    _Bool _showIntro;	// 40 = 0x28
    _Bool _hasDeviceWebService;	// 41 = 0x29
    _Bool _hasWatchWebService;	// 42 = 0x2a
    NSArray *_webServices;	// 48 = 0x30
    _Bool _entitled;	// 56 = 0x38
    NSString *_teamID;	// 64 = 0x40
    PKPaymentVerificationController *_verificationController;	// 72 = 0x48
    PKAddPaymentPassRequestViewController *_addPaymentPassVC;	// 80 = 0x50
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100006590
+ (id)_exportedInterface;	// IMP=0x000000010000658c
- (void).cxx_destruct;	// IMP=0x0000000100009808
- (void)activeWatchPaymentWebServiceDidChange:(id)arg1;	// IMP=0x00000001000094c8
- (void)viewController:(id)arg1 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 withShouldContinue:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000100009424
- (void)viewController:(id)arg1 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009284
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;	// IMP=0x000000010000924c
- (void)pickerViewController:(id)arg1 didPickWebService:(id)arg2;	// IMP=0x00000001000091c4
- (id)_addRequestViewControllerForWebService:(id)arg1;	// IMP=0x00000001000090d0
- (id)rootAddingVC;	// IMP=0x000000010000902c
- (id)devicePickerViewController;	// IMP=0x0000000100008fc8
- (id)introViewController;	// IMP=0x0000000100008c58
- (void)_presentOptionalExpressModeForPass:(id)arg1 provisioningController:(id)arg2;	// IMP=0x0000000100008bbc
- (void)_presentMakeDefaultViewControllerForPass:(id)arg1 provisioningController:(id)arg2;	// IMP=0x0000000100008b20
- (_Bool)_shouldShowMakeDefaultViewControllerForPass:(id)arg1 provisioningController:(id)arg2;	// IMP=0x0000000100008acc
- (_Bool)_shouldShowAutomaticPresentationScreenForTargetDevice:(id)arg1;	// IMP=0x00000001000089e0
- (void)_done;	// IMP=0x0000000100008984
- (void)_cancel;	// IMP=0x00000001000088e8
- (void)_next;	// IMP=0x0000000100008878
- (void)_applyDoneItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000087bc
- (void)_applyDoneItem:(id)arg1;	// IMP=0x00000001000087ac
- (void)_applyCancelItem:(id)arg1;	// IMP=0x0000000100008700
- (void)presentAutomaticPresentationScreenForPass:(id)arg1 webService:(id)arg2;	// IMP=0x00000001000085e4
- (void)presentVerificationViewControllerForPass:(id)arg1 webService:(id)arg2;	// IMP=0x00000001000084c0
- (_Bool)shouldPresentVerificationFlowForState:(long long)arg1;	// IMP=0x00000001000084b0
- (void)presentVerificationViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000083e4
- (void)requestViewController:(id)arg1 provisioningController:(id)arg2 error:(id)arg3;	// IMP=0x0000000100007acc
- (void)requestViewController:(id)arg1 generateRequestWithCertificateChain:(id)arg2 nonce:(id)arg3 nonceSignature:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100007490
- (void)explanationViewDidSelectSetupLater:(id)arg1;	// IMP=0x0000000100007484
- (void)explanationViewDidSelectContinue:(id)arg1;	// IMP=0x0000000100007478
- (void)setConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006bc8
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x0000000100006b3c
- (void)_hostApplicationDidEnterBackground;	// IMP=0x0000000100006ae4
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x0000000100006a60
- (void)loadView;	// IMP=0x00000001000069c0
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000001000069b8
- (_Bool)shouldAutorotate;	// IMP=0x00000001000069b0
- (void)dealloc;	// IMP=0x000000010000697c
- (id)init;	// IMP=0x0000000100006594

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

