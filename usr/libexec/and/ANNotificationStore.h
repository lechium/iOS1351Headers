//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface ANNotificationStore : NSObject
{
    NSManagedObjectContext *_managedObjectContext;	// 8 = 0x8
    NSPersistentStoreCoordinator *_storeCoordinator;	// 16 = 0x10
}

+ (id)sharedStore;	// IMP=0x0000000100003904
- (void).cxx_destruct;	// IMP=0x0000000100005cf0
- (id)_copyPersistentStoreFilePath;	// IMP=0x0000000100005c2c
- (id)_managedObjectModel;	// IMP=0x0000000100005b10
- (void)_createManagedObjectContext;	// IMP=0x0000000100005810
- (_Bool)_unsafe_commitChangesInManagedObjectContext;	// IMP=0x0000000100005764
- (_Bool)removeNotificationWithIdentifier:(id)arg1;	// IMP=0x00000001000052ec
- (_Bool)removeAllNotificationsForAccountTypeID:(id)arg1;	// IMP=0x0000000100004f18
- (_Bool)limitPendingNotificationsForAccountTypeID:(id)arg1 toMaximumCount:(unsigned long long)arg2;	// IMP=0x0000000100004810
- (_Bool)saveNotification:(id)arg1;	// IMP=0x0000000100004334
- (id)_notificationsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2;	// IMP=0x0000000100003fc0
- (id)_notificationsMatchingPredicate:(id)arg1;	// IMP=0x0000000100003fb0
- (id)typeIdentifiersOfAccountsWithPendingNotifications;	// IMP=0x0000000100003b68
- (id)pendingNotificationsWithEventID:(id)arg1;	// IMP=0x0000000100003aec
- (id)notificationWithIdentifier:(id)arg1;	// IMP=0x0000000100003a44
- (id)pendingNotificationsForAccountsWithTypeID:(id)arg1;	// IMP=0x00000001000039c8
- (id)init;	// IMP=0x0000000100003970

@end

