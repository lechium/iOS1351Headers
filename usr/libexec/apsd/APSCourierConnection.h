//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSProtocolParserDelegate-Protocol.h"
#import "APSTCPStreamDelegate-Protocol.h"
#import "PCConnectionManagerDelegate-Protocol.h"

@class APSProtocolParser, NSMutableArray, NSMutableDictionary, NSString, NSTimer, PCConnectionManager;
@protocol APSCourierConnectionDelegate, APSTCPStream;

@interface APSCourierConnection : NSObject <APSTCPStreamDelegate, PCConnectionManagerDelegate, APSProtocolParserDelegate>
{
    NSString *_domain;	// 8 = 0x8
    id <APSTCPStream> _streams[2];	// 16 = 0x10
    APSProtocolParser *_parsers[2];	// 32 = 0x20
    NSString *_redirectHost;	// 48 = 0x30
    unsigned char _redirectCount;	// 56 = 0x38
    PCConnectionManager *_connectionManagers[2];	// 64 = 0x40
    NSMutableDictionary *_contexts[2];	// 80 = 0x50
    NSTimer *_keepAliveTimers[2];	// 96 = 0x60
    _Bool _keepAliveV2Supported[2];	// 112 = 0x70
    NSString *_usingCachedIPAddress[2];	// 120 = 0x78
    _Bool _isConnecting[2];	// 136 = 0x88
    void *_keepAlivePowerAssertions[2];	// 144 = 0x90
    NSTimer *_connectionEstablishTimers[2];	// 160 = 0xa0
    void *_connectionEstablishPowerAssertions[2];	// 176 = 0xb0
    _Bool _isDualChannelAllowed;	// 192 = 0xc0
    id <APSCourierConnectionDelegate> _delegate;	// 200 = 0xc8
    long long _lastAttemptedInterface;	// 208 = 0xd0
    _Bool _remainsConnectedWhenWWANSuspends;	// 216 = 0xd8
    NSMutableArray *_connectionAttemptsInExpensiveConditions;	// 224 = 0xe0
    _Bool _powerOptimizationsForExpensiveNetworkingDisabled;	// 232 = 0xe8
    unsigned long long _maxExpensiveConditionsConnectionAttempts;	// 240 = 0xf0
    double _expensiveConditionsBackOffInterval;	// 248 = 0xf8
    double _wifiKeepAliveEarlyFireConstantInterval;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x0000000100076770
@property(nonatomic) double wifiKeepAliveEarlyFireConstantInterval; // @synthesize wifiKeepAliveEarlyFireConstantInterval=_wifiKeepAliveEarlyFireConstantInterval;
@property(nonatomic) double expensiveConditionsBackOffInterval; // @synthesize expensiveConditionsBackOffInterval=_expensiveConditionsBackOffInterval;
@property(nonatomic) unsigned long long maxExpensiveConditionsConnectionAttempts; // @synthesize maxExpensiveConditionsConnectionAttempts=_maxExpensiveConditionsConnectionAttempts;
@property(nonatomic) _Bool powerOptimizationsForExpensiveNetworkingDisabled; // @synthesize powerOptimizationsForExpensiveNetworkingDisabled=_powerOptimizationsForExpensiveNetworkingDisabled;
@property(nonatomic) _Bool remainsConnectedWhenWWANSuspends; // @synthesize remainsConnectedWhenWWANSuspends=_remainsConnectedWhenWWANSuspends;
@property(retain, nonatomic) NSString *redirectHost; // @synthesize redirectHost=_redirectHost;
- (void)tcpStreamDidFailToFindKeepAliveProxyInterface:(id)arg1;	// IMP=0x00000001000766e4
- (void)tcpStreamDidFailToObtainKeepAliveProxy:(id)arg1;	// IMP=0x00000001000766a4
- (void)tcpStreamDidFailToForceKeepAliveProxyInterface:(id)arg1;	// IMP=0x0000000100076664
- (void)tcpStreamHasConnected:(id)arg1 context:(id)arg2 enabledPackedFormat:(_Bool)arg3 maxEncoderTableSize:(unsigned long long)arg4 maxDecoderTableSize:(unsigned long long)arg5 secureHandshakeEnabled:(_Bool)arg6;	// IMP=0x0000000100076568
- (void)tcpStream:(id)arg1 hasDeterminedServerHostname:(id)arg2;	// IMP=0x00000001000764d8
- (void)tcpStream:(id)arg1 receivedServerBag:(id)arg2;	// IMP=0x00000001000764c4
- (void)tcpStream:(id)arg1 errorOccured:(id)arg2;	// IMP=0x000000010007638c
- (void)tcpStreamEndEncountered:(id)arg1;	// IMP=0x000000010007634c
- (unsigned long long)tcpStream:(id)arg1 dataReceived:(id)arg2;	// IMP=0x0000000100076298
- (void)protocolParser:(id)arg1 receiveAPNSPackError:(id)arg2;	// IMP=0x0000000100076208
- (void)connectionManager:(id)arg1 handleEvent:(int)arg2 context:(id)arg3;	// IMP=0x0000000100076170
- (_Bool)isPackedFormatOnInterface:(long long)arg1;	// IMP=0x000000010007615c
- (_Bool)parseMessage:(id)arg1 parameters:(id *)arg2 isInvalid:(_Bool *)arg3 lengthParsed:(unsigned long long *)arg4 onInterface:(long long)arg5;	// IMP=0x0000000100076148
- (void)sendTaskControlMessageWithMetadata:(id)arg1 messageId:(unsigned long long)arg2 onInterface:(long long)arg3;	// IMP=0x00000001000760ec
- (_Bool)sendMessageWithTopicHash:(id)arg1 identifier:(unsigned long long)arg2 payload:(id)arg3 token:(id)arg4 isPlistFormat:(_Bool)arg5 lastRTT:(id)arg6 onInterface:(long long)arg7;	// IMP=0x0000000100076008
- (void)sendFilterMessageWithEnabledHashes:(id)arg1 ignoredHashes:(id)arg2 opportunisticHashes:(id)arg3 pausedHashes:(id)arg4 token:(id)arg5 onInterface:(long long)arg6;	// IMP=0x0000000100075f28
- (void)sendMessageTracingAckWithTopic:(id)arg1 tracingUUID:(id)arg2 status:(int)arg3 token:(id)arg4 onInterface:(long long)arg5;	// IMP=0x0000000100075e80
- (void)sendAppTokenGenerateMessageWithTopicHash:(id)arg1 baseToken:(id)arg2 appId:(unsigned short)arg3 onInterface:(long long)arg4;	// IMP=0x0000000100075df4
- (void)sendKeepAliveMessageWithMetadata:(id)arg1 onInterface:(long long)arg2;	// IMP=0x0000000100075d98
- (void)sendMessageTransportAcknowledgeMessageOnInterface:(long long)arg1;	// IMP=0x0000000100075d3c
- (void)sendMessageAcknowledgeMessageWithResponse:(long long)arg1 messageId:(id)arg2 token:(id)arg3 onInterface:(long long)arg4;	// IMP=0x0000000100075cb0
- (void)sendSetActiveState:(_Bool)arg1 forInterval:(unsigned int)arg2 onInterface:(long long)arg3;	// IMP=0x0000000100075c54
- (void)sendSetActiveIntervalMessageWithInterval:(unsigned int)arg1 onInterface:(long long)arg2;	// IMP=0x0000000100075bf8
- (void)sendFlushResponseMessageWithPaddingLength:(unsigned long long)arg1 onInterface:(long long)arg2;	// IMP=0x0000000100075b9c
- (void)sendFlushMessageWithWantPaddingLength:(unsigned long long)arg1 paddingLength:(unsigned long long)arg2 onInterface:(long long)arg3;	// IMP=0x0000000100075b40
- (void)sendConnectMessageWithToken:(id)arg1 interface:(long long)arg2 activeInterval:(unsigned int)arg3 metadata:(id)arg4 certificate:(id)arg5 nonce:(id)arg6 signature:(id)arg7 redirectCount:(unsigned char)arg8 tcpHandshakeTimeMilliseconds:(double)arg9 dnsResolveTimeMilliseconds:(double)arg10 tlsHandshakeTimeMilliseconds:(double)arg11 consecutiveConnectionFailureReason:(id)arg12 onInterface:(long long)arg13;	// IMP=0x00000001000758a0
- (void)sendConnectMessageWithToken:(id)arg1 state:(int)arg2 interface:(long long)arg3 activeInterval:(unsigned int)arg4 metadata:(id)arg5 certificate:(id)arg6 nonce:(id)arg7 signature:(id)arg8 redirectCount:(unsigned char)arg9 onInterface:(long long)arg10;	// IMP=0x0000000100075798
- (void)holdPowerAssertionUntilStreamQuiesces;	// IMP=0x0000000100075740
@property(readonly, nonatomic) _Bool didPushCauseWake;
@property(nonatomic) _Bool isDualChannelAllowed;
- (void)_handleDualModeState;	// IMP=0x0000000100075228
- (unsigned long long)countOfGrowthActionsOnInterface:(long long)arg1;	// IMP=0x0000000100075208
- (_Bool)shouldClientScheduleReconnectDueToFailureOnInterface:(long long)arg1;	// IMP=0x00000001000751e4
- (int)currentGrowthStageOnInterface:(long long)arg1;	// IMP=0x00000001000751c4
- (double)currentKeepAliveIntervalOnInterface:(long long)arg1;	// IMP=0x00000001000751a4
@property(readonly, nonatomic) double minimumKeepAliveInterval;
@property(readonly, copy, nonatomic) NSString *ifname;
- (_Bool)isKeepAliveProxyConfiguredOnInterface:(long long)arg1;	// IMP=0x00000001000750e8
- (_Bool)isKeepAliveProxySupportedOnSocketOnInterface:(long long)arg1;	// IMP=0x00000001000750c4
- (_Bool)hasOpenConnectionOnInterface:(long long)arg1;	// IMP=0x00000001000750a0
@property(readonly, nonatomic) _Bool hasOpenConnection;
@property(readonly, nonatomic) unsigned long long countOpenConnections;
@property(readonly, nonatomic) unsigned long long countConnectedInterfaces;
- (_Bool)isConnectedOnInterface:(long long)arg1;	// IMP=0x0000000100074fa4
@property(readonly, nonatomic) _Bool isConnected;
- (_Bool)generationMatches:(unsigned long long)arg1 forInterface:(long long)arg2;	// IMP=0x0000000100074f14
- (_Bool)setIsConnected:(_Bool)arg1 onInterface:(long long)arg2;	// IMP=0x0000000100074b88
- (id)serverHostnameForInterface:(long long)arg1;	// IMP=0x0000000100074a64
- (id)serverIPAddressForInterface:(long long)arg1;	// IMP=0x0000000100074940
@property(readonly, nonatomic) long long lastAttemptedInterface;
@property(readonly, nonatomic) long long connectingInterface;
@property(readonly, nonatomic) long long preferredInterface;
@property(readonly, nonatomic) long long nextConnectionAttemptInterface;
@property(readonly, retain, nonatomic) NSString *tcpInfoDescription;
- (id)_currentStream;	// IMP=0x0000000100074778
@property(nonatomic) id <APSCourierConnectionDelegate> delegate;
- (id)objectForKey:(id)arg1 onInterface:(long long)arg2;	// IMP=0x00000001000746e0
- (void)setObject:(id)arg1 forKey:(id)arg2 onInterface:(long long)arg3;	// IMP=0x00000001000745fc
- (void)_keepAliveResponseTimerFired:(id)arg1;	// IMP=0x000000010007455c
- (void)clearKeepAliveResponseTimerOnInterface:(long long)arg1;	// IMP=0x00000001000744f4
- (void)startKeepAliveResponseTimerOnInterface:(long long)arg1 shortInterval:(_Bool)arg2;	// IMP=0x00000001000743d0
- (_Bool)hasKeepAliveResponseTimerOnInterface:(long long)arg1;	// IMP=0x00000001000743ac
- (void)_connectionEstablishTimerFired:(id)arg1;	// IMP=0x000000010007430c
- (void)clearConnectionEstablishTimerOnInterface:(long long)arg1;	// IMP=0x00000001000742a4
- (void)startConnectionEstablishTimerOnInterface:(long long)arg1;	// IMP=0x0000000100074198
- (_Bool)hasConnectionEstablishTimerOnInterface:(long long)arg1;	// IMP=0x0000000100074174
- (_Bool)hasConnectionEstablishTimer;	// IMP=0x0000000100074148
- (void)_updateConnectionManagerKeepAliveIntervalNonCellular;	// IMP=0x00000001000740ec
- (void)__updateConnectionManagerKeepAliveIntervalNonCellular;	// IMP=0x00000001000740a0
- (void)_updateConnectionManagerKeepAliveIntervalWWAN;	// IMP=0x0000000100074044
- (void)__updateConnectionManagerKeepAliveIntervalWWAN;	// IMP=0x0000000100073ff8
- (int)lastKeepAliveActionOnInterface:(long long)arg1;	// IMP=0x0000000100073ed4
- (_Bool)keepAliveV2SupportedOnInterface:(long long)arg1;	// IMP=0x0000000100073dd8
- (void)setKeepAliveV2Supported:(_Bool)arg1 onInterface:(long long)arg2;	// IMP=0x0000000100073ca4
- (void)updateConnectionManagerKeepAliveIntervalOnInterface:(long long)arg1;	// IMP=0x0000000100073b60
- (void)setEnableNonCellularOnConnectionManager:(_Bool)arg1;	// IMP=0x0000000100073b50
- (void)setMinimumIntervalFallbackEnabled:(_Bool)arg1;	// IMP=0x0000000100073b00
- (void)setKeepAliveGracePeriod:(double)arg1 onInterface:(long long)arg2;	// IMP=0x00000001000739c0
- (double)keepAliveGracePeriodOnInterface:(long long)arg1;	// IMP=0x000000010007389c
- (void)setUsingServerStatsAggressively:(_Bool)arg1 onInterface:(long long)arg2;	// IMP=0x0000000100073754
- (void)setServerStatsExpectedKeepAlive:(double)arg1 onInterface:(long long)arg2;	// IMP=0x0000000100073614
- (void)setServerStatsMinKeepAlive:(double)arg1 onInterface:(long long)arg2;	// IMP=0x00000001000734d4
- (void)setServerStatsMaxKeepAlive:(double)arg1 onInterface:(long long)arg2;	// IMP=0x0000000100073394
- (void)resumeManagerWithAction:(int)arg1 onInterface:(long long)arg2;	// IMP=0x00000001000731c4
- (_Bool)isExpensiveToUseInterface:(long long)arg1;	// IMP=0x0000000100073178
- (id)pcInterfaceMonitorOnInterface:(long long)arg1;	// IMP=0x000000010007312c
- (id)pcInterfaceMonitorNonCellular;	// IMP=0x000000010007311c
- (id)pcInterfaceMonitorWWAN;	// IMP=0x000000010007310c
- (void)stopAndResetManagerOnInterface:(long long)arg1;	// IMP=0x0000000100072f60
- (void)stopManagerOnInterface:(long long)arg1;	// IMP=0x0000000100072db4
- (void)stopManagers;	// IMP=0x0000000100072d6c
- (void)closeStreamForInterface:(long long)arg1;	// IMP=0x0000000100072d0c
- (void)writeDataInBackground:(id)arg1;	// IMP=0x0000000100072cac
- (void)writeDataInBackground:(id)arg1 onInterface:(long long)arg2;	// IMP=0x0000000100072b88
- (Class)tcpStreamClass;	// IMP=0x0000000100072b7c
- (void)connectToEnvironment:(id)arg1 onInterface:(long long)arg2 withIdentity:(struct __SecIdentity *)arg3 useAlternatePort:(_Bool)arg4 forceKeepAliveProxy:(_Bool)arg5;	// IMP=0x0000000100072744
- (_Bool)shouldConnectOnInterface:(long long)arg1;	// IMP=0x0000000100072340
- (void)setKeepAliveIntervalOverrideOnAudioAccessory;	// IMP=0x0000000100072248
- (_Bool)isSuspendedOnInterface:(long long)arg1;	// IMP=0x0000000100072128
- (void)setIsSuspended:(_Bool)arg1 onInterface:(long long)arg2;	// IMP=0x0000000100071fe0
- (void)setIsConnecting:(_Bool)arg1 onInterface:(long long)arg2;	// IMP=0x0000000100071ecc
- (_Bool)isConnectingOnInterface:(long long)arg1;	// IMP=0x0000000100071ea8
- (void)setUsingCachedIPAddress:(id)arg1 onInterface:(long long)arg2;	// IMP=0x0000000100071d78
- (id)usingCachedIPAddressOnInterface:(long long)arg1;	// IMP=0x0000000100071d4c
- (unsigned char)redirectCount;	// IMP=0x0000000100071d44
- (void)clearRedirectCount;	// IMP=0x0000000100071d3c
- (void)incrementRedirectCount;	// IMP=0x0000000100071d2c
- (long long)_interfaceForConnectionManager:(id)arg1;	// IMP=0x0000000100071d04
- (long long)_interfaceForStream:(id)arg1;	// IMP=0x0000000100071cdc
- (long long)_interfaceForProtocolParser:(id)arg1;	// IMP=0x0000000100071cb4
- (void)dealloc;	// IMP=0x0000000100071bb0
- (id)initWithEnvironment:(id)arg1;	// IMP=0x00000001000719a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

