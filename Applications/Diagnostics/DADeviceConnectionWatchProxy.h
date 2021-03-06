//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DADeviceConnectionIDSProxy.h"

@class DAIDSDestination, NRDevice;

@interface DADeviceConnectionWatchProxy : DADeviceConnectionIDSProxy
{
    DAIDSDestination *_destination;	// 8 = 0x8
    NRDevice *_nanoDevice;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100004074
@property(retain, nonatomic) NRDevice *nanoDevice; // @synthesize nanoDevice=_nanoDevice;
- (void)dealloc;	// IMP=0x0000000100003fd8
- (void)deviceDidBecomeInactive:(id)arg1;	// IMP=0x0000000100003e30
- (void)deviceDidBecomeActive:(id)arg1;	// IMP=0x0000000100003d30
- (void)quickSwitchToNRDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003818
- (void)start;	// IMP=0x000000010000367c
- (void)connect;	// IMP=0x00000001000035ac
- (id)destination;	// IMP=0x00000001000031c8
- (id)initWithState:(id)arg1 nanoDevice:(id)arg2;	// IMP=0x000000010000308c

@end

