/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView, UIColor;

@interface PKNumericBorderButton : UIButton {

	UIView* _bottomBorder;
	UIView* _topBorder;
	UIView* _trailingBorder;
	UIView* _leadingBorder;
	UIColor* _normalBackgroundColor;
	UIColor* _highlightedBackgroundColor;

}

@property (nonatomic,copy) UIColor * normalBackgroundColor;                   //@synthesize normalBackgroundColor=_normalBackgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * highlightedBackgroundColor;              //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIColor *)highlightedBackgroundColor;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)normalBackgroundColor;
-(void)setNormalBackgroundColor:(UIColor *)arg1 ;
-(void)setBorder:(unsigned long long)arg1 ;
-(void)pk_applyAppearance:(id)arg1 ;
@end

