//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ACCFeatureServer.h"

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, _ACCOOBBTPairingProviderInfo;

@interface ACCOOBBTPairingServer : ACCFeatureServer <NSXPCListenerDelegate>
{
    _ACCOOBBTPairingProviderInfo *_oobBtPairingProviderInfo;	// 40 = 0x28
    NSMutableDictionary *_registeredAccessoryConnections;	// 48 = 0x30
}

+ (id)sharedServer;	// IMP=0x0000000100060360
- (void).cxx_destruct;	// IMP=0x000000010006044c
@property(readonly, nonatomic) NSMutableDictionary *registeredAccessoryConnections; // @synthesize registeredAccessoryConnections=_registeredAccessoryConnections;
@property(retain, nonatomic) _ACCOOBBTPairingProviderInfo *oobBtPairingProviderInfo; // @synthesize oobBtPairingProviderInfo=_oobBtPairingProviderInfo;
- (void)legacyConnectionIDForAccessoryUID:(id)arg1 connectionID:(unsigned int)arg2;	// IMP=0x0000000100060084
- (void)notifyOfProvider:(id)arg1 connection:(id)arg2;	// IMP=0x000000010005ff38
- (void)accessoryOOBBTPairingCompletionStatus:(id)arg1 oobBtPairingUID:(id)arg2 result:(unsigned char)arg3;	// IMP=0x000000010005fc28
- (void)accessoryOOBBTPairingBTAccessoryInfo:(id)arg1 oobBtPairingUID:(id)arg2 accessoryMacAddr:(id)arg3 deviceClass:(unsigned int)arg4;	// IMP=0x000000010005f900
- (void)accessoryOOBBTPairingDetached:(id)arg1;	// IMP=0x000000010005f66c
- (void)accessoryOOBBTPairingAttached:(id)arg1 accInfoDict:(id)arg2;	// IMP=0x000000010005f2e0
- (_Bool)shouldAcceptXPCConnection:(id)arg1;	// IMP=0x000000010005f15c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010005e630
- (void)iterateAttachedConnectionsSync:(CDUnknownBlockType)arg1;	// IMP=0x000000010005e4b0
- (void)dealloc;	// IMP=0x000000010005e384
- (id)initWithXPCServiceName:(id)arg1 andFeatureNotification:(const char *)arg2;	// IMP=0x000000010005e1fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
