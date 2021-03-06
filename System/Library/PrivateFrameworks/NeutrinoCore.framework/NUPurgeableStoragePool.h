/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <NeutrinoCore/NeutrinoCore-Structs.h>
@class NUStoragePoolStats, NSMutableArray, NSObject;

@interface NUPurgeableStoragePool : NSObject {

	NUStoragePoolStats* _stats;
	unsigned long long _nonPurgeableActivityCounter;
	BOOL _migrationTimerScheduled;
	long long _nonPurgeableLimit;
	long long _purgeableLimit;
	double _migrationDelay;
	NSMutableArray* _volatileList;
	NSMutableArray* _nonPurgeableList;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _migrationQueue;
	Class _storageClass;

}

@property (nonatomic,readonly) long long nonPurgeableLimit;                              //@synthesize nonPurgeableLimit=_nonPurgeableLimit - In the implementation block
@property (nonatomic,readonly) long long purgeableLimit;                                 //@synthesize purgeableLimit=_purgeableLimit - In the implementation block
@property (nonatomic,readonly) double migrationDelay;                                    //@synthesize migrationDelay=_migrationDelay - In the implementation block
@property (nonatomic,readonly) NSMutableArray * volatileList;                            //@synthesize volatileList=_volatileList - In the implementation block
@property (nonatomic,readonly) NSMutableArray * nonPurgeableList;                        //@synthesize nonPurgeableList=_nonPurgeableList - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateQueue;                  //@synthesize stateQueue=_stateQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> migrationQueue;              //@synthesize migrationQueue=_migrationQueue - In the implementation block
@property (nonatomic,copy,readonly) NUStoragePoolStats * stats; 
@property (nonatomic,readonly) Class storageClass;                                       //@synthesize storageClass=_storageClass - In the implementation block
-(id)init;
-(id)debugDescription;
-(Class)storageClass;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(NSObject*<OS_dispatch_queue>)migrationQueue;
-(NUStoragePoolStats *)stats;
-(id)initWithStorageClass:(Class)arg1 ;
-(id)newStorageWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 ;
-(id)newStorageWithMinimumSize:(SCD_Struct_NU7)arg1 format:(id)arg2 ;
-(id)newStorageWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 exactMatch:(BOOL)arg3 ;
-(id)_allocateStorageWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 ;
-(id)_storageFromPoolWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 exactMatch:(BOOL)arg3 ;
-(void)returnStorage:(id)arg1 ;
-(void)_enforcePurgableLimit;
-(void)_returnVolatileStorage:(id)arg1 ;
-(void)_returnNonPurgeableStorage:(id)arg1 ;
-(id)reapPurged;
-(void)_reapPurged;
-(void)_resetNonPurgeableStorageMigrationTimer;
-(void)_scheduleMigrationTimer;
-(void)_migrationTimer:(unsigned long long)arg1 ;
-(void)migrateAllNonPurgeableStorage;
-(void)_migrateAllNonPurgeableStorageIfNoRecentActivity:(unsigned long long)arg1 ;
-(void)_migrateOldestNonPurgeableStorageToPurgeable;
-(id)_popOldestNonPurgeableStorage;
-(void)_migrateStorageToPurgeable:(id)arg1 ;
-(void)waitForMigration;
-(long long)nonPurgeableLimit;
-(long long)purgeableLimit;
-(double)migrationDelay;
-(NSMutableArray *)volatileList;
-(NSMutableArray *)nonPurgeableList;
@end

