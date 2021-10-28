//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSUTunDeliveryControllerConnectivityDelegate-Protocol.h"

@class IDSDServiceController, IDSRegistrationController, IDSSystemAccountAdapter, NSArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSSet, NSString;
@protocol IDSDAccountControllerDelegate, IDSDAccountControllerDeviceSupport, OS_dispatch_queue;

@interface IDSDAccountController : NSObject <IDSUTunDeliveryControllerConnectivityDelegate>
{
    NSMutableDictionary *_accountIDMap;	// 8 = 0x8
    NSMutableSet *_enabledAccounts;	// 16 = 0x10
    NSMutableDictionary *_deviceProperties;	// 24 = 0x18
    NSRecursiveLock *_accountIDMapLock;	// 32 = 0x20
    _Bool _accountsLoaded;	// 40 = 0x28
    _Bool _isLoading;	// 41 = 0x29
    _Bool _hasHardDeregistered;	// 42 = 0x2a
    NSObject<OS_dispatch_queue> *_authkitQueue;	// 48 = 0x30
    IDSSystemAccountAdapter *_systemAccountAdapter;	// 56 = 0x38
    IDSDServiceController *_serviceController;	// 64 = 0x40
    IDSRegistrationController *_registrationController;	// 72 = 0x48
    id <IDSDAccountControllerDeviceSupport> _deviceSupport;	// 80 = 0x50
    id <IDSDAccountControllerDelegate> _delegate;	// 88 = 0x58
}

+ (_Bool)isDefaultPairedDeviceFromID:(id)arg1 accountUniqueID:(id)arg2 serviceName:(id)arg3;	// IMP=0x00000001001c6dcc
+ (id)sharedInstance;	// IMP=0x00000001001c6c04
- (void).cxx_destruct;	// IMP=0x00000001001e977c
@property(retain, nonatomic) id <IDSDAccountControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool hasHardDeregistered; // @synthesize hasHardDeregistered=_hasHardDeregistered;
- (id)deviceCertificateForService:(id)arg1 uri:(id)arg2;	// IMP=0x00000001001e93d0
- (void)authKitAccountUpdate:(id)arg1;	// IMP=0x00000001001e8f74
- (void)loadDeviceProperties;	// IMP=0x00000001001e88a4
- (void)saveDevicePropertiesWithOldKeys:(id)arg1;	// IMP=0x00000001001e8284
- (void)updateDevicePropertiesWithDevices:(id)arg1;	// IMP=0x00000001001e7afc
- (void)_updateDeviceProperties;	// IMP=0x00000001001e797c
- (id)propertiesForDeviceWithUniqueID:(id)arg1;	// IMP=0x00000001001e78c4
- (void)setNSUUID:(id)arg1 onDeviceWithUniqueID:(id)arg2;	// IMP=0x00000001001e7108
- (void)deliveryController:(id)arg1 uniqueID:(id)arg2 isCloudConnected:(_Bool)arg3;	// IMP=0x00000001001e6ed4
- (void)deliveryController:(id)arg1 uniqueID:(id)arg2 isNearby:(_Bool)arg3;	// IMP=0x00000001001e6ca0
- (void)deliveryController:(id)arg1 uniqueID:(id)arg2 isConnected:(_Bool)arg3;	// IMP=0x00000001001e6a6c
- (id)publicKeyForDeviceID:(id)arg1;	// IMP=0x00000001001e64d4
- (id)deviceNameForDeviceID:(id)arg1;	// IMP=0x00000001001e6034
- (id)pushTokenForDeviceID:(id)arg1;	// IMP=0x00000001001e5b94
- (id)deviceIDForPushToken:(id)arg1;	// IMP=0x00000001001e5510
- (id)cloudPairedIDForDeviceID:(id)arg1;	// IMP=0x00000001001e545c
- (void)_registerForAllRegistrationsSucceeded;	// IMP=0x00000001001e4fbc
- (_Bool)isiTunesSignedIn;	// IMP=0x00000001001e4f58
- (_Bool)isiCloudSignedIn;	// IMP=0x00000001001e4ef4
- (void)issueGetDependentAndGetHandlesRequest;	// IMP=0x00000001001e4c70
- (void)issueGetDependentRequestForAccount:(id)arg1;	// IMP=0x00000001001e4bb8
- (void)updateExpiredDependent;	// IMP=0x00000001001e48a4
- (void)_resumeGDRReAuthenticateIfNecessary;	// IMP=0x00000001001e4678
- (void)issueGetDependentRequest;	// IMP=0x00000001001e4354
- (void)issueDependentIDQueriesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e394c
- (_Bool)hasActiveSMSAccount;	// IMP=0x00000001001e361c
- (id)accountsOfAdHocType:(unsigned int)arg1;	// IMP=0x00000001001e3328
- (id)registeredAccountsOnService:(id)arg1;	// IMP=0x00000001001e3094
- (id)accountsOnService:(id)arg1;	// IMP=0x00000001001e2dd0
- (void)_storeAccounts;	// IMP=0x00000001001e251c
- (void)delayedSaveSettings;	// IMP=0x00000001001e2490
- (_Bool)accountsLoaded;	// IMP=0x00000001001e2470
- (_Bool)isLoading;	// IMP=0x00000001001e2434
- (void)_loadAndEnableStoredLegacyAccounts;	// IMP=0x00000001001e0e58
- (_Bool)_loadAndEnableStoredAccounts;	// IMP=0x00000001001dfbb4
- (void)_addAccountDuringInitialSetup:(id)arg1;	// IMP=0x00000001001dfac4
- (id)_createAccountWithDictionary:(id)arg1 service:(id)arg2 uniqueID:(id)arg3;	// IMP=0x00000001001df9f0
- (void)loadStoredAccounts;	// IMP=0x00000001001df4f0
- (void)_servicesRemoved:(id)arg1;	// IMP=0x00000001001defdc
- (void)_servicesChanged;	// IMP=0x00000001001def88
- (void)_cleanupLegacyLocalAccounts;	// IMP=0x00000001001dd50c
- (void)_cleanupLegacyAccounts;	// IMP=0x00000001001dcf40
- (_Bool)hasForcedReRegistered;	// IMP=0x00000001001dcdbc
- (id)_preferencesOnDomain:(id)arg1;	// IMP=0x00000001001dcc98
- (void)_persistAccounts:(id)arg1;	// IMP=0x00000001001dc928
- (id)_legacyAccountsOnService:(id)arg1;	// IMP=0x00000001001dc14c
- (void)_migrateLegacyAccounts2;	// IMP=0x00000001001dbbe0
- (void)_migrateLegacyAccounts1;	// IMP=0x00000001001da858
- (void)_migrateLegacyAccounts;	// IMP=0x00000001001da808
- (void)_setupLinkedAccounts;	// IMP=0x00000001001d994c
- (void)_setupAdHocAccounts;	// IMP=0x00000001001d95b4
- (void)_setupAdHocAccountsForPrimaryAccount:(id)arg1;	// IMP=0x00000001001d7900
- (void)stopLocalSetup;	// IMP=0x00000001001d77c0
- (void)startLocalSetup;	// IMP=0x00000001001d761c
- (_Bool)isLocalSetupEnabled;	// IMP=0x00000001001d758c
- (void)_setupForLocal;	// IMP=0x00000001001d753c
- (void)__pairedDeviceStateUpdated;	// IMP=0x00000001001d7528
- (void)_setupUsingRemoteInfo;	// IMP=0x00000001001d7514
- (_Bool)_isAccountInfoRegistered:(id)arg1;	// IMP=0x00000001001d73fc
- (id)_strippedAccountInfo:(id)arg1;	// IMP=0x00000001001d72f4
- (void)_cleanupLocalAccounts;	// IMP=0x00000001001d6a50
- (void)_refreshLocalAccounts;	// IMP=0x00000001001d6570
- (void)_setupLocalAccounts;	// IMP=0x00000001001d5f64
- (void)setupLocalAccountForService:(id)arg1;	// IMP=0x00000001001d5b08
- (id)threadSafeServiceWithAccountUniqueID:(id)arg1;	// IMP=0x00000001001d5694
- (id)existingAccountOnService:(id)arg1 withType:(int)arg2 loginID:(id)arg3;	// IMP=0x00000001001d4e1c
- (id)primaryAccountForAdHocAccount:(id)arg1;	// IMP=0x00000001001d4acc
- (_Bool)isEnabledAccount:(id)arg1;	// IMP=0x00000001001d4a28
- (id)accountUniqueIDsWithType:(int)arg1;	// IMP=0x00000001001d47a0
- (id)accountsWithType:(int)arg1;	// IMP=0x00000001001d4554
- (id)accountWithServiceName:(id)arg1 myID:(id)arg2;	// IMP=0x00000001001d32a8
- (id)accountWithUniqueID:(id)arg1;	// IMP=0x00000001001d3020
- (id)accountWithServiceName:(id)arg1 loginID:(id)arg2;	// IMP=0x00000001001d25ec
- (id)accountWithServiceName:(id)arg1 aliasURI:(id)arg2;	// IMP=0x00000001001d1bf0
- (id)accountsOnService:(id)arg1 withType:(int)arg2;	// IMP=0x00000001001d1944
- (id)appleIDAccountOnService:(id)arg1;	// IMP=0x00000001001d16d4
- (id)localAccountOnService:(id)arg1;	// IMP=0x00000001001d1464
- (id)accountOnService:(id)arg1 withLoginID:(id)arg2;	// IMP=0x00000001001d0cd0
- (id)accountOnService:(id)arg1 withAliasURI:(id)arg2;	// IMP=0x00000001001d0618
- (void)disableAccountWithUniqueID:(id)arg1;	// IMP=0x00000001001d043c
- (void)enableAccountWithUniqueID:(id)arg1;	// IMP=0x00000001001d0268
- (void)_enableAccountWithUniqueID:(id)arg1;	// IMP=0x00000001001cf248
- (void)enablePrimaryAccountWithUniqueID:(id)arg1;	// IMP=0x00000001001ce8c0
- (void)_disableAccountWithUniqueID:(id)arg1;	// IMP=0x00000001001ce000
- (void)_disablePrimaryAccountWithUniqueID:(id)arg1 userAction:(_Bool)arg2;	// IMP=0x00000001001cd78c
- (void)disablePrimaryAccountWithUniqueID:(id)arg1;	// IMP=0x00000001001cd71c
- (void)forceRemoveAccount:(id)arg1;	// IMP=0x00000001001cd484
- (void)removeAccount:(id)arg1;	// IMP=0x00000001001cd28c
- (void)addAccount:(id)arg1;	// IMP=0x00000001001cd094
- (void)addPrimaryAccount:(id)arg1;	// IMP=0x00000001001cc8a4
- (void)_addAccount:(id)arg1;	// IMP=0x00000001001cc1f8
- (void)_cleanUpAccountCredentialStore;	// IMP=0x00000001001cc0cc
- (void)_cleanUpAccountCredentialForRemovedAccount:(id)arg1;	// IMP=0x00000001001cbedc
- (id)_inUseProfileIDs;	// IMP=0x00000001001cbc78
- (id)_inUseUsernames;	// IMP=0x00000001001cba14
- (void)_removePrimaryAccount:(id)arg1;	// IMP=0x00000001001cb5bc
- (void)_removeAccount:(id)arg1;	// IMP=0x00000001001cb058
- (void)triggerFinalDeregister;	// IMP=0x00000001001cad3c
- (void)hardDeregister;	// IMP=0x00000001001caaf0
@property(readonly, nonatomic) NSSet *enabledAccounts;
@property(readonly, nonatomic) NSArray *accounts;
- (void)dealloc;	// IMP=0x00000001001ca900
- (id)init;	// IMP=0x00000001001ca770
- (id)initWithServiceController:(id)arg1 registrationController:(id)arg2 systemAccountAdapter:(id)arg3 deviceSupport:(id)arg4;	// IMP=0x00000001001c7c00
- (id)userDefaults;	// IMP=0x00000001001c7bc0
- (id)registrationListener;	// IMP=0x00000001001c7b80
- (id)daemon;	// IMP=0x00000001001c7b40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
