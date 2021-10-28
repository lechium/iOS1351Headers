//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WFBlacklistDelegate-Protocol.h"

@class NSString, WFBlacklistEngine;

@interface WiFiBlacklistManager : NSObject <WFBlacklistDelegate>
{
    WFBlacklistEngine *_engine;	// 8 = 0x8
    struct __WiFiDeviceManager *_deviceMgr;	// 16 = 0x10
}

@property struct __WiFiDeviceManager *deviceMgr; // @synthesize deviceMgr=_deviceMgr;
@property(retain) WFBlacklistEngine *engine; // @synthesize engine=_engine;
- (void)blacklistDidUpdate;	// IMP=0x000000010014237c
- (_Bool)isUserModeInteractive;	// IMP=0x000000010014235c
- (_Bool)retrieveBatteryInfo:(_Bool *)arg1 batteryLevel:(unsigned int *)arg2;	// IMP=0x00000001001421d4
- (void)dealloc;	// IMP=0x000000010014218c
- (id)initWithArgs:(struct __WiFiDeviceManager *)arg1;	// IMP=0x0000000100142014

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
