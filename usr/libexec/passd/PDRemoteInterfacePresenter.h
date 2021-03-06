//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDAssertionObserver-Protocol.h"
#import "PDNotificationStreamConsumer-Protocol.h"
#import "PKFieldDetectorObserver-Protocol.h"
#import "SBSRemoteAlertHandleObserver-Protocol.h"

@class BKSApplicationStateMonitor, BKSProcessAssertion, NSHashTable, NSMutableArray, NSString, PDAssertionManager, PDDatabaseManager, PDExpressPassManager, PDNotificationStreamManager, PKFieldDetector;
@protocol OS_dispatch_queue, PKCancelable;

@interface PDRemoteInterfacePresenter : NSObject <PDAssertionObserver, SBSRemoteAlertHandleObserver, PKFieldDetectorObserver, PDNotificationStreamConsumer>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    PDDatabaseManager *_databaseManager;	// 16 = 0x10
    PDExpressPassManager *_expressPassManager;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    struct os_unfair_lock_s _observersLock;	// 40 = 0x28
    _Atomic _Bool _protectedDataAvailable;	// 44 = 0x2c
    NSObject<OS_dispatch_queue> *_presenterSerialQueue;	// 48 = 0x30
    struct os_unfair_lock_s _activeInterfacesLock;	// 56 = 0x38
    _Atomic _Bool _setupAlertIsActive;	// 60 = 0x3c
    _Bool _delayingIdleExit;	// 61 = 0x3d
    _Bool _lostModeActive;	// 62 = 0x3e
    NSMutableArray *_alertHandles;	// 64 = 0x40
    id <PKCancelable> _outstandingContactlessInterfaceRequest;	// 72 = 0x48
    id <PKCancelable> _outstandingIdentityVerificationPresentation;	// 80 = 0x50
    id <PKCancelable> _outstandingRegistrationPresentation;	// 88 = 0x58
    id <PKCancelable> _outstandingTermsPresentation;	// 96 = 0x60
    _Atomic _Bool _passbookUIServiceCanBoost;	// 104 = 0x68
    _Bool _passbookUIServiceBoosted;	// 105 = 0x69
    unsigned long long _passbookUIServiceBoostContext;	// 112 = 0x70
    unsigned long long _passbookUIServiceLaunchAssertionContext;	// 120 = 0x78
    BKSProcessAssertion *_passbookUIServiceLaunchAssertion;	// 128 = 0x80
    BKSProcessAssertion *_passbookUIServiceBoostAssertion;	// 136 = 0x88
    BKSApplicationStateMonitor *_applicationStateMonitor;	// 144 = 0x90
    unsigned int _powerAssertionIdentifier;	// 152 = 0x98
    PKFieldDetector *_fieldDetector;	// 160 = 0xa0
    PDNotificationStreamManager *_notificationStreamManager;	// 168 = 0xa8
    PDAssertionManager *_assertionManager;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000001000cf730
@property(readonly, nonatomic) PDAssertionManager *assertionManager; // @synthesize assertionManager=_assertionManager;
@property(readonly, nonatomic) PDNotificationStreamManager *notificationStreamManager; // @synthesize notificationStreamManager=_notificationStreamManager;
@property(readonly, nonatomic) PKFieldDetector *fieldDetector; // @synthesize fieldDetector=_fieldDetector;
@property(retain, nonatomic) PDExpressPassManager *expressPassManager;
@property(retain, nonatomic) PDDatabaseManager *databaseManager;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x00000001000cf47c
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x00000001000cf354
- (void)remoteAlertHandleDidActivate:(id)arg1;	// IMP=0x00000001000cf23c
- (id)alertHandleFromSBSHandle:(id)arg1 remove:(_Bool)arg2;	// IMP=0x00000001000cf134
- (void)addAlertHandle:(id)arg1;	// IMP=0x00000001000cf0d0
- (void)_releasePowerAssertion;	// IMP=0x00000001000cefb0
- (void)_createPowerAssertion;	// IMP=0x00000001000ceda0
- (void)_endDelayingIdleExitIfPossible;	// IMP=0x00000001000ced6c
- (void)_beginDelayingIdleExitIfPossible;	// IMP=0x00000001000ced34
- (void)_clearPassbookUIServiceBoostAssertion;	// IMP=0x00000001000cec98
- (void)_createPassbookUIServiceBoostAssertion;	// IMP=0x00000001000ce990
- (void)_clearPassbookUIServiceLaunchAssertion;	// IMP=0x00000001000ce8ec
- (void)_createPassbookUIServiceLaunchAssertionForContext:(unsigned long long)arg1;	// IMP=0x00000001000ce5d8
- (void)_endBoostingPassbookUIServiceIfNecessary;	// IMP=0x00000001000ce588
- (void)_beginBoostingPassbookUIServiceIfNecessary;	// IMP=0x00000001000ce374
- (void)_updatePassbookUIBoostState;	// IMP=0x00000001000ce2f0
- (void)_updateCanBoostPassbookUIServiceState:(_Bool)arg1;	// IMP=0x00000001000ce234
- (void)_requestPasscodeUnlock;	// IMP=0x00000001000ce09c
- (void)_acquireBiometricUnlockSuppressionAssertionWithReason:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cdf8c
- (void)_presentContinuityPaymentInterfaceWithRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cda6c
- (void)_presentContactlessInterfaceWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cbb38
- (_Bool)_canPresentContactlessInterfaceWithContext:(id)arg1 hasExplicitlyRequestedPass:(_Bool)arg2 interfaceType:(unsigned long long)arg3;	// IMP=0x00000001000cb858
- (_Bool)canPresentRemoteInterfaceOfType:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000001000cb2d8
- (void)passbookUIServiceDidLaunch;	// IMP=0x00000001000cb270
- (void)protectedDataAvailable;	// IMP=0x00000001000cb1fc
- (void)unregisterObserver:(id)arg1;	// IMP=0x00000001000cb198
- (void)registerObserver:(id)arg1;	// IMP=0x00000001000cb134
- (_Bool)remoteInterfaceOfTypeIsActive:(unsigned long long)arg1;	// IMP=0x00000001000cafe4
- (_Bool)isAnyRemoteInterfaceActive;	// IMP=0x00000001000caf98
- (void)presentPaymentSetupRequest:(id)arg1 connection:(id)arg2 orientation:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000cabe4
- (void)_presentSetupAlertWithParameters:(id)arg1 defaultResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ca990
- (void)presentSetupApplePayAlert:(id)arg1;	// IMP=0x00000001000ca794
- (void)presentPeerPaymentTermsAndConditionsWithTermsURL:(id)arg1 termsIdentifier:(id)arg2 passUniqueID:(id)arg3 orientation:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001000c9f24
- (void)presentRegistrationFlowWithAccount:(id)arg1 amount:(id)arg2 state:(unsigned long long)arg3 senderAddress:(id)arg4 orientation:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001000c95d4
- (void)presentIdentityVerificationFlowWithResponseData:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000c8e0c
- (void)presentContinuityPaymentInterfaceWithRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c8d54
- (void)presentSubcredentialProvisioningInterfaceForEndpoint:(id)arg1 withConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000c8a14
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forNSXPCConnection:(id)arg2 hostApplicationName:(id)arg3 hostApplicationIdentifier:(id)arg4 hostBundleIdentifier:(id)arg5 hostIdentifier:(id)arg6 hostTeamID:(id)arg7 orientation:(id)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x00000001000c81bc
- (void)presentContactlessInterfaceForPassWithUniqueIdentifier:(id)arg1 fromSource:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000c80a4
- (void)contactlessPassesAvailableDidChange;	// IMP=0x00000001000c8038
- (_Bool)allowAcquisitionOfAssertionOfType:(unsigned long long)arg1;	// IMP=0x00000001000c8000
- (_Bool)interestedInAssertionOfType:(unsigned long long)arg1;	// IMP=0x00000001000c7fe8
- (void)fieldDetectorDidEnterField:(id)arg1 withProperties:(id)arg2;	// IMP=0x00000001000c7e44
- (void)handleNotificationWithName:(id)arg1 event:(id)arg2 forStream:(long long)arg3;	// IMP=0x00000001000c7d04
- (id)createCurrentNotificationRegistrationState;	// IMP=0x00000001000c7c4c
- (void)dealloc;	// IMP=0x00000001000c7b80
- (id)initWithFieldDetector:(id)arg1 notificationStreamManager:(id)arg2 assertionManager:(id)arg3;	// IMP=0x00000001000c7734
- (id)init;	// IMP=0x00000001000c771c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

