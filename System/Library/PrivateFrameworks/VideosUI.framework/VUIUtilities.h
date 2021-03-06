/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideosUI/VideosUI-Structs.h>
@interface VUIUtilities : NSObject
+(id)randomColor;
+(BOOL)isAXSmallEnabled:(id)arg1 ;
+(BOOL)isAXLargeEnabled:(id)arg1 ;
+(long long)textAlignmentWithSemanticContentAttribute:(long long)arg1 ;
+(id)placeholderImageResourceName:(long long)arg1 ;
+(TVCornerRadii)imageCornerRadiiWithStyle:(long long)arg1 ;
+(double)imageCornerRadiusWithStyle:(long long)arg1 ;
+(BOOL)contentSizeCategoryIsAccessibility:(id)arg1 ;
+(BOOL)shouldInvalidateLayoutWithPreviousTraitCollection:(id)arg1 newTraitCollection:(id)arg2 ;
+(double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2 ;
+(CGSize)imageSizeWithAspectRatio:(double)arg1 scaleToSize:(CGSize)arg2 ;
+(BOOL)isIpadLayout;
+(double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2 maximumContentSizeCategory:(id)arg3 ;
+(id)colorFromRGBStr:(id)arg1 ;
+(long long)interfaceStyleFromTheme:(id)arg1 defaultInterfaceStyle:(long long)arg2 ;
+(id)VideosUIBundle;
+(double)libraryCategoryListWidth;
+(id)createImageProxyForResourceObject:(id)arg1 imageSize:(CGSize)arg2 ;
+(unsigned long long)minimumNumberOfItemsToEnableSeeAllButton;
+(BOOL)isTVApp;
+(BOOL)isInFullscreenOrPipPlayback;
+(void)gradientConfigForCollection:(id)arg1 gradientMask:(long long)arg2 properties:(id)arg3 configuration:(SCD_Struct_VU8*)arg4 ;
+(double)libraryListMarginToGrid;
+(id)colorFromHexStr:(id)arg1 ;
+(id)gradientLayerLocationsFromSpacings:(id)arg1 height:(double)arg2 ;
@end

