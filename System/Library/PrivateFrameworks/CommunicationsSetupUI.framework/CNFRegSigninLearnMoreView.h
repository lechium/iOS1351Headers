/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class PSSpecifier, UIButton, UIImageView, UILabel, UIView, UIActivityIndicatorView, CNFRegSplashSignInController;

@interface CNFRegSigninLearnMoreView : UIView <PSHeaderFooterView> {

	long long _serviceType;
	PSSpecifier* _specifier;
	UIButton* _learnMoreButton;
	UIImageView* _splashImageView;
	UILabel* _titleLabel;
	UILabel* _verbiageLabel;
	UIView* _authKitSignInView;
	UILabel* _signingInLabel;
	UIActivityIndicatorView* _signingInSpinner;
	CNFRegSplashSignInController* _controller;

}

@property (assign,nonatomic) long long serviceType;                                  //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) CNFRegSplashSignInController * controller;              //@synthesize controller=_controller - In the implementation block
-(long long)serviceType;
-(id)titleLabel;
-(void)layoutSubviews;
-(void)setController:(CNFRegSplashSignInController *)arg1 ;
-(CNFRegSplashSignInController *)controller;
-(void)setServiceType:(long long)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)setAuthKitSignInView:(id)arg1 ;
-(void)setSigningIn:(BOOL)arg1 ;
-(id)signingInLabel;
-(id)signingInSpinner;
-(void)_learnMorePressed:(id)arg1 ;
-(id)verbiageLabel;
-(id)learnMoreButton;
-(id)_splashImage;
-(id)splashImageView;
@end
