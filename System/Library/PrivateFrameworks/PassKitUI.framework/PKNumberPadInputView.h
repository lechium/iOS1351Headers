/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIInputView.h>

@class UIStackView, UIColor;

@interface PKNumberPadInputView : UIInputView {

	UIStackView* _verticalStackView;
	BOOL _showsDecimalPointButton;
	UIColor* _numberPadColor;

}

@property (assign,nonatomic) BOOL showsDecimalPointButton;              //@synthesize showsDecimalPointButton=_showsDecimalPointButton - In the implementation block
@property (nonatomic,copy) UIColor * numberPadColor;                    //@synthesize numberPadColor=_numberPadColor - In the implementation block
+(CGSize)defaultSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_reloadSubviews;
-(void)setShowsDecimalPointButton:(BOOL)arg1 ;
-(id)initWithDefaultFrame;
-(void)setNumberPadColor:(UIColor *)arg1 ;
-(void)_performDelete;
-(void)_performInsertion:(id)arg1 ;
-(void)_numericKeyPressed:(id)arg1 ;
-(BOOL)showsDecimalPointButton;
-(UIColor *)numberPadColor;
@end
