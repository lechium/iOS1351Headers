/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UILabel.h>

@protocol WFAdjustableLabelDelegate;
@interface WFAdjustableLabel : UILabel {

	id<WFAdjustableLabelDelegate> _adjustableDelegate;

}

@property (assign,nonatomic) id<WFAdjustableLabelDelegate> adjustableDelegate;              //@synthesize adjustableDelegate=_adjustableDelegate - In the implementation block
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(id<WFAdjustableLabelDelegate>)adjustableDelegate;
-(void)setAdjustableDelegate:(id<WFAdjustableLabelDelegate>)arg1 ;
@end

