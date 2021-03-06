//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PTPRemoteCameraDeviceManager : NSObject <NSXPCListenerDelegate>
{
    NSMutableArray *_locationIDs;	// 8 = 0x8
    struct IONotificationPort *_masterNotificationPort;	// 16 = 0x10
    NSMutableArray *_remoteManagerConnections;	// 24 = 0x18
    NSMutableArray *_remoteCameraDevices;	// 32 = 0x20
    struct PTPDeviceMatchingInfo _deviceMatchingInfo;	// 40 = 0x28
    NSMutableDictionary *_osTransactions;	// 56 = 0x38
    struct os_unfair_lock_s _remoteManagerConnectionsLock;	// 64 = 0x40
    struct os_unfair_lock_s _remoteCameraDevicesLock;	// 68 = 0x44
}

@property(retain, nonatomic) NSMutableDictionary *osTransactions; // @synthesize osTransactions=_osTransactions;
@property(retain, nonatomic) NSMutableArray *remoteManagerConnections; // @synthesize remoteManagerConnections=_remoteManagerConnections;
- (void)removeRemoteManagerConnectionWithProcessIdentifier:(int)arg1;	// IMP=0x000000010000d8d4
- (void)addRemoteManagerConnection:(id)arg1;	// IMP=0x000000010000d6c4
- (void)closeDevice:(id)arg1;	// IMP=0x000000010000d4dc
- (void)openDevice:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d0e8
- (void)requestDeviceListWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000ce74
- (id)remoteDeviceForUUID:(id)arg1;	// IMP=0x000000010000cd1c
- (_Bool)addRemoteCameraDevice:(unsigned long long)arg1;	// IMP=0x000000010000cc7c
- (_Bool)removeRemoteCameraDevice:(unsigned long long)arg1;	// IMP=0x000000010000cac8
- (id)uuidForDeviceLocationID:(unsigned long long)arg1;	// IMP=0x000000010000c978
- (void)notifyClientUSBPTPDeviceRemoved:(unsigned long long)arg1;	// IMP=0x000000010000c800
- (void)notifyClientUSBPTPDeviceAdded:(unsigned long long)arg1;	// IMP=0x000000010000c68c
- (void)immediateMatch;	// IMP=0x000000010000c3dc
- (_Bool)startUSBPTPInterfaceNotifications;	// IMP=0x000000010000bf38
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010000bca8
- (void)addSelectorToInterface:(id)arg1 selectorString:(id)arg2 origin:(_Bool)arg3;	// IMP=0x000000010000baf8
- (void)dealloc;	// IMP=0x000000010000ba70
- (id)init;	// IMP=0x000000010000b9bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

