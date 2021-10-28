//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, NSArray, NSDate, NSMutableArray, PCPersistentTimer;
@protocol OS_dispatch_queue;

@interface PHMeCardGeocoder : NSObject
{
    CNContactStore *_contactStore;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSMutableArray *_addresses;	// 24 = 0x18
    PCPersistentTimer *_networkPreferencesTimeoutTimer;	// 32 = 0x20
    NSDate *_lastScheduledTime;	// 40 = 0x28
}

+ (id)sharedMeCardGeocoder;	// IMP=0x000000010008cc70
- (void).cxx_destruct;	// IMP=0x000000010008fc50
@property(retain, nonatomic) NSDate *lastScheduledTime; // @synthesize lastScheduledTime=_lastScheduledTime;
@property(readonly, nonatomic) PCPersistentTimer *networkPreferencesTimeoutTimer; // @synthesize networkPreferencesTimeoutTimer=_networkPreferencesTimeoutTimer;
@property(retain, nonatomic) NSMutableArray *addresses; // @synthesize addresses=_addresses;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void)handleCNContactStoreDidChangeNotification:(id)arg1;	// IMP=0x000000010008fa9c
@property(nonatomic, getter=isActivelyUsing) _Bool activelyUsing;
@property(readonly, copy, nonatomic) NSArray *currentValidLocations;
- (void)_rebuildAddressArray;	// IMP=0x000000010008ec54
- (void)_scheduleLongTermRebuild;	// IMP=0x000000010008e984
- (id)_dateOfOldestAddress;	// IMP=0x000000010008e7e4
- (void)_unscheduleLongTermRebuild;	// IMP=0x000000010008e7d8
- (void)_scheduleNextGeocode;	// IMP=0x000000010008e3f4
- (void)_schedulePerformGeocodesTaskWithStartWakeTime:(id)arg1 dropDeadDelay:(long long)arg2;	// IMP=0x000000010008e150
- (_Bool)_unschedulePerformGeocodesWakeTaskIfEarlierThan:(id)arg1;	// IMP=0x000000010008debc
- (void)_doWork;	// IMP=0x000000010008da6c
- (void)_saveGeoCache;	// IMP=0x000000010008d95c
- (void)scheduleNextGeocode;	// IMP=0x000000010008d8a0
- (void)scheduleImmediateGeocode;	// IMP=0x000000010008d730
- (_Bool)_isNetworkAvailable;	// IMP=0x000000010008d638
- (void)dealloc;	// IMP=0x000000010008d430
- (void)_networkPreferencesLoaded;	// IMP=0x000000010008d280
- (id)init;	// IMP=0x000000010008cd9c

@end
