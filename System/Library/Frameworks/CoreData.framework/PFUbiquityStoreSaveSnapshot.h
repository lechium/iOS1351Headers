/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSArray, PFUbiquityKnowledgeVector, PFUbiquityGlobalObjectIDCache, NSObject, NSDictionary;

@interface PFUbiquityStoreSaveSnapshot : NSObject {

	NSMutableArray* _entityNames;
	NSMutableArray* _peerIDs;
	NSMutableArray* _globalObjectIDs;
	NSMutableArray* _primaryKeys;
	NSMutableDictionary* _managedObjectIDToGlobalObjectID;
	NSMutableDictionary* _globalObjectIDToPermanentManagedObjectID;
	NSMutableDictionary* _entityNameToIndex;
	NSMutableDictionary* _peerIDToIndex;
	NSMutableDictionary* _primaryKeyToIndex;
	NSMutableDictionary* _globalObjectIDToIndex;
	NSMutableDictionary* _insertedObjects;
	NSMutableDictionary* _updatedObjects;
	NSMutableDictionary* _deletedObjects;
	NSMutableDictionary* _peerStates;
	NSNumber* _transactionNumber;
	NSString* _exportingPeerID;
	NSString* _localPeerID;
	NSMutableArray* _filesInsertedInTransaction;
	NSArray* _filesDeletedInTransaction;
	PFUbiquityKnowledgeVector* _storeKV;
	PFUbiquityGlobalObjectIDCache* _gidCache;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSArray * entityNames;                                                //@synthesize entityNames=_entityNames - In the implementation block
@property (nonatomic,readonly) NSArray * peerIDs;                                                    //@synthesize peerIDs=_peerIDs - In the implementation block
@property (nonatomic,readonly) NSArray * globalObjectIDs;                                            //@synthesize globalObjectIDs=_globalObjectIDs - In the implementation block
@property (nonatomic,readonly) NSArray * primaryKeys;                                                //@synthesize primaryKeys=_primaryKeys - In the implementation block
@property (nonatomic,readonly) NSDictionary * insertedObjects;                                       //@synthesize insertedObjects=_insertedObjects - In the implementation block
@property (nonatomic,readonly) NSDictionary * updatedObjects;                                        //@synthesize updatedObjects=_updatedObjects - In the implementation block
@property (nonatomic,readonly) NSDictionary * deletedObjects;                                        //@synthesize deletedObjects=_deletedObjects - In the implementation block
@property (nonatomic,readonly) NSDictionary * peerStates;                                            //@synthesize peerStates=_peerStates - In the implementation block
@property (nonatomic,retain) NSNumber * transactionNumber;                                           //@synthesize transactionNumber=_transactionNumber - In the implementation block
@property (nonatomic,retain) NSString * exportingPeerID;                                             //@synthesize exportingPeerID=_exportingPeerID - In the implementation block
@property (nonatomic,retain) NSString * localPeerID;                                                 //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * storeKV;                                    //@synthesize storeKV=_storeKV - In the implementation block
@property (nonatomic,readonly) NSDictionary * globalObjectIDToPermanentManagedObjectID;              //@synthesize globalObjectIDToPermanentManagedObjectID=_globalObjectIDToPermanentManagedObjectID - In the implementation block
@property (nonatomic,readonly) NSDictionary * managedObjectIDToGlobalObjectID;                       //@synthesize managedObjectIDToGlobalObjectID=_managedObjectIDToGlobalObjectID - In the implementation block
@property (nonatomic,readonly) NSDictionary * entityNameToIndex;                                     //@synthesize entityNameToIndex=_entityNameToIndex - In the implementation block
@property (nonatomic,readonly) NSDictionary * peerIDToIndex;                                         //@synthesize peerIDToIndex=_peerIDToIndex - In the implementation block
@property (nonatomic,readonly) NSDictionary * primaryKeyToIndex;                                     //@synthesize primaryKeyToIndex=_primaryKeyToIndex - In the implementation block
@property (nonatomic,readonly) NSDictionary * globalObjectIDToIndex;                                 //@synthesize globalObjectIDToIndex=_globalObjectIDToIndex - In the implementation block
@property (nonatomic,retain) PFUbiquityGlobalObjectIDCache * globalObjectIDCache;                    //@synthesize gidCache=_gidCache - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(NSDictionary *)insertedObjects;
-(NSNumber *)transactionNumber;
-(NSDictionary *)updatedObjects;
-(NSDictionary *)deletedObjects;
-(NSArray *)primaryKeys;
-(NSString *)localPeerID;
-(void)setDeletedObjects:(NSDictionary *)arg1 ;
-(NSString *)exportingPeerID;
-(void)setExportingPeerID:(NSString *)arg1 ;
-(void)setTransactionNumber:(NSNumber *)arg1 ;
-(id)globalObjectIDFromCompressedObjectID:(id)arg1 ;
-(id)createKnowledgeVectorFromPeerStates;
-(void)_setFilesDeletedInTransaction:(id)arg1 ;
-(void)reserveTransactionNumberWithStoreExportContext:(id)arg1 ;
-(void)generatePeerStates;
-(void)resetFromOptimisticLockingException;
-(id)addManagedObject:(id)arg1 withTransactionType:(int)arg2 andStoreExportContext:(id)arg3 withError:(id*)arg4 ;
-(id)filesInsertedInTransaction;
-(NSDictionary *)peerStates;
-(id)compressedGlobalObjectIDFromGlobalObjectID:(id)arg1 ;
-(PFUbiquityKnowledgeVector *)storeKV;
-(id)initWithExportingPeerID:(id)arg1 ;
-(void)setLocalPeerID:(NSString *)arg1 ;
-(id)initForExport:(id)arg1 ;
-(NSArray *)entityNames;
-(NSArray *)peerIDs;
-(NSArray *)globalObjectIDs;
-(NSDictionary *)managedObjectIDToGlobalObjectID;
-(NSDictionary *)entityNameToIndex;
-(NSDictionary *)peerIDToIndex;
-(NSDictionary *)primaryKeyToIndex;
-(id)checkIndecies:(id)arg1 ;
-(id)noSyncCheckIndex:(id)arg1 forValue:(id)arg2 fromArrayOfValues:(id)arg3 ;
-(id)globalObjectIDForManagedObject:(id)arg1 withStoreExportContext:(id)arg2 ;
-(id)createUbiquityDictionary:(id)arg1 withStoreExportContext:(id)arg2 error:(id*)arg3 ;
-(id)checkIndex:(id)arg1 forValue:(id)arg2 fromArrayOfValues:(id)arg3 ;
-(id)transactionNumberFromPeerStates:(id)arg1 ;
-(id)filesDeletedInTransaction;
-(void)setTransactionNumber:(id)arg1 peerStates:(id)arg2 andPeerIDs:(id)arg3 ;
-(void)setEntityNames:(id)arg1 globalObjectIDs:(id)arg2 primaryKeys:(id)arg3 forStoreName:(id)arg4 withRootLocation:(id)arg5 ;
-(void)setInsertedObjects:(NSDictionary *)arg1 ;
-(void)setUpdatedObjects:(NSDictionary *)arg1 ;
-(void)prepareForGlobalIDReplacement;
-(void)replaceGlobalObjectID:(id)arg1 withGlobalObjectID:(id)arg2 ;
-(void)finishGlobalIDReplacement;
-(NSDictionary *)globalObjectIDToIndex;
-(NSDictionary *)globalObjectIDToPermanentManagedObjectID;
-(void)setStoreKV:(PFUbiquityKnowledgeVector *)arg1 ;
-(PFUbiquityGlobalObjectIDCache *)globalObjectIDCache;
-(void)setGlobalObjectIDCache:(PFUbiquityGlobalObjectIDCache *)arg1 ;
@end

