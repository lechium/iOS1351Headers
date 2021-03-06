/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BCCloudDataSyncManagerDelegate.h>
#import <libobjc.A.dylib/BCCloudSecureUserDataManager.h>

@protocol BCCloudSecureUserDataManager <NSObject,BDSCloudKitSupportSignOutDissociate>
@required
-(void)setEnableSecureUserDataCloudSync:(BOOL)arg1;
-(void)currentCloudSyncVersions:(/*^block*/id)arg1;
-(void)setUserDatum:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setUserData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteUserDatumForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)userDatumForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)userDatumIncludingDeleted:(BOOL)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fetchUserDataIncludingDeleted:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)getUserDataChangesSince:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolvedUserDataValueForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)userDataValueForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setUserDataValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3;

@end

#import <libobjc.A.dylib/BDSCloudKitSupportSignOutDeleteWithoutInstance.h>

@class BDSServiceProxy, BCCloudDataSource, BCCloudDataSyncManager, BCCloudDataManager, NSManagedObjectModel, BCCloudChangeTokenController, NSString;

@interface BCCloudSecureUserDataManager : NSObject <BCCloudDataSyncManagerDelegate, BCCloudSecureUserDataManager, BDSCloudKitSupportSignOutDeleteWithoutInstance> {

	BOOL _enableCloudSync;
	BOOL _proxyMode;
	BDSServiceProxy* _serviceProxy;
	BCCloudDataSource* _secureUserDataSource;
	BCCloudDataSyncManager* _syncManager;
	BCCloudDataManager* _dataManager;
	NSManagedObjectModel* _objectModel;
	BCCloudChangeTokenController* _changeTokenController;

}

@property (nonatomic,retain) BDSServiceProxy * serviceProxy;                                    //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (assign,nonatomic) BOOL proxyMode;                                                    //@synthesize proxyMode=_proxyMode - In the implementation block
@property (nonatomic,retain) BCCloudDataSource * secureUserDataSource;                          //@synthesize secureUserDataSource=_secureUserDataSource - In the implementation block
@property (nonatomic,retain) BCCloudDataSyncManager * syncManager;                              //@synthesize syncManager=_syncManager - In the implementation block
@property (nonatomic,retain) BCCloudDataManager * dataManager;                                  //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * objectModel;                                //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,retain) BCCloudChangeTokenController * changeTokenController;              //@synthesize changeTokenController=_changeTokenController - In the implementation block
@property (assign,nonatomic) BOOL enableCloudSync;                                              //@synthesize enableCloudSync=_enableCloudSync - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(void)deleteCloudDataWithCompletion:(/*^block*/id)arg1 ;
+(id)sharedClientXPCProxy;
-(id)entityName;
-(BDSServiceProxy *)serviceProxy;
-(void)setServiceProxy:(BDSServiceProxy *)arg1 ;
-(BCCloudDataManager *)dataManager;
-(void)setDataManager:(BCCloudDataManager *)arg1 ;
-(void)setObjectModel:(NSManagedObjectModel *)arg1 ;
-(NSManagedObjectModel *)objectModel;
-(BCCloudDataSyncManager *)syncManager;
-(void)setSyncManager:(BCCloudDataSyncManager *)arg1 ;
-(void)dissociateCloudDataFromSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)setEnableSecureUserDataCloudSync:(BOOL)arg1 ;
-(void)currentCloudSyncVersions:(/*^block*/id)arg1 ;
-(void)setUserDatum:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUserData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteUserDatumForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)userDatumForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)userDatumIncludingDeleted:(BOOL)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchUserDataIncludingDeleted:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)getUserDataChangesSince:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolvedUserDataValueForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)userDataValueForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUserDataValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)enableCloudSync;
-(void)syncManager:(id)arg1 startSyncToCKWithCompletion:(/*^block*/id)arg2 ;
-(void)signalSyncToCKForSyncManager:(id)arg1 ;
-(void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncManager:(id)arg1 fetchedAllRecordsInZone:(id)arg2 ;
-(void)setEnableCloudSync:(BOOL)arg1 ;
-(BCCloudChangeTokenController *)changeTokenController;
-(void)setChangeTokenController:(BCCloudChangeTokenController *)arg1 ;
-(BOOL)proxyMode;
-(void)setProxyMode:(BOOL)arg1 ;
-(void)removeUserDataForSaltedHashedRecordIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateSyncGenerationFromCloudData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BCCloudDataSource *)secureUserDataSource;
-(void)setSecureUserDataSource:(BCCloudDataSource *)arg1 ;
@end

