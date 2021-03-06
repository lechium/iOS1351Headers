//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSLink-Protocol.h"
#import "IDSLinkDelegate-Protocol.h"

@class IDSUDPLink, NSData, NSMutableArray, NSString;
@protocol IDSLinkDelegate, OS_dispatch_source;

@interface IDSUDPGlobalLink : NSObject <IDSLink, IDSLinkDelegate>
{
    IDSUDPLink *_udpLink;	// 8 = 0x8
    id <IDSLinkDelegate> _delegate;	// 16 = 0x10
    id <IDSLinkDelegate> _alternateDelegate;	// 24 = 0x18
    CDUnknownBlockType _dataReadyHandler;	// 32 = 0x20
    CDUnknownBlockType _completionHandler;	// 40 = 0x28
    NSMutableArray *_remoteAddressArray;	// 48 = 0x30
    struct IDSSockAddrPairTable _sockAddrPairTable;	// 56 = 0x38
    unsigned int _sourceInterfaceIndex;	// 1552 = 0x610
    struct sockaddr_storage _sourceAddress;	// 1560 = 0x618
    struct sockaddr_storage _destinationAddress;	// 1688 = 0x698
    double _connectionRequestStartTime;	// 1816 = 0x718
    double _nominateRequestStartTime;	// 1824 = 0x720
    _Bool _isInvalidated;	// 1832 = 0x728
    _Bool _notifyReachableDone;	// 1833 = 0x729
    _Bool _useStunMICheck;	// 1834 = 0x72a
    NSData *_keyData;	// 1840 = 0x730
    NSString *_localPartyID;	// 1848 = 0x738
    NSString *_remotePartyID;	// 1856 = 0x740
    NSMutableArray *_nominateBlocks;	// 1864 = 0x748
    NSObject<OS_dispatch_source> *_echoTimer;	// 1872 = 0x750
    NSString *_cbuuid;	// 1880 = 0x758
    NSString *_deviceUniqueID;	// 1888 = 0x760
    unsigned long long _state;	// 1896 = 0x768
    unsigned long long _headerOverhead;	// 1904 = 0x770
    unsigned long long _totalBytesSent;	// 1912 = 0x778
    unsigned long long _totalPacketsSent;	// 1920 = 0x780
    unsigned long long _totalBytesReceived;	// 1928 = 0x788
    unsigned long long _totalPacketsReceived;	// 1936 = 0x790
    unsigned long long _previousBytesSent;	// 1944 = 0x798
    unsigned long long _previousPacketsSent;	// 1952 = 0x7a0
    unsigned long long _previousBytesReceived;	// 1960 = 0x7a8
    unsigned long long _previousPacketsReceived;	// 1968 = 0x7b0
    double _previousReportTime;	// 1976 = 0x7b8
}

- (void).cxx_destruct;	// IMP=0x00000001001f78cc
@property(retain, nonatomic) NSString *remotePartyID; // @synthesize remotePartyID=_remotePartyID;
@property(retain, nonatomic) NSString *localPartyID; // @synthesize localPartyID=_localPartyID;
@property __weak id <IDSLinkDelegate> alternateDelegate; // @synthesize alternateDelegate=_alternateDelegate;
@property __weak id <IDSLinkDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) unsigned long long state; // @synthesize state=_state;
@property(retain) NSString *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
@property(retain) NSString *cbuuid; // @synthesize cbuuid=_cbuuid;
- (_Bool)link:(id)arg1 didReceivePacket:(CDStruct_12676517 *)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x00000001001f7054
- (void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00000001001f6fa8
- (void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00000001001f6efc
- (void)_forwardPacketBuffer:(CDStruct_12676517 *)arg1 fromDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00000001001f6e30
- (id)generateLinkReport:(double)arg1 isCurrentLink:(_Bool)arg2;	// IMP=0x00000001001f6aa8
- (unsigned long long)sendPacketBufferArray:(struct **)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x00000001001f6a1c
- (unsigned long long)sendPacketBuffer:(CDStruct_12676517 *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00000001001f6344
- (_Bool)remoteHostAwake;	// IMP=0x00000001001f6328
- (_Bool)_processStunPacket:(CDStruct_12676517 *)arg1 fromDevice:(id)arg2 arrivalTime:(double)arg3 fromDeviceUniqueID:(id)arg4 cbuuid:(id)arg5;	// IMP=0x00000001001f5420
- (_Bool)_processStunDataIndication:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remmoteAddress:(struct sockaddr *)arg5 arrivalTime:(double)arg6 packetBuffer:(CDStruct_12676517 *)arg7 fromDeviceUniqueID:(id)arg8 cbuuid:(id)arg9;	// IMP=0x00000001001f4bb8
- (_Bool)_processStunEchoResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remmoteAddress:(struct sockaddr *)arg5 arrivalTime:(double)arg6;	// IMP=0x00000001001f4254
- (_Bool)_processStunEchoRequest:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remmoteAddress:(struct sockaddr *)arg5 arrivalTime:(double)arg6;	// IMP=0x00000001001f3578
- (_Bool)_processStunBindingResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remmoteAddress:(struct sockaddr *)arg5 arrivalTime:(double)arg6;	// IMP=0x00000001001f2b58
- (_Bool)_processStunBindingRequest:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remmoteAddress:(struct sockaddr *)arg5 arrivalTime:(double)arg6;	// IMP=0x00000001001f138c
- (void)_updateLinkTransportAddress:(unsigned int)arg1 localAddress:(struct sockaddr *)arg2 remoteAddress:(struct sockaddr *)arg3;	// IMP=0x00000001001f08b4
- (void)_stopEchoTimer;	// IMP=0x00000001001f0684
- (void)_startEchoTimer;	// IMP=0x00000001001f0270
- (void)_handleEchoTimer;	// IMP=0x00000001001efe8c
- (id)copyLinkStatsDict;	// IMP=0x00000001001efcd8
@property(readonly, getter=linkTypeString) NSString *linkTypeString;
@property(readonly) unsigned long long headerOverhead; // @synthesize headerOverhead=_headerOverhead;
- (void)_startConnectionEcho:(double)arg1;	// IMP=0x00000001001ef7ec
- (void)_sendNominateRequest;	// IMP=0x00000001001eee64
- (void)_sendConnectionCheckRequest;	// IMP=0x00000001001ee468
- (void)_createSimpleConnectionData;	// IMP=0x00000001001ed5bc
- (void)startConnectionForDevice:(id)arg1 isInitiator:(_Bool)arg2 remotePartyID:(id)arg3 useStunMICheck:(_Bool)arg4;	// IMP=0x00000001001ec988
- (void)processRemoteConnectionData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ea7ac
- (void)createConnectionData:(id)arg1 dataReadyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001e9f88
- (void)invalidate;	// IMP=0x00000001001e9dc4
- (void)dealloc;	// IMP=0x00000001001e9bd4
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;	// IMP=0x00000001001e9894

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

