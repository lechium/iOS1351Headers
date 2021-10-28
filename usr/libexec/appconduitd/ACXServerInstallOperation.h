//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACXIDSSocketManagerDelegateProtocol-Protocol.h"

@class ACXPowerAssertion, ACXStreamingZipSocketSender, NSDictionary, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface ACXServerInstallOperation : NSObject <ACXIDSSocketManagerDelegateProtocol>
{
    _Bool _installPlaceholder;	// 8 = 0x8
    _Bool _isUserInitiated;	// 9 = 0x9
    _Bool _acquiredSocket;	// 10 = 0xa
    unsigned char _nextMessageType;	// 11 = 0xb
    _Bool _cancelled;	// 12 = 0xc
    _Bool _gotTransferDone;	// 13 = 0xd
    _Bool _gotStreamingZipComplete;	// 14 = 0xe
    NSString *_companionAppBundleID;	// 16 = 0x10
    NSString *_watchAppBundleID;	// 24 = 0x18
    CDUnknownBlockType _progressBlock;	// 32 = 0x20
    NSDictionary *_appSettingsDict;	// 40 = 0x28
    unsigned long long _installType;	// 48 = 0x30
    NSDictionary *_provisioningProfiles;	// 56 = 0x38
    id _requiredDeviceCapabilities;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    CDUnknownBlockType _completion;	// 80 = 0x50
    unsigned long long _lastPhase;	// 88 = 0x58
    double _lastPercentComplete;	// 96 = 0x60
    NSURL *_tempDir;	// 104 = 0x68
    ACXStreamingZipSocketSender *_streamingZipSender;	// 112 = 0x70
    NSObject<OS_os_transaction> *_transaction;	// 120 = 0x78
    ACXPowerAssertion *_powerAssertion;	// 128 = 0x80
    NSObject<OS_dispatch_source> *_operationWatchdog;	// 136 = 0x88
    unsigned long long _transferStartTime;	// 144 = 0x90
    NSURL *_appURL;	// 152 = 0x98
    long long _appSize;	// 160 = 0xa0
}

+ (id)installOperationForURL:(id)arg1 watchAppBundleIdentifier:(id)arg2 companionAppBundleID:(id)arg3 isPlaceholder:(_Bool)arg4 size:(long long)arg5;	// IMP=0x0000000100040d3c
+ (id)installOperationForCompanionAppBundleIdentifier:(id)arg1 watchAppBundleIdentifier:(id)arg2;	// IMP=0x0000000100040cbc
- (void).cxx_destruct;	// IMP=0x00000001000444fc
@property(nonatomic) long long appSize; // @synthesize appSize=_appSize;
@property(retain, nonatomic) NSURL *appURL; // @synthesize appURL=_appURL;
@property(nonatomic) _Bool gotStreamingZipComplete; // @synthesize gotStreamingZipComplete=_gotStreamingZipComplete;
@property(nonatomic) _Bool gotTransferDone; // @synthesize gotTransferDone=_gotTransferDone;
@property(nonatomic) unsigned long long transferStartTime; // @synthesize transferStartTime=_transferStartTime;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *operationWatchdog; // @synthesize operationWatchdog=_operationWatchdog;
@property(retain, nonatomic) ACXPowerAssertion *powerAssertion; // @synthesize powerAssertion=_powerAssertion;
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) unsigned char nextMessageType; // @synthesize nextMessageType=_nextMessageType;
@property(retain, nonatomic) ACXStreamingZipSocketSender *streamingZipSender; // @synthesize streamingZipSender=_streamingZipSender;
@property(nonatomic) _Bool acquiredSocket; // @synthesize acquiredSocket=_acquiredSocket;
@property(retain, nonatomic) NSURL *tempDir; // @synthesize tempDir=_tempDir;
@property(nonatomic) double lastPercentComplete; // @synthesize lastPercentComplete=_lastPercentComplete;
@property(nonatomic) unsigned long long lastPhase; // @synthesize lastPhase=_lastPhase;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id requiredDeviceCapabilities; // @synthesize requiredDeviceCapabilities=_requiredDeviceCapabilities;
@property(retain, nonatomic) NSDictionary *provisioningProfiles; // @synthesize provisioningProfiles=_provisioningProfiles;
@property(nonatomic) _Bool isUserInitiated; // @synthesize isUserInitiated=_isUserInitiated;
@property(readonly, nonatomic) unsigned long long installType; // @synthesize installType=_installType;
@property(nonatomic) _Bool installPlaceholder; // @synthesize installPlaceholder=_installPlaceholder;
@property(retain, nonatomic) NSDictionary *appSettingsDict; // @synthesize appSettingsDict=_appSettingsDict;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, nonatomic) NSString *watchAppBundleID; // @synthesize watchAppBundleID=_watchAppBundleID;
@property(readonly, nonatomic) NSString *companionAppBundleID; // @synthesize companionAppBundleID=_companionAppBundleID;
- (void)socketDidCloseWithError:(id)arg1;	// IMP=0x00000001000442d8
- (void)receivedDictionaryOrData:(id)arg1;	// IMP=0x0000000100042c78
- (void)_onQueue_startInstall;	// IMP=0x00000001000429c0
- (void)_onQueue_doTransferAndInstall;	// IMP=0x0000000100042544
- (void)_onQueue_prepForTransferAndInstall;	// IMP=0x0000000100041c38
- (id)_onQueue_sendCancelMessage;	// IMP=0x0000000100041a78
- (id)_makeTempDirectoryWithError:(id *)arg1;	// IMP=0x0000000100041974
- (void)_onQueue_callCompletion:(id)arg1;	// IMP=0x00000001000415f4
- (void)_onQueue_callProgressBlockWithPhase:(unsigned long long)arg1 percent:(double)arg2;	// IMP=0x00000001000414dc
- (void)_onQueue_disarmWatchdog;	// IMP=0x0000000100041450
- (void)_onQueue_armWatchdog;	// IMP=0x0000000100041224
- (void)cancel;	// IMP=0x0000000100041194
- (void)beginWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100040df0
- (void)dealloc;	// IMP=0x0000000100040bb4
- (id)initWithWatchAppBundleID:(id)arg1 companionAppBundleID:(id)arg2 isPlaceholder:(_Bool)arg3 appURL:(id)arg4 size:(long long)arg5;	// IMP=0x0000000100040a88
- (id)initWithCompanionBundleID:(id)arg1 watchAppBundleID:(id)arg2;	// IMP=0x00000001000409a8
- (void)_commonInit;	// IMP=0x00000001000408d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
