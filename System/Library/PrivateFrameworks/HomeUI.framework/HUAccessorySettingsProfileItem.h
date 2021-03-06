/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItem.h>

@class MCProfile, HMSetting, NSUUID;

@interface HUAccessorySettingsProfileItem : HFItem {

	MCProfile* _profile;
	HMSetting* _setting;

}

@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@property (nonatomic,readonly) MCProfile * profile;                    //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HMSetting * setting;                    //@synthesize setting=_setting - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(MCProfile *)profile;
-(HMSetting *)setting;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithProfile:(id)arg1 setting:(id)arg2 ;
@end

