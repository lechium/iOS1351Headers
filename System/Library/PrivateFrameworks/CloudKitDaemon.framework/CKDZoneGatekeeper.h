/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMutableArray;

@interface CKDZoneGatekeeper : NSObject {

	NSMutableDictionary* _zoneIDsToGateHolders;
	NSMutableArray* _waiterWrappers;

}

@property (nonatomic,retain) NSMutableDictionary * zoneIDsToGateHolders;              //@synthesize zoneIDsToGateHolders=_zoneIDsToGateHolders - In the implementation block
@property (nonatomic,retain) NSMutableArray * waiterWrappers;                         //@synthesize waiterWrappers=_waiterWrappers - In the implementation block
-(id)init;
-(id)CKStatusReportArray;
-(BOOL)hasStatusToReport;
-(NSMutableDictionary *)zoneIDsToGateHolders;
-(NSMutableArray *)waiterWrappers;
-(void)registerWaiter:(id)arg1 forZoneIDs:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)relinquishLocksForWaiter:(id)arg1 ;
-(void)setZoneIDsToGateHolders:(NSMutableDictionary *)arg1 ;
-(void)setWaiterWrappers:(NSMutableArray *)arg1 ;
@end

