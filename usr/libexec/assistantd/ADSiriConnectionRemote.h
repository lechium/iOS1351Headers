//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADPeerStreamConnectionDelegate-Protocol.h"
#import "SiriCoreConnectionProviderDelegate-Protocol.h"

@class ADPeerConnectionProvider, ADPeerStreamConnection, NSString, NSURL;
@protocol OS_dispatch_data, OS_dispatch_queue, OS_dispatch_source, SiriCoreConnectionProvider;

@interface ADSiriConnectionRemote : NSObject <SiriCoreConnectionProviderDelegate, ADPeerStreamConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADPeerStreamConnection *_peerConnection;	// 16 = 0x10
    ADPeerConnectionProvider *_peerProvider;	// 24 = 0x18
    NSObject<OS_dispatch_data> *_networkOutputBuffer;	// 32 = 0x20
    id <SiriCoreConnectionProvider> _networkConnectionProvider;	// 40 = 0x28
    _Bool _dataHasBeenWrittenToNetwork;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_staleNetworkTimerSource;	// 56 = 0x38
    unsigned char _buffer[4096];	// 64 = 0x40
    NSURL *_networkURL;	// 4160 = 0x1040
    struct __CFHTTPMessage *_outgoingHTTPHeader;	// 4168 = 0x1048
    long long _networkConnectionSequenceNumber;	// 4176 = 0x1050
    NSObject<OS_dispatch_data> *_safetyNetBuffer;	// 4184 = 0x1058
    unsigned int _ioConnect;	// 4192 = 0x1060
    struct IONotificationPort *_ioNotificationPortRef;	// 4200 = 0x1068
    unsigned int _ioNotifier;	// 4208 = 0x1070
    unsigned long long _metricsCount;	// 4216 = 0x1078
    double _currentStartTime;	// 4224 = 0x1080
    double _firstStartTime;	// 4232 = 0x1088
    double _currentOpenTime;	// 4240 = 0x1090
    double _firstByteReadTime;	// 4248 = 0x1098
    unsigned long long _startCount;	// 4256 = 0x10a0
    NSURL *_networkURLFromPeer;	// 4264 = 0x10a8
    NSString *_connectionId;	// 4272 = 0x10b0
    _Bool _connectByPOP;	// 4280 = 0x10b8
}

- (void).cxx_destruct;	// IMP=0x0000000100165a04
- (void)_doMetricsBookkeepingForNetworkStreamStart;	// IMP=0x0000000100165988
- (void)_doMetricsBookkeepingForPeerStreamsStart;	// IMP=0x0000000100165974
- (void)_connectionMetricsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010016575c
- (void)_unregisterForSleepNotification;	// IMP=0x00000001001656dc
- (void)_registerForSleepNotification;	// IMP=0x0000000100165664
- (void)_powerChangedMessageType:(unsigned int)arg1 notificationID:(long long)arg2;	// IMP=0x0000000100165604
- (void)_prepareForSleep;	// IMP=0x0000000100165584
- (void)_writeDataToNetwork:(id)arg1;	// IMP=0x00000001001653d4
- (void)_tryToWriteToNetworkConnection;	// IMP=0x0000000100165360
- (void)_networkConnectionErrorOccurred:(id)arg1;	// IMP=0x00000001001652ec
- (void)_networkConnectionDidOpen;	// IMP=0x00000001001651fc
- (void)_networkConnectionReceivedData:(id)arg1;	// IMP=0x000000010016506c
- (void)_waitForNetworkData;	// IMP=0x0000000100164eb8
- (void)_writeDataToPeer:(id)arg1;	// IMP=0x0000000100164d38
- (void)_peerReadStreamErrorOccurred:(id)arg1;	// IMP=0x0000000100164cc4
- (void)_peerConnectionReceivedData:(id)arg1;	// IMP=0x0000000100164890
- (void)_waitForPeerData;	// IMP=0x0000000100164664
- (void)connectionProvider:(id)arg1 receivedError:(id)arg2;	// IMP=0x00000001001643e4
- (void)_cancelStaleNetworkTimer;	// IMP=0x00000001001643a8
- (void)_setupStaleNetworkTimerForProvider:(id)arg1;	// IMP=0x000000010016414c
- (void)_networkConnectionDidEnd;	// IMP=0x0000000100164094
- (void)_networkConnectionFailure;	// IMP=0x0000000100163f64
- (void)_closeNetworkConnection;	// IMP=0x0000000100163e84
- (void)_didEstablishNetworkConnectionForProvider:(id)arg1 initialPayload:(id)arg2 ofLength:(unsigned long long)arg3 error:(id)arg4;	// IMP=0x0000000100163b44
- (void)_establishNetworkConnectionToURL:(id)arg1 connectionId:(id)arg2 withPOP:(_Bool)arg3 countAgainstFallbacksAllowed:(_Bool)arg4;	// IMP=0x0000000100163248
- (void)_establishNetworkConnectionToURL:(id)arg1 connectionId:(id)arg2 withPOP:(_Bool)arg3;	// IMP=0x00000001001631ec
- (_Bool)_hasOrIsEsablishingNetworkConnection;	// IMP=0x00000001001631a0
- (id)_networkConnectionProvider;	// IMP=0x0000000100163138
- (void)peerStreamConnection:(id)arg1 requestMetrics:(CDUnknownBlockType)arg2;	// IMP=0x0000000100162fa4
- (void)peerStreamConnectionHasIncomingPeer:(id)arg1;	// IMP=0x0000000100162cc8
- (void)peerStreamConnection:(id)arg1 failedWithError:(id)arg2;	// IMP=0x0000000100162b7c
- (void)_peerConnectionDidEnd;	// IMP=0x0000000100162ac4
- (void)_peerConnectionFailure;	// IMP=0x0000000100162a0c
- (void)_restartConnectionProviders;	// IMP=0x0000000100162934
- (void)_fallbackWithSafetyNet;	// IMP=0x0000000100162840
- (id)_prependHeader:(struct __CFHTTPMessage *)arg1 toOutputBuffer:(id)arg2;	// IMP=0x0000000100162764
- (void)_insertCompanionSpecificDataIntoHeader:(struct __CFHTTPMessage *)arg1;	// IMP=0x000000010016271c
- (id)_tryToReadHTTPHeaderIntoMessage:(struct __CFHTTPMessage *)arg1 fromData:(id)arg2 isComplete:(_Bool *)arg3;	// IMP=0x000000010016256c
- (id)_tryToReadPeerStreamHeaderFromData:(id)arg1 needsReconnect:(_Bool *)arg2;	// IMP=0x0000000100162358
- (void)_closePeerConnection;	// IMP=0x00000001001622e4
- (void)_establishPeerConnection;	// IMP=0x0000000100161f24
- (_Bool)_hasPeerConnection;	// IMP=0x0000000100161f14
- (id)_peerConnection;	// IMP=0x0000000100161f0c
- (void)_preheat;	// IMP=0x0000000100161e9c
- (void)dealloc;	// IMP=0x0000000100161e30
- (id)init;	// IMP=0x00000001001619a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
