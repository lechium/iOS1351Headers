//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import "CellularDataAvailabilityMonitorDelegate-Protocol.h"
#import "CoreTelephonyClientSubscriberDelegate-Protocol.h"
#import "DataActivationNoticeViewControllerDelegate-Protocol.h"
#import "DataActivationRemoteAlertViewDelegate-Protocol.h"
#import "DataActivationWebViewControllerDelegate-Protocol.h"
#import "RemoteUIControllerDelegate-Protocol.h"
#import "SBUIRemoteAlertServiceInterface-Protocol.h"
#import "ScreenLockObserverDelegate-Protocol.h"
#import "TSSIMSetupDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class CTCellularPlanRequest, CellularDataAvailabilityMonitor, CoreTelephonyClient, DataActivationViewController, DataActivationWebViewController, NRActiveDeviceAssertion, NSData, NSNumber, NSString, NSURLRequest, RemoteUIController, ScreenLockObserver, TSSIMSetupFlow, UIViewController;

@interface DataActivationRemoteAlertViewController : SBUIRemoteAlertServiceViewController <UINavigationControllerDelegate, RemoteUIControllerDelegate, DataActivationNoticeViewControllerDelegate, DataActivationWebViewControllerDelegate, CellularDataAvailabilityMonitorDelegate, ScreenLockObserverDelegate, CoreTelephonyClientSubscriberDelegate, DataActivationRemoteAlertViewDelegate, TSSIMSetupDelegate, SBUIRemoteAlertServiceInterface>
{
    DataActivationViewController *_dataActivationViewController;	// 8 = 0x8
    CellularDataAvailabilityMonitor *_cellularDataAvailabilityMonitor;	// 16 = 0x10
    ScreenLockObserver *_screenLockObserver;	// 24 = 0x18
    CoreTelephonyClient *_ctClient;	// 32 = 0x20
    NRActiveDeviceAssertion *_activeDeviceAssertion;	// 40 = 0x28
    TSSIMSetupFlow *_simSetupFlow;	// 48 = 0x30
    UIViewController *_simSetupViewController;	// 56 = 0x38
    long long _signupUserConsentResponse;	// 64 = 0x40
    RemoteUIController *_remoteUIController;	// 72 = 0x48
    DataActivationWebViewController *_dataActivationWebViewController;	// 80 = 0x50
    long long _proxyType;	// 88 = 0x58
    NSString *_proxyHost;	// 96 = 0x60
    NSNumber *_proxyPort;	// 104 = 0x68
    _Bool _preferProvisioningInterface;	// 112 = 0x70
    _Bool _shouldPostDeviceParameters;	// 113 = 0x71
    NSURLRequest *_launchURLRequest;	// 120 = 0x78
    _Bool _startRequestWhenCellularDataBecomesAvailable;	// 128 = 0x80
    long long _pendingErrorAlertType;	// 136 = 0x88
    _Bool _isDataActivationViewVisible;	// 144 = 0x90
    unsigned long long _supportedOrientations;	// 152 = 0x98
    _Bool _supportedOrientationIsValid;	// 160 = 0xa0
    _Bool _isPastRemoteUILoading;	// 161 = 0xa1
    _Bool _isSequoiaFlow;	// 162 = 0xa2
    _Bool _isLegacySequoiaFlow;	// 163 = 0xa3
    _Bool _isRemotePlanFlow;	// 164 = 0xa4
    long long _simSetupFlowType;	// 168 = 0xa8
    NSString *_carrierName;	// 176 = 0xb0
    NSData *_csn;	// 184 = 0xb8
    CTCellularPlanRequest *_cellularPlanRequest;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x000000010000b758
- (long long)userConsentResponse;	// IMP=0x000000010000b748
- (void)simSetupFlowCompleted;	// IMP=0x000000010000b73c
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;	// IMP=0x000000010000b630
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b490
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010000b388
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010000b170
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x000000010000b0b0
- (void)screenDidUnlock;	// IMP=0x000000010000b0ac
- (void)screenDidLock;	// IMP=0x000000010000b028
- (void)cellularDataAvailabilityMonitorCellularDataDidBecomeAvailable:(id)arg1;	// IMP=0x000000010000b004
- (void)dataActivationNoticeViewControllerDidPressDoneButton:(id)arg1;	// IMP=0x000000010000aff8
- (void)cancel;	// IMP=0x000000010000afec
- (void)showActivationCodeView;	// IMP=0x000000010000af3c
- (void)requestPreinstallUserConsentWithViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000a1f8
- (void)showLoadingView;	// IMP=0x000000010000a13c
- (void)loadCarrierWebsheetWithUrl:(id)arg1 useBuddyML:(_Bool)arg2 postData:(id)arg3;	// IMP=0x0000000100009eb4
- (void)_presentAlertController;	// IMP=0x0000000100009920
- (id)_alertActionWithTitle:(id)arg1 style:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000097d0
- (void)showLocationUnavailableAlert;	// IMP=0x00000001000097b4
- (void)showLocationServiceUnauthorizedAlert;	// IMP=0x0000000100009798
- (void)showLocationDisabledAlert;	// IMP=0x000000010000977c
- (void)_showConnectionErrorAlert;	// IMP=0x0000000100009760
- (void)showConnectionErrorAlert;	// IMP=0x0000000100009744
- (void)dataActivationWebViewController:(id)arg1 didFailLoadWithError:(id)arg2;	// IMP=0x0000000100009670
- (id)proxySettingsForRequest:(id)arg1;	// IMP=0x0000000100009404
- (void)_beginDismissingSheet;	// IMP=0x0000000100009334
- (void)dataActivationWebViewControllerDidFinish:(id)arg1;	// IMP=0x0000000100009328
- (void)dataActivationWebViewControllerHandlePlanPendingRelease:(id)arg1;	// IMP=0x00000001000092e0
- (void)dataActivationWebViewControllerHandlePlanCancelled:(id)arg1;	// IMP=0x0000000100009298
- (void)dataActivationWebViewController:(id)arg1 handleSIMTransferResult:(_Bool)arg2 info:(id)arg3;	// IMP=0x0000000100008b34
- (void)dataActivationWebViewController:(id)arg1 handleMultiSIMActivationResult:(_Bool)arg2 info:(id)arg3;	// IMP=0x0000000100008584
- (_Bool)isHexadecimalString:(id)arg1;	// IMP=0x0000000100008490
- (void)dataActivationWebViewController:(id)arg1 didPurchasePlanSuccessfullyWithIccid:(id)arg2;	// IMP=0x000000010000840c
- (_Bool)dataActivationWebViewControllerShouldAllowPlanPurchaseWithIccid:(id)arg1;	// IMP=0x00000001000083cc
- (void)dataActivationWebViewControllerAccoutDidUpdateSuccessfully:(id)arg1;	// IMP=0x00000001000083c4
- (id)overrideTitle;	// IMP=0x000000010000830c
- (_Bool)isRemotePlanFlow;	// IMP=0x00000001000082fc
- (_Bool)isApplePayEnabled;	// IMP=0x00000001000082ec
- (id)URLSessionConnectionServiceType;	// IMP=0x0000000100008298
- (id)sourceApplicationSecondaryIdentifier;	// IMP=0x000000010000825c
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;	// IMP=0x0000000100007fe4
- (void)handleHomeButtonPressed;	// IMP=0x0000000100007e98
- (void)deactivate;	// IMP=0x0000000100007dec
- (void)_pushWebViewControllerWithURL:(id)arg1 requestMethod:(unsigned long long)arg2 parameterSources:(unsigned long long)arg3 overrideParameters:(id)arg4 animated:(_Bool)arg5 urlEncode:(_Bool)arg6;	// IMP=0x0000000100007c18
- (void)_pushSequoiaFallbackDataActivationWebViewControllerWithURLString:(id)arg1 parameters:(id)arg2;	// IMP=0x0000000100007b68
- (void)_destroyCurrentDataActivationWebViewController;	// IMP=0x0000000100007b28
- (void)_setupNewDataActivationWebViewController;	// IMP=0x0000000100007acc
- (_Bool)_WWANActivationRequired;	// IMP=0x0000000100007a68
- (void)_loadLaunchURLRequestWithNextConnectionTypeOrShowErrorAlert;	// IMP=0x00000001000079f0
- (_Bool)_isSelectedSequoia;	// IMP=0x0000000100007760
- (_Bool)_isDeviceCapableOfMultiplePlans;	// IMP=0x0000000100007638
- (void)_loadRemoteUIControllerWithData:(id)arg1 parameterSources:(id)arg2;	// IMP=0x0000000100006f74
- (void)_loadServerErrorPage:(id)arg1;	// IMP=0x0000000100006ef0
- (void)_loadCarrierBundleCellularDataPlanSettings;	// IMP=0x0000000100006bc8
- (void)dataActivationViewDidAppear;	// IMP=0x0000000100006b98
- (void)_lockPortraitOrientation;	// IMP=0x0000000100006b6c
- (void)launchFlowWithOptions:(id)arg1;	// IMP=0x0000000100005970
- (void)viewDidLoad;	// IMP=0x0000000100005668
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100005558
- (_Bool)shouldAutorotate;	// IMP=0x0000000100005550
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000100005528
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100004ff0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

