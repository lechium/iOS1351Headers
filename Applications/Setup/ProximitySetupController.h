//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BYBuddyDaemonProximityTargetProtocol-Protocol.h"
#import "SASProximitySessionDelegate-Protocol.h"

@class BYBackupMetadata, BYBuddyDaemonProximityTargetClient, CUMessageSession, NSArray, NSData, NSMutableArray, NSString, SASProximityHandshake, SASProximityInformation, SASProximitySession;
@protocol OS_dispatch_queue;

@interface ProximitySetupController : NSObject <BYBuddyDaemonProximityTargetProtocol, SASProximitySessionDelegate>
{
    _Bool _userSkippedProximity;	// 8 = 0x8
    _Bool _hasAppliedSettings;	// 9 = 0x9
    _Bool _usesSameAccountForiTunes;	// 10 = 0xa
    _Bool _hasValidatedPasscode;	// 11 = 0xb
    _Bool _signedIniCloudAccount;	// 12 = 0xc
    _Bool _skipExpressRestore;	// 13 = 0xd
    _Bool _hasResumed;	// 14 = 0xe
    _Bool _reconnecting;	// 15 = 0xf
    _Bool _shouldApplySettings;	// 16 = 0x10
    SASProximityInformation *_information;	// 24 = 0x18
    NSString *_deviceName;	// 32 = 0x20
    NSString *_model;	// 40 = 0x28
    NSString *_deviceClass;	// 48 = 0x30
    NSArray *_receivedLanguages;	// 56 = 0x38
    NSString *_receivedLocale;	// 64 = 0x40
    NSString *_productVersion;	// 72 = 0x48
    SASProximityHandshake *_handshake;	// 80 = 0x50
    NSData *_accessibilitySettings;	// 88 = 0x58
    BYBuddyDaemonProximityTargetClient *_client;	// 96 = 0x60
    SASProximitySession *_session;	// 104 = 0x68
    NSMutableArray *_delegates;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 120 = 0x78
    CDUnknownBlockType _resumeBlock;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000001000c7d98
@property(copy, nonatomic) CDUnknownBlockType resumeBlock; // @synthesize resumeBlock=_resumeBlock;
@property(nonatomic) _Bool shouldApplySettings; // @synthesize shouldApplySettings=_shouldApplySettings;
@property(nonatomic) _Bool reconnecting; // @synthesize reconnecting=_reconnecting;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain) NSMutableArray *delegates; // @synthesize delegates=_delegates;
@property _Bool hasResumed; // @synthesize hasResumed=_hasResumed;
@property(retain) SASProximitySession *session; // @synthesize session=_session;
@property(retain) BYBuddyDaemonProximityTargetClient *client; // @synthesize client=_client;
@property(retain, nonatomic) NSData *accessibilitySettings; // @synthesize accessibilitySettings=_accessibilitySettings;
@property(nonatomic) _Bool skipExpressRestore; // @synthesize skipExpressRestore=_skipExpressRestore;
@property _Bool signedIniCloudAccount; // @synthesize signedIniCloudAccount=_signedIniCloudAccount;
@property _Bool hasValidatedPasscode; // @synthesize hasValidatedPasscode=_hasValidatedPasscode;
@property(retain) SASProximityHandshake *handshake; // @synthesize handshake=_handshake;
@property(retain) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property _Bool usesSameAccountForiTunes; // @synthesize usesSameAccountForiTunes=_usesSameAccountForiTunes;
@property(retain) NSString *receivedLocale; // @synthesize receivedLocale=_receivedLocale;
@property(retain) NSArray *receivedLanguages; // @synthesize receivedLanguages=_receivedLanguages;
@property(copy) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property(copy) NSString *model; // @synthesize model=_model;
@property(copy) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property _Bool hasAppliedSettings; // @synthesize hasAppliedSettings=_hasAppliedSettings;
@property(retain) SASProximityInformation *information; // @synthesize information=_information;
@property _Bool userSkippedProximity; // @synthesize userSkippedProximity=_userSkippedProximity;
- (void)receivedBackupAction:(id)arg1;	// IMP=0x00000001000c7b48
- (void)ready;	// IMP=0x00000001000c7a0c
- (void)receivedLanguages:(id)arg1 locale:(id)arg2 model:(id)arg3 deviceClass:(id)arg4 accessibilitySettings:(id)arg5;	// IMP=0x00000001000c7804
- (void)proximityConnectionReconnected;	// IMP=0x00000001000c7704
- (void)proximityConnectionTerminated;	// IMP=0x00000001000c75f8
- (void)readyForInformation;	// IMP=0x00000001000c7314
- (id)performHandshake;	// IMP=0x00000001000c713c
- (void)proximityConnectionInitiated;	// IMP=0x00000001000c7060
- (void)proximityConnectionPreparing:(id)arg1;	// IMP=0x00000001000c6fc8
- (void)dismissProximityPinCode;	// IMP=0x00000001000c6f00
- (void)displayProximityPinCode:(id)arg1 visual:(_Bool)arg2;	// IMP=0x00000001000c6c20
- (void)proximititySetupCompleted:(id)arg1;	// IMP=0x00000001000c6acc
- (void)notifyDelegatesConnectionTerminated;	// IMP=0x00000001000c6930
- (void)removeDelegate:(id)arg1;	// IMP=0x00000001000c6830
- (void)addDelegate:(id)arg1;	// IMP=0x00000001000c6730
- (void)startiCloudBackup;	// IMP=0x00000001000c66b4
- (void)applySettings;	// IMP=0x00000001000c5738
- (void)skippedApplySettings;	// IMP=0x00000001000c56f0
- (void)didApplySettings;	// IMP=0x00000001000c56a8
- (void)willApplySettings:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c5638
- (_Bool)validatePasscode:(id)arg1;	// IMP=0x00000001000c5580
- (void)prepareForReboot;	// IMP=0x00000001000c541c
- (void)saveAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c5290
- (void)beginiCloudSignInWith:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c45bc
- (void)startOver;	// IMP=0x00000001000c4440
- (void)waitForReconnection:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c43b0
- (void)stopReconnecting;	// IMP=0x00000001000c43a0
- (void)startReconnecting;	// IMP=0x00000001000c4368
- (void)suspendConnectionForSoftwareUpdate:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c42fc
- (void)showMigrationInterfaceOnSource;	// IMP=0x00000001000c4228
- (void)endDeviceToDeviceMigration;	// IMP=0x00000001000c41e8
- (void)beginDeviceToDeviceMigration;	// IMP=0x00000001000c40ac
- (id)createTargetDeviceMigrationManager;	// IMP=0x00000001000c4030
@property(readonly) CUMessageSession *sharingMessageSession;
- (void)languageChangeCompleted;	// IMP=0x00000001000c3b94
@property(readonly) NSArray *preferredLanguages;
@property(readonly) BYBackupMetadata *backupMetadata;
- (void)cloudConfigDidChange:(id)arg1;	// IMP=0x00000001000c39cc
- (void)setupFinished;	// IMP=0x00000001000c387c
- (void)updateInformation:(id)arg1;	// IMP=0x00000001000c36b8
- (void)resetInformation;	// IMP=0x00000001000c36a8
- (void)endPairing;	// IMP=0x00000001000c3668
- (void)endAdvertisingProximitySetup;	// IMP=0x00000001000c3598
- (void)beginAdvertisingProximitySetup;	// IMP=0x00000001000c3534
- (void)resumeSession;	// IMP=0x00000001000c3250
- (_Bool)needsToResume;	// IMP=0x00000001000c30d8
@property(readonly) _Bool hasConnection;
@property(readonly) _Bool shouldEnableProximity;
- (id)init;	// IMP=0x00000001000c2d48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
