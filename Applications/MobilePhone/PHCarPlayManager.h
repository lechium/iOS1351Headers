//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TUCarPlayHardwareControlsBroadcaster, UIWindow;

@interface PHCarPlayManager : NSObject
{
    UIWindow *_carPlayWindow;	// 8 = 0x8
    TUCarPlayHardwareControlsBroadcaster *_hardwareControlsBroadcaster;	// 16 = 0x10
}

+ (_Bool)shouldLimitKeypadAccess;	// IMP=0x000000010008f320
+ (id)sharedCarPlayManager;	// IMP=0x000000010008ebf0
- (void).cxx_destruct;	// IMP=0x000000010008f4dc
@property(retain, nonatomic) TUCarPlayHardwareControlsBroadcaster *hardwareControlsBroadcaster; // @synthesize hardwareControlsBroadcaster=_hardwareControlsBroadcaster;
@property(retain, nonatomic) UIWindow *carPlayWindow; // @synthesize carPlayWindow=_carPlayWindow;
@property(readonly, nonatomic) _Bool activeInterfaceMechanismIsHardware;
- (id)instantiateRootViewController;	// IMP=0x000000010008f2f0
- (void)detachCarPlay;	// IMP=0x000000010008f1f4
- (void)attachCarPlayToScreen:(id)arg1;	// IMP=0x000000010008ef68
- (void)screenDidDisconnectNotification:(id)arg1;	// IMP=0x000000010008edfc
- (void)screenDidConnectNotification:(id)arg1;	// IMP=0x000000010008ecd4
- (void)dealloc;	// IMP=0x000000010008ec5c
- (id)init;	// IMP=0x000000010008e9c8

@end

