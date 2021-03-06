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

+ (_Bool)shouldLimitKeypadAccess;	// IMP=0x0000000100091790
+ (id)sharedCarPlayManager;	// IMP=0x0000000100091060
- (void).cxx_destruct;	// IMP=0x000000010009194c
@property(retain, nonatomic) TUCarPlayHardwareControlsBroadcaster *hardwareControlsBroadcaster; // @synthesize hardwareControlsBroadcaster=_hardwareControlsBroadcaster;
@property(retain, nonatomic) UIWindow *carPlayWindow; // @synthesize carPlayWindow=_carPlayWindow;
@property(readonly, nonatomic) _Bool activeInterfaceMechanismIsHardware;
- (id)instantiateRootViewController;	// IMP=0x0000000100091760
- (void)detachCarPlay;	// IMP=0x0000000100091664
- (void)attachCarPlayToScreen:(id)arg1;	// IMP=0x00000001000913d8
- (void)screenDidDisconnectNotification:(id)arg1;	// IMP=0x000000010009126c
- (void)screenDidConnectNotification:(id)arg1;	// IMP=0x0000000100091144
- (void)dealloc;	// IMP=0x00000001000910cc
- (id)init;	// IMP=0x0000000100090e38

@end

