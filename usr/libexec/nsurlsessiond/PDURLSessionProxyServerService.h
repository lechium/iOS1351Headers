//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDURLSessionProxyService.h"

#import "PDURLSessionProxyServerDelegate-Protocol.h"

@class NSMutableDictionary, NSObject, PDBluetoothCompanionLinkAssertion;
@protocol OS_dispatch_source;

@interface PDURLSessionProxyServerService : PDURLSessionProxyService <PDURLSessionProxyServerDelegate>
{
    NSMutableDictionary *_sessions;	// 80 = 0x50
    long long _infraWiFiRetainCount;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_infraWiFiTimer;	// 96 = 0x60
    long long _btLinkAssertionRetainCount;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_btLinkAssertionTimer;	// 112 = 0x70
    PDBluetoothCompanionLinkAssertion *_bluetoothCompanionLinkAssertion;	// 120 = 0x78
}

+ (id)sharedService;	// IMP=0x000000010000f968
- (void).cxx_destruct;	// IMP=0x000000010000eb74
- (void)proxyServerBecameInvalid:(id)arg1;	// IMP=0x000000010000eac0
- (void)_onqueue_handleFailedMessageSend:(id)arg1 ofType:(unsigned short)arg2;	// IMP=0x000000010000e9d8
- (void)_onqueue_handleReceivedMessage:(id)arg1 ofType:(unsigned short)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e200
- (id)_onqueue_loggableDescriptionForMessage:(id)arg1;	// IMP=0x000000010000e0d8
- (long long)_onqueue_IDSTimoutForMessage:(id)arg1;	// IMP=0x000000010000dfd0
- (id)_onqueue_sourceApplicationForMessage:(id)arg1;	// IMP=0x000000010000defc
- (long long)_onqueue_priorityForMessage:(id)arg1 ofType:(unsigned short)arg2 isReply:(_Bool)arg3;	// IMP=0x000000010000ddc0
- (void)_onqueue_devicesConnected;	// IMP=0x000000010000dda0
- (void)_onqueue_remoteDeviceStartedUp;	// IMP=0x000000010000dd30
- (void)releaseBTLinkAssertion;	// IMP=0x000000010000dcd0
- (void)retainBTLinkAssertion;	// IMP=0x000000010000dc70
- (void)releaseInfraWiFi;	// IMP=0x000000010000dc10
- (void)retainInfraWiFi;	// IMP=0x000000010000dbb0
- (void)start;	// IMP=0x000000010000db44
- (void)dealloc;	// IMP=0x000000010000dadc
- (id)init;	// IMP=0x000000010000da28

@end

