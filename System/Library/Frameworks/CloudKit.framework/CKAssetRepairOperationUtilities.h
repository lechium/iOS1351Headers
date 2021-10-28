/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CKAssetRepairOperationUtilities : NSObject
+(id)createRepairContainerFromContainer:(id)arg1 withOverrides:(id)arg2 ;
+(BOOL)repairErrorShouldBeMarkedAsBroken:(id)arg1 ;
+(BOOL)errorShouldTriggerNetworkReachabilityEvent:(id)arg1 ;
+(BOOL)errorIsRetriableInNearFuture:(id)arg1 ;
+(id)createRepairOperationGroupWithName:(id)arg1 ;
+(id)createRepairContainerFromContainer:(id)arg1 ;
+(void)clearRepairZoneForDatabase:(id)arg1 withRepairContainerOverrides:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)repairRecordFromRecord:(id)arg1 field:(id)arg2 listIndex:(long long)arg3 repairZoneID:(id)arg4 ;
+(id)uploadRequestMetadataFromRepairRecord:(id)arg1 ;
@end
