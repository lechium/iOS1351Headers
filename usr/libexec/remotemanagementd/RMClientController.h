//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RMClientDelegate-Protocol.h"

@class NSConditionLock, NSManagedObjectContext, NSMutableDictionary, NSMutableSet, NSPersistentContainer, NSString;
@protocol OS_dispatch_queue;

@interface RMClientController : NSObject <RMClientDelegate>
{
    NSConditionLock *_accountsLock;	// 8 = 0x8
    NSConditionLock *_cloudConfigLock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSManagedObjectContext *_context;	// 32 = 0x20
    NSPersistentContainer *_persistentContainer;	// 40 = 0x28
    NSMutableSet *_processingClientStateChanges;	// 48 = 0x30
    NSMutableDictionary *_clientByManagementSourceIdentifier;	// 56 = 0x38
}

+ (_Bool)_shouldRegisterForCloudConfigAvailableNotification;	// IMP=0x0000000100014784
+ (unsigned int)_registerForDarwinNotificationWithName:(id)arg1 notifyToken:(int *)arg2 queue:(id)arg3 notificationHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000126e4
+ (_Bool)_shouldRegisterForAccountChangeNotifications;	// IMP=0x00000001000126dc
+ (void)startListeningForNotifications;	// IMP=0x0000000100011928
+ (void)start;	// IMP=0x0000000100011870
+ (id)sharedController;	// IMP=0x000000010001175c
- (void).cxx_destruct;	// IMP=0x000000010001a1e8
@property(readonly, nonatomic) NSMutableDictionary *clientByManagementSourceIdentifier; // @synthesize clientByManagementSourceIdentifier=_clientByManagementSourceIdentifier;
@property(retain, nonatomic) NSMutableSet *processingClientStateChanges; // @synthesize processingClientStateChanges=_processingClientStateChanges;
@property(readonly, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_completedClientStateChanges:(id)arg1;	// IMP=0x000000010001a0f8
- (_Bool)_canProcessClientStateChanges:(id)arg1;	// IMP=0x0000000100019fac
- (void)clientNeedsToUnenrollWithManagementSourceIdentifier:(id)arg1;	// IMP=0x0000000100019eb8
- (void)clientNeedsToReenrollWithManagementSourceIdentifier:(id)arg1;	// IMP=0x0000000100019ad0
- (id)_clientWithIdentifier:(id)arg1;	// IMP=0x0000000100019a3c
- (void)sendStatusForSubscriptionsWithIdentifiers:(id)arg1 toManagementSourceWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100019760
- (void)queryForStatusSubscriptionsWithIdentifiers:(id)arg1 fromManagementSourceWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100019460
- (void)sendStatusData:(id)arg1 toManagementSourceWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100019280
- (void)syncAllManagementSourcesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100018e8c
- (void)syncWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100018cc8
- (void)deviceChannelEnrollmentExistsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100018a94
- (_Bool)_didUnenrollClientWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001847c
- (void)unenrollWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100018154
- (_Bool)_updateAuthenticationCredentialsForManagementObjectID:(id)arg1;	// IMP=0x0000000100017eec
- (void)_didEnrollClient:(id)arg1 managementSourceObjectID:(id)arg2 account:(id)arg3 accountStore:(id)arg4 personaIdentifier:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100017498
- (void)_didFailToEnrollClientForManagementObjectID:(id)arg1;	// IMP=0x00000001000172cc
- (void)_enrollAccount:(id)arg1 fromStore:(id)arg2 withBootstrapURI:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010001674c
- (void)reenrollWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016438
- (void)_enrollWithBootstrapURI:(id)arg1 authenticationCredential:(id)arg2 channelType:(short)arg3 withDataSeparation:(_Bool)arg4 passcodeData:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100015368
- (void)enrollUserChannelWithURI:(id)arg1 authenticationCredential:(id)arg2 withDataSeparation:(_Bool)arg3 passcodeData:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100015218
- (void)enrollDeviceChannelWithURI:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000150e4
- (id)_makeClientWithManagementSourceObjectID:(id)arg1 managementSourceIdentifier:(id)arg2 persistentContainer:(id)arg3;	// IMP=0x000000010001500c
- (void)_checkForMandatoryDeviceEnrollmentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100014bac
- (void)_checkCloudConfig;	// IMP=0x00000001000148a0
- (void)_checkCloudConfigAsync:(id)arg1;	// IMP=0x000000010001478c
- (void)_registerForCloudConfigAvailableNotificationIfNeeded;	// IMP=0x0000000100014718
- (void)_unenrollAndReenrollIfDEP:(id)arg1;	// IMP=0x00000001000140dc
- (void)_unenrollAccountsMissingFromAccountIdentifiers:(id)arg1;	// IMP=0x0000000100013aa8
- (void)_updateExistingAccounts;	// IMP=0x000000010001328c
- (void)_enrollNewAccountsInAccountIdentifiers:(id)arg1;	// IMP=0x0000000100012b64
- (void)_syncAccounts;	// IMP=0x000000010001278c
- (void)_registerForAccountChangeNotificationsIfNeeded;	// IMP=0x000000010001233c
- (void)_startListeningForNotifications;	// IMP=0x0000000100012308
- (void)_start;	// IMP=0x0000000100011ad8
- (id)initWithPersistentContainer:(id)arg1 context:(id)arg2;	// IMP=0x0000000100011968

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

