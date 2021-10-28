//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSWPPacketSendingProtocol-Protocol.h"
#import "WPContinuityDelegate-Protocol.h"

@class NSHashTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDSWPLinkManagerDelegate, WPContinuity;

@interface IDSWPLinkManager : NSObject <WPContinuityDelegate, IDSWPPacketSendingProtocol>
{
    id <WPContinuity> _continuity;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    NSMutableSet *_advertisingTypes;	// 24 = 0x18
    NSMutableSet *_scanningTypes;	// 32 = 0x20
    NSMutableDictionary *_linkIDToLink;	// 40 = 0x28
    NSMutableDictionary *_linkIDsConnecting;	// 48 = 0x30
    NSMutableDictionary *_linkIDsDisconnecting;	// 56 = 0x38
    NSMutableSet *_linkIDsAlwaysConnected;	// 64 = 0x40
    id <IDSWPLinkManagerDelegate> _delegate;	// 72 = 0x48
    NSHashTable *_connectivityDelegates;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x00000001001f9598
- (void).cxx_destruct;	// IMP=0x0000000100206170
- (void)sendReset;	// IMP=0x0000000100205ab4
- (void)continuity:(id)arg1 didLosePeer:(id)arg2 type:(long long)arg3;	// IMP=0x0000000100205a28
- (void)continuity:(id)arg1 didLosePeer:(id)arg2;	// IMP=0x00000001002059a8
- (void)continuityDidStopTrackingPeer:(id)arg1 peer:(id)arg2 type:(long long)arg3;	// IMP=0x000000010020591c
- (void)continuityDidStopTrackingPeer:(id)arg1 peer:(id)arg2;	// IMP=0x000000010020589c
- (void)continuityDidStartTrackingPeer:(id)arg1 peer:(id)arg2 type:(long long)arg3 error:(id)arg4;	// IMP=0x00000001002057dc
- (void)continuityDidStartTrackingPeer:(id)arg1 peer:(id)arg2 error:(id)arg3;	// IMP=0x0000000100205728
- (void)continuity:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;	// IMP=0x00000001002052c0
- (void)continuity:(id)arg1 didSendData:(id)arg2 toPeer:(id)arg3 error:(id)arg4;	// IMP=0x0000000100204f2c
- (void)continuity:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3;	// IMP=0x0000000100204438
- (void)continuity:(id)arg1 didConnectToPeer:(id)arg2 error:(id)arg3;	// IMP=0x0000000100202e00
- (void)continuity:(id)arg1 didDiscoverPeerWithData:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0000000100202d4c
- (void)continuity:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4;	// IMP=0x0000000100202700
- (void)continuity:(id)arg1 didFailToStartScanningForType:(long long)arg2 WithError:(id)arg3;	// IMP=0x000000010020231c
- (void)continuityDidStopScanningForType:(id)arg1 scanningType:(long long)arg2;	// IMP=0x0000000100201f84
- (void)continuityDidStartScanningForType:(id)arg1 scanningType:(long long)arg2;	// IMP=0x0000000100201bec
- (void)continuity:(id)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(id)arg3;	// IMP=0x0000000100201808
- (void)continuityDidStopAdvertisingOfType:(id)arg1 advertisingType:(long long)arg2 withError:(id)arg3;	// IMP=0x0000000100201424
- (void)continuityDidStopAdvertisingOfType:(id)arg1 advertisingType:(long long)arg2;	// IMP=0x000000010020108c
- (void)continuityDidStartAdvertisingOfType:(id)arg1 advertisingType:(long long)arg2;	// IMP=0x0000000100200c80
- (void)continuityDidChangeBluetoothBandwidthState:(id)arg1;	// IMP=0x0000000100200c34
- (void)continuityDidUpdateState:(id)arg1;	// IMP=0x0000000100200730
- (void)_cleanup;	// IMP=0x00000001002003c0
- (unsigned long long)sendData:(id)arg1 peerID:(id)arg2;	// IMP=0x00000001001fffa4
- (void)removeLink:(id)arg1;	// IMP=0x00000001001ffbf8
- (void)disconnectFromPeer:(id)arg1;	// IMP=0x00000001001ff268
- (void)connectToPeer:(id)arg1;	// IMP=0x00000001001ff11c
- (void)connectOnMainQueueToPeer:(id)arg1;	// IMP=0x00000001001fe35c
- (void)continuityStopTrackingPeer:(id)arg1 forType:(long long)arg2;	// IMP=0x00000001001fe304
- (void)continuityStartTrackingPeer:(id)arg1 forType:(long long)arg2;	// IMP=0x00000001001fe2ac
- (void)stopScanningForType:(long long)arg1;	// IMP=0x00000001001fde7c
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 boostedScan:(_Bool)arg4 duplicates:(_Bool)arg5;	// IMP=0x00000001001fd6dc
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(_Bool)arg5 duplicates:(_Bool)arg6;	// IMP=0x00000001001fce10
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3;	// IMP=0x00000001001fc774
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4;	// IMP=0x00000001001fbed0
- (void)stopAdvertisingOfType:(long long)arg1;	// IMP=0x00000001001fbaa0
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;	// IMP=0x00000001001fb3ec
- (void)clientInstancesRemoved;	// IMP=0x00000001001faa1c
- (void)clientInstanceCreatedWithMessageContext:(id)arg1;	// IMP=0x00000001001fa4fc
- (void)setAlwaysConnectedForCBUUID:(id)arg1;	// IMP=0x00000001001fa1cc
- (void)removeConnectivityDelegate:(id)arg1;	// IMP=0x00000001001fa168
- (void)addConnectivityDelegate:(id)arg1;	// IMP=0x00000001001f9e5c
- (_Bool)isScanningOrAdvertising;	// IMP=0x00000001001f9dc4
- (void)setDelegate:(id)arg1;	// IMP=0x00000001001f9a44
- (id)init;	// IMP=0x00000001001f9760

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
