/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSMutableDictionary;

@interface CKDArchiveRecordsURLRequest : CKDURLRequest {

	/*^block*/id _recordArchivedBlock;
	NSMutableDictionary* _zoneIDToRecordIDs;
	NSMutableDictionary* _recordZoneIDByRequestID;

}

@property (nonatomic,retain) NSMutableDictionary * zoneIDToRecordIDs;                    //@synthesize zoneIDToRecordIDs=_zoneIDToRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZoneIDByRequestID;              //@synthesize recordZoneIDByRequestID=_recordZoneIDByRequestID - In the implementation block
@property (nonatomic,copy) id recordArchivedBlock;                                       //@synthesize recordArchivedBlock=_recordArchivedBlock - In the implementation block
-(int)operationType;
-(id)recordArchivedBlock;
-(void)setRecordArchivedBlock:(id)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(NSMutableDictionary *)zoneIDToRecordIDs;
-(NSMutableDictionary *)recordZoneIDByRequestID;
-(id)initWithRecordIDsToArchive:(id)arg1 ;
-(void)setZoneIDToRecordIDs:(NSMutableDictionary *)arg1 ;
-(void)setRecordZoneIDByRequestID:(NSMutableDictionary *)arg1 ;
@end

