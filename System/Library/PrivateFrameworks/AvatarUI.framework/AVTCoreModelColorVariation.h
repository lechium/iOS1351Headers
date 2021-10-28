/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVTColorPreset, AVTCoreModelColor;

@interface AVTCoreModelColorVariation : NSObject {

	AVTColorPreset* _colorPreset;
	AVTCoreModelColor* _color;

}

@property (nonatomic,readonly) AVTColorPreset * colorPreset;              //@synthesize colorPreset=_colorPreset - In the implementation block
@property (nonatomic,readonly) AVTCoreModelColor * color;                 //@synthesize color=_color - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(AVTCoreModelColor *)color;
-(AVTColorPreset *)colorPreset;
-(id)initWithColor:(id)arg1 colorPreset:(id)arg2 ;
@end
