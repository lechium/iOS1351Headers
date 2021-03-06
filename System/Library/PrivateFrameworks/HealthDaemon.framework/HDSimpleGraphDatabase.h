/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class HDSQLiteDatabase, NSString, NSObject;

@interface HDSimpleGraphDatabase : NSObject {

	HDSQLiteDatabase* _database;
	NSString* _databasePath;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) HDSQLiteDatabase * database;                     //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) NSString * databasePath;                  //@synthesize databasePath=_databasePath - In the implementation block
+(id)tableCreateSQL;
+(id)indexCreateSQL;
+(id)indexDropSQL;
+(id)graphDatabaseWithBackingStore:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)close;
-(void)setDatabase:(HDSQLiteDatabase *)arg1 ;
-(HDSQLiteDatabase *)database;
-(NSString *)databasePath;
-(id)initWithPath:(id)arg1 error:(id*)arg2 ;
-(id)work_getRelationshipsForNodeWithID:(long long)arg1 relationships:(id)arg2 fetchType:(long long)arg3 error:(id*)arg4 ;
-(id)work_nodeForID:(long long)arg1 error:(id*)arg2 ;
-(BOOL)_work_addAttributeToNodeWithID:(long long)arg1 key:(id)arg2 value:(id)arg3 valueType:(id)arg4 error:(id*)arg5 ;
-(BOOL)work_insertNewValueTypeIfNeeded:(id)arg1 error:(id*)arg2 ;
-(BOOL)_work_addAttributeToNodeWithID:(long long)arg1 keyID:(long long)arg2 value:(id)arg3 valueType:(id)arg4 error:(id*)arg5 ;
-(id)work_attributesForNodeWithID:(long long)arg1 error:(id*)arg2 ;
-(BOOL)performWork:(/*^block*/id)arg1 usingTransaction:(BOOL)arg2 error:(id*)arg3 ;
-(void)_work_attemptDeleteWithCompletion:(/*^block*/id)arg1 ;
-(void)work_validateExistingDatabaseVersion;
-(BOOL)work_createTablesIfNeededWithError:(id*)arg1 ;
-(BOOL)work_createIndicesIfNeededwithError:(id*)arg1 ;
-(void)_work_close;
-(BOOL)_work_openDatabaseAtURL:(id)arg1 error:(id*)arg2 ;
-(long long)work_firstRowIDForNodeNamed:(id)arg1 error:(id*)arg2 ;
-(id)work_addNodeWithName:(id)arg1 error:(id*)arg2 ;
-(id)work_nodesForIDs:(id)arg1 error:(id*)arg2 ;
-(id)work_addNodesWithNames:(id)arg1 error:(id*)arg2 ;
-(long long)_work_countOfObjectsInTable:(id)arg1 ;
-(BOOL)_work_doesNamedRowExist:(id)arg1 inTable:(id)arg2 ;
-(id)work_nodesForNames:(id)arg1 error:(id*)arg2 ;
-(BOOL)work_deleteNodesWithIDs:(id)arg1 error:(id*)arg2 ;
-(BOOL)_work_deleteObjectsFromTable:(id)arg1 withIDs:(id)arg2 error:(id*)arg3 ;
-(BOOL)work_insertNewRelationshipIfNeededNamed:(id)arg1 ;
-(long long)work_getIDForRelationshipName:(id)arg1 error:(id*)arg2 ;
-(long long)work_uniquedNodeWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)work_deleteRelationshipsWithIDs:(id)arg1 error:(id*)arg2 ;
-(BOOL)work_deleteRelationships:(id)arg1 fromNodeWithID:(long long)arg2 error:(id*)arg3 ;
-(BOOL)_work_deleteRelationships:(id)arg1 fromNodeWithID:(long long)arg2 toNodeNamed:(id)arg3 error:(id*)arg4 ;
-(long long)work_rowIDForValueType:(id)arg1 error:(id*)arg2 ;
-(BOOL)work_insertNewKeyIfNeeded:(id)arg1 error:(id*)arg2 ;
-(long long)work_getIDForKeyName:(id)arg1 error:(id*)arg2 ;
-(void)_work_beginTransaction;
-(void)_work_endTransaction:(BOOL)arg1 ;
-(BOOL)_performWork:(/*^block*/id)arg1 usingTransaction:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_openDatabaseError:(id*)arg1 ;
-(BOOL)_work_createGraphDatabaseIfNeededWithError:(id*)arg1 ;
-(void)attemptDeleteWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)attemptDelete;
-(BOOL)work_dropIndicesWithError:(id*)arg1 ;
-(id)work_userVersionWithError:(id*)arg1 ;
-(id)work_makeNodeWithName:(id)arg1 error:(id*)arg2 ;
-(long long)work_countOfNodesWithRelationship:(long long)arg1 error:(id*)arg2 ;
-(long long)work_countOfNodes;
-(BOOL)work_doesNodeExist:(id)arg1 ;
-(id)work_nodeForName:(id)arg1 ;
-(BOOL)work_deleteNodeWithID:(long long)arg1 error:(id*)arg2 ;
-(id)work_nodesContainingAttributeWithID:(long long)arg1 limit:(long long)arg2 withValue:(id)arg3 error:(id*)arg4 ;
-(id)work_nodesContainingAttribute:(id)arg1 withValue:(id)arg2 error:(id*)arg3 ;
-(BOOL)work_deleteAllRelationshipsWithName:(id)arg1 withError:(id*)arg2 ;
-(id)work_allNodesWithFromRelationshipID:(long long)arg1 error:(id*)arg2 ;
-(id)work_nodesWithRelationshipOfType:(long long)arg1 toNodeWithID:(long long)arg2 error:(id*)arg3 ;
-(id)work_nodeNameForAttributeWithKeyID:(long long)arg1 value:(id)arg2 error:(id*)arg3 ;
-(BOOL)work_doesRelationshipNameExist:(id)arg1 ;
-(long long)work_countOfRelationships;
-(long long)work_countOfRelationshipOfType:(long long)arg1 fromNodeWithID:(long long)arg2 error:(id*)arg3 ;
-(BOOL)work_addRelationshipNamed:(id)arg1 fromNodeNamed:(id)arg2 toNodeNamed:(id)arg3 error:(id*)arg4 ;
-(BOOL)work_addRelationshipNamed:(id)arg1 fromNodeWithID:(long long)arg2 toNodeWithID:(long long)arg3 error:(id*)arg4 ;
-(BOOL)work_deleteRelationshipWithID:(long long)arg1 error:(id*)arg2 ;
-(BOOL)work_deleteRelationship:(id)arg1 fromNodeWithID:(long long)arg2 error:(id*)arg3 ;
-(BOOL)_work_deleteRelationships:(id)arg1 toNodeWithName:(id)arg2 error:(id*)arg3 ;
-(BOOL)work_deleteRelationships:(id)arg1 fromNodeWithID:(long long)arg2 toNodeNamed:(id)arg3 error:(id*)arg4 ;
-(BOOL)work_deleteAllRelationshipsOfTypes:(id)arg1 error:(id*)arg2 ;
-(BOOL)work_doesKeyExist:(id)arg1 ;
-(BOOL)work_doesValueTypeExist:(id)arg1 ;
-(id)work_attributesForNodeWithID:(long long)arg1 matchingKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)work_deleteAttributesFromNodeNamed:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)work_deleteAllAttributesFromNodeNamed:(id)arg1 error:(id*)arg2 ;
-(id)work_metadataValueForKey:(id)arg1 ;
-(BOOL)work_setMetadataValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)performWork:(/*^block*/id)arg1 usingTransaction:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_work_nodesWithRelationship:(id)arg1 toNodeWithID:(id)arg2 reversed:(BOOL)arg3 error:(id*)arg4 ;
-(id)work_nodesWithRelationship:(id)arg1 toNodeWithID:(id)arg2 error:(id*)arg3 ;
-(id)work_nodesWithRelationship:(id)arg1 fromNodeWithID:(id)arg2 error:(id*)arg3 ;
-(BOOL)work_changeRelationshipWithNameID:(long long)arg1 subjectID:(long long)arg2 toSampleWithUUID:(id)arg3 withNewNameID:(long long)arg4 error:(id*)arg5 ;
@end

