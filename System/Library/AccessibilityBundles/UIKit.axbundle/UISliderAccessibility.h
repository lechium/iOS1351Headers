/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UISliderAccessibility_super.h>

@interface UISliderAccessibility : __UISliderAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)accessibilityValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityPath;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(void)layoutSubviews;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)_viewToAddFocusLayer;
-(double)_accessibilityMinValue;
-(double)_accessibilityMaxValue;
-(void)_accessibilitySetValue:(id)arg1 ;
-(unsigned long long)_accessibilityAutomationType;
-(double)_accessibilityNumberValue;
-(CGPoint)_accessibilityMinScrubberPosition;
-(CGPoint)_accessibilityMaxScrubberPosition;
-(id)_accessibilityAbsoluteValue;
-(void)_accessibilityAnnounceNewValue;
-(double)_accessibilityIncreaseAmount:(BOOL)arg1 ;
-(void)_accessibilityBumpValue:(BOOL)arg1 ;
@end
