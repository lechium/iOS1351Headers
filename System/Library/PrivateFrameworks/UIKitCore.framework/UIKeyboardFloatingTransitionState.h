/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, UIColor;

@interface UIKeyboardFloatingTransitionState : NSObject {

	UIView* _inputView;
	double _borderWidth;
	UIColor* _borderColor;
	double _cornerRadius;
	CGPoint _scale;
	CGRect _inputViewFrame;
	CGRect _platterViewFrame;
	UIEdgeInsets _platterInsets;
	CGAffineTransform _initialInputViewTransform;
	CGAffineTransform _finalInputViewTransform;

}

@property (nonatomic,retain) UIView * inputView;                                       //@synthesize inputView=_inputView - In the implementation block
@property (assign,nonatomic) CGRect inputViewFrame;                                    //@synthesize inputViewFrame=_inputViewFrame - In the implementation block
@property (assign,nonatomic) CGRect platterViewFrame;                                  //@synthesize platterViewFrame=_platterViewFrame - In the implementation block
@property (assign,nonatomic) UIEdgeInsets platterInsets;                               //@synthesize platterInsets=_platterInsets - In the implementation block
@property (assign,nonatomic) CGPoint scale;                                            //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGAffineTransform initialInputViewTransform;              //@synthesize initialInputViewTransform=_initialInputViewTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform finalInputViewTransform;                //@synthesize finalInputViewTransform=_finalInputViewTransform - In the implementation block
@property (assign,nonatomic) double borderWidth;                                       //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,copy) UIColor * borderColor;                                      //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(CGPoint)scale;
-(void)setScale:(CGPoint)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(UIView *)inputView;
-(void)setInputView:(UIView *)arg1 ;
-(double)cornerRadius;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(UIColor *)borderColor;
-(CGRect)inputViewFrame;
-(void)setInputViewFrame:(CGRect)arg1 ;
-(CGRect)platterViewFrame;
-(void)setPlatterViewFrame:(CGRect)arg1 ;
-(UIEdgeInsets)platterInsets;
-(void)setPlatterInsets:(UIEdgeInsets)arg1 ;
-(CGAffineTransform)initialInputViewTransform;
-(void)setInitialInputViewTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)finalInputViewTransform;
-(void)setFinalInputViewTransform:(CGAffineTransform)arg1 ;
@end

