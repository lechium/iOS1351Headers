/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthRecordsPlugin/HDOperation.h>

@class HDProfile, HDClinicalProviderServiceManager;

@interface HDCPSOperation : HDOperation {

	HDProfile* _profile;
	HDClinicalProviderServiceManager* _providerServiceManager;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                                                    //@synthesize profile=_profile - In the implementation block
@property (nonatomic,__weak,readonly) HDClinicalProviderServiceManager * providerServiceManager;              //@synthesize providerServiceManager=_providerServiceManager - In the implementation block
-(id)init;
-(HDProfile *)profile;
-(HDClinicalProviderServiceManager *)providerServiceManager;
-(id)initWithManager:(id)arg1 profile:(id)arg2 ;
@end
