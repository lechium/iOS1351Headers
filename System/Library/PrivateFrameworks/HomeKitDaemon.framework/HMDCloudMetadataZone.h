/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:22 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDCloudZone.h>

@class HMDCloudRecord;

@interface HMDCloudMetadataZone : HMDCloudZone {

	HMDCloudRecord* _metadataRecord;

}

@property (nonatomic,retain) HMDCloudRecord * metadataRecord;              //@synthesize metadataRecord=_metadataRecord - In the implementation block
+(id)zoneRootRecordName;
+(id)zoneSubscriptionName:(id)arg1 ;
+(void)createMetadataZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setServerChangeToken:(id)arg1 ;
-(HMDCloudRecord *)metadataRecord;
-(void)setMetadataRecord:(HMDCloudRecord *)arg1 ;
@end

