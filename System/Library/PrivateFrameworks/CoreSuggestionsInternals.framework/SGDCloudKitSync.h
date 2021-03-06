/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class _PASKVOHandler, CKDatabase, APSConnection, NSObject, NSOperationQueue, NSMutableArray, CKContainer, SGFuture, _SGDCloudKitSyncPersistedState, NSOperation, NSError, NSString;

@interface SGDCloudKitSync : NSObject <APSConnectionDelegate> {

	_PASKVOHandler* _kvoHandler;
	CKDatabase* _database;
	/*^block*/id _callback;
	/*^block*/id _deleteAllSyncedItemsCallback;
	BOOL _readyForNewEntities;
	APSConnection* _apsConnection;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _opQueue;
	NSMutableArray* _operationsToAddToOpQueue;
	CKContainer* _container;
	SGFuture* _accountInfoFuture;
	_SGDCloudKitSyncPersistedState* _persistedState;
	long long _suspendCount;
	BOOL _noZone;
	BOOL _disabledBecauseOutOfDateSoftware;
	NSOperation* _inProgressProcureSaltOperation;
	NSOperation* _inProgressCreateZoneOperation;
	NSOperation* _inProgressDeleteZoneOperation;
	NSOperation* _inProgressFetchNewEntitiesOperation;
	BOOL _requestedFetchNewEntitiesWhileRequestAlreadyInFlight;
	NSError* _createZoneError;
	NSError* _deleteZoneError;
	NSError* _procureSaltError;
	BOOL _processingStateChanges;
	BOOL _pendingProcessStateChanges;
	ct_green_tea_logger_sRef _greenTeaLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)apsEnvironmentStringForContainer:(id)arg1 ;
+(id)_sharedInstanceConfigurationQueue;
+(void)setSharedInstanceConfigurationBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)addOperation:(id)arg1 ;
-(void)resume;
-(void)suspend;
-(void)setDatabase:(id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3 ;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2 ;
-(void)connectionDidReconnect:(id)arg1 ;
-(void)disable;
-(void)clearErrors;
-(id)accountInfo;
-(void)accountChanged:(id)arg1 ;
-(void)_coupleOperationTrainWithStart:(id)arg1 end:(id)arg2 ;
-(void)_addDependency:(id)arg1 toTrain:(id)arg2 ;
-(void)failSalt;
-(void)suspendAndResumeAfter:(double)arg1 ;
-(id)getUnderlyingError:(id)arg1 ;
-(BOOL)pauseIfNeededAndReturnRetryEligibilityForError:(id)arg1 ;
-(id)addDeleteZoneOperation;
-(id)addDeleteZoneAttemptOperationWithRetries:(unsigned long long)arg1 ;
-(id)addCreateZoneOperation;
-(id)addCreateZoneAttemptOperationWithRetries:(unsigned long long)arg1 ;
-(id)addManateeSanityCheckOperation;
-(id)addProcureSaltOperation;
-(id)ckErrorForRecordId:(id)arg1 inError:(id)arg2 ;
-(id)ckErrorForRecordZoneId:(id)arg1 inError:(id)arg2 ;
-(id)_ckErrorForId:(id)arg1 inError:(id)arg2 ;
-(id)addProcureSaltAttemptOperationWithRetries:(unsigned long long)arg1 ;
-(id)addFetchNewEntitiesOperation;
-(id)addFetchNewEntitiesAttemptOperationWithRetries:(unsigned long long)arg1 ;
-(BOOL)shouldRecreateZoneForRecordError:(id)arg1 operationError:(id)arg2 ;
-(id)addDeleteAndRecreateZoneOperation;
-(id)addWriteOperationForRecordGetter:(/*^block*/id)arg1 deleteGetter:(/*^block*/id)arg2 withRetries:(unsigned long long)arg3 ;
-(id)addWriteOperationForRecordGetter:(/*^block*/id)arg1 deleteGetter:(/*^block*/id)arg2 withRetries:(unsigned long long)arg3 isFirstTry:(BOOL)arg4 ;
-(id)addOperation;
-(void)processStateChanges;
-(id)shouldRemoveEventsFromEventKit;
-(void)createSubscriptionWithRetries:(unsigned long long)arg1 ;
-(void)addEntity:(id)arg1 withParentEntity:(id)arg2 ;
-(void)deleteGroupId:(id)arg1 ;
-(void)setReadyForNewEntities:(BOOL)arg1 ;
-(void)setNewEntitiesCallback:(/*^block*/id)arg1 ;
-(void)setDeleteAllSyncedItemsCallback:(/*^block*/id)arg1 ;
-(id)invokeNewEntitiesCallbackWithEntity:(id)arg1 ;
-(id)recordZoneId;
-(void)deleteStorageEvent:(id)arg1 ;
-(void)deleteZoneWithCompletion:(/*^block*/id)arg1 ;
-(id)privacySalt;
@end

