/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:33 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CompanionSync/CompanionSync-Structs.h>
#import <libobjc.A.dylib/NSFilePresenter.h>

@protocol OS_dispatch_queue;
@class NSURL, NSOperationQueue, NSSet, NSString, NSObject;

@interface SYStatisticStore : NSObject <NSFilePresenter> {

	NSString* _path;
	sqlite3Ref _db;
	sqlite3_stmtRef _insertIncoming;
	sqlite3_stmtRef _addProcessingTimeIncoming;
	sqlite3_stmtRef _addErrorIncoming;
	sqlite3_stmtRef _markCompleteIncoming;
	sqlite3_stmtRef _insertOutgoing;
	sqlite3_stmtRef _updateOutgoingIdentifier;
	sqlite3_stmtRef _updateOutgoing;
	sqlite3_stmtRef _timestampForID;
	sqlite3_stmtRef _reserveRowID;
	sqlite3_stmtRef _responseReceived;
	sqlite3_stmtRef _requestAcked;
	sqlite3_stmtRef _logFileActivity;
	sqlite3_stmtRef _updateFileOutgoing;
	long long _lastIncomingRowID;
	NSObject*<OS_dispatch_queue> _preemption_queue;
	NSObject*<OS_dispatch_queue> _operations_queue;
	NSOperationQueue* _presenterOperationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
+(id)sharedInstance;
+(id)unpackMessageData:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(int)_closeDB;
-(void)_openDB;
-(void)_onQueueAsync:(/*^block*/id)arg1 ;
-(void)_onQueueSync:(/*^block*/id)arg1 ;
-(void)recordIncomingMessage:(id)arg1 forService:(id)arg2 ;
-(void)recordOutgoingMessage:(id)arg1 forService:(id)arg2 ;
-(void)updateOutgoingMessageWithIdentifier:(id)arg1 forService:(id)arg2 sentSuccessfully:(BOOL)arg3 sendError:(id)arg4 ;
-(void)updateOutgoingMessageWithIdentifier:(id)arg1 didReceiveResponse:(BOOL)arg2 error:(id)arg3 ;
-(void)updateLastIncomingMessageWithError:(id)arg1 ;
-(void)updateLastIncomingMessageWithProcessingTime:(double)arg1 ;
-(void)assignIdentifier:(id)arg1 toOutgoingMessage:(id)arg2 ;
-(void)confirmDeliveryOfOutgoingMessage:(id)arg1 ;
-(int)_getSchemaVersion;
-(sqlite3Ref)dbRef;
-(void)recordOutgoingFileTransferAtURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 error:(id)arg4 forService:(id)arg5 ;
-(void)setFileTransferIdentifier:(id)arg1 forOutgoingMessagesWithRowIDs:(id)arg2 ;
-(unsigned long long)rowIDForPartialMessage:(id)arg1 ;
-(void)recordIncomingFileTransferAtURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 forService:(id)arg4 ;
-(void)updateOutgoingFileTransferWithIdentifier:(id)arg1 sentSuccessfully:(BOOL)arg2 error:(id)arg3 ;
-(void)_initializeFilePresentation;
-(void)_letGoForUnitTests:(id)arg1 ;
-(void)_ensureCorrectFileOwnership:(id)arg1 ;
-(BOOL)_openDBFile:(BOOL)arg1 ;
-(id)_unpackMetadata:(id)arg1 ;
-(id)_keySetForMessageLogTable;
-(void)_unpackPBRequest:(id)arg1 forMessageID:(unsigned short)arg2 intoDictionary:(id)arg3 ;
-(void)_unpackPBResponse:(id)arg1 forMessageID:(unsigned short)arg2 intoDictionary:(id)arg3 ;
-(id)_unpackMessageData:(id)arg1 ;
-(double)_getMachTimestamp;
-(BOOL)_tableEmpty:(id)arg1 ;
-(id)_openDBIfNecessary;
-(void)markLastIncomingMessageComplete;
-(void)confirmDeliveryOfOutgoingFileTransfer:(id)arg1 ;
-(id)operationQ;
-(id)_LOCKED_allServiceNames;
-(BOOL)_LOCKED_pruneMessageLogForServices:(id)arg1 ;
-(BOOL)_LOCKED_pruneFileTransferLogForServices:(id)arg1 ;
-(void)_pruneOldData;
@end

