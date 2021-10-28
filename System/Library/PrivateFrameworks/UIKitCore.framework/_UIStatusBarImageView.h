/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class UIImage, NSString, UIAccessibilityHUDItem;

@interface _UIStatusBarImageView : UIImageView <_UIStatusBarDisplayable> {

	BOOL _useDisabledAppearanceForAccessibilityHUD;
	long long _fontStyle;
	UIImage* _accessibilityHUDImage;
	double _iconScale;

}

@property (assign,nonatomic) double iconScale;                                                       //@synthesize iconScale=_iconScale - In the implementation block
@property (assign,nonatomic) long long fontStyle;                                                    //@synthesize fontStyle=_fontStyle - In the implementation block
@property (assign,nonatomic) BOOL useDisabledAppearanceForAccessibilityHUD;                          //@synthesize useDisabledAppearanceForAccessibilityHUD=_useDisabledAppearanceForAccessibilityHUD - In the implementation block
@property (nonatomic,retain) UIImage * accessibilityHUDImage;                                        //@synthesize accessibilityHUDImage=_accessibilityHUDImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)applyStyleAttributes:(id)arg1 ;
-(BOOL)prefersBaselineAlignment;
-(UIAccessibilityHUDItem *)accessibilityHUDRepresentation;
-(void)setFontStyle:(long long)arg1 ;
-(double)iconScale;
-(void)setAccessibilityHUDImage:(UIImage *)arg1 ;
-(void)setUseDisabledAppearanceForAccessibilityHUD:(BOOL)arg1 ;
-(long long)fontStyle;
-(void)setIconScale:(double)arg1 ;
-(UIImage *)accessibilityHUDImage;
-(BOOL)useDisabledAppearanceForAccessibilityHUD;
@end
