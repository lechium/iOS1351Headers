//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface NDApplication : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSMutableArray *_observers;	// 16 = 0x10
    _Bool isInTransitionalDiscretionaryPeriod;	// 24 = 0x18
    double _currentRequestDelay;	// 32 = 0x20
}

+ (id)fileProviderWithIdentifer:(id)arg1 applicationIdentifier:(id)arg2;	// IMP=0x000000010003b48c
+ (id)cloudContainerWithIdentifier:(id)arg1;	// IMP=0x000000010003b354
+ (_Bool)springBoardApplicationExistsWithIdentifier:(id)arg1;	// IMP=0x000000010003b2b8
+ (id)springboardApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x000000010003b180
+ (id)applicationWithIdentifier:(id)arg1;	// IMP=0x000000010003b03c
+ (void)initialize;	// IMP=0x000000010003b004
- (void).cxx_destruct;	// IMP=0x000000010003ae54
@property double currentRequestDelay; // @synthesize currentRequestDelay=_currentRequestDelay;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property _Bool isInTransitionalDiscretionaryPeriod; // @synthesize isInTransitionalDiscretionaryPeriod;
- (void)_onqueue_resetRequestDelay;	// IMP=0x000000010003ad48
- (_Bool)backgroundUpdatesEnabled;	// IMP=0x000000010003ad40
- (void)invokeSelectorForAllObservers:(SEL)arg1;	// IMP=0x000000010003acb8
- (void)removeObserver:(id)arg1;	// IMP=0x000000010003ac08
- (void)addObserver:(id)arg1;	// IMP=0x000000010003ab78
- (_Bool)isHandlingBackgroundURLSessionWithIdentifier:(id)arg1 withSessionUUID:(id)arg2;	// IMP=0x000000010003ab70
- (_Bool)hasBackgroundTaskCompletion;	// IMP=0x000000010003ab68
- (_Bool)isBeingDebugged;	// IMP=0x000000010003ab60
- (_Bool)isSuspended;	// IMP=0x000000010003ab58
- (_Bool)canBeSuspended;	// IMP=0x000000010003ab50
- (_Bool)isAwake;	// IMP=0x000000010003ab48
- (_Bool)isForeground;	// IMP=0x000000010003ab40
- (_Bool)hasForegroundBackgroundStates;	// IMP=0x000000010003ab38
- (_Bool)wakeForSessionIdentifier:(id)arg1 withSessionUUID:(id)arg2;	// IMP=0x000000010003aa4c
- (_Bool)supportsWakes;	// IMP=0x000000010003a9d8
- (id)containerURL;	// IMP=0x000000010003a9d0
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000010003a900

@end

