/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:33 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CompanionSync/CompanionSync-Structs.h>
@class NSString, NSMutableDictionary;

@interface _SYSharedServiceDB : NSObject {

	os_unfair_lock_s _lock;
	sqlite3Ref _db;
	NSString* _name;
	NSMutableDictionary* _schemaSetupCallbacks;

}

@property (getter=_dbPath,nonatomic,readonly) NSString * dbPath; 
+(void)initialize;
+(void)pairingStorePathWasReset;
+(id)sharedInstanceForServiceName:(id)arg1 ;
+(void)_releaseSharedInstanceForServiceName:(id)arg1 ;
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 ;
-(id)_dbPath;
-(BOOL)_addSkipBackupAttributeToItemAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)_LOCKED_hasSchemaVersionForClient:(id)arg1 ;
-(long long)_LOCKED_getClientVersion:(id)arg1 ;
-(void)_LOCKED_setVersion:(long long)arg1 forClient:(id)arg2 ;
-(void)_LOCKED_ensureSchemaVersionsTableInDB:(sqlite3Ref)arg1 ;
-(void)withDBRef:(/*^block*/id)arg1 ;
-(BOOL)_ensureParentExists:(id)arg1 error:(id*)arg2 ;
-(BOOL)_LOCKED_createOrOpenDBForServiceName:(id)arg1 error:(id*)arg2 ;
-(void)_LOCKED_runSchemaUpdate:(/*^block*/id)arg1 forClientNamed:(id)arg2 ;
-(BOOL)_LOCKED_ensureDBExists;
-(BOOL)_runTransactionBlock:(/*^block*/id)arg1 exclusive:(BOOL)arg2 ;
-(void)_ensureSchemaVersionsTable;
-(long long)schemaVersionForClient:(id)arg1 ;
-(void)setSchemaVersion:(long long)arg1 forClient:(id)arg2 ;
-(void)updateSchemaForClient:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)inTransaction:(/*^block*/id)arg1 ;
-(BOOL)inExclusiveTransaction:(/*^block*/id)arg1 ;
@end

