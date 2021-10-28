/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ScreenshotServices/ScreenshotServices-Structs.h>
@interface SSChromeHelper : NSObject
+(id)separatorView;
+(long long)statusBarStyle;
+(id)barSeparatorColor;
+(int)statusBarVisibilityForTraitCollection:(id)arg1 isPortrait:(BOOL)arg2 ;
+(long long)backgroundBlurEffectStyle;
+(double)cropsHandleOutset;
+(double)cropsCornerLength;
+(double)cropsCornerWidth;
+(CGRect)availableRectForFullscreenContent:(CGRect)arg1 layoutBounds:(CGRect)arg2 bleedToBottom:(BOOL)arg3 topBarHeight:(double)arg4 bottomBarHeight:(double)arg5 userInterfaceIdiom:(long long)arg6 multipleScreenshots:(BOOL)arg7 ;
+(double)defaultBarButtonSpacing;
+(id)createFixedSpaceBarButtonItemWithWidth:(double)arg1 ;
+(double)widthForOpacityControlInView:(id)arg1 withContentSwitcher:(id)arg2 ;
+(void)configureNavigationBarAppearance:(id)arg1 ;
+(double)barSeparatorSize;
+(double)screenshotTopBottomMargin:(long long)arg1 ;
+(double)countIndicatorOffset;
+(double)screenshotTopBottomMarginPad;
+(double)screenshotTopBottomMarginPhone;
+(double)barButtonItemsLeftOfOpacitySlider;
+(double)defaultBarButtonWidth;
+(double)widthForContentSwitcher:(id)arg1 forView:(id)arg2 ;
+(double)contentSwitcherPadding;
@end
