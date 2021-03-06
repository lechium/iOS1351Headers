//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AppUpdatesDatabaseSession.h"

#import "SQLiteDatabaseTransaction-Protocol.h"

@class NSString, SQLiteConnection;

@interface AppUpdatesDatabaseTransaction : AppUpdatesDatabaseSession <SQLiteDatabaseTransaction>
{
}

+ (void)_logState:(long long)arg1 forBundleID:(id)arg2;	// IMP=0x000000010012b69c
- (_Bool)_setUpdateState:(long long)arg1 forBundleID:(id)arg2 itemID:(id)arg3 withPurchaseID:(id)arg4 isUserInitiated:(_Bool)arg5;	// IMP=0x000000010012b7c8
- (_Bool)setUpdateState:(long long)arg1 legacyContext:(id)arg2;	// IMP=0x000000010012b5a4
- (_Bool)setUpdateState:(long long)arg1 usingPurchaseInfo:(id)arg2;	// IMP=0x000000010012b4ac
- (_Bool)setUpdateState:(long long)arg1 forBundleID:(id)arg2 evid:(id)arg3;	// IMP=0x000000010012b1c4
- (_Bool)recordUpdateDownloadStartTime:(id)arg1 andEndTime:(id)arg2 forBundleID:(id)arg3;	// IMP=0x000000010012aef4
- (id)processUpdate:(id)arg1 existingUpdate:(id)arg2 forReason:(long long)arg3;	// IMP=0x000000010012aacc
- (_Bool)mergeAvailableUpdates:(id)arg1 withReason:(long long)arg2 availableCount:(long long *)arg3 notifyChanges:(_Bool *)arg4 bundleIDs:(id *)arg5;	// IMP=0x000000010012a1ec
- (_Bool)handleAppsUninstalled:(id)arg1;	// IMP=0x000000010012a0c0
- (_Bool)deleteUpdatesInstalledBefore:(double)arg1;	// IMP=0x0000000100129fbc

// Remaining properties
@property(readonly) SQLiteConnection *connection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

