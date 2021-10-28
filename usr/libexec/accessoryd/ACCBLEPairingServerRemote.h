//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCBLEPairingXPCServerProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface ACCBLEPairingServerRemote : NSObject <ACCBLEPairingXPCServerProtocol>
{
    NSXPCConnection *_XPCConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000fc874
@property(readonly, nonatomic) NSXPCConnection *XPCConnection; // @synthesize XPCConnection=_XPCConnection;
- (void)stopBLEUpdates:(id)arg1 blePairingUUID:(id)arg2;	// IMP=0x00000001000fc5d8
- (void)deviceUpdatePairingInfo:(id)arg1 blePairingUUID:(id)arg2 pairType:(unsigned char)arg3 pairInfo:(id)arg4;	// IMP=0x00000001000fc33c
- (void)devicePairingData:(id)arg1 blePairingUUID:(id)arg2 pairType:(unsigned char)arg3 pairData:(id)arg4;	// IMP=0x00000001000fc0a0
- (void)deviceStateUpdate:(id)arg1 blePairingUUID:(id)arg2 bRadioOn:(_Bool)arg3 pairState:(int)arg4 bPairModeOn:(_Bool)arg5;	// IMP=0x00000001000fbe04
- (void)startBLEUpdates:(id)arg1 blePairingUUID:(id)arg2 pairType:(unsigned char)arg3 bRadioUpdatesOn:(_Bool)arg4 bPairInfoUpdatesOn:(_Bool)arg5;	// IMP=0x00000001000fbb68
- (void)initConnection:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fb8dc
- (void)dealloc;	// IMP=0x00000001000fb890
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00000001000fb71c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
