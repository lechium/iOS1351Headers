//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"
#import "NRDevicePropertyObserver-Protocol.h"

@class IDSService, NRDevice, NSString;

@interface CPXService : NSObject <IDSServiceDelegate, NRDevicePropertyObserver>
{
    _Bool _ipV6;	// 8 = 0x8
    _Bool _serviceStarted;	// 9 = 0x9
    _Bool _nearby;	// 10 = 0xa
    IDSService *_service;	// 16 = 0x10
    struct _lockdown_connection *_conn;	// 24 = 0x18
    NSString *_clientHostIPAddress;	// 32 = 0x20
    NRDevice *_device;	// 40 = 0x28
    NSString *_udid;	// 48 = 0x30
    id _pairObserver;	// 56 = 0x38
    id _unpairObserver;	// 64 = 0x40
    id _activeObserver;	// 72 = 0x48
    id _inactiveObserver;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001000084dc
@property(retain, nonatomic) id inactiveObserver; // @synthesize inactiveObserver=_inactiveObserver;
@property(retain, nonatomic) id activeObserver; // @synthesize activeObserver=_activeObserver;
@property(retain, nonatomic) id unpairObserver; // @synthesize unpairObserver=_unpairObserver;
@property(retain, nonatomic) id pairObserver; // @synthesize pairObserver=_pairObserver;
@property(retain, nonatomic) NSString *udid; // @synthesize udid=_udid;
@property(retain, nonatomic) NRDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) NSString *clientHostIPAddress; // @synthesize clientHostIPAddress=_clientHostIPAddress;
@property(nonatomic) struct _lockdown_connection *conn; // @synthesize conn=_conn;
@property(nonatomic) _Bool nearby; // @synthesize nearby=_nearby;
@property _Bool serviceStarted; // @synthesize serviceStarted=_serviceStarted;
@property(nonatomic) _Bool ipV6; // @synthesize ipV6=_ipV6;
@property(retain, nonatomic) IDSService *service; // @synthesize service=_service;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;	// IMP=0x00000001000081a0
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x0000000100008190
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0000000100008180
- (void)checkNearbyDevices:(id)arg1;	// IMP=0x0000000100007ab0
- (id)receiveMessageWithError:(int *)arg1;	// IMP=0x0000000100007a84
- (void)stopService;	// IMP=0x00000001000078b0
- (void)startService;	// IMP=0x0000000100006dac
- (void)handlePairingNotification:(id)arg1;	// IMP=0x0000000100006b30
- (id)initWithLockdownContext:(struct _lockdown_connection *)arg1;	// IMP=0x00000001000069a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
