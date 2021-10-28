//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class APSConnection, CKContainer, CKDatabase, CKRecordZone, CKSubscription, NSTimer;
@protocol OS_dispatch_queue;

@interface SecuredContinuityPairing : NSObject
{
    NSObject<OS_dispatch_queue> *_ckWorkQueue;	// 8 = 0x8
    struct __SCNetworkReachability *_reachabilityRef;	// 16 = 0x10
    _Bool _reinitAfterBuddy;	// 24 = 0x18
    _Bool _isAccountActive;	// 25 = 0x19
    _Bool _readAllowed;	// 26 = 0x1a
    _Bool _readAfterSignIn;	// 27 = 0x1b
    CKContainer *_cloudKitContainer;	// 32 = 0x20
    CKDatabase *_cloudKitDatabase;	// 40 = 0x28
    CKRecordZone *_recordZoneBlob;	// 48 = 0x30
    CKRecordZone *_recordZoneAccessoryBlob;	// 56 = 0x38
    CKRecordZone *_recordZoneAccessoryDatabase;	// 64 = 0x40
    APSConnection *_pushConnection;	// 72 = 0x48
    CKSubscription *_cloudSubscription;	// 80 = 0x50
    NSTimer *_batchRead;	// 88 = 0x58
    NSTimer *_readDababaseAfterPush;	// 96 = 0x60
    NSTimer *_countdownTimer;	// 104 = 0x68
}

+ (id)sharedInstance;	// IMP=0x000000010000451c
- (void).cxx_destruct;	// IMP=0x000000010000ca2c
@property(retain) NSTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(retain, nonatomic) NSTimer *readDababaseAfterPush; // @synthesize readDababaseAfterPush=_readDababaseAfterPush;
@property(nonatomic) _Bool readAfterSignIn; // @synthesize readAfterSignIn=_readAfterSignIn;
@property(nonatomic) _Bool readAllowed; // @synthesize readAllowed=_readAllowed;
@property(retain) NSTimer *batchRead; // @synthesize batchRead=_batchRead;
@property(retain, nonatomic) CKSubscription *cloudSubscription; // @synthesize cloudSubscription=_cloudSubscription;
@property(retain, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
@property(retain, nonatomic) CKRecordZone *recordZoneAccessoryDatabase; // @synthesize recordZoneAccessoryDatabase=_recordZoneAccessoryDatabase;
@property(retain, nonatomic) CKRecordZone *recordZoneAccessoryBlob; // @synthesize recordZoneAccessoryBlob=_recordZoneAccessoryBlob;
@property(retain, nonatomic) CKRecordZone *recordZoneBlob; // @synthesize recordZoneBlob=_recordZoneBlob;
@property(retain, nonatomic) CKDatabase *cloudKitDatabase; // @synthesize cloudKitDatabase=_cloudKitDatabase;
@property(retain, nonatomic) CKContainer *cloudKitContainer; // @synthesize cloudKitContainer=_cloudKitContainer;
@property(nonatomic) _Bool isAccountActive; // @synthesize isAccountActive=_isAccountActive;
- (void)createSubscritionForAccessory;	// IMP=0x000000010000c298
- (void)fetchManateeUpdateBlob:(unsigned long long)arg1;	// IMP=0x000000010000b7d8
- (void)fetchAccessoryKeyBlob:(_Bool)arg1 retryCount:(unsigned long long)arg2;	// IMP=0x000000010000ac6c
- (void)writeAccessoryBlob:(id)arg1 withRetryCount:(unsigned long long)arg2;	// IMP=0x000000010000a324
- (void)updateCloudKitAccessoryZone:(id)arg1 delete:(_Bool)arg2;	// IMP=0x000000010000a074
- (void)secureZoneAvailable;	// IMP=0x0000000100009f7c
- (void)deleteUploadIDSKeys:(id)arg1 uuid:(id)arg2;	// IMP=0x0000000100009218
- (unsigned long long)timeStamp;	// IMP=0x0000000100009214
- (void)removeSubscritionForRecordType;	// IMP=0x0000000100008e18
- (void)createSubscritionForRecordType;	// IMP=0x0000000100008628
- (void)checkAccountStatusWithCompletionHandler:(CDUnknownBlockType)arg1 withRetryCount:(unsigned long long)arg2;	// IMP=0x00000001000082ec
- (void)checkAccountStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000082dc
- (void)forceManateeTesting;	// IMP=0x00000001000080e4
- (void)manateeZoneAvailabe;	// IMP=0x0000000100007e60
- (void)checkEncryptionSupport;	// IMP=0x0000000100007bb0
- (void)resetManateeZone;	// IMP=0x00000001000079d4
- (void)readSecuredAccessoryZone;	// IMP=0x0000000100006a98
- (void)deleteAllZones;	// IMP=0x0000000100006934
- (void)readAllZones;	// IMP=0x00000001000061b8
- (id)generateKey:(id)arg1;	// IMP=0x000000010000611c
- (void)createZone:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005e24
- (void)uploadIDSKeys:(id)arg1 uuid:(id)arg2 retryCount:(int)arg3;	// IMP=0x00000001000051f8
- (void)accountStatusDidChange:(id)arg1;	// IMP=0x0000000100004e10
- (void)_countdownTimerFired:(id)arg1;	// IMP=0x0000000100004d7c
- (void)removeuserPreference:(id)arg1 sync:(_Bool)arg2;	// IMP=0x0000000100004cbc
- (void)setuserPreference:(id)arg1 value:(in bycopy id)arg2 sync:(_Bool)arg3;	// IMP=0x0000000100004be0
- (id)readUserPreference:(id)arg1;	// IMP=0x0000000100004ba8
- (void)buddySetupDone;	// IMP=0x0000000100004a14
- (id)initWithRecordZoneName;	// IMP=0x000000010000460c
- (void)dealloc;	// IMP=0x0000000100004594
- (id)init;	// IMP=0x0000000100004588

@end
