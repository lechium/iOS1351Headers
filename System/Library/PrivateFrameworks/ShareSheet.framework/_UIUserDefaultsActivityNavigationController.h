/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:05 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/_UIAppearanceRestriction.h>

@class NSString;

@interface _UIUserDefaultsActivityNavigationController : UINavigationController <_UIAppearanceRestriction>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_preventsAppearanceProxyCustomization;
-(CGSize)preferredContentSize;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(BOOL)_viewControllerUnderlapsStatusBar;
-(double)_statusBarHeightAdjustmentForCurrentOrientation;
-(BOOL)_shouldUseContentOverlayInsetsAsStatusBarUnderlapHeight;
@end

