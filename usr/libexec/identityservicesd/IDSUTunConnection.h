//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSSocketPairConnectionDelegate-Protocol.h"
#import "NSCopying-Protocol.h"

@class IDSLocalDeliveryQueue, IDSUTunPeerServiceMap, IMPowerAssertion, IMTimer, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDSSocketPairConnectionProtocol, IDSUTunConnectionDelegate;

@interface IDSUTunConnection : NSObject <IDSSocketPairConnectionDelegate, NSCopying>
{
    id <IDSUTunConnectionDelegate> _delegate;	// 8 = 0x8
    NSMutableArray *_sendingMessages;	// 16 = 0x10
    NSMutableArray *_fallbackMessages;	// 24 = 0x18
    NSMutableDictionary *_statistics;	// 32 = 0x20
    NSMutableDictionary *_cumulativeOutgoingStatistics;	// 40 = 0x28
    NSMutableDictionary *_cumulativeIncomingStatistics;	// 48 = 0x30
    NSMutableDictionary *_tokenToOTREncryptionQueue;	// 56 = 0x38
    NSMutableDictionary *_tokenToOTRError;	// 64 = 0x40
    NSMutableDictionary *_dataProtectedIncomingMessages;	// 72 = 0x48
    id <IDSSocketPairConnectionProtocol> _socketConnection;	// 80 = 0x50
    _Bool _openSocketCalled;	// 88 = 0x58
    _Bool _connectionSuspended;	// 89 = 0x59
    IMTimer *_timeoutTimer;	// 96 = 0x60
    IMTimer *_fallbackTimer;	// 104 = 0x68
    IMTimer *_dequeueTimer;	// 112 = 0x70
    NSString *_identifier;	// 120 = 0x78
    NSString *_otrTokenIdentifier;	// 128 = 0x80
    IDSLocalDeliveryQueue *_deliveryQueue;	// 136 = 0x88
    IMPowerAssertion *_sendingPowerAssertion;	// 144 = 0x90
    double _rtt;	// 152 = 0x98
    long long _cachedBytes[3];	// 160 = 0xa0
    unsigned long long _maxQueueSize;	// 184 = 0xb8
    long long _priority;	// 192 = 0xc0
    NSString *_cbuuid;	// 200 = 0xc8
    NSString *_uniqueID;	// 208 = 0xd0
    NSDate *_lastFallback;	// 216 = 0xd8
    _Bool _isMagnetIndicatingPeerIsAwake;	// 224 = 0xe0
    _Bool _enabled;	// 225 = 0xe1
    _Bool _needsHandshake;	// 226 = 0xe2
    _Bool _isAlwaysConnected;	// 227 = 0xe3
    _Bool _isCloudEnabled;	// 228 = 0xe4
    NSMutableDictionary *_incomingResourceTransfers;	// 232 = 0xe8
    NSMutableSet *_resettingIncomingResourceTransfers;	// 240 = 0xf0
    NSMutableSet *_resumingIncomingResourceTransfers;	// 248 = 0xf8
    _Bool _resumeResourceTransfers;	// 256 = 0x100
    _Bool _enableOTR;	// 257 = 0x101
    _Bool _useSharedOTRSession;	// 258 = 0x102
    _Bool _useNamedOTRSessionToken;	// 259 = 0x103
    _Bool _supportsLegacyOTRSessionToken;	// 260 = 0x104
    _Bool _newServiceSupported;	// 261 = 0x105
    _Bool _supportDynamicServices;	// 262 = 0x106
    _Bool _supportDynamicServicesOptimization;	// 263 = 0x107
    unsigned short _serviceMinCompatibilityVersion;	// 264 = 0x108
    NSMutableSet *_admissionDeniedTopics;	// 272 = 0x110
    unsigned char _remoteInstanceID[16];	// 280 = 0x118
    IDSUTunPeerServiceMap *_incomingServiceMap;	// 296 = 0x128
    IDSUTunPeerServiceMap *_outgoingServiceMap;	// 304 = 0x130
    NSMutableDictionary *_incomingServiceMapUpdateCounter;	// 312 = 0x138
    NSArray *_supportedMessageTypes;	// 320 = 0x140
    _Bool _shouldAbortOnMissingTopic;	// 328 = 0x148
    _Bool _shouldUseIPsecLink;	// 329 = 0x149
    _Bool _shouldUseNWFraming;	// 330 = 0x14a
    unsigned int _dataProtectionClass;	// 332 = 0x14c
    long long _idsPriority;	// 336 = 0x150
    IDSUTunConnection *_cloudConnection;	// 344 = 0x158
    NSString *_name;	// 352 = 0x160
}

- (void).cxx_destruct;	// IMP=0x0000000100390b5c
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
@property(retain, nonatomic) IDSUTunConnection *cloudConnection; // @synthesize cloudConnection=_cloudConnection;
@property(nonatomic) _Bool supportsLegacyOTRSessionToken; // @synthesize supportsLegacyOTRSessionToken=_supportsLegacyOTRSessionToken;
@property(nonatomic) _Bool enableOTR; // @synthesize enableOTR=_enableOTR;
@property(nonatomic) __weak id <IDSUTunConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long idsPriority; // @synthesize idsPriority=_idsPriority;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) double rtt; // @synthesize rtt=_rtt;
@property(retain, nonatomic) NSArray *supportedMessageTypes; // @synthesize supportedMessageTypes=_supportedMessageTypes;
@property(readonly, nonatomic) _Bool isCloudEnabled; // @synthesize isCloudEnabled=_isCloudEnabled;
@property(readonly, nonatomic) NSDictionary *cumulativeOutgoingStatistics; // @synthesize cumulativeOutgoingStatistics=_cumulativeOutgoingStatistics;
@property(readonly, nonatomic) NSDictionary *cumulativeIncomingStatistics; // @synthesize cumulativeIncomingStatistics=_cumulativeIncomingStatistics;
@property(nonatomic) _Bool isAlwaysConnected; // @synthesize isAlwaysConnected=_isAlwaysConnected;
@property(retain, nonatomic) NSString *cbuuid; // @synthesize cbuuid=_cbuuid;
@property(nonatomic) unsigned long long maxQueueSize; // @synthesize maxQueueSize=_maxQueueSize;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)forceOTRNegotiation:(id)arg1 priority:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001003903b4
- (void)connectionDidReceiveBytes:(id)arg1;	// IMP=0x0000000100390164
- (void)connectionDidReachInFlightMessageLowWaterMark:(id)arg1;	// IMP=0x000000010038fefc
- (void)connectionBecameEmpty;	// IMP=0x000000010038fce8
- (void)connectionBecameEmpty:(id)arg1;	// IMP=0x000000010038fa80
- (void)didReceiveDataMessage:(id)arg1;	// IMP=0x000000010038f9a0
- (void)connection:(id)arg1 didReceiveDataMessage:(id)arg2;	// IMP=0x000000010038f870
- (void)connectionDidClose;	// IMP=0x000000010038f658
- (void)connectionDidClose:(id)arg1;	// IMP=0x000000010038f3d8
- (void)_dumpLogs;	// IMP=0x000000010038f0f4
- (void)_processDecryptedMessage:(id)arg1;	// IMP=0x0000000100386064
- (void)_processIncomingDataMessage:(id)arg1;	// IMP=0x0000000100385934
- (void)_processIncomingResourceTransferMessage:(id)arg1 messageUUID:(id)arg2 streamID:(unsigned short)arg3 topic:(id)arg4 wantsAppAck:(_Bool)arg5 expectsPeerResponse:(_Bool)arg6 peerResponseIdentifier:(id)arg7 isDefaultPairedDevice:(_Bool)arg8;	// IMP=0x0000000100380c48
- (unsigned long long)_currentLink;	// IMP=0x0000000100380a84
- (void)_processMessage:(id)arg1 withSequenceNumberBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001003809a0
- (void)_sendExpiredAckForMessage:(id)arg1;	// IMP=0x00000001003805d0
- (void)_sendAckForMessage:(id)arg1;	// IMP=0x0000000100380458
- (void)sendAckForMessageWithSequenceNumber:(unsigned int)arg1;	// IMP=0x0000000100380238
- (long long)_socketToNiceCommand:(unsigned char)arg1;	// IMP=0x000000010037ffac
- (void)_flushMessagesAll:(_Bool)arg1 response:(long long)arg2;	// IMP=0x000000010037edb4
- (void)flushAllMessagesForReason:(long long)arg1;	// IMP=0x000000010037ece8
- (void)dropDisallowedMessages;	// IMP=0x000000010037ec50
- (_Bool)_messageHasValidEncryptionStatus:(id)arg1;	// IMP=0x000000010037eb98
- (void)_optionallyDecryptMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010037e96c
- (void)_decryptPublicKeyEncryptedMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010037ddf8
- (id)_decryptOTREncrtypedMessage:(id)arg1;	// IMP=0x000000010037bf44
- (void)_handleOTRDecryptionError:(id)arg1;	// IMP=0x000000010037b5d0
- (void)_handleOTRDecryptionSuccess:(id)arg1;	// IMP=0x000000010037b21c
- (_Bool)_storeIncomingClassADataMesageIfNeeded:(id)arg1 topic:(id)arg2 sequenceNumber:(unsigned int)arg3;	// IMP=0x000000010037a9e4
- (_Bool)_storeIncomingClassCDataMessageIfNeeded:(id)arg1 topic:(id)arg2 sequenceNumber:(unsigned int)arg3;	// IMP=0x000000010037a1a0
- (void)_sendEncryptedMessage:(id)arg1;	// IMP=0x0000000100379034
- (void)_sendPublicKeyEncryptedMessage:(id)arg1;	// IMP=0x0000000100378444
- (void)_sendOTREncryptionQueue:(id)arg1 streamID:(unsigned short)arg2;	// IMP=0x0000000100377e98
- (void)_sendOTREncryptedMessage:(id)arg1 useEncryption:(_Bool)arg2 streamID:(unsigned short)arg3 forPriority:(long long)arg4 flag:(int)arg5 token:(id)arg6;	// IMP=0x0000000100377690
- (id)_encryptDataWithOTR:(id)arg1 token:(id)arg2;	// IMP=0x00000001003770b4
- (void)classStorageBecameAvailable:(id)arg1;	// IMP=0x0000000100376648
- (void)handleOTRNegotiationTimeout:(id)arg1;	// IMP=0x00000001003754c4
- (void)handleOTRNegotiationComplete:(id)arg1;	// IMP=0x00000001003753b8
- (void)_requeueMessages:(id)arg1;	// IMP=0x0000000100374768
- (void)_requeueSendingMessage:(id)arg1;	// IMP=0x0000000100374620
- (void)_dequeueMessagesTimerDidFire:(id)arg1;	// IMP=0x00000001003742f4
- (void)_invalidateMessagesDequeueTimer;	// IMP=0x0000000100374240
- (void)_startMessagesDequeueMessagesTimer;	// IMP=0x0000000100373e38
- (double)_dequeueMessagesTimerInterval;	// IMP=0x0000000100373e1c
- (unsigned long long)_pendingOutgoingBytesForClass:(unsigned int)arg1;	// IMP=0x0000000100373734
- (void)_removeMessageFromStatistics:(id)arg1;	// IMP=0x0000000100373374
- (void)_addOutgoingMessageSize:(unsigned long long)arg1 forTopic:(id)arg2 dataProtectionClass:(unsigned int)arg3 isResource:(_Bool)arg4;	// IMP=0x00000001003732b4
- (void)_addIncomingMessageSize:(unsigned long long)arg1 forTopic:(id)arg2;	// IMP=0x0000000100373230
- (void)_addMessageSize:(unsigned long long)arg1 forTopic:(id)arg2 direction:(unsigned char)arg3 dataProtectionClass:(unsigned int)arg4 isResource:(_Bool)arg5;	// IMP=0x0000000100372904
- (void)_updateDictionary:(id)arg1 addMessageSize:(long long)arg2 addMessageCount:(long long)arg3;	// IMP=0x0000000100372614
- (void)_sendSocketMessage:(id)arg1 ignoreSequenceNumber:(_Bool)arg2;	// IMP=0x0000000100371e8c
- (void)_sendSocketMessage:(id)arg1;	// IMP=0x0000000100371e1c
- (void)_clearSendingPowerAssertionWithReason:(id)arg1;	// IMP=0x0000000100371c10
- (void)clearStats;	// IMP=0x0000000100371b80
- (void)trafficClassesChanged;	// IMP=0x0000000100371670
- (void)_dequeueMessages;	// IMP=0x000000010036d4d0
- (id)serviceController;	// IMP=0x000000010036d490
- (_Bool)_nonBTAllowedForClientID:(id)arg1;	// IMP=0x000000010036d3e4
- (_Bool)supportsMessageOfType:(long long)arg1;	// IMP=0x000000010036d344
- (_Bool)checkServiceCompability:(id)arg1 localMessage:(id)arg2;	// IMP=0x000000010036d09c
- (void)admissionPolicyChangedForTopic:(id)arg1 allowed:(_Bool)arg2;	// IMP=0x000000010036caac
- (_Bool)_messageIsAllowedToSendMessageOnTopic:(id)arg1;	// IMP=0x000000010036c688
- (void)_removeSocketPairMessage:(id)arg1 localMessage:(id)arg2 reason:(id)arg3 detailedError:(id)arg4 responseCode:(long long)arg5;	// IMP=0x000000010036b610
- (void)_removeSocketPairMessage:(id)arg1 localMessage:(id)arg2 reason:(id)arg3 responseCode:(long long)arg4;	// IMP=0x000000010036b520
- (void)_messageTimedOut:(id)arg1 localMessage:(id)arg2;	// IMP=0x000000010036b100
- (_Bool)_shouldAWDLogMessage:(id)arg1;	// IMP=0x000000010036b05c
- (void)_timeoutTimerFired;	// IMP=0x000000010036a5f8
- (void)_resetTimeout:(id)arg1;	// IMP=0x0000000100369d68
- (void)invalidateTimeoutTimer;	// IMP=0x0000000100369d14
- (void)_fallbackTimerFired;	// IMP=0x00000001003690fc
- (void)_resetFallbackTimeout:(double)arg1 useNextFallback:(_Bool)arg2;	// IMP=0x0000000100368cf8
- (_Bool)_performFallbackIfNecessary:(id)arg1;	// IMP=0x0000000100368358
- (double)_fallbackTimeoutForService:(id)arg1;	// IMP=0x0000000100367ea8
- (double)_nanoDisconnectedFallbackTimeoutForService:(id)arg1;	// IMP=0x0000000100367b28
- (double)_nanoConnectedFallbackTimeoutForService:(id)arg1;	// IMP=0x00000001003677a4
- (void)_clearLastFallbackWithReason:(id)arg1;	// IMP=0x000000010036755c
- (void)_connectivityChanged;	// IMP=0x0000000100367480
- (void)_handleBecomingEmptyOfCloudMessages;	// IMP=0x0000000100367354
- (void)_handleBecomingEmpty;	// IMP=0x00000001003671b0
- (void)_handleBecomingEmptyForDataProtectionClass:(unsigned int)arg1;	// IMP=0x0000000100366fd0
- (_Bool)_nonThreadSafeIsConnected;	// IMP=0x0000000100366f90
@property(readonly, nonatomic) _Bool isConnected;
- (void)kickProgressBlockForMessageID:(id)arg1;	// IMP=0x0000000100366c5c
- (void)cancelMessageID:(id)arg1;	// IMP=0x0000000100366490
- (void)sendMessage:(id)arg1;	// IMP=0x0000000100364bd8
- (void)_startAndSetupSocketPairConnection:(id)arg1 capabilityFlags:(unsigned long long)arg2 instanceID:(unsigned char (*)[16])arg3 serviceMinCompatibilityVersion:(unsigned short)arg4 socketDescriptor:(int)arg5;	// IMP=0x0000000100363c64
- (void)_startNWConnectinForIPsecCase:(int)arg1 controlChannelVersion:(id)arg2 capabilityFlags:(unsigned long long)arg3 instanceID:(unsigned char (*)[16])arg4 serviceMinCompatibilityVersion:(unsigned short)arg5;	// IMP=0x0000000100363060
- (void)_startConnection;	// IMP=0x0000000100361be8
- (void)resumeConnectivity;	// IMP=0x0000000100361af8
- (void)_checkAndStartConnection;	// IMP=0x0000000100361a78
- (void)_startConnectionForContinuityPeer;	// IMP=0x00000001003616dc
- (id)_nonThreadSafeSocketOptions;	// IMP=0x0000000100361054
- (_Bool)_isMagnetConnection;	// IMP=0x0000000100361008
- (void)_nonThreadSafeStopConnection;	// IMP=0x0000000100360b30
- (void)setIsMagnetIndicatingPeerIsAwake:(_Bool)arg1;	// IMP=0x0000000100360774
- (_Bool)isMagnetIndicatingPeerIsAwake;	// IMP=0x0000000100360754
- (void)setEnabled:(_Bool)arg1 withReason:(id)arg2;	// IMP=0x000000010035fc54
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000010035fc08
- (_Bool)isEnabled;	// IMP=0x000000010035fbe8
- (void)setDeviceBTUUID:(id)arg1;	// IMP=0x000000010035f72c
@property(readonly, nonatomic) NSDictionary *queueStatistics;
@property(readonly, nonatomic) NSDictionary *sendingMessageStatistics;
- (void)_addStatsFromDict:(id)arg1 toAggregate:(id)arg2;	// IMP=0x000000010035ebd0
- (id)_sendingMessageStatisticsForClass:(unsigned int)arg1;	// IMP=0x000000010035eb2c
- (_Bool)hasSpaceForMessagesWithDataProtectionClass:(unsigned int)arg1;	// IMP=0x000000010035ea2c
- (unsigned long long)_inflightMessageCount;	// IMP=0x000000010035e9c8
- (unsigned long long)_inflightMessageCountForType:(long long)arg1;	// IMP=0x000000010035e95c
- (unsigned long long)_inflightMessageCountForClass:(unsigned int)arg1;	// IMP=0x000000010035e8f0
- (unsigned long long)_sendingMessageCountForType:(long long)arg1;	// IMP=0x000000010035e76c
- (unsigned long long)_sendingMessageCountForClass:(unsigned int)arg1;	// IMP=0x000000010035e5f4
@property(readonly, nonatomic) _Bool isIdle;
- (_Bool)_isWiProxPeer;	// IMP=0x000000010035e480
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010035e460
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010035e400
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000010035e030
- (id)initWithIdentifier:(id)arg1 socketPriority:(long long)arg2 btUUID:(id)arg3 uniqueID:(id)arg4 incomingServiceMap:(id)arg5 outgoingServiceMap:(id)arg6 isCloudEnabled:(_Bool)arg7 shouldUseIPsecLink:(_Bool)arg8;	// IMP=0x000000010035d8f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

