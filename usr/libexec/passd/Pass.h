//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface Pass : SQLiteEntity
{
}

+ (id)_propertySettersForGroupingProfile;	// IMP=0x000000010005c020
+ (id)_propertySettersForUpdateContext;	// IMP=0x000000010005bd2c
+ (id)_propertySettersForDisplayProfile;	// IMP=0x000000010005b878
+ (id)_propertySettersForPass;	// IMP=0x000000010005a350
+ (id)_propertiesForPass;	// IMP=0x000000010005a214
+ (id)_realPassInDatabase:(id)arg1 withProperties:(id)arg2 values:(id *)arg3 pID:(long long)arg4;	// IMP=0x0000000100059e2c
+ (id)predicateForAssociatedAccountIdentifier:(id)arg1;	// IMP=0x0000000100059e0c
+ (id)_predicateForIsCloudKitArchived:(_Bool)arg1;	// IMP=0x0000000100059cc8
+ (id)predicateForIssuerCountryCodes:(id)arg1;	// IMP=0x0000000100059ca8
+ (id)_predicateForSerialNumber:(id)arg1;	// IMP=0x0000000100059c88
+ (id)predicateForStyle:(long long)arg1;	// IMP=0x0000000100059c14
+ (id)predicateForUniqueID:(id)arg1;	// IMP=0x0000000100059bf4
+ (id)predicateForValidStyle;	// IMP=0x0000000100059b7c
+ (id)predicateForGroup:(id)arg1;	// IMP=0x0000000100059af0
+ (id)predicateForPassType:(id)arg1;	// IMP=0x0000000100059a64
+ (id)predicateForPrimaryAccountIdentifier:(id)arg1;	// IMP=0x0000000100059a44
+ (id)predicateForPaymentApplicationIdentifier:(id)arg1 withSecureElementIdentifiers:(id)arg2;	// IMP=0x00000001000598f0
+ (id)predicateForPaymentApplicationIdentifier:(id)arg1 withSecureElementIdentifier:(id)arg2;	// IMP=0x00000001000597a0
+ (id)predicateForTCIs:(id)arg1;	// IMP=0x0000000100059780
+ (id)predicateForPaymentType:(unsigned long long)arg1;	// IMP=0x000000010005970c
+ (id)predicateForPaymentApplicationAppletDataFormatPrefix:(id)arg1;	// IMP=0x00000001000596ec
+ (id)predicateForPaymentApplicationNetworks:(id)arg1;	// IMP=0x00000001000596cc
+ (id)predicateForPaymentApplicationSupportInAppPayment:(_Bool)arg1;	// IMP=0x0000000100059658
+ (id)predicateForPaymentApplicationStates:(id)arg1;	// IMP=0x000000010005949c
+ (id)predicateForPaymentApplicationState:(long long)arg1;	// IMP=0x0000000100059428
+ (id)predicateForPaymentApplicationSecureElementIdentifier:(id)arg1;	// IMP=0x0000000100059408
+ (id)predicateForPaymentApplicationSecureElementIdentifiers:(id)arg1;	// IMP=0x00000001000593e8
+ (id)predicateForNotificationService:(id)arg1;	// IMP=0x000000010005935c
+ (id)predicateForAssociatedPassTypeIdentifierHash:(id)arg1;	// IMP=0x000000010005933c
+ (id)predicateForPassTypeIdentifierHash:(id)arg1;	// IMP=0x000000010005931c
+ (id)predicateForPaymentCardType:(long long)arg1;	// IMP=0x00000001000592a8
+ (id)predicateForWebService:(id)arg1;	// IMP=0x000000010005921c
+ (id)predicateForHasAnyWebService;	// IMP=0x0000000100059200
+ (id)predicateForPersistentID:(long long)arg1;	// IMP=0x000000010005918c
+ (id)queryWithDatabase:(id)arg1 group:(id)arg2;	// IMP=0x0000000100058c28
+ (id)queryWithDatabase:(id)arg1 passType:(id)arg2;	// IMP=0x0000000100058b9c
+ (id)passesInDatabase:(id)arg1 isCloudKitArchived:(_Bool)arg2;	// IMP=0x0000000100058b0c
+ (id)anyInDatabase:(id)arg1 withAssociatedAccountIdentifier:(id)arg2;	// IMP=0x0000000100058a80
+ (id)anyInDatabase:(id)arg1 withPrimaryAccountIdentifier:(id)arg2;	// IMP=0x00000001000589f4
+ (id)anyInDatabase:(id)arg1 withApplicationIdentifier:(id)arg2 secureElementIdentifiers:(id)arg3;	// IMP=0x000000010005894c
+ (id)anyInDatabase:(id)arg1 withApplicationIdentifier:(id)arg2 secureElementIdentifier:(id)arg3;	// IMP=0x00000001000588a4
+ (id)anyInDatabase:(id)arg1 withNotificationService:(id)arg2;	// IMP=0x0000000100058818
+ (id)anyInDatabase:(id)arg1 withWebService:(id)arg2 serialNumber:(id)arg3;	// IMP=0x00000001000586c4
+ (id)anyInDatabase:(id)arg1 withPassType:(id)arg2 serialNumber:(id)arg3;	// IMP=0x0000000100058570
+ (id)anyInDatabase:(id)arg1 withGroup:(id)arg2;	// IMP=0x00000001000584e4
+ (id)anyInDatabase:(id)arg1 withWebService:(id)arg2;	// IMP=0x0000000100058458
+ (id)anyInDatabase:(id)arg1 withPassType:(id)arg2;	// IMP=0x00000001000583cc
+ (id)anyInDatabase:(id)arg1 withUniqueID:(id)arg2;	// IMP=0x0000000100058340
+ (id)anyInDatabase:(id)arg1 withPersistentID:(long long)arg2;	// IMP=0x00000001000582b0
+ (void)enumeratePassesAndGroupingProfilesForQuery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100058048
+ (void)enumerateOrganizationNamesForQuery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100057f18
+ (void)enumerateUpdateContextsForQuery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100057d38
+ (id)passUniqueIDsInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x0000000100056d30
+ (id)passesInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x0000000100056c6c
+ (id)_realPassesInDatabase:(id)arg1 predicate:(id)arg2 orderedBy:(id)arg3;	// IMP=0x00000001000565c4
+ (id)insertPass:(id)arg1 withPassType:(id)arg2 webService:(id)arg3 transactionService:(id)arg4 messageService:(id)arg5 inDatabase:(id)arg6;	// IMP=0x00000001000553f0
+ (id)_updateDictionaryWithPass:(id)arg1;	// IMP=0x00000001000548b8
+ (id)_insertionDictionaryWithPass:(id)arg1 passType:(id)arg2;	// IMP=0x0000000100054708
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x00000001000544f4
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100054424
+ (id)databaseTable;	// IMP=0x0000000100054418
- (_Bool)deleteFromDatabase;	// IMP=0x0000000100058cb4
- (void)getPushRegistrationStatus:(unsigned long long *)arg1 date:(id *)arg2;	// IMP=0x0000000100057af4
- (id)associatedApplicationIdentifiers;	// IMP=0x0000000100057acc
- (id)associatedPassTypeIdentifiers;	// IMP=0x0000000100057aa4
- (id)relevantDate;	// IMP=0x0000000100057a50
- (id)primaryAccountIdentifier;	// IMP=0x0000000100057a3c
- (id)associatedAccountIdentifier;	// IMP=0x0000000100057a28
- (_Bool)hasAssociatedPeerPaymentAccount;	// IMP=0x00000001000579d4
- (id)authenticationToken;	// IMP=0x00000001000579c0
- (id)serialNumber;	// IMP=0x00000001000579ac
- (id)uniqueID;	// IMP=0x0000000100057998
- (_Bool)revoked;	// IMP=0x0000000100057944
- (id)defaultPaymentApplication;	// IMP=0x0000000100057854
- (id)group;	// IMP=0x0000000100057764
- (id)passNotificationServiceForType:(unsigned long long)arg1;	// IMP=0x000000010005771c
- (id)passMessageService;	// IMP=0x000000010005762c
- (id)passTransactionService;	// IMP=0x000000010005753c
- (id)messageService;	// IMP=0x00000001000574e8
- (id)transactionService;	// IMP=0x0000000100057494
- (id)webService;	// IMP=0x00000001000573a4
- (unsigned long long)passFlavor;	// IMP=0x0000000100057350
- (id)passType;	// IMP=0x0000000100057260
- (id)groupingProfile;	// IMP=0x0000000100057128
- (id)updateContext;	// IMP=0x0000000100056ff0
- (id)pass;	// IMP=0x0000000100056fe4
- (id)_realPass;	// IMP=0x0000000100056a38
- (void)updateWithRevocationStatus:(_Bool)arg1;	// IMP=0x0000000100056568
- (void)updateWithGroup:(id)arg1;	// IMP=0x0000000100056518
- (void)updateWithAssociatedWebDomains:(id)arg1;	// IMP=0x0000000100056454
- (void)updateWithAssociatedPassTypeIdentifiers:(id)arg1;	// IMP=0x0000000100056390
- (void)updateWithAssociatedApplicationIdentifiers:(id)arg1;	// IMP=0x00000001000562cc
- (void)_updateWithPassMessageService:(id)arg1;	// IMP=0x000000010005627c
- (void)_updateWithPassTransactionService:(id)arg1;	// IMP=0x000000010005622c
- (void)_updateWithMessageService:(id)arg1;	// IMP=0x000000010005613c
- (void)_updateWithTransactionService:(id)arg1;	// IMP=0x000000010005604c
- (void)updateWithAssociatedAccountIdentifier:(id)arg1;	// IMP=0x0000000100056038
- (void)updateWithDefaultPaymentApplication:(id)arg1;	// IMP=0x0000000100055fe8
- (void)updateWithPaymentApplications:(id)arg1;	// IMP=0x0000000100055f68
- (void)_updateWithWebService:(id)arg1;	// IMP=0x0000000100055f18
- (void)updateWithBeacons:(id)arg1;	// IMP=0x0000000100055e54
- (void)updateWithNFCPayload:(id)arg1;	// IMP=0x0000000100055d8c
- (void)updateTallCodeValueWithPass:(id)arg1;	// IMP=0x0000000100055cf0
- (void)updateBackgroundColorWithPass:(id)arg1;	// IMP=0x0000000100055be8
- (void)updateLocationsWithPass:(id)arg1;	// IMP=0x0000000100055978
- (void)updateWithLastModifiedSource:(long long)arg1;	// IMP=0x00000001000558b0
- (void)updateWithLastModifiedTag:(id)arg1;	// IMP=0x000000010005589c
- (void)updateWithPushRegistrationStatus:(long long)arg1 date:(id)arg2;	// IMP=0x0000000100055770
- (void)updateWithPass:(id)arg1 webService:(id)arg2 transactionSevice:(id)arg3 messageService:(id)arg4;	// IMP=0x00000001000554e4
- (id)initWithPass:(id)arg1 passType:(id)arg2 webService:(id)arg3 transactionService:(id)arg4 messageService:(id)arg5 inDatabase:(id)arg6;	// IMP=0x0000000100055298

@end

