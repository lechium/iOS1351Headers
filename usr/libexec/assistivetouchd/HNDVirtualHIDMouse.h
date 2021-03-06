//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HIDVirtualEventServiceDelegate-Protocol.h"

@class HIDVirtualEventService, NSDictionary, NSMutableDictionary, NSString, NSUUID;
@protocol OS_dispatch_group;

@interface HNDVirtualHIDMouse : NSObject <HIDVirtualEventServiceDelegate>
{
    NSUUID *_uuid;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
    NSMutableDictionary *_dynamicMetaProperties;	// 24 = 0x18
    HIDVirtualEventService *_eventService;	// 32 = 0x20
    NSObject<OS_dispatch_group> *_waitForOpenGroup;	// 40 = 0x28
}

+ (unsigned long long)eventServiceID;	// IMP=0x00000001000892b8
+ (_Bool)handleEvent:(id)arg1;	// IMP=0x0000000100089034
+ (id)addActiveClientWithReason:(id)arg1;	// IMP=0x000000010008897c
+ (void)reevaluateDeviceCleanupTimer;	// IMP=0x0000000100088728
+ (void)setupSharedVirtualDeviceIfNecessary;	// IMP=0x00000001000885f8
+ (_Bool)handleButtonNumber:(long long)arg1 isDown:(_Bool)arg2;	// IMP=0x0000000100089de8
+ (_Bool)handleScrollWithDelta:(struct CGPoint)arg1;	// IMP=0x0000000100089d50
+ (_Bool)handleMovementWithDelta:(struct CGPoint)arg1;	// IMP=0x0000000100089cb8
- (void).cxx_destruct;	// IMP=0x0000000100089c64
@property(retain, nonatomic) NSObject<OS_dispatch_group> *waitForOpenGroup; // @synthesize waitForOpenGroup=_waitForOpenGroup;
@property(readonly, nonatomic) HIDVirtualEventService *eventService; // @synthesize eventService=_eventService;
@property(readonly, nonatomic) NSMutableDictionary *dynamicMetaProperties; // @synthesize dynamicMetaProperties=_dynamicMetaProperties;
@property(readonly, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)notification:(long long)arg1 withProperty:(id)arg2 forService:(id)arg3;	// IMP=0x0000000100089b40
- (_Bool)setOutputEvent:(id)arg1 forService:(id)arg2;	// IMP=0x0000000100089a84
- (id)copyEventMatching:(id)arg1 forService:(id)arg2;	// IMP=0x00000001000899c8
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2 forService:(id)arg3;	// IMP=0x000000010008981c
- (id)propertyForKey:(id)arg1 forService:(id)arg2;	// IMP=0x0000000100089714
- (_Bool)_handleButtonNumber:(long long)arg1 isDown:(_Bool)arg2;	// IMP=0x000000010008957c
- (_Bool)_handleScrollWithDelta:(struct CGPoint)arg1;	// IMP=0x0000000100089498
- (_Bool)_handleMovementWithDelta:(struct CGPoint)arg1;	// IMP=0x000000010008930c
- (void)dealloc;	// IMP=0x0000000100088fe8
- (void)unload;	// IMP=0x0000000100088fb4
- (id)_init;	// IMP=0x00000001000889f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

