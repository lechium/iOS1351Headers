//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLApplicationLifecycleManagerProtocol-Protocol.h"

@class NSString;

@interface CLApplicationLifecycleManagerAdapter : CLIntersiloService <CLApplicationLifecycleManagerProtocol>
{
    struct CLApplicationLifecycleManager *_manager;	// 8 = 0x8
}

+ (id)getSilo;	// IMP=0x0000000100664120
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001006640fc
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100ce7c8c
@property(nonatomic) struct CLApplicationLifecycleManager *manager; // @synthesize manager=_manager;
- (void)launchDaemon:(id)arg1;	// IMP=0x0000000100664b7c
- (void)launchApplication:(id)arg1 requiringAuthForServiceMask:(unsigned long long)arg2;	// IMP=0x000000010066427c
- (void)endService;	// IMP=0x0000000100664244
- (void)beginService;	// IMP=0x00000001006641dc
- (id)init;	// IMP=0x0000000100664198

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

