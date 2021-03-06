//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NDApplication.h"

#import "BRContainerObserver-Protocol.h"

@class BRContainersMonitor, NSString;

@interface NDCloudContainer : NDApplication <BRContainerObserver>
{
    BRContainersMonitor *_monitor;	// 40 = 0x28
    _Bool _isForeground;	// 48 = 0x30
    _Bool _initializedForegroundStateFromMonitorCallback;	// 49 = 0x31
}

+ (id)bundleIDForPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;	// IMP=0x000000010003db74
+ (id)containerIDForPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;	// IMP=0x000000010003dacc
- (void).cxx_destruct;	// IMP=0x000000010003da18
- (void)containerDidEnterForeground:(id)arg1;	// IMP=0x000000010003d8ec
- (void)containerDidEnterBackground:(id)arg1;	// IMP=0x000000010003d7c0
- (void)removeObserver:(id)arg1;	// IMP=0x000000010003d6e4
- (void)addObserver:(id)arg1;	// IMP=0x000000010003d608
- (_Bool)wakeForSessionIdentifier:(id)arg1 withSessionUUID:(id)arg2;	// IMP=0x000000010003d600
- (_Bool)supportsWakes;	// IMP=0x000000010003d5f8
- (_Bool)isForeground;	// IMP=0x000000010003d4d4
- (_Bool)hasForegroundBackgroundStates;	// IMP=0x000000010003d4cc
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000010003d3e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

