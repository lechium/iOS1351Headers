//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/CHSynchronizedLoggable.h>

#import "CHPairedSyncProtocol-Protocol.h"
#import "IDSServiceDelegate-Protocol.h"

@class CHPairedSyncCoordinator, CallHistoryDBClientHandle, IDSService, NSArray, NSMutableDictionary, NSString;

@interface CHIDSServiceDelegate : CHSynchronizedLoggable <CHPairedSyncProtocol, IDSServiceDelegate>
{
    IDSService *_service;	// 8 = 0x8
    NSMutableDictionary *_peerDevices;	// 16 = 0x10
    int _configuration;	// 24 = 0x18
    CallHistoryDBClientHandle *_database;	// 32 = 0x20
    CHPairedSyncCoordinator *_coordinator;	// 40 = 0x28
    NSString *_persistedDeviceListKey;	// 48 = 0x30
    NSArray *_bootstrappedDeviceUuids;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010002789c
@property(retain) NSArray *bootstrappedDeviceUuids; // @synthesize bootstrappedDeviceUuids=_bootstrappedDeviceUuids;
@property(retain) NSString *persistedDeviceListKey; // @synthesize persistedDeviceListKey=_persistedDeviceListKey;
- (void)startReunionSync;	// IMP=0x000000010002752c
- (void)startInitialSync;	// IMP=0x0000000100026fec
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000100026e08
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x0000000100026b0c
- (void)devicesChanged:(id)arg1 shouldRemoveUnregisteredDevices:(_Bool)arg2;	// IMP=0x0000000100026068
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x0000000100025fc8
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0000000100025e7c
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000100025b6c
- (void)handleTransactionData:(id)arg1 withConfigurationData:(id)arg2;	// IMP=0x0000000100025870
- (void)checkForBootstrapDeviceChanges;	// IMP=0x0000000100025468
- (void)rememberBootstrappedDevices:(id)arg1;	// IMP=0x0000000100025360
- (void)setupBootstrappedDevices;	// IMP=0x0000000100024f04
- (void)update:(id)arg1;	// IMP=0x0000000100024ca4
- (void)dealloc;	// IMP=0x0000000100024c48
- (id)initWithDatabase:(id)arg1;	// IMP=0x00000001000242c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
