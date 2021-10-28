/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/AccessibilityBundles/CameraUI.axbundle/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/__CAMPreviewViewAccessibility_super.h>

@interface CAMPreviewViewAccessibility : __CAMPreviewViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)accessibilityZoomInAtPoint:(CGPoint)arg1 ;
-(void)accessibilityZoomOutAtPoint:(CGPoint)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)_accessibilityAllowsSiblingsWhenOvergrown;
-(BOOL)_axIsBackFacing;
-(BOOL)_axIsFocusLocked;
-(BOOL)_axIsPortraitMode;
-(BOOL)_axIsUsingFlash;
-(void)_accessibilityZoomIn:(BOOL)arg1 ;
-(void)_showFocusAtPoint:(CGPoint)arg1 startAnimating:(BOOL)arg2 ;
@end
