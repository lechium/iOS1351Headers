//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EPDeviceDeviceInfoDelegate-Protocol.h"

@class CBPeer, EPDevice, EPPeripheralObserverFactory, NSString, NSUUID;
@protocol EPDeviceInfoDelegate, EPResourceManagerProtocol;

@interface EPDeviceInfo : NSObject <EPDeviceDeviceInfoDelegate>
{
    EPDeviceInfo *me;	// 8 = 0x8
    _Bool _hasClassicDevice;	// 16 = 0x10
    _Bool _deviceWasHere;	// 17 = 0x11
    EPPeripheralObserverFactory *_peripheralFactory;	// 24 = 0x18
    CBPeer *_peer;	// 32 = 0x20
    NSUUID *_uuid;	// 40 = 0x28
    NSString *_btAddress;	// 48 = 0x30
    id <EPDeviceInfoDelegate> _delegate;	// 56 = 0x38
    EPDevice *_device;	// 64 = 0x40
    id <EPResourceManagerProtocol> _connectors;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000540a8
@property(retain, nonatomic) id <EPResourceManagerProtocol> connectors; // @synthesize connectors=_connectors;
@property(nonatomic) __weak EPDevice *device; // @synthesize device=_device;
@property(nonatomic) _Bool deviceWasHere; // @synthesize deviceWasHere=_deviceWasHere;
@property(nonatomic) __weak id <EPDeviceInfoDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *btAddress; // @synthesize btAddress=_btAddress;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) _Bool hasClassicDevice; // @synthesize hasClassicDevice=_hasClassicDevice;
@property(readonly, nonatomic) CBPeer *peer; // @synthesize peer=_peer;
- (id)newConnectorWithDelegate:(id)arg1;	// IMP=0x0000000100053ef4
@property(readonly, nonatomic) EPPeripheralObserverFactory *peripheralFactory; // @synthesize peripheralFactory=_peripheralFactory;
- (void)devicePairingSuccess:(id)arg1;	// IMP=0x0000000100053dd4
- (void)devicePairingFailure:(id)arg1;	// IMP=0x0000000100053d48
- (void)device:(id)arg1 peerDidInvalidate:(id)arg2;	// IMP=0x0000000100053cd4
- (void)deviceDidDeallocate:(id)arg1;	// IMP=0x0000000100053c88
- (_Bool)isPairing;	// IMP=0x0000000100053c48
- (void)reset;	// IMP=0x0000000100053c0c
- (id)newClassicDevice;	// IMP=0x0000000100053bbc
- (id)newCentralDevice;	// IMP=0x0000000100053b6c
- (id)newPeripheralDeviceWithAdvertisementData:(id)arg1 withRSSI:(id)arg2;	// IMP=0x0000000100053af4
- (id)initWithPeer:(id)arg1;	// IMP=0x0000000100053a68
- (void)dealloc;	// IMP=0x0000000100053a34
- (id)initBase;	// IMP=0x0000000100053a00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

