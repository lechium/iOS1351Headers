//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDAssertionObserver-Protocol.h"
#import "PDNotificationStreamConsumer-Protocol.h"

@class NSDictionary, NSHashTable, NSMutableArray, NSSet, NSString, PDAppletSubcredentialManager, PDAssertionManager, PDDatabaseManager, PDNotificationStreamManager, PDNotificationStreamRegistrationState, PDRemoteInterfacePresenter, PKExpressPassInformation, PKSecureElement;
@protocol OS_dispatch_queue;

@interface PDExpressPassManager : NSObject <PDNotificationStreamConsumer, PDAssertionObserver>
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PDNotificationStreamManager *_notificationManager;	// 16 = 0x10
    PDAssertionManager *_assertionManager;	// 24 = 0x18
    PKSecureElement *_secureElement;	// 32 = 0x20
    PDRemoteInterfacePresenter *_remoteInterfacePresenter;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_accessQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_replyQueue;	// 56 = 0x38
    _Bool _expressModesEnableable;	// 64 = 0x40
    _Bool _expressModesEnabled;	// 65 = 0x41
    _Bool _expressModesNeedUpdate;	// 66 = 0x42
    _Bool _contactlessInterfaceSuppressed;	// 67 = 0x43
    NSDictionary *_expressState;	// 72 = 0x48
    long long _outstandingExpressType;	// 80 = 0x50
    _Bool _outstandingExpressTypeProcessing;	// 88 = 0x58
    NSString *_outstandingExpressApplicationIdentifier;	// 96 = 0x60
    PKExpressPassInformation *_outstandingExpressInformation;	// 104 = 0x68
    NSSet *_outstandingExpressECP2TCIs;	// 112 = 0x70
    unsigned long long _lastReceivedExpressTransactionEvents;	// 120 = 0x78
    struct os_unfair_lock_s _notificationManagerLock;	// 128 = 0x80
    PDNotificationStreamRegistrationState *_notificationRegistrationState;	// 136 = 0x88
    struct os_unfair_lock_s _observersLock;	// 144 = 0x90
    NSHashTable *_observers;	// 152 = 0x98
    _Bool _startingSession;	// 160 = 0xa0
    NSMutableArray *_sessionAccessHandlers;	// 168 = 0xa8
    _Bool _processingExpressMutations;	// 176 = 0xb0
    NSMutableArray *_expressMutationRequests;	// 184 = 0xb8
    int _lockoutStateChangedNotifyToken;	// 192 = 0xc0
    _Bool _authenticationLockedOut;	// 196 = 0xc4
    PDAppletSubcredentialManager *_subcredentialManager;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000001000a6b98
@property(retain, nonatomic) PDAppletSubcredentialManager *subcredentialManager; // @synthesize subcredentialManager=_subcredentialManager;
- (void)assertionManager:(id)arg1 didInvalidateAssertion:(id)arg2;	// IMP=0x00000001000a6aec
- (void)assertionManager:(id)arg1 didAcquireAssertion:(id)arg2;	// IMP=0x00000001000a6a54
- (void)_updateContactlessInterfaceSuppression:(id)arg1;	// IMP=0x00000001000a6968
- (_Bool)allowAcquisitionOfAssertionOfType:(unsigned long long)arg1;	// IMP=0x00000001000a6960
- (_Bool)interestedInAssertionOfType:(unsigned long long)arg1;	// IMP=0x00000001000a6948
- (void)_presentExpressRemoteAlert;	// IMP=0x00000001000a6738
- (void)handleNotificationWithName:(id)arg1 event:(id)arg2 forStream:(long long)arg3;	// IMP=0x00000001000a56c0
- (id)createCurrentNotificationRegistrationState;	// IMP=0x00000001000a5678
- (void)outstandingExpressTransactionStateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a5500
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a530c
- (void)unregisterObserver:(id)arg1;	// IMP=0x00000001000a52a8
- (void)registerObserver:(id)arg1;	// IMP=0x00000001000a5244
- (id)expressPassInformationWithAID:(id)arg1 keyIdentifier:(id)arg2;	// IMP=0x00000001000a4ff4
- (void)_executeExpressMutationCompletions:(id)arg1;	// IMP=0x00000001000a49fc
- (void)_persistTargetExpressState:(id)arg1;	// IMP=0x00000001000a4848
- (void)_handleExpressMutationRequestsWithSession:(id)arg1;	// IMP=0x00000001000a26f4
- (void)_updateExpressState;	// IMP=0x00000001000a2520
- (void)_queueExpressMutationRequest:(id)arg1;	// IMP=0x00000001000a2124
- (void)resetExpressPasses;	// IMP=0x00000001000a2050
- (void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a1e94
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a1cfc
- (void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a17dc
- (void)_conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withState:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a1118
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withReferenceExpressState:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a0f10
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a0e30
- (void)expressPassesInformationWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a0c50
- (void)expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a084c
- (void)expressPassesInformationWithCardType:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a0614
- (void)expressPassInformationWithPassUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a047c
- (void)expressPassInformationForMode:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a01e4
- (void)processPaymentApplicationsUpdateFromPriorPaymentApplications:(id)arg1 toPaymentApplications:(id)arg2 forPassUniqueIdentifier:(id)arg3;	// IMP=0x000000010009f8e0
- (void)_updateExpressModesWithSession:(id)arg1;	// IMP=0x000000010009efa4
- (void)_executeSecureElementManagerSessionHandlersWithSession:(id)arg1;	// IMP=0x000000010009ee34
- (void)_accessSecureElementManagerSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010009ec3c
- (void)accessSecureElementManagerSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010009eba4
- (void)sanitizeExpressPasses;	// IMP=0x000000010009eb10
- (void)stopExpressModes;	// IMP=0x000000010009ea80
- (void)startExpressModes;	// IMP=0x000000010009e9e8
- (id)initWithDatabaseManager:(id)arg1 notificationManager:(id)arg2 assertionManager:(id)arg3 secureElement:(id)arg4 remoteInterfacePresenter:(id)arg5;	// IMP=0x000000010009e1f8
- (id)init;	// IMP=0x000000010009e1d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

