//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSPushHandlerDelegate-Protocol.h"

@class FTMessageDelivery, IDSRateLimiter, NSMutableArray, NSMutableDictionary, NSString;

@interface IDSDeliveryController : NSObject <IDSPushHandlerDelegate>
{
    FTMessageDelivery *_messageDelivery;	// 8 = 0x8
    NSMutableDictionary *_messageQueue;	// 16 = 0x10
    NSMutableArray *_pendingOfflineMessages;	// 24 = 0x18
    IDSRateLimiter *_tokenURINegativeCache;	// 32 = 0x20
}

+ (id)tokenURINegativeCacheItemForTokenURI:(id)arg1 service:(id)arg2;	// IMP=0x00000001002646b0
+ (id)sharedInstance;	// IMP=0x0000000100263adc
- (void).cxx_destruct;	// IMP=0x000000010027a9d0
- (void)sendRTCMetricWithStartDate:(id)arg1 endDate:(id)arg2 endpointCount:(long long)arg3 usedPipeline:(_Bool)arg4 usedMMCS:(_Bool)arg5 responseCode:(long long)arg6;	// IMP=0x000000010027a638
- (id)_constructDeliveryPipeline;	// IMP=0x000000010027a284
- (void)_pipelineHandleMessage:(id)arg1 forURIs:(id)arg2 service:(id)arg3;	// IMP=0x0000000100278f3c
- (void)sendMessageDictionary:(id)arg1 messageID:(id)arg2 dataToEncrypt:(id)arg3 onService:(id)arg4 wantsResponse:(_Bool)arg5 expirationDate:(id)arg6 enforceRemoteTimeouts:(_Bool)arg7 canUseLargePayload:(_Bool)arg8 sendOnePerToken:(_Bool)arg9 allowPartialSendsToSucceed:(_Bool)arg10 priority:(long long)arg11 fireAndForget:(_Bool)arg12 fromID:(id)arg13 fromIdentity:(id)arg14 toPeople:(id)arg15 accessToken:(id)arg16 topic:(id)arg17 registrationProperties:(id)arg18 fakeMessage:(_Bool)arg19 alwaysSkipSelf:(_Bool)arg20 ignoreMaxRetryCount:(_Bool)arg21 disallowRefresh:(_Bool)arg22 originalTimestamp:(id)arg23 checkpointTrace:(id)arg24 destinationObject:(id)arg25 ackBlock:(CDUnknownBlockType)arg26 willSendBlock:(CDUnknownBlockType)arg27 sendCompletionBlock:(CDUnknownBlockType)arg28;	// IMP=0x0000000100278318
- (void)_sendErrorDictionary:(id)arg1 onService:(id)arg2 fromID:(id)arg3 fromIdentity:(id)arg4 toID:(id)arg5 toToken:(id)arg6 topic:(id)arg7 sendCompletionBlock:(CDUnknownBlockType)arg8;	// IMP=0x0000000100277d5c
- (void)_sendMessageDictionary:(id)arg1 lastRetryInterval:(double)arg2 dataToEncrypt:(id)arg3 onService:(id)arg4 wantsResponse:(_Bool)arg5 canUseLargePayload:(_Bool)arg6 sendOnePerToken:(_Bool)arg7 allowPartialSendsToSucceed:(_Bool)arg8 highPriority:(_Bool)arg9 fireAndForget:(_Bool)arg10 expirationDate:(id)arg11 enforceRemoteTimeouts:(_Bool)arg12 messageID:(id)arg13 fromID:(id)arg14 fromIdentity:(id)arg15 toID:(id)arg16 toPeople:(id)arg17 accessToken:(id)arg18 topic:(id)arg19 registrationProperties:(id)arg20 fakeMessage:(_Bool)arg21 alwaysSkipSelf:(_Bool)arg22 ignoreMaxRetryCount:(_Bool)arg23 disallowRefresh:(_Bool)arg24 originalTimestamp:(id)arg25 checkpointTrace:(id)arg26 destinationObject:(id)arg27 ackBlock:(CDUnknownBlockType)arg28 willSendBlock:(CDUnknownBlockType)arg29 sendCompletionBlock:(CDUnknownBlockType)arg30;	// IMP=0x0000000100276974
- (void)sendIDSMessage:(id)arg1 service:(id)arg2 topic:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100276698
- (void)_sendMessage:(id)arg1 dataToEncrypt:(id)arg2 onService:(id)arg3 fromID:(id)arg4 fromIdentity:(id)arg5 toID:(id)arg6 toPeople:(id)arg7 canUseLargePayload:(_Bool)arg8 sendOnePerToken:(_Bool)arg9 allowPartialSendsToSucceed:(_Bool)arg10 registrationProperties:(id)arg11 fakeMessage:(_Bool)arg12 alwaysSkipSelf:(_Bool)arg13 disallowRefresh:(_Bool)arg14 checkpointTrace:(id)arg15 destinationObject:(id)arg16 willSendBlock:(CDUnknownBlockType)arg17 completionBlock:(CDUnknownBlockType)arg18 firstAttemptDate:(id)arg19;	// IMP=0x0000000100271dac
- (id)_tokenURIForToken:(id)arg1 uri:(id)arg2;	// IMP=0x0000000100271d1c
- (void)_sendAttachmentWithGuid:(id)arg1 service:(id)arg2 topic:(id)arg3 originalCommand:(id)arg4 additionalDictionary:(id)arg5 encryptedData:(id)arg6 toToken:(id)arg7 toID:(id)arg8 fromID:(id)arg9 fromIdentity:(id)arg10 canUseLargePayload:(_Bool)arg11 expirationDate:(id)arg12 checkpointTrace:(id)arg13 destinationObject:(id)arg14 ackBlock:(CDUnknownBlockType)arg15 completionBlock:(CDUnknownBlockType)arg16;	// IMP=0x000000010026f160
- (void)_sendFTFanoutMessage:(id)arg1 service:(id)arg2 fromID:(id)arg3 toPeople:(id)arg4 fromIdentity:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000010026cbac
- (void)_sendFTMessage:(id)arg1 service:(id)arg2 fromID:(id)arg3 toID:(id)arg4 toToken:(id)arg5 toSessionToken:(id)arg6 toPeople:(id)arg7 fromIdentity:(id)arg8 completionBlock:(CDUnknownBlockType)arg9;	// IMP=0x000000010026a81c
- (void)_queueMessage:(id)arg1 service:(id)arg2 dataToEncrypt:(id)arg3 fromID:(id)arg4 fromIdentity:(id)arg5 toID:(id)arg6 toPeople:(id)arg7 originallyToPeople:(id)arg8 canUseLargePayload:(_Bool)arg9 sendOnePerToken:(_Bool)arg10 registrationProperties:(id)arg11 fakeMessage:(_Bool)arg12 alwaysSkipSelf:(_Bool)arg13 disallowRefresh:(_Bool)arg14 checkpointTrace:(id)arg15 destinationObject:(id)arg16 willSendBlock:(CDUnknownBlockType)arg17 completionBlock:(CDUnknownBlockType)arg18;	// IMP=0x0000000100269478
- (void)_discardMessage:(id)arg1 forURIs:(id)arg2 service:(id)arg3;	// IMP=0x0000000100268ed8
- (void)_emptyMessagesForURIs:(id)arg1 service:(id)arg2;	// IMP=0x0000000100268a04
- (unsigned long long)_destinationCountForURIsAndTokens:(id)arg1;	// IMP=0x0000000100268598
- (id)encryptionController;	// IMP=0x0000000100268558
- (id)peerIDManager;	// IMP=0x0000000100268518
- (long long)_maxPayloadSizeForMessage:(id)arg1;	// IMP=0x000000010026843c
- (_Bool)_forceAttachmentForMessage:(id)arg1;	// IMP=0x00000001002683a8
- (_Bool)_sendAsAttachmentForMessage:(id)arg1 payloadData:(id)arg2;	// IMP=0x0000000100267cbc
- (void)_handleMessagesForURIs:(id)arg1 originalURIs:(id)arg2 service:(id)arg3 fromID:(id)arg4;	// IMP=0x00000001002671e8
- (void)_handleAccessoryMessageForID:(id)arg1 msg:(id)arg2 service:(id)arg3 fromID:(id)arg4 fromIdentity:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x0000000100266768
- (void)_checkFastDormancy;	// IMP=0x0000000100266670
- (id)_keyForURIs:(id)arg1 service:(id)arg2;	// IMP=0x0000000100266598
- (void)_processMessageResponse:(id)arg1 error:(id)arg2 resultCode:(long long)arg3 toURI:(id)arg4 fromURI:(id)arg5 service:(id)arg6 fromIdentity:(id)arg7;	// IMP=0x0000000100265534
- (long long)effectiveMaxPayloadSizeIfCanUseLargePayload:(_Bool)arg1;	// IMP=0x00000001002653c0
- (void)handler:(id)arg1 isConnectedChanged:(_Bool)arg2;	// IMP=0x00000001002647a0
- (void)addTokenURINegativeCacheClearBlock;	// IMP=0x0000000100264344
- (_Bool)isSupportedEngramVersionNumber:(long long)arg1;	// IMP=0x00000001002642e8
- (long long)groupCryptoMinVersionNumber;	// IMP=0x000000010026416c
- (_Bool)shouldMinimizeBagCacheTime;	// IMP=0x0000000100264150
- (id)awdLogger;	// IMP=0x0000000100264110
- (void)dealloc;	// IMP=0x000000010026400c
- (id)init;	// IMP=0x0000000100263ca4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
