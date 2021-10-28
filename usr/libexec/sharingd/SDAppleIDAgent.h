//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"

@class APSConnection, NSDate, NSMutableArray, NSMutableDictionary, NSString, SDAppleIDDatabaseManager, SDAppleIDIdentityRequest, SDAppleIDServerTask;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAppleIDAgent : NSObject <APSConnectionDelegate>
{
    _Bool _agentEnabled;	// 8 = 0x8
    NSMutableDictionary *_agentMetaInfo;	// 16 = 0x10
    NSString *_appleID;	// 24 = 0x18
    NSDate *_creationDate;	// 32 = 0x20
    SDAppleIDDatabaseManager *_dbManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
    NSMutableArray *_findPersonRequests;	// 56 = 0x38
    SDAppleIDIdentityRequest *_identityRequest;	// 64 = 0x40
    SDAppleIDServerTask *_infoRequest;	// 72 = 0x48
    _Bool _linkIdentityEnabled;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_periodicVerifyTimer;	// 88 = 0x58
    APSConnection *_pushConnection;	// 96 = 0x60
    NSString *_pushEnvironment;	// 104 = 0x68
    SDAppleIDServerTask *_task;	// 112 = 0x70
    SDAppleIDIdentityRequest *_testIdentityRequest;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_throttledRetryTimer;	// 128 = 0x80
    _Bool _updatePush;	// 136 = 0x88
    _Bool _updatePeriodicVerifyTimer;	// 137 = 0x89
}

+ (id)sharedAgent;	// IMP=0x00000001001c2980
- (void).cxx_destruct;	// IMP=0x00000001001c314c
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00000001001c2fd8
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00000001001c2edc
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x00000001001c2da4
- (void)handleUILockStatusChangedNotification;	// IMP=0x00000001001c2d4c
- (void)handleKeyBagFirstUnlockNotification;	// IMP=0x00000001001c2cf4
- (void)handleAppleIDSignedOutNotification;	// IMP=0x00000001001c2c9c
- (void)handleAppleIDSignedInNotification;	// IMP=0x00000001001c2c44
- (void)handleAppleIDChangedNotification;	// IMP=0x00000001001c2bec
- (id)validationRecordInfoForAppleID:(id)arg1;	// IMP=0x00000001001c2aac
- (id)statusInfo;	// IMP=0x00000001001c2a40
- (void)requestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c2830
- (void)prefsChanged;	// IMP=0x00000001001c27d8
- (void)personInfoWithEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001c2720
- (void)personInfoWithEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c26cc
- (id)myAccount;	// IMP=0x00000001001c2648
- (void)invalidate;	// IMP=0x00000001001c25f0
- (id)detailedDescription;	// IMP=0x00000001001c2584
- (void)queryVerifiedIdentityForEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001c2230
- (struct __SecIdentity *)copyIdentityForAppleID:(id)arg1;	// IMP=0x00000001001c2148
- (id)verifiedIdentityForCertificateChain:(id)arg1 emailOrPhone:(id)arg2 error:(id *)arg3;	// IMP=0x00000001001c1c28
- (id)verifiedIdentityForEmailOrPhone:(id)arg1;	// IMP=0x00000001001c1964
- (void)verifiedIdentityForEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c1910
- (void)verifiedIdentityForEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001c167c
- (void)activate;	// IMP=0x00000001001c1624
- (id)accountStatusForAppleID:(id)arg1;	// IMP=0x00000001001c1570
- (id)accountForAppleID:(id)arg1;	// IMP=0x00000001001c1480
- (_Bool)_wasOldAgentIdentityQueried;	// IMP=0x00000001001c144c
- (_Bool)_wasIdentityLinkedOnce;	// IMP=0x00000001001c1418
- (void)_verifyStateWithDelay:(double)arg1;	// IMP=0x00000001001c133c
- (void)_verifyState;	// IMP=0x00000001001c01f8
- (void)_updateMyInfo;	// IMP=0x00000001001c0154
- (void)_updateAppleID;	// IMP=0x00000001001c003c
- (void)_update;	// IMP=0x00000001001bffc8
- (id)_statusInfo;	// IMP=0x00000001001bfe90
- (void)_setMetaInfoValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001001bfe2c
- (void)_setCurrentAppleIDContactInfo:(id)arg1 validationRecord:(id)arg2;	// IMP=0x00000001001bfdd8
- (void)_setCurrentAppleIDIdentity:(id)arg1;	// IMP=0x00000001001bfdc0
- (void)_requestIdentityForAppleID:(id)arg1 certificateToken:(id)arg2 privateKeyPersistentReference:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001bf780
- (void)_requestInfoForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001bf178
- (void)_removeObservers;	// IMP=0x00000001001bf128
- (void)_prefsChanged;	// IMP=0x00000001001bedf4
- (void)_personInfoWithEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001be6a4
- (void)_performServerTaskWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001bd8c8
- (void)_performOtherTaskWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001bcf74
- (int)_performKeychainCount;	// IMP=0x00000001001bcc5c
- (int)_performKeyVerificationForIdentity:(id)arg1;	// IMP=0x00000001001bc788
- (id)_metaInfoValueForKey:(id)arg1;	// IMP=0x00000001001bc778
- (unsigned long long)_keychainCleanupTag;	// IMP=0x00000001001bc750
- (void)_handleThrottledRetryTimerFired;	// IMP=0x00000001001bc6c8
- (void)_handlePeriodicVerifyTimerFired;	// IMP=0x00000001001bc5ec
- (void)_handleReceivedIdentity:(id)arg1 forAppleID:(id)arg2 identityRequest:(id)arg3 withError:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001001bc270
- (void)_handleReceivedCertificateToken:(id)arg1 privateKeyPersistentReference:(id)arg2 forAppleID:(id)arg3;	// IMP=0x00000001001bc1d8
- (void)_handleUntrustedAppleIDCertificateChainForIdentity:(id)arg1;	// IMP=0x00000001001bc03c
- (void)_handleUILockStatusChange;	// IMP=0x00000001001bbed8
- (void)_handleUILockStatusChangedNotification;	// IMP=0x00000001001bbe60
- (void)_handleServerTaskCompletionWithError:(id)arg1;	// IMP=0x00000001001bbc88
- (void)_handleKeyVerificationFailure;	// IMP=0x00000001001bbbe0
- (void)_handleKeyBagFirstUnlockNotification;	// IMP=0x00000001001bbb68
- (void)_handleInfoResponse:(id)arg1 forAppleID:(id)arg2 infoRequest:(id)arg3 certificateSerialNumber:(id)arg4 withError:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001001bada8
- (void)_handleFindPersonResponse:(id)arg1 forRequest:(id)arg2 emailOrPhone:(id)arg3 withError:(id)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001001ba884
- (void)_handleCertificateStatusUpdate:(long long)arg1 forAppleID:(id)arg2;	// IMP=0x00000001001ba3a8
- (void)_handleAppleIDSignedOutNotification;	// IMP=0x00000001001ba290
- (void)_handleAppleIDSignedInNotification;	// IMP=0x00000001001ba1a4
- (void)_handleAppleIDChangedNotification;	// IMP=0x00000001001ba128
- (void)_handleAccountIdentifierValidationRecordMismatch;	// IMP=0x00000001001ba06c
- (void)_ensureThrottledRetryTimerStopped;	// IMP=0x00000001001b9fe4
- (void)_ensureThrottledRetryTimerStartedWithSuggestedDelay:(unsigned long long)arg1;	// IMP=0x00000001001b9cd4
- (void)_ensurePeriodicVerifyTimerStopped;	// IMP=0x00000001001b9c4c
- (void)_ensurePeriodicVerifyTimerStarted;	// IMP=0x00000001001b9a88
- (void)_ensurePushStopped;	// IMP=0x00000001001b99e4
- (int)_ensureEduModeDevicesAreCleanedUp;	// IMP=0x00000001001b972c
- (void)_checkIfAppleIDCertificateChainIsValidForIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b94d0
- (id)_detailedDescription;	// IMP=0x00000001001b8168
- (void)_ensurePushStarted;	// IMP=0x00000001001b7f1c
- (struct __SecIdentity *)_copyIdentityForAppleID:(id)arg1;	// IMP=0x00000001001b7ecc
- (void)_clearAccount;	// IMP=0x00000001001b7e40
- (void)_cleanUpAccount:(id)arg1;	// IMP=0x00000001001b7c54
- (void)_invalidate;	// IMP=0x00000001001b79e0
- (void)_addObservers;	// IMP=0x00000001001b78cc
- (void)_activate;	// IMP=0x00000001001b7814
- (long long)_accountState;	// IMP=0x00000001001b71d8
- (id)_accountForAppleID:(id)arg1;	// IMP=0x00000001001b71c8
- (_Bool)eduModeEnabled;	// IMP=0x00000001001b70ec
- (void)dealloc;	// IMP=0x00000001001b70a4
- (id)init;	// IMP=0x00000001001b6fd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
