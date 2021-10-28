//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACCUserNotification, NSDictionary, NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_source;

@interface OOBBTPairing2Accessory : NSObject
{
    NSMutableDictionary *_componentList;	// 8 = 0x8
    NSString *_accessoryUID;	// 16 = 0x10
    NSDictionary *_accInfo;	// 24 = 0x18
    NSString *_activeComponentUID;	// 32 = 0x20
    ACCUserNotification *_userNotification;	// 40 = 0x28
    NSXPCConnection *_connectionToACCBluetoothPairingService;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_waitForBeginPairingTimer;	// 56 = 0x38
}

+ (void)removeAccessoryForUID:(id)arg1;	// IMP=0x00000001000e8304
+ (void)addAccessory:(id)arg1;	// IMP=0x00000001000e8268
+ (id)accessoryForUID:(id)arg1;	// IMP=0x00000001000e81e4
+ (id)accessoryList;	// IMP=0x00000001000e8178
+ (id)accessoryListLock;	// IMP=0x00000001000e810c
- (void).cxx_destruct;	// IMP=0x00000001000e8438
@property(retain) NSObject<OS_dispatch_source> *waitForBeginPairingTimer; // @synthesize waitForBeginPairingTimer=_waitForBeginPairingTimer;
@property(retain) NSXPCConnection *connectionToACCBluetoothPairingService; // @synthesize connectionToACCBluetoothPairingService=_connectionToACCBluetoothPairingService;
@property(retain) ACCUserNotification *userNotification; // @synthesize userNotification=_userNotification;
@property(retain) NSString *activeComponentUID; // @synthesize activeComponentUID=_activeComponentUID;
@property(retain) NSDictionary *accInfo; // @synthesize accInfo=_accInfo;
@property(retain) NSString *accessoryUID; // @synthesize accessoryUID=_accessoryUID;
@property(retain) NSMutableDictionary *componentList; // @synthesize componentList=_componentList;
- (void)cancelPairing:(id)arg1;	// IMP=0x00000001000e7d94
- (void)startPairing:(id)arg1 macAddr:(id)arg2 pairingDataP192:(id)arg3 pairingDataP256:(id)arg4;	// IMP=0x00000001000e7058
- (int)checkComponentsAlreadyPaired;	// IMP=0x00000001000e6ef0
- (_Bool)checkAlreadyPairedComponent:(id)arg1;	// IMP=0x00000001000e698c
- (id)getDeviceMacAddress;	// IMP=0x00000001000e6428
- (void)disconnectFromACCBluetoothPairingService;	// IMP=0x00000001000e6358
- (void)connectToACCBluetoothPairingService;	// IMP=0x00000001000e6124
- (void)removeComponent:(id)arg1;	// IMP=0x00000001000e6114
- (void)addComponent:(id)arg1;	// IMP=0x00000001000e60a4
- (id)getPendingComponent;	// IMP=0x00000001000e5f5c
- (id)getComponentForUID:(id)arg1;	// IMP=0x00000001000e5f4c
@property(readonly) _Bool carPlaySupported;
@property(readonly) NSString *hwVer;
@property(readonly) NSString *fwVer;
@property(readonly) NSString *serialNum;
@property(readonly) NSString *manufacturer;
@property(readonly) NSString *model;
@property(readonly) NSString *displayName;
@property(readonly) NSString *name;
- (id)initWithUID:(id)arg1 accInfo:(id)arg2;	// IMP=0x00000001000e55e0

@end
