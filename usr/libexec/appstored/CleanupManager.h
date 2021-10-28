//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CleanupManager : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100158f70
- (void)_cleanupUpdatesRemovingPurchases:(_Bool)arg1 removedApps:(id)arg2 updateCount:(long long *)arg3 removeCount:(long long *)arg4;	// IMP=0x00000001001582e4
- (long long)_cleanupUpdatesRemovingPurchases:(_Bool)arg1 removedApps:(id)arg2;	// IMP=0x0000000100157c1c
- (void)_cleanupStaleCoordinators;	// IMP=0x00000001001575c8
- (void)_cancelInstallIDs:(id)arg1;	// IMP=0x00000001001573bc
- (id)_allInstalledApplicationsStoreIDs;	// IMP=0x0000000100156d94
- (id)_activelyInstallingCoordinatorIDs;	// IMP=0x00000001001569c0
- (id)_activelyInstallingBundleIDs;	// IMP=0x00000001001565ec
- (void)cleanupUpdatesFollowingInstallOfApps:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100155bc4
- (void)cleanupUpdatesForRemovedApps:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100155a34
- (_Bool)cleanupStaleUpdateTimerIsExpired;	// IMP=0x00000001001559c4
- (void)performCleanup;	// IMP=0x0000000100155788
- (id)init;	// IMP=0x0000000100155700

@end
