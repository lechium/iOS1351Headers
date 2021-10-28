//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLTimeZoneManagerProtocol-Protocol.h"

@class NSString;

@interface CLTimeZoneManagerAdapter : CLIntersiloService <CLTimeZoneManagerProtocol>
{
    struct CLTimeZoneManager *_manager;	// 8 = 0x8
}

+ (_Bool)isSupported;	// IMP=0x0000000100459520
+ (id)getSilo;	// IMP=0x0000000100459328
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100459304
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100cd761c
@property(nonatomic) struct CLTimeZoneManager *manager; // @synthesize manager=_manager;
- (void)endService;	// IMP=0x000000010045944c
- (void)beginService;	// IMP=0x00000001004593e4
- (id)init;	// IMP=0x00000001004593a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
