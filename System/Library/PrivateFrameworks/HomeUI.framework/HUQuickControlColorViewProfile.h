/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUQuickControlViewProfile.h>

@protocol HFColorProfile;
@interface HUQuickControlColorViewProfile : HUQuickControlViewProfile {

	BOOL _supportsRGBColor;
	id<HFColorProfile> _colorProfile;
	unsigned long long _mode;

}

@property (assign,nonatomic) BOOL supportsRGBColor;                        //@synthesize supportsRGBColor=_supportsRGBColor - In the implementation block
@property (nonatomic,retain) id<HFColorProfile> colorProfile;              //@synthesize colorProfile=_colorProfile - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                      //@synthesize mode=_mode - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(id<HFColorProfile>)colorProfile;
-(void)setColorProfile:(id<HFColorProfile>)arg1 ;
-(BOOL)supportsRGBColor;
-(void)setSupportsRGBColor:(BOOL)arg1 ;
@end

