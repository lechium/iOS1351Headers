//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DADeviceObserver-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface DADeviceObserverLocalPersistent : NSObject <DADeviceObserver>
{
    _Bool _isObserving;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_persistentTaskObservationQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_persistentTaskRegistrationQueue;	// 24 = 0x18
    NSMutableDictionary *_handlers;	// 32 = 0x20
    NSMutableSet *_devices;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100018890
@property(retain, nonatomic) NSMutableSet *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *persistentTaskRegistrationQueue; // @synthesize persistentTaskRegistrationQueue=_persistentTaskRegistrationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *persistentTaskObservationQueue; // @synthesize persistentTaskObservationQueue=_persistentTaskObservationQueue;
- (id)_spawnPersistentDevice;	// IMP=0x0000000100018814
- (void)_updateHandlers;	// IMP=0x0000000100018658
- (void)_updateDevicesWithSnapshot:(id)arg1;	// IMP=0x0000000100018384
- (void)enhancedLoggingDidUpdateStatus:(id)arg1;	// IMP=0x00000001000182fc
- (void)_endObserving;	// IMP=0x0000000100018284
- (void)_beginObserving;	// IMP=0x0000000100018184
- (void)endDiscoveringDevicesWithIdentifier:(id)arg1;	// IMP=0x0000000100018028
- (id)beginDiscoveringDevicesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100017e8c
- (void)discoverAllDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100017e1c
- (id)init;	// IMP=0x0000000100017d38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
