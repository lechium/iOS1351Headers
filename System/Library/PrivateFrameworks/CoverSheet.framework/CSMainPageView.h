/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSPageViewBase.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class _UILegibilitySettings, CSVibrantWallpaperButton, SBWallpaperEffectView, NSString;

@interface CSMainPageView : CSPageViewBase <CAAnimationDelegate> {

	_UILegibilitySettings* _legibilitySettings;
	BOOL _logoutHugCorner;
	BOOL _fakeWallpaperVisible;
	CSVibrantWallpaperButton* _logoutButtonView;
	SBWallpaperEffectView* _wallpaperEffectView;

}

@property (nonatomic,retain) CSVibrantWallpaperButton * logoutButtonView;              //@synthesize logoutButtonView=_logoutButtonView - In the implementation block
@property (nonatomic,retain) SBWallpaperEffectView * wallpaperEffectView;              //@synthesize wallpaperEffectView=_wallpaperEffectView - In the implementation block
@property (assign,nonatomic) BOOL fakeWallpaperVisible;                                //@synthesize fakeWallpaperVisible=_fakeWallpaperVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)updateForPresentation:(id)arg1 ;
-(void)_updateLogoutButtonForLegibilitySettings;
-(void)_layoutLogoutButtonView;
-(void)_layoutWallpaperEffectView;
-(UIEdgeInsets)_logoutButtonInsets;
-(void)setLogoutButtonView:(CSVibrantWallpaperButton *)arg1 ;
-(void)setWallpaperEffectView:(SBWallpaperEffectView *)arg1 ;
-(void)setFakeWallpaperVisible:(BOOL)arg1 ;
-(void)updateForLegibilitySettings:(id)arg1 ;
-(id)presentationRegions;
-(CSVibrantWallpaperButton *)logoutButtonView;
-(SBWallpaperEffectView *)wallpaperEffectView;
-(BOOL)fakeWallpaperVisible;
@end
