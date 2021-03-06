/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HKOnboardingSetupViewDelegate;
@class UIView, UILabel, UIButton, NSString;

@interface HKOnboardingSetupView : UIView {

	id<HKOnboardingSetupViewDelegate> _delegate;
	UIView* _heroView;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UIButton* _onboardingButton;

}

@property (nonatomic,retain) UIView * heroView;                                              //@synthesize heroView=_heroView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                            //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) UIButton * onboardingButton;                                    //@synthesize onboardingButton=_onboardingButton - In the implementation block
@property (assign,nonatomic,__weak) id<HKOnboardingSetupViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * titleString; 
@property (nonatomic,readonly) NSString * bodyString; 
@property (nonatomic,readonly) NSString * buttonTitleString; 
-(id<HKOnboardingSetupViewDelegate>)delegate;
-(void)setDelegate:(id<HKOnboardingSetupViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(NSString *)titleString;
-(void)_setUpConstraints;
-(void)setHeroView:(UIView *)arg1 ;
-(NSString *)bodyString;
-(UIView *)heroView;
-(id)createHeroView;
-(NSString *)buttonTitleString;
-(void)_didTapOnboardingButton;
-(UIButton *)onboardingButton;
-(void)setOnboardingButton:(UIButton *)arg1 ;
@end

