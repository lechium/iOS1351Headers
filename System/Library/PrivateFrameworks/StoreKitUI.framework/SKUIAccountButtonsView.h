/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, SKUIRoundedRectButton, SKUIClientContext, SKUILinkButton, UIButton, NSString, UIControl;

@interface SKUIAccountButtonsView : UIView {

	UILabel* _accountCreditsLabel;
	SKUIRoundedRectButton* _appleIDButton;
	SKUIClientContext* _clientContext;
	SKUILinkButton* _ecommerceButton;
	SKUIRoundedRectButton* _giftingButton;
	UIButton* _termsAndConditionsButton;
	SKUIRoundedRectButton* _usernameButton;
	BOOL _ecommerceVisibilityHidden;
	BOOL _giftingVisibilityHidden;
	UIButton* _redeemButton;

}

@property (nonatomic,copy) NSString * accountCredits; 
@property (nonatomic,readonly) UIButton * appleIDButton;                                                   //@synthesize appleIDButton=_appleIDButton - In the implementation block
@property (nonatomic,readonly) UIButton * giftingButton;                                                   //@synthesize giftingButton=_giftingButton - In the implementation block
@property (nonatomic,readonly) UIButton * redeemButton;                                                    //@synthesize redeemButton=_redeemButton - In the implementation block
@property (nonatomic,readonly) UIButton * termsAndConditionsButton;                                        //@synthesize termsAndConditionsButton=_termsAndConditionsButton - In the implementation block
@property (nonatomic,readonly) UIControl * ECommerceButton;                                                //@synthesize ecommerceButton=_ecommerceButton - In the implementation block
@property (nonatomic,copy) NSString * ECommerceLinkTitle; 
@property (assign,getter=isGiftingHidden,nonatomic) BOOL giftingHidden; 
@property (assign,getter=isTermsAndConditionsHidden,nonatomic) BOOL termsAndConditionsHidden; 
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(id)initWithClientContext:(id)arg1 ;
-(void)_reloadFonts;
-(id)_newLinkButtonWithTitle:(id)arg1 ;
-(void)_layoutTwoRows;
-(void)_layoutOneRow;
-(BOOL)isEcommerceHidden;
-(BOOL)isRedeemHidden;
-(BOOL)isGiftingHidden;
-(NSString *)accountCredits;
-(NSString *)ECommerceLinkTitle;
-(void)setECommerceLinkTitle:(NSString *)arg1 ;
-(BOOL)isTermsAndConditionsHidden;
-(void)setAccountCredits:(NSString *)arg1 ;
-(void)setGiftingHidden:(BOOL)arg1 ;
-(void)setTermsAndConditionsHidden:(BOOL)arg1 ;
-(UIButton *)appleIDButton;
-(UIControl *)ECommerceButton;
-(UIButton *)giftingButton;
-(UIButton *)redeemButton;
-(UIButton *)termsAndConditionsButton;
@end

