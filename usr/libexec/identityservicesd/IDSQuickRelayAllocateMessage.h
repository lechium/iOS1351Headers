//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSMessage.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSNumber, NSString;

@interface IDSQuickRelayAllocateMessage : IDSMessage <NSCopying>
{
    NSData *_requestID;	// 264 = 0x108
    NSString *_requestIDStr;	// 272 = 0x110
    NSNumber *_allocateType;	// 280 = 0x118
    NSData *_IDSSessionID;	// 288 = 0x120
    NSString *_senderURI;	// 296 = 0x128
    NSArray *_recipients;	// 304 = 0x130
    NSData *_activeRelayIP;	// 312 = 0x138
    NSData *_activeRelaySessionToken;	// 320 = 0x140
    NSData *_existingRelayIP;	// 328 = 0x148
    NSData *_existingRelaySessionToken;	// 336 = 0x150
    NSData *_existingRelaySignature;	// 344 = 0x158
    NSData *_senderExternalIP;	// 352 = 0x160
    NSString *_appID;	// 360 = 0x168
    NSNumber *_provider;	// 368 = 0x170
    NSNumber *_allocateProtocolVersion;	// 376 = 0x178
    NSString *_protocol;	// 384 = 0x180
    NSNumber *_isSharedSession;	// 392 = 0x188
    NSString *_groupID;	// 400 = 0x190
    NSNumber *_qrReason;	// 408 = 0x198
    NSNumber *_qrError;	// 416 = 0x1a0
    NSData *_previousAccessToken;	// 424 = 0x1a8
    NSData *_previousRelayIP;	// 432 = 0x1b0
    NSString *_testOptions;	// 440 = 0x1b8
    NSData *_relayIP;	// 448 = 0x1c0
    NSNumber *_relayPort;	// 456 = 0x1c8
    NSData *_relaySessionToken;	// 464 = 0x1d0
    NSData *_relaySessionKey;	// 472 = 0x1d8
    NSData *_relaySessionID;	// 480 = 0x1e0
    NSNumber *_relayExpiryTimeStamp;	// 488 = 0x1e8
    NSData *_inferredExternalIP;	// 496 = 0x1f0
    NSData *_relaySoftwareVersion;	// 504 = 0x1f8
    NSNumber *_errorCode;	// 512 = 0x200
    NSString *_errorMessage;	// 520 = 0x208
    NSNumber *_invitationRetryCount;	// 528 = 0x210
    NSNumber *_groupMemberCount;	// 536 = 0x218
    NSNumber *_selfAllocationCount;	// 544 = 0x220
    NSNumber *_infoAttribute;	// 552 = 0x228
    NSData *_relayIPv6;	// 560 = 0x230
}

- (void).cxx_destruct;	// IMP=0x00000001004afca4
@property(copy) NSData *relayIPv6; // @synthesize relayIPv6=_relayIPv6;
@property(copy) NSNumber *infoAttribute; // @synthesize infoAttribute=_infoAttribute;
@property(copy) NSString *protocol; // @synthesize protocol=_protocol;
@property(copy) NSNumber *selfAllocationCount; // @synthesize selfAllocationCount=_selfAllocationCount;
@property(copy) NSNumber *groupMemberCount; // @synthesize groupMemberCount=_groupMemberCount;
@property(copy) NSNumber *invitationRetryCount; // @synthesize invitationRetryCount=_invitationRetryCount;
@property(copy) NSString *testOptions; // @synthesize testOptions=_testOptions;
@property(copy) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(copy) NSNumber *errorCode; // @synthesize errorCode=_errorCode;
@property(copy) NSData *previousRelayIP; // @synthesize previousRelayIP=_previousRelayIP;
@property(copy) NSData *previousAccessToken; // @synthesize previousAccessToken=_previousAccessToken;
@property(copy) NSNumber *qrError; // @synthesize qrError=_qrError;
@property(copy) NSNumber *qrReason; // @synthesize qrReason=_qrReason;
@property(copy) NSString *groupID; // @synthesize groupID=_groupID;
@property(copy) NSNumber *isSharedSession; // @synthesize isSharedSession=_isSharedSession;
@property(copy) NSNumber *allocateProtocolVersion; // @synthesize allocateProtocolVersion=_allocateProtocolVersion;
@property(copy) NSNumber *provider; // @synthesize provider=_provider;
@property(copy) NSData *inferredExternalIP; // @synthesize inferredExternalIP=_inferredExternalIP;
@property(copy) NSNumber *relayExpiryTimeStamp; // @synthesize relayExpiryTimeStamp=_relayExpiryTimeStamp;
@property(copy) NSData *relaySoftwareVersion; // @synthesize relaySoftwareVersion=_relaySoftwareVersion;
@property(copy) NSData *relaySessionID; // @synthesize relaySessionID=_relaySessionID;
@property(copy) NSData *relaySessionToken; // @synthesize relaySessionToken=_relaySessionToken;
@property(copy) NSData *relaySessionKey; // @synthesize relaySessionKey=_relaySessionKey;
@property(copy) NSNumber *relayPort; // @synthesize relayPort=_relayPort;
@property(copy) NSData *relayIP; // @synthesize relayIP=_relayIP;
@property(copy) NSString *appID; // @synthesize appID=_appID;
@property(copy) NSData *senderExternalIP; // @synthesize senderExternalIP=_senderExternalIP;
@property(copy) NSData *existingRelaySignature; // @synthesize existingRelaySignature=_existingRelaySignature;
@property(copy) NSData *existingRelaySessionToken; // @synthesize existingRelaySessionToken=_existingRelaySessionToken;
@property(copy) NSData *existingRelayIP; // @synthesize existingRelayIP=_existingRelayIP;
@property(copy) NSData *activeRelaySessionToken; // @synthesize activeRelaySessionToken=_activeRelaySessionToken;
@property(copy) NSData *activeRelayIP; // @synthesize activeRelayIP=_activeRelayIP;
@property(copy) NSString *senderURI; // @synthesize senderURI=_senderURI;
@property(copy) NSArray *recipients; // @synthesize recipients=_recipients;
@property(copy) NSData *IDSSessionID; // @synthesize IDSSessionID=_IDSSessionID;
@property(copy) NSNumber *allocateType; // @synthesize allocateType=_allocateType;
@property(copy) NSString *requestIDStr; // @synthesize requestIDStr=_requestIDStr;
@property(copy) NSData *requestID; // @synthesize requestID=_requestID;
- (id)description;	// IMP=0x00000001004ae730
- (unsigned long long)requestLength;	// IMP=0x00000001004adfb8
- (unsigned long long)_recipientDataSize;	// IMP=0x00000001004acf34
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x00000001004acee8
- (_Bool)wantsAPSRetries;	// IMP=0x00000001004acecc
- (id)messageBody;	// IMP=0x00000001004ac310
- (id)requiredKeys;	// IMP=0x00000001004ac20c
- (long long)responseCommand;	// IMP=0x00000001004ac1f4
- (long long)command;	// IMP=0x00000001004ac1dc
- (_Bool)wantsIntegerUniqueIDs;	// IMP=0x00000001004ac1c0
- (_Bool)wantsBinaryPush;	// IMP=0x00000001004ac1a4
- (_Bool)wantsCompressedBody;	// IMP=0x00000001004ac188
- (_Bool)wantsHTTPHeaders;	// IMP=0x00000001004ac16c
- (_Bool)wantsBagKey;	// IMP=0x00000001004ac150
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001004ab5d0
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001004a2d98
- (id)init:(id)arg1;	// IMP=0x00000001004a2abc

@end
