/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKClinicalAuthorizationSettingsViewController.h>

@class HRProfile;

@interface WDClinicalAuthorizationSettingsViewController : HKClinicalAuthorizationSettingsViewController {

	HRProfile* _profile;

}

@property (nonatomic,__weak,readonly) HRProfile * profile;              //@synthesize profile=_profile - In the implementation block
+(id)contextUsingProfile:(id)arg1 source:(id)arg2 ;
-(HRProfile *)profile;
-(id)initWithContext:(id)arg1 style:(long long)arg2 ;
-(id)initWithProfile:(id)arg1 source:(id)arg2 ;
@end

