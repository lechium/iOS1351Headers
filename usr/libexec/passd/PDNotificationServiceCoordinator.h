//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDDatabaseManagerNotificationServicesDelegate-Protocol.h"
#import "PDNetworkTaskDelegate-Protocol.h"
#import "PDPushNotificationConsumer-Protocol.h"

@class NSMutableDictionary, NSSet, NSString, PDDatabaseManager, PDNetworkTaskManager, PDPushNotificationManager, PDUserNotificationManager, PKPaymentTransactionProcessor, PKSecureElement;

@interface PDNotificationServiceCoordinator : NSObject <PDNetworkTaskDelegate, PDPushNotificationConsumer, PDDatabaseManagerNotificationServicesDelegate>
{
    NSSet *_pushTopics;	// 8 = 0x8
    PDDatabaseManager *_databaseManager;	// 16 = 0x10
    PDUserNotificationManager *_userNotificationManager;	// 24 = 0x18
    PKPaymentTransactionProcessor *_paymentTransactionProcessor;	// 32 = 0x20
    PDPushNotificationManager *_pushNotificationManager;	// 40 = 0x28
    PKSecureElement *_secureElement;	// 48 = 0x30
    PDNetworkTaskManager *_taskManager;	// 56 = 0x38
    NSMutableDictionary *_taskToHandlerMap;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010004f9f4
- (void)_invokeAndClearHandlerForTask:(id)arg1 withResult:(_Bool)arg2;	// IMP=0x000000010004f958
- (void)_recalculatePushTopics;	// IMP=0x000000010004f924
- (void)_cancelAllTasksForPaymentApplication:(id)arg1 notificationService:(id)arg2;	// IMP=0x000000010004f61c
- (_Bool)_processMessageDictionary:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 performTruncation:(_Bool)arg4;	// IMP=0x000000010004f52c
- (_Bool)_processTransactionDictionary:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 performTruncation:(_Bool)arg4 isInitialUpdate:(_Bool)arg5;	// IMP=0x000000010004f324
- (_Bool)_validateBalanceResult:(id)arg1;	// IMP=0x000000010004f140
- (void)removeLowBalanceNotificationForBalance:(id)arg1 withPassUniqueIdentifier:(id)arg2;	// IMP=0x000000010004eee8
- (void)updateLowBalanceNotificationForBalance:(id)arg1 withPassUniqueIdentifier:(id)arg2;	// IMP=0x000000010004ec18
- (void)sendLowBalanceNotificationForBalance:(id)arg1 withReminder:(id)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x000000010004eab8
- (void)sendLowBalanceNotificationIfNecessaryForUpdatedBalances:(id)arg1 startingBalances:(id)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x000000010004e648
- (void)_notificationUpdatesTaskSucceeded:(id)arg1 withResult:(id)arg2;	// IMP=0x000000010004d98c
- (void)_registrationTaskSucceeded:(id)arg1 withAuthenticationToken:(id)arg2;	// IMP=0x000000010004d65c
- (void)_clearStoredDataForPassUniqueIdentifier:(id)arg1 notificationService:(id)arg2;	// IMP=0x000000010004d474
- (void)_performDeregistrationForPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 notificationService:(id)arg3;	// IMP=0x000000010004d270
- (void)_performRegistrationTaskForPaymentApplication:(id)arg1 notificationService:(id)arg2 completionTask:(id)arg3;	// IMP=0x000000010004c690
- (void)_performRegistrationForPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 notificationService:(id)arg3 isInitialRegistration:(_Bool)arg4;	// IMP=0x000000010004c434
- (void)_updateRegistrationStatusForPass:(id)arg1 notificationService:(id)arg2 requestedRegistrationStatus:(unsigned long long)arg3 refreshRegistrationIfPossible:(_Bool)arg4 requestUpdateWhenAlreadyRegistered:(_Bool)arg5;	// IMP=0x000000010004bfd8
- (void)_updateRegistrationStatusForPass:(id)arg1 notificationService:(id)arg2 requestedRegistrationStatus:(unsigned long long)arg3 refreshRegistrationIfPossible:(_Bool)arg4;	// IMP=0x000000010004bf6c
- (void)requestUpdatesFromNotificationService:(id)arg1 passUniqueIdenitifer:(id)arg2 forceUpdate:(_Bool)arg3;	// IMP=0x000000010004bbb0
- (void)requestUpdatesFromNotificationService:(id)arg1 passUniqueIdenitifer:(id)arg2;	// IMP=0x000000010004bb5c
- (void)taskRequestedReauthentication:(id)arg1;	// IMP=0x000000010004b9bc
- (void)task:(id)arg1 encounteredWarnings:(id)arg2;	// IMP=0x000000010004b8bc
- (void)task:(id)arg1 encounteredError:(id)arg2;	// IMP=0x000000010004b7d4
- (void)taskFailed:(id)arg1;	// IMP=0x000000010004b7c4
- (void)taskSucceeded:(id)arg1;	// IMP=0x000000010004b7b4
- (void)task:(id)arg1 willRetryAfterMinimumDelay:(double)arg2;	// IMP=0x000000010004b6b4
- (void)task:(id)arg1 gotResult:(id)arg2;	// IMP=0x000000010004b5f4
- (void)handleUpdateOfPass:(id)arg1 toPass:(id)arg2 oldNotificationService:(id)arg3 newNotificationService:(id)arg4;	// IMP=0x000000010004b408
- (void)handleDeletionOfPass:(id)arg1 withNotificationService:(id)arg2;	// IMP=0x000000010004b3b0
- (void)handleInsertionOfPass:(id)arg1 withNotificationService:(id)arg2;	// IMP=0x000000010004b358
- (void)handlePushDisabledForPass:(id)arg1 withNotificationService:(id)arg2;	// IMP=0x000000010004b300
- (void)handlePushEnabledForPass:(id)arg1 withNotificationService:(id)arg2;	// IMP=0x000000010004b2a4
- (id)pushNotificationTopics;	// IMP=0x000000010004b088
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010004aee8
- (void)applyPushNotificationToken:(id)arg1;	// IMP=0x000000010004ace8
- (void)nukeTasks;	// IMP=0x000000010004ac5c
- (void)connect;	// IMP=0x000000010004abe8
- (void)dealloc;	// IMP=0x000000010004ab80
- (id)initWithPushNotificationManager:(id)arg1 databaseManager:(id)arg2 userNotificationManager:(id)arg3 paymentTransactionProcessor:(id)arg4;	// IMP=0x000000010004aa38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

