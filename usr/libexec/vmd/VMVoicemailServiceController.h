//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VMDAccountManagerDelegate-Protocol.h"
#import "VMDGreetingManagerDelegate-Protocol.h"
#import "VMServerXPCProtocol-Protocol.h"
#import "VMTranscriptionProgressDelegate-Protocol.h"

@class NSProgress, NSString, NSXPCConnection, VMCarrierServicesController, VMDAccountManager, VMDGreetingManager, VMTranscriptionService;
@protocol OS_dispatch_queue;

@interface VMVoicemailServiceController : NSObject <VMDAccountManagerDelegate, VMDGreetingManagerDelegate, VMTranscriptionProgressDelegate, VMServerXPCProtocol>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    VMDAccountManager *_accountManager;	// 24 = 0x18
    VMDGreetingManager *_greetingManager;	// 32 = 0x20
    VMCarrierServicesController *_carrierServicesController;	// 40 = 0x28
    VMTranscriptionService *_transcriptionService;	// 48 = 0x30
    CDUnknownBlockType _changePasswordReplyBlock;	// 56 = 0x38
    CDUnknownBlockType _reportTranscriptionProgressReplyBlock;	// 64 = 0x40
    NSProgress *_progress;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100005a04
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType reportTranscriptionProgressReplyBlock; // @synthesize reportTranscriptionProgressReplyBlock=_reportTranscriptionProgressReplyBlock;
@property(copy, nonatomic) CDUnknownBlockType changePasswordReplyBlock; // @synthesize changePasswordReplyBlock=_changePasswordReplyBlock;
@property(nonatomic) __weak VMTranscriptionService *transcriptionService; // @synthesize transcriptionService=_transcriptionService;
@property(nonatomic) __weak VMCarrierServicesController *carrierServicesController; // @synthesize carrierServicesController=_carrierServicesController;
@property(nonatomic) __weak VMDGreetingManager *greetingManager; // @synthesize greetingManager=_greetingManager;
@property(nonatomic) __weak VMDAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)transcriptionController:(id)arg1 transcriptionProgressTotalUnitCountChanged:(long long)arg2;	// IMP=0x00000001000058e0
- (void)transcriptionController:(id)arg1 transcriptionProgressFractionCompletedChanged:(double)arg2;	// IMP=0x0000000100005848
- (void)messagesForMailboxType:(long long)arg1 read:(_Bool)arg2 limit:(long long)arg3 offset:(long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000001000056c0
- (void)messagesForMailboxType:(long long)arg1 limit:(long long)arg2 offset:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000555c
- (void)messageCountForMailboxType:(long long)arg1 read:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000054e8
- (void)messageCountForMailboxType:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005490
- (void)greetingManager:(id)arg1 greetingDidChangeForAccountUUID:(id)arg2;	// IMP=0x0000000100005458
- (void)greetingManager:(id)arg1 greetingWillChangeForAccountUUID:(id)arg2;	// IMP=0x0000000100005420
- (void)setGreeting:(id)arg1 forAccountUUID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005374
- (void)maximumGreetingDurationForAccountUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000052cc
- (void)isGreetingChangeSupportedForAccountUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000522c
- (void)greetingForAccountUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000051a4
- (void)accountsDidChangeForAccountManager:(id)arg1;	// IMP=0x0000000100005060
- (void)setPasscode:(id)arg1 forAccountUUID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100004fb4
- (void)maximumPasscodeLengthForAccountUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004f14
- (void)minimumPasscodeLengthForAccountUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004e74
- (void)isPasscodeChangeSupportedForAccountUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004dd4
- (void)accounts:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004d44
- (void)obliterate;	// IMP=0x0000000100004c1c
- (void)reportTranscriptionRatedAccurate:(_Bool)arg1 forIdentifier:(long long)arg2;	// IMP=0x0000000100004b98
- (void)reportTranscriptionProblemForIdentifier:(long long)arg1;	// IMP=0x0000000100004b28
- (void)removeAllVoicemails;	// IMP=0x0000000100004b10
- (void)setReadForIdentifiers:(id)arg1;	// IMP=0x000000010000496c
- (void)setReadForIdentifier:(long long)arg1;	// IMP=0x00000001000048a0
- (void)setDeletedForIdentifiers:(id)arg1;	// IMP=0x00000001000046fc
- (void)setDeletedForIdentifier:(long long)arg1;	// IMP=0x0000000100004630
- (void)removeVoicemailFromTrashWithIdentifier:(long long)arg1;	// IMP=0x0000000100004544
- (void)setTrashedForIdentifiers:(id)arg1;	// IMP=0x00000001000044d8
- (void)allVoicemails:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004460
- (id)allVoicemails;	// IMP=0x00000001000041ac
- (void)retrieveDataForIdentifier:(long long)arg1;	// IMP=0x000000010000413c
- (void)synchronize;	// IMP=0x000000010000409c
- (id)requestTranscriptionProgress:(CDUnknownBlockType)arg1;	// IMP=0x0000000100003ca0
- (void)requestInitialState:(CDUnknownBlockType)arg1;	// IMP=0x0000000100003ae4
- (void)_handleNewServiceNotification:(id)arg1;	// IMP=0x0000000100003ad8
- (void)_handleSyncStatusChangedNotification:(id)arg1;	// IMP=0x00000001000039cc
- (void)_handleTranscribingStatusChanged:(id)arg1;	// IMP=0x00000001000036a0
- (void)_handleOnlineStatusChanged:(id)arg1;	// IMP=0x0000000100003594
- (void)_handleSubscriptionStatusChanged:(id)arg1;	// IMP=0x0000000100003388
- (void)_handleVoicemailStoreSaved;	// IMP=0x0000000100003288
- (void)_handleVoicemailStorageUsageChanged:(id)arg1;	// IMP=0x0000000100003044
- (void)_sendCapabilities;	// IMP=0x0000000100002f6c
- (id)capabilities;	// IMP=0x0000000100002f1c
- (void)dealloc;	// IMP=0x0000000100002e98
- (id)initWithConnection:(id)arg1 accountManager:(id)arg2 greetingManager:(id)arg3 carrierServicesController:(id)arg4 transcriptionService:(id)arg5;	// IMP=0x0000000100002a38
- (id)clientConnectionWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000029b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
