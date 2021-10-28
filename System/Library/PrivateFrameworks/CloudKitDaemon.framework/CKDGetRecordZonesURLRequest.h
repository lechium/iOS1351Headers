/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDGetRecordZonesURLRequest : CKDURLRequest {

	BOOL _onlyFetchPCSInfo;
	NSArray* _recordZones;
	/*^block*/id _recordZoneFetchedBlock;
	NSArray* _zoneIDs;
	NSMutableDictionary* _zoneIDByRequestID;

}

@property (nonatomic,retain) NSArray * zoneIDs;                                    //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * zoneIDByRequestID;              //@synthesize zoneIDByRequestID=_zoneIDByRequestID - In the implementation block
@property (nonatomic,readonly) NSArray * recordZones;                              //@synthesize recordZones=_recordZones - In the implementation block
@property (assign,nonatomic) BOOL onlyFetchPCSInfo;                                //@synthesize onlyFetchPCSInfo=_onlyFetchPCSInfo - In the implementation block
@property (nonatomic,copy) id recordZoneFetchedBlock;                              //@synthesize recordZoneFetchedBlock=_recordZoneFetchedBlock - In the implementation block
-(int)operationType;
-(NSArray *)recordZones;
-(NSArray *)zoneIDs;
-(void)setZoneIDs:(NSArray *)arg1 ;
-(id)initWithRecordZoneIDs:(id)arg1 ;
-(void)setOnlyFetchPCSInfo:(BOOL)arg1 ;
-(BOOL)onlyFetchPCSInfo;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(BOOL)allowsAnonymousAccount;
-(id)zoneIDsToLock;
-(void)setRecordZoneFetchedBlock:(id)arg1 ;
-(NSMutableDictionary *)zoneIDByRequestID;
-(id)recordZoneFetchedBlock;
-(void)setZoneIDByRequestID:(NSMutableDictionary *)arg1 ;
@end
