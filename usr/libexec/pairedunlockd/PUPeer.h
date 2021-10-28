//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSMutableDictionary, NSString, PUKeyStore;
@protocol OS_dispatch_queue, PUPeerDelegate;

@interface PUPeer : NSObject <IDSServiceDelegate>
{
    IDSService *_service;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_idsQueue;	// 16 = 0x10
    unsigned int _pairedDeviceVersion;	// 24 = 0x18
    _Bool _unlockEnabled;	// 28 = 0x1c
    id <PUPeerDelegate> _delegate;	// 32 = 0x20
    PUKeyStore *_keyStore;	// 40 = 0x28
    NSMutableDictionary *_responseHandlers;	// 48 = 0x30
    NSMutableDictionary *_errorHandlers;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_handlerManagementQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010000abfc
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlerManagementQueue; // @synthesize handlerManagementQueue=_handlerManagementQueue;
@property(retain, nonatomic) NSMutableDictionary *errorHandlers; // @synthesize errorHandlers=_errorHandlers;
@property(retain, nonatomic) NSMutableDictionary *responseHandlers; // @synthesize responseHandlers=_responseHandlers;
@property(retain, nonatomic) PUKeyStore *keyStore; // @synthesize keyStore=_keyStore;
@property(nonatomic, getter=isUnlockEnabled) _Bool unlockEnabled; // @synthesize unlockEnabled=_unlockEnabled;
@property(nonatomic) id <PUPeerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyPairResult:(_Bool)arg1 error:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000aa70
- (void)getPasscodeState:(id)arg1;	// IMP=0x000000010000a940
- (void)didGetPasscodeState:(id)arg1;	// IMP=0x000000010000a7a0
- (id)_convertRemotePasscodeStateToRemoteDeviceState:(id)arg1;	// IMP=0x000000010000a54c
- (id)_convertToRemoteDeviceState:(id)arg1;	// IMP=0x000000010000a498
- (void)setShouldNotifyNextUnlock:(id)arg1;	// IMP=0x000000010000a3d0
- (void)didUnlock:(id)arg1;	// IMP=0x000000010000a378
- (void)removeLockout:(id)arg1;	// IMP=0x000000010000a264
- (void)disableOnlyRemoteUnlock:(id)arg1;	// IMP=0x000000010000a0b4
- (void)startRemoteAction:(id)arg1;	// IMP=0x0000000100008d84
- (void)_logResponse:(id)arg1;	// IMP=0x0000000100008ccc
- (void)_logProtobuf:(id)arg1;	// IMP=0x0000000100008bbc
- (void)notifyThisDeviceDidUnlock;	// IMP=0x0000000100008b34
- (void)disableOnlyRemoteUnlockWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000087e8
- (void)_notifyCurrentStateReliably:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000086c8
- (id)_retrieveUnlockOnlyPasscode;	// IMP=0x0000000100008650
- (id)_passcodeStringFromPasscodeData:(id)arg1;	// IMP=0x00000001000085d4
- (void)enableOnlyRemoteUnlockWithPasscode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008440
- (void)enableWristDetectBeforeEnableOnlyRemoteUnlockWithPasscode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008218
- (void)completeEnableOnlyRemoteUnlockWithPasscode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007828
- (id)_createAndStoreNewPasscodeWithCurrentPasscode:(id)arg1;	// IMP=0x00000001000074b0
- (void)notifyCurrentState;	// IMP=0x000000010000749c
- (void)resetDeviceWristDetectionSetting:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007278
- (void)requestDeviceSetWristDetectionDisabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000070c4
- (void)queryRemoteDeviceState:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006dc0
- (void)unpairForUnlockWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006d34
- (void)requestRemoteDeviceRemoveLockout:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006c90
- (void)requestRemoteDeviceDisableOnlyRemoteUnlock;	// IMP=0x0000000100006ac8
- (void)requestRemoteDeviceUnlockNotification;	// IMP=0x00000001000068ec
- (void)requestRemoteDeviceRemoteAction:(long long)arg1 type:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100006768
- (void)pairForUnlockWithPasscode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000064cc
- (void)didCompleteRequest:(id)arg1;	// IMP=0x00000001000060b8
- (id)_sendProtobuf:(id)arg1 reliably:(_Bool)arg2 expectsResponse:(_Bool)arg3 responseIdentifier:(id)arg4 error:(id *)arg5;	// IMP=0x0000000100005dc8
- (void)_sendResponse:(unsigned short)arg1 toRequestID:(id)arg2 data:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100005d08
- (id)_sendRequest:(unsigned short)arg1 data:(id)arg2 reliably:(_Bool)arg3 expectResponse:(_Bool)arg4 handler:(CDUnknownBlockType)arg5 error:(id *)arg6;	// IMP=0x0000000100005bd0
- (void)_sendResultOfMessage:(unsigned short)arg1 requestID:(id)arg2 success:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000001000058cc
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x000000010000570c
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000010000562c
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000100005574
- (void)removeErrorHandlerForRequest:(id)arg1;	// IMP=0x00000001000054e0
- (void)setErrorHandler:(CDUnknownBlockType)arg1 forRequest:(id)arg2;	// IMP=0x00000001000053a8
- (CDUnknownBlockType)errorHandlerForRequest:(id)arg1;	// IMP=0x0000000100005278
- (void)removeResponseHandlerForRequestMessageID:(id)arg1;	// IMP=0x00000001000051e4
- (void)setResponseHandler:(id)arg1 forRequestMessageID:(id)arg2;	// IMP=0x0000000100005114
- (id)responseHandlerForRequestMessageID:(id)arg1;	// IMP=0x0000000100004f44
- (void)setPairedDeviceVersion:(unsigned int)arg1;	// IMP=0x0000000100004f3c
- (unsigned int)pairedDeviceVersion;	// IMP=0x0000000100004f34
- (id)init;	// IMP=0x0000000100004bf8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
