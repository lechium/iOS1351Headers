//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NFWeakReference, NSMutableDictionary, NSMutableSet;

@interface NFClientAppStateObserver : NSObject
{
    BKSApplicationStateMonitor *_monitor;	// 8 = 0x8
    NSMutableSet *_connections;	// 16 = 0x10
    NSMutableDictionary *_bundleIdMap;	// 24 = 0x18
    NFWeakReference *_delegate;	// 32 = 0x20
    _Bool _willSleep;	// 40 = 0x28
}

@property(readonly) _Bool willSleep; // @synthesize willSleep=_willSleep;
- (void)_applicationStateChanged:(id)arg1;	// IMP=0x000000010008a2fc
- (_Bool)isClientBackground:(id)arg1;	// IMP=0x000000010008a274
- (_Bool)isClientSuspended:(id)arg1;	// IMP=0x000000010008a1f4
- (void)unregisterForStateChangesToConnection:(id)arg1;	// IMP=0x000000010008a0e8
- (void)registerForStateChangesToConnection:(id)arg1;	// IMP=0x0000000100089f48
- (id)_lookupClientBundleId:(id)arg1;	// IMP=0x0000000100089ec8
- (id)delegate;	// IMP=0x0000000100089eb8
- (void)dealloc;	// IMP=0x0000000100089e48
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100089dbc

@end

