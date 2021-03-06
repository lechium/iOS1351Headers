/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSError, BRCPQLConnection, CKServerChangeToken, BRCClientZone;

@interface BRCPendingChangesStream : NSObject {

	NSURL* _databaseURL;
	NSError* _error;
	BRCPQLConnection* _db;
	CKServerChangeToken* _startingChangeToken;
	BRCClientZone* _clientZone;

}
-(void)dealloc;
-(void)_openDB;
-(id)saveError;
-(id)initWithServerZone:(id)arg1 ;
-(BOOL)enumerateRecordsOfType:(long long)arg1 block:(/*^block*/id)arg2 ;
-(void)destroyDatabase;
-(void)fetchTokenState:(/*^block*/id)arg1 ;
-(BOOL)saveEditedRecords:(id)arg1 deletedRecordIDs:(id)arg2 deletedShareIDs:(id)arg3 serverChangeToken:(id)arg4 clientChangeToken:(long long)arg5 syncStatus:(long long)arg6 ;
-(void)destroyDatabaseOnQueue:(BOOL)arg1 ;
-(void)_dbBecameCorrupted;
-(void)_createSchemaIfNecessary;
-(long long)_recordTypeFromRecordID:(id)arg1 isShare:(BOOL)arg2 isDelete:(BOOL)arg3 ;
-(void)_destroyDatabase;
@end

