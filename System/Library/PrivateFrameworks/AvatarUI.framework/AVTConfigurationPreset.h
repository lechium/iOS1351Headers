/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AvatarUI/AvatarUI-Structs.h>
@interface AVTConfigurationPreset : NSObject {

	BOOL _defaultPreset;
	id _preset;
	SCD_Struct_AV4 _settingKind;

}

@property (nonatomic,readonly) SCD_Struct_AV4 settingKind;                             //@synthesize settingKind=_settingKind - In the implementation block
@property (nonatomic,readonly) id preset;                                              //@synthesize preset=_preset - In the implementation block
@property (getter=isDefaultPreset,nonatomic,readonly) BOOL defaultPreset;              //@synthesize defaultPreset=_defaultPreset - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)preset;
-(SCD_Struct_AV4)settingKind;
-(id)initWithDefaultPresetForSettingKind:(SCD_Struct_AV4)arg1 ;
-(id)initWithPreset:(id)arg1 settingKind:(SCD_Struct_AV4)arg2 ;
-(BOOL)isDefaultPreset;
@end

