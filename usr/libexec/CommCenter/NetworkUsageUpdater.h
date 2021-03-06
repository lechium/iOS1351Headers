//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NWUsageManagerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, NWUsageManager;

@interface NetworkUsageUpdater : NSObject <NWUsageManagerDelegate>
{
    shared_ptr_b36635fa _logger;	// 8 = 0x8
    queue_9c98cea5 _queue;	// 24 = 0x18
    shared_ptr_0fd4464b _registry;	// 32 = 0x20
    NWUsageManager *_manager;	// 48 = 0x30
    struct set<int, std::__1::less<int>, std::__1::allocator<int>> _imsInterfaces;	// 56 = 0x38
    int _tetheringInterfaceIndex;	// 80 = 0x50
    int _internetInterfaceIndex;	// 84 = 0x54
    NSMutableDictionary *_currentConfig;	// 88 = 0x58
}

- (id).cxx_construct;	// IMP=0x0000000100b8b070
- (void).cxx_destruct;	// IMP=0x0000000100b8b018
- (void)usageManager:(id)arg1 thresholdReachedOn:(unsigned int)arg2;	// IMP=0x0000000100b8af28
- (void)usageManager:(id)arg1 didRemoveSource:(id)arg2;	// IMP=0x0000000100b8af18
- (_Bool)usageManager:(id)arg1 didAddSource:(id)arg2;	// IMP=0x0000000100b8aef4
- (void)handleNWUsageSnapShot_sync:(id)arg1;	// IMP=0x0000000100b8a610
- (void)reconfigure_sync;	// IMP=0x0000000100b8a2d4
- (void)stop_sync;	// IMP=0x0000000100b8a290
- (void)start_sync;	// IMP=0x0000000100b89ee0
- (void)collect:(_Bool)arg1;	// IMP=0x0000000100b89e5c
- (id)initWithRegistry:(shared_ptr_0fd4464b)arg1;	// IMP=0x0000000100b89c0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

