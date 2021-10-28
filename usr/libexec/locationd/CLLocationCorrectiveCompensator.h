//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLLocationCorrectiveCompensatorProtocol-Protocol.h"

@class GEOCoarseLocationProvider, NSString;

@interface CLLocationCorrectiveCompensator : CLIntersiloService <CLLocationCorrectiveCompensatorProtocol>
{
    GEOCoarseLocationProvider *_coarseLocationProvider;	// 8 = 0x8
}

+ (id)getSilo;	// IMP=0x000000010034b840
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x000000010034b81c
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100cd36d4
- (void)snapLocation:(struct CLDaemonLocation)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010034b960
- (void)endService;	// IMP=0x000000010034b930
- (void)beginService;	// IMP=0x000000010034b8fc
- (id)init;	// IMP=0x000000010034b8b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
