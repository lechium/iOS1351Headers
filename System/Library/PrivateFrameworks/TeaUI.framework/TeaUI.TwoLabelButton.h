/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@interface TeaUI.TwoLabelButton : UIControl <CAAnimationDelegate> {

	 highlightMask;
	 animationState;
	 buttonState;
	 animationTrigger;
	 titleLabelNormal;
	 titleLabelHighlighted;
	 labelNormal;
	 labelHighlighted;
	 borderColor;
	 backgroundColorNormal;
	 backgroundColorHighlighted;
	 onTap;
	 currentBorderColor;
	 currentBackgroundColorNormal;
	 currentBackgroundColorHighlighted;

}
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end

