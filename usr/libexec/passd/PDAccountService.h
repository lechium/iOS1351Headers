//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDXPCService.h>

#import "PDAccountManagerObserver-Protocol.h"
#import "PDAccountServiceExportedInterface-Protocol.h"

@class NSString, PDAccountManager, PDRemoteInterfacePresenter, PKEntitlementWhitelist;

@interface PDAccountService : PDXPCService <PDAccountManagerObserver, PDAccountServiceExportedInterface>
{
    PKEntitlementWhitelist *_whitelist;	// 8 = 0x8
    _Bool _entitledForAccountUse;	// 16 = 0x10
    _Bool _secureElementAvailable;	// 17 = 0x11
    PDAccountManager *_accountManager;	// 24 = 0x18
    PDRemoteInterfacePresenter *_remoteInterfacePresenter;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000de0f8
@property(retain, nonatomic) PDRemoteInterfacePresenter *remoteInterfacePresenter; // @synthesize remoteInterfacePresenter=_remoteInterfacePresenter;
@property(retain, nonatomic) PDAccountManager *accountManager; // @synthesize accountManager=_accountManager;
- (void)accountManager:(id)arg1 scheduledPaymentsChangedForAccountIdentifier:(id)arg2;	// IMP=0x00000001000ddfe0
- (void)accountManager:(id)arg1 statementsChangedForAccountIdentifier:(id)arg2;	// IMP=0x00000001000ddefc
- (void)accountManager:(id)arg1 didUpdateAccount:(id)arg2 oldAccount:(id)arg3;	// IMP=0x00000001000dde18
- (void)accountManager:(id)arg1 didRemoveAccount:(id)arg2;	// IMP=0x00000001000ddd34
- (void)accountManager:(id)arg1 didAddAccount:(id)arg2;	// IMP=0x00000001000ddc50
- (void)exportTransactionDataForAccountIdentifier:(id)arg1 withFileFormat:(id)arg2 beginDate:(id)arg3 endDate:(id)arg4 productTimeZone:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001000dd9a8
- (void)markUserViewedIntroduction:(_Bool)arg1 forInstallmentIdentifiers:(id)arg2 accountIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000dd7fc
- (void)scheduleSetupReminderForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000dd628
- (void)scheduledPaymentsWithAccountIdentifier:(id)arg1 includeFailedRecurringPayments:(_Bool)arg2 allowFetchFromServer:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000dd49c
- (void)updateScheduledPaymentsWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000dd330
- (void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000dd16c
- (void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(id)arg1 withStatementIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000dcfd4
- (void)activatePhysicalCardWithIdentifier:(id)arg1 activationCode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000dce40
- (void)inactivatePhysicalCardForFeatureIdentifier:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000dcd08
- (void)activatePhysicalCardWithActivationCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000dcbac
- (void)completePhysicalCardActionRequest:(id)arg1 withSignature:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000dca10
- (void)beginPhysicalCardAction:(id)arg1 onPhysicalCardWithIdentifier:(id)arg2 forAccountWithIdentifier:(id)arg3 deviceMetadata:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001000dc808
- (void)completePhysicalCardRequest:(id)arg1 withSignature:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000dc66c
- (void)beginPhysicalCardRequestWithOrder:(id)arg1 forAccountWithIdentifier:(id)arg2 deviceMetadata:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000dc49c
- (void)writeVirtualCardToKeychain:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000dc36c
- (void)virtualCardsInKeychainWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000dc0fc
- (void)fetchKeychainCredentialForVirtualCardIdentifier:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000dbf6c
- (void)noteVirtualCardAutoFilledBySafari:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000dbe14
- (void)cardCredentialsForVirtualCard:(id)arg1 authorization:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000dbc7c
- (void)updateVirtualCardsWithAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000dbb18
- (void)performVirtualCardAction:(long long)arg1 forVirtualCardIdentifier:(id)arg2 forAccountIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000db974
- (void)createVirtualCard:(long long)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000db7fc
- (void)lastRedemptionEventToPeerPaymentForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000db630
- (void)creditStatementsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000db418
- (void)deleteEventsWithAccountIdentifier:(id)arg1 excludingTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000db200
- (void)insertEvents:(id)arg1 withAccountidentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000db028
- (void)deleteEventWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000dae50
- (void)deleteEventsWithAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000dac78
- (void)eventsForAccountIdentifier:(id)arg1 types:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 orderedByDate:(long long)arg5 limit:(unsigned long long)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000001000da9d0
- (void)eventsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000da804
- (void)updateUserInfoForAccountIdentifier:(id)arg1 contact:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000da66c
- (void)userInfoForAccountIdentifier:(id)arg1 forceFetch:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000da4f8
- (void)updateAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000da3c4
- (void)updateAccountWithIdentifier:(id)arg1 extended:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000da250
- (void)updatePreferences:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000da0b8
- (void)preferencesForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d9f58
- (void)performAccountAction:(id)arg1 withAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000d9dc0
- (void)termsWithIdentifier:(id)arg1 accepted:(_Bool)arg2 withAccountIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000d9c24
- (void)defaultAccountForFeature:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d9a7c
- (void)noteAccountDeletedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d98f0
- (void)deleteLocalAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d972c
- (void)deleteAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d956c
- (void)updateMockAccountWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d9410
- (void)accountForPassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d924c
- (void)accountWithVirtualCardIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d9080
- (void)accountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d8eb4
- (void)accountsWithPassLocallyProvisionedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d8d20
- (void)accountsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d8b48
- (void)accountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d89b4
- (void)dispatchAccountRequestBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d8694
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001000d853c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

