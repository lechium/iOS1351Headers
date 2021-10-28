//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DMFApplicationPolicyMonitor, NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SDScreenTimeMonitor : NSObject
{
    DMFApplicationPolicyMonitor *_screenTimeMonitor;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSArray *_activities;	// 24 = 0x18
    NSMutableDictionary *_bundleIdentifierByActivityType;	// 32 = 0x20
    NSMutableDictionary *_policiesByBundleIdentifier;	// 40 = 0x28
    CDUnknownBlockType _policiesChangedHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010011e328
@property(copy, nonatomic) CDUnknownBlockType policiesChangedHandler; // @synthesize policiesChangedHandler=_policiesChangedHandler;
- (long long)cachedPolicyForActivityType:(id)arg1;	// IMP=0x000000010011e1cc
- (long long)cachedPolicyForBundleID:(id)arg1;	// IMP=0x000000010011e0bc
- (void)retrievePoliciesForBundleIdentifiers:(id)arg1;	// IMP=0x000000010011dd68
- (void)retrieveMissingPolicies;	// IMP=0x000000010011dc28
- (void)retrieveAllPolicies;	// IMP=0x000000010011dbd8
- (void)updateBundleIdentifierMappings;	// IMP=0x000000010011d7c0
- (void)updateWithActivities:(id)arg1;	// IMP=0x000000010011d648
- (void)invalidate;	// IMP=0x000000010011d618
- (void)activate;	// IMP=0x000000010011d45c

@end
