/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, _DKKeyValueStore, OS_dispatch_group;
@class NSObject, CKContainer, _DKKnowledgeStorage, NSOperationQueue;

@interface _DKSyncV1CloudKitKnowledgeStorage : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	CKContainer* _container;
	id<_DKKeyValueStore> _keyValueStore;
	_DKKnowledgeStorage* _storage;
	NSObject*<OS_dispatch_group> _group;
	NSOperationQueue* _operationQueue;

}

@property (retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (retain) CKContainer * container;                             //@synthesize container=_container - In the implementation block
@property (retain) id<_DKKeyValueStore> keyValueStore;                  //@synthesize keyValueStore=_keyValueStore - In the implementation block
@property (__weak) _DKKnowledgeStorage * storage;                       //@synthesize storage=_storage - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> group;                  //@synthesize group=_group - In the implementation block
@property (retain) NSOperationQueue * operationQueue;                   //@synthesize operationQueue=_operationQueue - In the implementation block
+(void)setupWithStorage:(id)arg1 ;
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(_DKKnowledgeStorage *)storage;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setStorage:(_DKKnowledgeStorage *)arg1 ;
-(id<_DKKeyValueStore>)keyValueStore;
-(id)initWithStorage:(id)arg1 ;
-(void)setKeyValueStore:(id<_DKKeyValueStore>)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(void)_setPreviousServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2 ;
-(id)_previousServerChangeTokenKeyForRecordZoneID:(id)arg1 ;
-(id)_previousServerChangeTokenForRecordZoneID:(id)arg1 ;
-(void)_resetPreviousServerChangeTokenForRecordZoneID:(id)arg1 ;
-(void)syncDown;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)getLegacySyncToken;
-(BOOL)_enqueueDatabaseOperation:(id)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

