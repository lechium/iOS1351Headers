/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIWindowAccessibility_super.h>

@interface UIWindowAccessibility : __UIWindowAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityContainer;
-(BOOL)accessibilityElementsHidden;
-(void)_setFirstResponder:(id)arg1 ;
-(void)_orderFrontWithoutMakingKey;
-(CGPoint)warpPoint:(CGPoint)arg1 ;
-(unsigned)_accessibilityContextId;
-(id)accessibilityRemoteSubstituteChildren:(id)arg1 ;
-(unsigned long long)_accessibilityAutomationType;
-(id)_iosAccessibilityAttributeValue:(long long)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)accessibilityIsWindow;
-(id)_accessibilityUserTestingParent;
-(int)_accessibilityRemotePid;
-(long long)_accessibilityInterfaceOrientationForScreenCoordinates;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)_axListenForRemoteElement;
-(id)_accessibilityAllRemoteElements;
-(id)_accessibilityRemoteElement;
-(void)_axUpdateForRemoteElement:(id)arg1 ;
-(void)_accessibilitySetAllRemoteElements:(id)arg1 ;
-(void)_axCheckForExistingRemoteElements;
-(void)_axRemoteElementRegistered:(id)arg1 ;
-(id)_accessibilityIOSMacRotors;
-(void)_accessibilitySetIOSMacRotors:(id)arg1 ;
@end

