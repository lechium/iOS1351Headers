/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HMDMediaSystem, HMDAccessory, HMDHome, HMDAccessorySettingTarget, NSUUID, NSString, NSArray;

@interface HMDAccessorySettingContainer : NSObject {

	HMDMediaSystem* _mediaSystem;
	HMDAccessory* _accessory;

}

@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                        //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,__weak,readonly) HMDHome * home; 
@property (nonatomic,__weak,readonly) HMDAccessorySettingTarget * target; 
@property (nonatomic,__weak,readonly) HMDMediaSystem * mediaSystem;                    //@synthesize mediaSystem=_mediaSystem - In the implementation block
@property (nonatomic,readonly) NSUUID * parentUUID; 
@property (nonatomic,readonly) NSString * name; 
@property (readonly) NSArray * supportedMultiUserLanguageCodes; 
@property (readonly) NSArray * accessories; 
-(id)description;
-(NSString *)name;
-(HMDAccessorySettingTarget *)target;
-(HMDHome *)home;
-(NSUUID *)parentUUID;
-(HMDAccessory *)accessory;
-(NSArray *)accessories;
-(HMDMediaSystem *)mediaSystem;
-(id)initWithAccessory:(id)arg1 mediaSystem:(id)arg2 ;
-(void)auditRootSettingsGroup:(unsigned long long)arg1 ;
-(NSArray *)supportedMultiUserLanguageCodes;
-(BOOL)isMediaSystemContainer;
@end

