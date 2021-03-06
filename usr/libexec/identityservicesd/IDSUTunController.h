//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSPairingManagerDelegate-Protocol.h"

@class IDSLinkManager, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface IDSUTunController : NSObject <IDSPairingManagerDelegate>
{
    struct SimpleNSStringToObjectTable _deviceConnectionInfoTableByCbuuid;	// 8 = 0x8
    struct _opaque_pthread_mutex_t _deviceConnectionInfoTableByCbuuidLock;	// 32 = 0x20
    IDSLinkManager *_linkManager;	// 96 = 0x60
    _Bool _logPackets;	// 104 = 0x68
    _Bool _vifShouldReadMultiple;	// 105 = 0x69
    unsigned int _vifMaxPendingPackets;	// 108 = 0x6c
    _Bool _vifUseChannel;	// 112 = 0x70
    _Bool _hasFixedDestination;	// 113 = 0x71
    _Bool _encryptionEnabled;	// 114 = 0x72
    _Bool _controlChannelEncryptionDisabled;	// 115 = 0x73
    struct os_unfair_lock_s _controlChannelVersionCacheLock;	// 116 = 0x74
    NSMutableDictionary *_controlChannelVersionCache;	// 120 = 0x78
    _Bool _isSimulateResetLoopTest;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_ipsecQueue;	// 136 = 0x88
    _Bool _useBTDatagramPipe;	// 144 = 0x90
    _Bool _ignoreUTunChannelWriteSignal;	// 145 = 0x91
}

+ (id)sharedInstance;	// IMP=0x00000001004f0184
- (void).cxx_destruct;	// IMP=0x0000000100532dc4
@property(readonly, nonatomic) IDSLinkManager *linkManager; // @synthesize linkManager=_linkManager;
- (void)onTransportThread_StopBTDatagramLinkForDefaultPairedDevice;	// IMP=0x0000000100532d54
- (unsigned long long)onTransportThread_SendWithConnectionContext:(id)arg1 packetBuffer:(CDStruct_12676517 *)arg2;	// IMP=0x0000000100532b10
- (void)clearStats;	// IMP=0x00000001005328a4
- (void)didUpdatePairedDevice:(id)arg1;	// IMP=0x0000000100532168
- (void)didRemovePairedDevice:(id)arg1;	// IMP=0x000000010053211c
- (void)didAddPairedDevice:(id)arg1;	// IMP=0x00000001005320b4
- (void)link:(id)arg1 hasSpaceAvailable:(_Bool)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x0000000100531de0
- (void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00000001005319a8
- (void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x0000000100531320
- (_Bool)link:(id)arg1 didReceivePacket:(CDStruct_12676517 *)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x0000000100530cc8
- (void)sendSuspendOTRNegotiationMessage:(id)arg1;	// IMP=0x0000000100530a24
- (void)sendOTRNegotiationMessage:(id)arg1 negotiationCount:(unsigned int)arg2 negotiationData:(id)arg3;	// IMP=0x00000001005306b8
- (void)setLinkPreferences:(id)arg1;	// IMP=0x00000001005304d0
- (void)setPreferInfraWiFi:(_Bool)arg1;	// IMP=0x0000000100530234
- (unsigned long long)totalPacketsReceivedForDevice:(id)arg1 services:(id)arg2;	// IMP=0x000000010052fd1c
- (unsigned long long)totalPacketsSentForDevice:(id)arg1 services:(id)arg2;	// IMP=0x000000010052f804
- (id)perServiceDataReceivedForDevice:(id)arg1 services:(id)arg2;	// IMP=0x000000010052ef10
- (id)perServiceDataSentForDevice:(id)arg1 services:(id)arg2;	// IMP=0x000000010052e61c
- (id)perServiceDataTransferredForDevice:(id)arg1 services:(id)arg2;	// IMP=0x000000010052e254
- (id)onTransportThread_PerServiceDataTransferredForDevice:(id)arg1 services:(id)arg2;	// IMP=0x000000010052d7f8
- (id)copyLinkStatsDict;	// IMP=0x000000010052d584
- (void)deletePairedDevice:(id)arg1;	// IMP=0x000000010052d2bc
- (void)connectPairedDevice:(id)arg1;	// IMP=0x000000010052cff4
- (void)addPairedDevice:(id)arg1;	// IMP=0x000000010052cd2c
- (void)tearDownEncryptionForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;	// IMP=0x000000010052c9e0
- (void)obliterateConnectionInfoForCBUUID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;	// IMP=0x000000010052c2a8
- (void)obliterateConnectionInfoWithCompletionBlock:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;	// IMP=0x000000010052c1fc
- (void)obliterateConnectionInfoForCBUUID:(id)arg1;	// IMP=0x000000010052c050
- (void)startLocalSetup;	// IMP=0x000000010052bf30
- (void)onTransportThread_updateSessionParticipants:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 participants:(id)arg4;	// IMP=0x000000010052be1c
- (void)onTransportThread_getSessionInfo:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 options:(id)arg4;	// IMP=0x000000010052bd08
- (unsigned long long)onTransportThread_getLinkType:(id)arg1;	// IMP=0x000000010052bc94
- (void)onTransportThread_CurrentCellularSignalStrength:(id)arg1 signalRaw:(int *)arg2 signalStrength:(int *)arg3 signalGrade:(int *)arg4;	// IMP=0x000000010052bba0
- (void)onTransportThread_setWiFiAssistState:(id)arg1 isWiFiAssistEnabled:(_Bool)arg2;	// IMP=0x000000010052bb20
- (void)onTransportThread_StopKeepAlive:(id)arg1 linkIDs:(id)arg2;	// IMP=0x000000010052ba7c
- (void)onTransportThread_UpdateProtocolQualityOfService:(id)arg1 linkID:(BOOL)arg2 isGood:(_Bool)arg3;	// IMP=0x000000010052b9e8
- (void)onTransportThread_DropIPPackets:(id)arg1 linkID:(BOOL)arg2 payloadArray:(id)arg3;	// IMP=0x000000010052b930
- (void)onTransportThread_SetPacketNotificationFilter:(id)arg1 linkID:(BOOL)arg2 uniqueTag:(unsigned int)arg3 isEnabled:(_Bool)arg4;	// IMP=0x000000010052b88c
- (void)onTransportThread_SetDefaultUnderlyingLink:(id)arg1 linkID:(BOOL)arg2;	// IMP=0x000000010052b80c
- (void)onTransportThread_SendSKEData:(id)arg1 skeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010052b730
- (void)getLinkInformationForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010052b49c
- (void)handleAllocateRequestFailureForDevice:(id)arg1 requestID:(id)arg2 errorCode:(int)arg3;	// IMP=0x000000010052b2f4
- (void)setAcceptedRelaySession:(id)arg1 relaySessionID:(id)arg2 options:(id)arg3;	// IMP=0x000000010052b100
- (void)disconnectGlobalLinkForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010052ae4c
- (void)connectGlobalLinkForDevice:(id)arg1 sessionInfo:(id)arg2 connectReadyHandler:(CDUnknownBlockType)arg3 withLocalInterfacePreference:(int)arg4;	// IMP=0x000000010052ab4c
- (void)startGlobalLinkForDevice:(id)arg1;	// IMP=0x000000010052aa0c
- (unsigned long long)onTransportThread_SendToGlobalLinkWithSessionID:(id)arg1 packetBufferArray:(struct **)arg2 arraySize:(int)arg3;	// IMP=0x000000010052a94c
- (unsigned long long)onTransportThread_SendToGlobalLinkWithSessionID:(id)arg1 packetBuffer:(CDStruct_12676517 *)arg2;	// IMP=0x000000010052a89c
- (void)stopGlobalLinkForDevice:(id)arg1;	// IMP=0x000000010052a480
- (void)startConnectionForDevice:(id)arg1 isInitiator:(_Bool)arg2 remotePartyID:(id)arg3 useStunMICheck:(_Bool)arg4;	// IMP=0x000000010052a29c
- (void)processRemoteConnectionDataForDevice:(id)arg1 remoteConnectionData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010052a094
- (void)createConnectionDataForDevice:(id)arg1 localPartyID:(id)arg2 dataReadyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100529e8c
- (void)stopUDPGlobalLinkForDevice:(id)arg1;	// IMP=0x0000000100529a70
- (void)startUDPGlobalLinkForDevice:(id)arg1;	// IMP=0x0000000100529930
- (void)resumeSocketWithOptions:(id)arg1;	// IMP=0x0000000100529164
- (void)suspendSocketWithOptions:(id)arg1;	// IMP=0x0000000100528bd0
- (void)checkSuspendTrafficForDevice:(id)arg1 wait:(_Bool)arg2;	// IMP=0x00000001005287fc
- (void)doCheckSuspendTrafficForDevice:(id)arg1;	// IMP=0x0000000100528144
- (void)closeSocketWithOptions:(id)arg1;	// IMP=0x00000001005280cc
- (void)closeSocketWithOptions:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010052737c
- (void)cleanupSocketsForClient:(id)arg1;	// IMP=0x0000000100526410
- (void)openSocketWithOptions:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010052428c
- (void)prepareDefaultPairedConnectionInfoWithDeviceUniqueID:(id)arg1 shouldUseIPsecLink:(_Bool)arg2;	// IMP=0x0000000100523acc
- (id)_prepareConnectionInfoWithCBUUID:(id)arg1 deviceUniqueID:(id)arg2 shouldUseIPsecLink:(_Bool)arg3 identityPair:(id)arg4 remoteDeviceEncryptionInfo:(id)arg5;	// IMP=0x000000010052383c
- (id)defaultPairedDeviceIdentityPair;	// IMP=0x000000010052341c
- (void)closeDataConnectionWithDeviceConnectionInfo:(id)arg1 options:(id)arg2;	// IMP=0x0000000100522ed4
- (void)setupDataConnectionWithDeviceConnectionInfo:(id)arg1 options:(id)arg2;	// IMP=0x00000001005203ec
- (id)controlChannelVersionForCbuuid:(id)arg1;	// IMP=0x000000010052033c
- (void)receiveControlChannelMessage:(id)arg1 fromCbuuid:(id)arg2 deviceUniqueID:(id)arg3;	// IMP=0x00000001005169e8
- (id)stringComponentsForServiceConnectorService:(id)arg1;	// IMP=0x0000000100516970
- (void)startCompressionForConnection:(id)arg1 deviceConnectionInfo:(id)arg2;	// IMP=0x0000000100515824
- (_Bool)processCompressionResponse:(id)arg1 fromDeviceConnectionInfo:(id)arg2;	// IMP=0x000000010051417c
- (_Bool)processCompressionRequest:(id)arg1 fromDeviceConnectionInfo:(id)arg2;	// IMP=0x00000001005121c0
- (void)internalOpenSocketWithDestination:(id)arg1 localSA:(id)arg2 remoteSA:(id)arg3 protocol:(int)arg4 trafficClass:(int)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100511564
- (_Bool)handleIncomingPacket:(CDStruct_12676517 *)arg1 fromDeviceToken:(id)arg2;	// IMP=0x000000010050da98
- (void)resetAllConnectionsForDevice:(id)arg1;	// IMP=0x000000010050d7e4
- (void)removeConnection:(id)arg1 fromDeviceConnectionInfo:(id)arg2 removeCode:(long long)arg3 removeReason:(id)arg4;	// IMP=0x000000010050cd58
- (id)initWithName:(id)arg1 address:(id)arg2 andTestTransport:(id)arg3;	// IMP=0x000000010050cc88
- (void)resetUTunTCPConnection:(id)arg1 forDeviceConnectionInfo:(id)arg2;	// IMP=0x000000010050b9f0
- (void)resetIPsecTCPConnection:(id)arg1 forDeviceConnectionInfo:(id)arg2;	// IMP=0x000000010050b7cc
- (void)resetTCPConnection:(id)arg1 forDeviceConnectionInfo:(id)arg2;	// IMP=0x000000010050b6ec
- (void)startControlChannelWithDevice:(id)arg1 endpoint:(id)arg2;	// IMP=0x0000000100509904
- (void)didConnectControlChannelForDeviceConnectionInfo:(id)arg1 connection:(id)arg2 error:(id)arg3;	// IMP=0x0000000100508560
- (void)prepareControlChannelForDeviceConnectionInfo:(id)arg1 genericConnection:(id)arg2;	// IMP=0x0000000100508330
- (void)internalStartConnectionWithEndpoint:(id)arg1 service:(const char *)arg2 parameters:(id)arg3 serviceConnector:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100507990
- (id)init;	// IMP=0x00000001005072e4
- (id)setupNewDeviceConnectionInfoForCbuuid:(id)arg1 deviceUniqueID:(id)arg2 identityPair:(id)arg3 remoteDeviceEncryptionInfo:(id)arg4 shouldUseIPsecLink:(_Bool)arg5;	// IMP=0x0000000100505974
- (_Bool)setupIPsecLinkForDeviceConnectionInfo:(id)arg1;	// IMP=0x00000001005055a4
- (void)startDataChannelWithDevice:(id)arg1 genericConnection:(id)arg2 serviceConnectorService:(id)arg3 endpoint:(id)arg4;	// IMP=0x00000001004fd9d4
- (_Bool)setupUTunForDeviceConnectionInfo:(id)arg1;	// IMP=0x00000001004fb65c
- (unsigned char)handleUtunChannelWrite:(id)arg1 source:(struct sockaddr *)arg2 destination:(struct sockaddr *)arg3 upperProtocol:(unsigned char)arg4 bytes:(const void *)arg5 bytesLen:(unsigned long long)arg6;	// IMP=0x00000001004fac60
- (void)handleUtunChannelRead:(id)arg1 limit:(unsigned int)arg2;	// IMP=0x00000001004fa824
- (void)handleIPPayload:(const void *)arg1 bytesLength:(unsigned long long)arg2 source:(struct sockaddr *)arg3 destination:(struct sockaddr *)arg4 upperProtocol:(unsigned char)arg5 forDeviceConnectionInfo:(id)arg6 flush:(_Bool)arg7 callerShouldStop:(_Bool *)arg8;	// IMP=0x00000001004f6b84
- (void)_getStallDetectorForConnection:(id)arg1 deviceConnecionInfo:(id)arg2;	// IMP=0x00000001004f2d80
- (void)_reloadSettings;	// IMP=0x00000001004f2580
- (void)reloadSettings;	// IMP=0x00000001004f0254

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

