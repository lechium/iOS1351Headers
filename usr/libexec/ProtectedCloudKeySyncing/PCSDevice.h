//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NRDevice, NSHashTable, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface PCSDevice : NSObject
{
    _Bool _isActivePairedDevice;	// 8 = 0x8
    _Bool _isConnected;	// 9 = 0x9
    _Bool _isTombstone;	// 10 = 0xa
    _Bool _syncingIsRestricted;	// 11 = 0xb
    NRDevice *_nrDevice;	// 16 = 0x10
    NSString *_idsDeviceIdentifier;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_internalQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100010478
@property(readonly) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(readonly) NSHashTable *observers; // @synthesize observers=_observers;
@property _Bool syncingIsRestricted; // @synthesize syncingIsRestricted=_syncingIsRestricted;
@property _Bool isTombstone; // @synthesize isTombstone=_isTombstone;
@property _Bool isConnected; // @synthesize isConnected=_isConnected;
@property _Bool isActivePairedDevice; // @synthesize isActivePairedDevice=_isActivePairedDevice;
@property(readonly) NSString *idsDeviceIdentifier; // @synthesize idsDeviceIdentifier=_idsDeviceIdentifier;
@property(readonly) NRDevice *nrDevice; // @synthesize nrDevice=_nrDevice;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001032c
- (unsigned long long)hash;	// IMP=0x00000001000102e0
@property(readonly) NSString *UUID;
@property(readonly) NSString *serialNumber;
@property(readonly) NSString *osVersion;
@property(readonly) NSString *buildVersion;
@property(readonly) NSString *watchSize;
@property(readonly) NSString *model;
@property(readonly) _Bool isReachable;
- (_Bool)_onQueue_isReachable;	// IMP=0x000000010000fe3c
@property(readonly) _Bool supportsNewProtocol;
@property(readonly) _Bool supportsPCSKeySync;
@property(readonly) NSUUID *pairingID;
- (void)removeObserver:(id)arg1;	// IMP=0x000000010000fc4c
- (void)addObserver:(id)arg1;	// IMP=0x000000010000fb50
- (void)updateIDSDevice:(id)arg1;	// IMP=0x000000010000f710
- (id)initWithIDSDevice:(id)arg1;	// IMP=0x000000010000f438
- (id)init;	// IMP=0x000000010000f3a4

@end

