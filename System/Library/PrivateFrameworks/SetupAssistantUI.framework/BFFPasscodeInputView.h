/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:09 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol BFFPasscodeInputViewDelegate;
@class UILabel, UIView, UIButton;

@interface BFFPasscodeInputView : UIView {

	id<BFFPasscodeInputViewDelegate> _delegate;
	UILabel* _instructions;
	UIView* _footerView;
	UIButton* _footerButton;
	UIButton* _instructionsLinkButton;

}

@property (nonatomic,retain) UILabel * instructions;                                        //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,retain) UIButton * instructionsLinkButton;                             //@synthesize instructionsLinkButton=_instructionsLinkButton - In the implementation block
@property (assign,nonatomic,__weak) id<BFFPasscodeInputViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                           //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) UIButton * footerButton;                                       //@synthesize footerButton=_footerButton - In the implementation block
-(id<BFFPasscodeInputViewDelegate>)delegate;
-(void)setDelegate:(id<BFFPasscodeInputViewDelegate>)arg1 ;
-(void)disable;
-(BOOL)isFirstResponder;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(id)passcodeField;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(UILabel *)instructions;
-(void)setInstructions:(UILabel *)arg1 ;
-(id)passcode;
-(void)setPasscode:(id)arg1 ;
-(UIButton *)footerButton;
-(void)setFooterButton:(UIButton *)arg1 ;
-(void)footerButtonPressed;
-(UIButton *)instructionsLinkButton;
-(void)setInstructionsLinkButton:(UIButton *)arg1 ;
-(void)_instructionsLinkButtonPressed;
-(id)passcodeDisplayView;
-(void)_layoutForBounds:(CGRect)arg1 ;
-(void)setFooterButtonText:(id)arg1 ;
-(void)setInstructionsLinkText:(id)arg1 ;
-(void)shakePasscode;
@end

