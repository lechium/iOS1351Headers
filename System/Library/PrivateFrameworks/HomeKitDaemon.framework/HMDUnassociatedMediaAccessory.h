/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDUnassociatedAccessory.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDAccessoryAdvertisement, NSString;

@interface HMDUnassociatedMediaAccessory : HMDUnassociatedAccessory <HMFLogging> {

	HMDAccessoryAdvertisement* _advertisement;

}

@property (retain) HMDAccessoryAdvertisement * advertisement;              //@synthesize advertisement=_advertisement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(Class)modelClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)logIdentifier;
-(HMDAccessoryAdvertisement *)advertisement;
-(void)setAdvertisement:(HMDAccessoryAdvertisement *)arg1 ;
-(long long)associationOptions;
-(id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 ;
-(id)dumpDescription;
-(id)initWithAdvertisement:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)updateAdvertisementData:(id)arg1 ;
-(BOOL)isHAPAirPlay2Accessory;
@end

