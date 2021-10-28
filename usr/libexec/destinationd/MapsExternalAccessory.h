//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EAAccessory, MapsExternalAccessoryState;

@interface MapsExternalAccessory : NSObject
{
    EAAccessory *_accessory;	// 8 = 0x8
    MapsExternalAccessoryState *_currentState;	// 16 = 0x10
    MapsExternalAccessoryState *_lastState;	// 24 = 0x18
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x000000010002f95c
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;	// IMP=0x000000010002f8cc
+ (id)sharedInstance;	// IMP=0x000000010002e4bc
- (void).cxx_destruct;	// IMP=0x0000000100030088
@property(retain, nonatomic) MapsExternalAccessoryState *lastState; // @synthesize lastState=_lastState;
@property(retain, nonatomic) MapsExternalAccessoryState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) EAAccessory *accessory; // @synthesize accessory=_accessory;
- (void)_disconnectFromVehicle;	// IMP=0x000000010002ffa0
- (void)_postNotificationsIfNeeded;	// IMP=0x000000010002fd84
- (_Bool)_isCurrentStateEqualLastState;	// IMP=0x000000010002fc44
- (void)_updateFromNotificationName:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010002f998
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000010002f8a0
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000010002f7cc
@property(readonly, nonatomic) int primaryEngineType;
@property(readonly, nonatomic) _Bool isHybridEngineType;
@property(readonly, nonatomic) _Bool needsFuel;
@property(readonly, nonatomic) _Bool hasEngineType;
- (void)_accessoryDidDisconnect:(id)arg1;	// IMP=0x000000010002f460
- (void)_accessoryDidUpdate:(id)arg1;	// IMP=0x000000010002f3cc
- (void)_accessoryDidUpdateVehicle:(id)arg1;	// IMP=0x000000010002f338
- (void)_accessoryDidConnect:(id)arg1;	// IMP=0x000000010002f2a4
- (void)_handleFake:(id)arg1;	// IMP=0x000000010002ee04
- (void)_stopListenForDebugTestNotifications;	// IMP=0x000000010002ece8
- (void)_startListenForDebugTestNotifications;	// IMP=0x000000010002e8ec
- (void)sendDestinationInformation:(id)arg1 identifier:(id)arg2;	// IMP=0x000000010002e864
- (void)dealloc;	// IMP=0x000000010002e7a8
- (id)init;	// IMP=0x000000010002e528

@end
