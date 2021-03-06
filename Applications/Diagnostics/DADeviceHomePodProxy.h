//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DADevice-Protocol.h"
#import "DADeviceConnectionDelegate-Protocol.h"

@class DADeviceConnectionHomePodProxy, DADeviceState, HMAccessory, NSString;

@interface DADeviceHomePodProxy : NSObject <DADeviceConnectionDelegate, DADevice>
{
    NSString *_serialNumber;	// 8 = 0x8
    HMAccessory *_accessory;	// 16 = 0x10
    DADeviceConnectionHomePodProxy *_connection;	// 24 = 0x18
    DADeviceState *_state;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010001fe24
@property(retain, nonatomic) DADeviceState *state; // @synthesize state=_state;
@property(retain, nonatomic) DADeviceConnectionHomePodProxy *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (id)_deviceType;	// IMP=0x000000010001fdc8
- (id)_deviceClass;	// IMP=0x000000010001fdbc
- (id)_deviceImageName;	// IMP=0x000000010001fc40
- (id)_marketingName;	// IMP=0x000000010001fc34
- (id)_productClass;	// IMP=0x000000010001fc28
- (void)deviceConnection:(id)arg1 didRecieveCommand:(id)arg2;	// IMP=0x000000010001fc24
- (void)resumeTests;	// IMP=0x000000010001fc20
- (void)suspendTests;	// IMP=0x000000010001fc1c
- (void)end;	// IMP=0x000000010001fbdc
- (void)idle;	// IMP=0x000000010001fb9c
- (void)start;	// IMP=0x000000010001fb5c
- (void)connect;	// IMP=0x000000010001fb1c
@property(readonly, nonatomic, getter=isLocal) _Bool local;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001f944
@property(readonly) unsigned long long hash;
- (id)initWithAccessory:(id)arg1;	// IMP=0x000000010001f634

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

