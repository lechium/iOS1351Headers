//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSMutableIntegerMap;

@interface BKHIDClientConnectionManager : NSObject
{
    struct __IOHIDEventSystem *_hidEventSystem;	// 8 = 0x8
    BSMutableIntegerMap *_taskPortToClientConnectionMapping;	// 16 = 0x10
    BSMutableIntegerMap *_pidToClientConnectionMapping;	// 24 = 0x18
    struct __CFDictionary *_hidConnectionToBKConnection;	// 32 = 0x20
    struct os_unfair_lock_s _lock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010008421c
- (void)_clientConnectionRemoved:(struct __IOHIDEventSystemConnection *)arg1;	// IMP=0x00000001000840a4
- (void)_clientConnectionAdded:(struct __IOHIDEventSystemConnection *)arg1;	// IMP=0x0000000100083ef8
- (id)clientForDestination:(id)arg1;	// IMP=0x0000000100083e68
- (id)clientForTaskPort:(unsigned int)arg1;	// IMP=0x0000000100083e00
- (struct __IOHIDEventSystemConnection *)copyClientForDestination:(id)arg1;	// IMP=0x0000000100083da8
- (struct __IOHIDEventSystemConnection *)copyClientForTaskPort:(unsigned int)arg1;	// IMP=0x0000000100083d50
- (id)bundleIDForPID:(int)arg1;	// IMP=0x0000000100083cb8
- (int)pidForBundleID:(id)arg1;	// IMP=0x0000000100083ba0
- (id)description;	// IMP=0x0000000100083ac8
- (void)dealloc;	// IMP=0x0000000100083a34
- (id)initWithHIDEventSystem:(struct __IOHIDEventSystem *)arg1;	// IMP=0x00000001000838b8

@end
