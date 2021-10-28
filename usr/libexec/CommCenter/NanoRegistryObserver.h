//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NRDevicePropertyObserver-Protocol.h"

@class NRDevice, NSString;

@interface NanoRegistryObserver : NSObject <NRDevicePropertyObserver>
{
    queue_9c98cea5 _queue;	// 8 = 0x8
    weak_ptr_bd320bb0 _delegate;	// 16 = 0x10
    NRDevice *_currentDevice;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x000000010085413c
- (void).cxx_destruct;	// IMP=0x00000001008540f4
- (void)notifyDeviceUpdate_sync:(id)arg1;	// IMP=0x0000000100853f64
- (void)registerAndNotifyDeviceUpdated_sync:(id)arg1;	// IMP=0x0000000100853e2c
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;	// IMP=0x0000000100853d5c
- (void)didDeviceUnpair;	// IMP=0x0000000100853cf4
- (void)didDeviceBecomeActive:(id)arg1;	// IMP=0x0000000100853bec
- (void)didEnterCompatibilityState:(id)arg1;	// IMP=0x00000001008539c8
- (void)sendInitialUpdate_sync;	// IMP=0x0000000100853924
- (void)stopObserving_sync;	// IMP=0x0000000100853894
- (void)startObserving_sync;	// IMP=0x000000010085375c
- (void)dealloc;	// IMP=0x00000001008536e0
- (id)initWithQueue:(struct queue)arg1 delegate:(weak_ptr_bd320bb0)arg2;	// IMP=0x0000000100853630

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
