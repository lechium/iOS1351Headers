/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIAlertControllerVisualStyle.h>

@interface UIAlertControllerVisualStyleAlert : UIAlertControllerVisualStyle
-(double)textFieldHorizontalMargin;
-(UIEdgeInsets)contentInsetsForContainerView:(id)arg1 ;
-(double)transitionDurationForPresentation:(BOOL)arg1 ofAlertController:(id)arg2 ;
-(void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(BOOL)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)textFieldContainingViewWithTextField:(id)arg1 position:(long long)arg2 ;
-(BOOL)placementAvoidsKeyboard;
-(id)titleLabelFont;
-(double)marginBelowMessageLabelLastBaseline;
-(double)marginAboveTitleLabelFirstBaseline;
-(double)marginBelowTitleLabelLastBaseline;
-(id)titleLabelColor;
-(id)messageLabelFont;
-(id)messageLabelColor;
-(double)marginAboveMessageLabelFirstBaseline;
-(double)marginBelowLastLabelLastBaseline;
-(double)maximumWidth;
-(long long)permittedActionLayoutDirection;
-(double)_marginAroundActionGroup;
@end

