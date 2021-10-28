//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDEventHandlerProvider-Protocol.h"

@class NSMutableSet, NSSet;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface SDAppUninstallMonitor : NSObject <SDEventHandlerProvider>
{
    NSObject<OS_dispatch_semaphore> *_startupSemaphore;	// 8 = 0x8
    _Bool _unlocked;	// 16 = 0x10
    _Bool _hasFailedDeletes;	// 17 = 0x11
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_timer;	// 32 = 0x20
    NSMutableSet *_pcsForPendingPurges;	// 40 = 0x28
    NSSet *_allAppSet;	// 48 = 0x30
}

+ (void)_writeAppsListToDisk:(id)arg1;	// IMP=0x000000010002b2cc
+ (id)_installedAppsListFromDisk;	// IMP=0x000000010002af54
+ (id)_installedAppsBundleIDsListFilePath;	// IMP=0x000000010002aec4
+ (id)_trackingInfoDir;	// IMP=0x000000010002ae28
+ (id)_filename;	// IMP=0x000000010002ae0c
+ (_Bool)_writePendingPurgesToDisk:(id)arg1;	// IMP=0x000000010002a0d8
+ (id)_pendingPurgesFromDisk;	// IMP=0x0000000100029db0
+ (id)_pendingPurgesFilePath;	// IMP=0x0000000100029d14
+ (id)applicationsExcludedFromUninstall;	// IMP=0x0000000100027e4c
+ (id)sharedInstance;	// IMP=0x0000000100027de0
- (void).cxx_destruct;	// IMP=0x000000010002b89c
@property(retain, nonatomic) NSSet *allAppSet; // @synthesize allAppSet=_allAppSet;
@property(retain, nonatomic) NSMutableSet *pcsForPendingPurges; // @synthesize pcsForPendingPurges=_pcsForPendingPurges;
@property(nonatomic) _Bool hasFailedDeletes; // @synthesize hasFailedDeletes=_hasFailedDeletes;
@property(nonatomic) _Bool unlocked; // @synthesize unlocked=_unlocked;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)_allInstalledApplicationsIdentifiers;	// IMP=0x000000010002b6a0
- (void)_deleteAllItemsForBundleIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010002a408
- (void)_purgeWithProtectionClasses:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100029588
- (void)_deleteAllInteractionsForBundleID:(id)arg1;	// IMP=0x0000000100029240
- (id)_deleteAllItemsForBundleID:(id)arg1;	// IMP=0x0000000100028c48
- (void)_deleteItemsForUninstalledAppsFromIndex;	// IMP=0x00000001000286b4
- (void)registerHandlerWithEventMonitor:(id)arg1;	// IMP=0x00000001000281a8
- (void)unlock;	// IMP=0x0000000100028060
- (void)ready;	// IMP=0x0000000100028058
- (id)init;	// IMP=0x0000000100027f74

@end
