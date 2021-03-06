//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CRRecentsMigratorDelegate-Protocol.h"
#import "CRSQLiteConnectionPoolDelegate-Protocol.h"
#import "CRUbiquitousCoordinatorDelegate-Protocol.h"

@class CRDelayedWorkQueue, CRPluginManager, CRRecentsMigrator, CRSQLiteConnectionPool, CRUbiquitousCoordinator, NSLock, NSMutableDictionary, NSString;
@protocol CRAccountAdaptor;

@interface _CRRecentsLibrary : NSObject <CRSQLiteConnectionPoolDelegate, CRRecentsMigratorDelegate, CRUbiquitousCoordinatorDelegate>
{
    NSString *_path;	// 8 = 0x8
    CRPluginManager *_pluginManager;	// 16 = 0x10
    CRSQLiteConnectionPool *_connectionPool;	// 24 = 0x18
    CRRecentsMigrator *_migrator;	// 32 = 0x20
    id <CRAccountAdaptor> _accountAdaptor;	// 40 = 0x28
    NSLock *_lock;	// 48 = 0x30
    struct __CFDictionary *_cachedProperties;	// 56 = 0x38
    CRDelayedWorkQueue *_pendingDomainExpunges;	// 64 = 0x40
    CRDelayedWorkQueue *_pendingStoreSyncEvents;	// 72 = 0x48
    double _storeSyncDelay;	// 80 = 0x50
    NSMutableDictionary *_cloudStores;	// 88 = 0x58
    CRUbiquitousCoordinator *_ubiquitousCoordinator;	// 96 = 0x60
}

+ (id)storeMapping;	// IMP=0x000000010000502c
+ (id)defaultPath;	// IMP=0x0000000100004f4c
@property(retain, nonatomic) CRUbiquitousCoordinator *ubiquitousCoordinator; // @synthesize ubiquitousCoordinator=_ubiquitousCoordinator;
@property(retain, nonatomic) NSMutableDictionary *cloudStores; // @synthesize cloudStores=_cloudStores;
@property(nonatomic) double storeSyncDelay; // @synthesize storeSyncDelay=_storeSyncDelay;
- (void)mergeCloudDataOneWayIntoLocalStoreWithReason:(unsigned long long)arg1;	// IMP=0x0000000100010298
- (void)removeLocalRecordsForDomain:(id)arg1 removeInUbiquitousStore:(_Bool)arg2;	// IMP=0x0000000100010098
- (_Bool)_synchronizeAllStores;	// IMP=0x000000010000ff28
- (_Bool)_synchronizeStore:(id)arg1;	// IMP=0x000000010000fe58
- (void)scheduleSynchronizationForStore:(id)arg1;	// IMP=0x000000010000fd64
- (void)synchronize;	// IMP=0x000000010000fd54
- (void)_syncContact:(id)arg1 withStore:(id)arg2;	// IMP=0x000000010000f378
- (_Bool)_mergeRemoteChanges:(id)arg1 fromStore:(id)arg2 forRecentsDomain:(id)arg3;	// IMP=0x000000010000e008
- (void)_storeChangedExternally:(id)arg1;	// IMP=0x000000010000d53c
- (id)_storeForRecentsDomain:(id)arg1;	// IMP=0x000000010000d52c
- (id)_recentsDomainForStore:(id)arg1;	// IMP=0x000000010000d438
- (void)_initializeStoreForRecentsDomain:(id)arg1 storeIdentifier:(id)arg2;	// IMP=0x000000010000d328
- (id)keyForContact:(id)arg1;	// IMP=0x000000010000d2a0
- (id)hashForGroup:(id)arg1;	// IMP=0x000000010000d174
- (id)hashForContact:(id)arg1;	// IMP=0x000000010000d0e0
- (id)externalAddressFromAddress:(id)arg1 kind:(id)arg2;	// IMP=0x000000010000d0a0
- (id)addressFromExternalAddress:(id)arg1 kind:(id)arg2;	// IMP=0x000000010000d060
- (id)recentsHashForAddress:(id)arg1 kind:(id)arg2;	// IMP=0x000000010000d020
- (id)recentsHashForExternalAddress:(id)arg1 kind:(id)arg2;	// IMP=0x000000010000cfbc
- (id)addressHandlerForAddressKind:(id)arg1;	// IMP=0x000000010000cfac
- (void)removeContact:(id)arg1;	// IMP=0x000000010000ce88
- (unsigned long long)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 source:(id)arg4;	// IMP=0x000000010000be6c
- (void)_deleteRecentsWithRecentIDs:(id)arg1 storeKeys:(id)arg2 recentsDomain:(id)arg3 deleteInUbiquitousStore:(_Bool)arg4;	// IMP=0x000000010000bb70
- (void)_deleteRecentWithRecordHash:(id)arg1 kind:(id)arg2 recentsDomain:(id)arg3;	// IMP=0x000000010000b928
- (void)_saveRecentContacts:(id)arg1;	// IMP=0x000000010000b718
- (void)_updateRecentContacts:(id)arg1;	// IMP=0x000000010000b328
- (void)_insertRecentContacts:(id)arg1;	// IMP=0x000000010000abb8
- (void)_bindContact:(id)arg1 withRecentID:(long long)arg2 forStatement:(struct sqlite3_stmt *)arg3;	// IMP=0x000000010000aae4
- (void)_bindRecent:(id)arg1 forStatement:(struct sqlite3_stmt *)arg2;	// IMP=0x000000010000a74c
- (_Bool)expungeRecentsOverLimitsForDomain:(id)arg1 forcibly:(_Bool)arg2 expungedRecentIDs:(id *)arg3;	// IMP=0x0000000100009efc
- (id)_nts_expungeGroupRecentsOverLimit:(unsigned long long)arg1 domain:(id)arg2 storeKeys:(id *)arg3 connection:(id)arg4;	// IMP=0x0000000100009c34
- (id)_nts_expungeIndividualRecentsOverLimit:(unsigned long long)arg1 domain:(id)arg2 storeKeys:(id *)arg3 connection:(id)arg4;	// IMP=0x000000010000996c
- (id)_nts_expungeRecentsOlderThanDate:(id)arg1 domain:(id)arg2 storeKeys:(id *)arg3 connection:(id)arg4;	// IMP=0x00000001000095ec
- (void)performExpungeRecentsOverLimitsForDomain:(id)arg1 afterDelay:(double)arg2;	// IMP=0x0000000100009460
- (void)cancelPerformExpungeRecentsOverLimitsForDomain:(id)arg1;	// IMP=0x00000001000093d8
- (void)setMaximumRecentsAgeInDays:(unsigned long long)arg1 forRecentsDomain:(id)arg2;	// IMP=0x000000010000939c
- (unsigned long long)maximumRecentsAgeInDaysForDomain:(id)arg1;	// IMP=0x0000000100009338
- (void)setMaximumGroupRecents:(unsigned long long)arg1 forRecentsDomain:(id)arg2;	// IMP=0x00000001000092f4
- (unsigned long long)maximumGroupRecentsForDomain:(id)arg1;	// IMP=0x0000000100009290
- (void)setMaximumRecents:(unsigned long long)arg1 forRecentsDomain:(id)arg2;	// IMP=0x000000010000924c
- (unsigned long long)maximumRecentsForDomain:(id)arg1;	// IMP=0x00000001000091e8
- (void)_setPropertyValue:(unsigned long long)arg1 forKey:(id)arg2;	// IMP=0x0000000100009170
- (unsigned long long)_propertyValueForKey:(id)arg1 defaultValue:(unsigned long long)arg2;	// IMP=0x00000001000090a4
- (_Bool)_setDatabasePropertyValue:(unsigned long long)arg1 forKey:(id)arg2;	// IMP=0x0000000100008f44
- (unsigned long long)_databasePropertyValueByKey:(id)arg1;	// IMP=0x0000000100008d48
- (void)removeAllRecentContactsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008c00
- (void)removeRecentContactsWithRecentIDs:(id)arg1 syncKeys:(id)arg2 domain:(id)arg3 removeInUbiquitousStore:(_Bool)arg4;	// IMP=0x00000001000085c4
- (void)enumerateRecentsForDomain:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000083a0
- (id)_copyRecentContactForID:(long long)arg1;	// IMP=0x0000000100008060
- (id)_copyRecentContactForRecordHash:(id)arg1 recentsDomain:(id)arg2;	// IMP=0x0000000100007a9c
- (id)hashForGroupMemberHashes:(id)arg1;	// IMP=0x0000000100007a28
- (id)hashesForGroupMembers:(id)arg1 recentsDomain:(id)arg2;	// IMP=0x0000000100007870
- (id)hashForGroupMembers:(id)arg1 recentsDomain:(id)arg2;	// IMP=0x0000000100007838
- (id)copyContactRecentsFromStatement:(struct sqlite3_stmt *)arg1 selectIndexes:(CDStruct_3990e8ec)arg2 groupThreshold:(unsigned long long)arg3 options:(unsigned long long)arg4;	// IMP=0x0000000100007104
- (id)upcomingEventIdentifierForRecentID:(long long)arg1;	// IMP=0x0000000100006f00
- (void)populateMetadataForRecents:(id)arg1;	// IMP=0x0000000100006990
- (id)copyRecentsForQuery:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000645c
- (id)ageOutClause;	// IMP=0x0000000100006454
- (CDUnknownBlockType)bindingForDomain:(id)arg1;	// IMP=0x0000000100006388
- (id)domainClauseWithDomains:(id)arg1 bindings:(id)arg2;	// IMP=0x00000001000061ec
- (id)_whereClauseFromPredicate:(id)arg1 inDomains:(id)arg2 bindings:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000100006098
- (id)copyRecentContactFromStatement:(struct sqlite3_stmt *)arg1 columnIndexes:(CDStruct_3990e8ec)arg2 populateMetadata:(_Bool)arg3;	// IMP=0x0000000100005c48
- (void)performReadTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005c38
- (void)performWriteTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005c28
- (void)_performTransaction:(CDUnknownBlockType)arg1 forWriting:(_Bool)arg2;	// IMP=0x0000000100005b0c
- (id)_connectionForWriting:(_Bool)arg1;	// IMP=0x00000001000059ec
- (void)unlockConnection:(id)arg1;	// IMP=0x0000000100005950
- (int)rollbackTransaction:(id)arg1;	// IMP=0x00000001000058e0
- (int)commitTransaction:(id)arg1;	// IMP=0x0000000100005870
- (int)beginTransaction:(id)arg1 withType:(int)arg2;	// IMP=0x00000001000057fc
- (id)_activeConnectionWrapper;	// IMP=0x00000001000057bc
- (id)_setActiveConnection:(id)arg1 forWriting:(_Bool)arg2;	// IMP=0x00000001000056e0
- (int)handleSqliteError:(struct sqlite3 *)arg1 format:(id)arg2;	// IMP=0x0000000100005674
- (void)_handleSQLiteErrorCode:(int)arg1;	// IMP=0x0000000100005610
- (void)_handleBusyError;	// IMP=0x0000000100005604
- (void)_handleIOError;	// IMP=0x00000001000055f8
- (void)_handleFullDatabase;	// IMP=0x00000001000055ec
- (void)_handleCorruptDatabase;	// IMP=0x00000001000055e0
- (void)renameOrRemoveDatabase;	// IMP=0x00000001000055a0
- (id)newConnectionForConnectionPool:(id)arg1;	// IMP=0x00000001000054bc
- (void)closeDatabaseConnections;	// IMP=0x00000001000054ac
- (void)dealloc;	// IMP=0x00000001000053d0
- (id)initWithPath:(id)arg1 accountAdaptor:(id)arg2;	// IMP=0x0000000100005130
- (id)initWithPath:(id)arg1;	// IMP=0x0000000100005120
- (id)init;	// IMP=0x00000001000050e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

