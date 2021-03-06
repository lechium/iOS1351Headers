/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@class WFAccessibilityActionComponent;

@interface WFAccessibilityComponentView : UIView

@property (setter=ck_setComponent:,nonatomic,retain) WFAccessibilityActionComponent * ck_component; 
-(id)accessibilityValue;
-(id)accessibilityAttributedValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityActivate;
-(id)_ck_accessibilityTarget;
@end

