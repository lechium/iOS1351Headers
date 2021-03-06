/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CAMControlDrawerMenuButton.h>

@interface CAMDrawerHDRButton : CAMControlDrawerMenuButton {

	BOOL _allowAutoHDR;
	BOOL _allowHDROn;
	long long _hdrMode;

}

@property (assign,setter=setHDRMode:,nonatomic) long long hdrMode;              //@synthesize hdrMode=_hdrMode - In the implementation block
@property (assign,nonatomic) BOOL allowAutoHDR;                                 //@synthesize allowAutoHDR=_allowAutoHDR - In the implementation block
@property (assign,nonatomic) BOOL allowHDROn;                                   //@synthesize allowHDROn=_allowHDROn - In the implementation block
-(long long)hdrMode;
-(long long)controlType;
-(void)setHDRMode:(long long)arg1 ;
-(id)imageNameForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(void)setAllowAutoHDR:(BOOL)arg1 ;
-(void)setAllowHDROn:(BOOL)arg1 ;
-(void)didSelectMenuItem:(id)arg1 ;
-(BOOL)isMenuItemSelected:(id)arg1 ;
-(id)loadMenuItems;
-(BOOL)allowHDROn;
-(BOOL)allowAutoHDR;
@end

