/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:22 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILabel, UIImageView, _TtC18HealthExperienceUI21ScaledLabelConstraint, NSLayoutConstraint;

@interface HealthExperienceUI.TableHeaderWithIconView : UITableViewHeaderFooterView {

	 title;
	 iconImageView;
	 iconImageViewWidthConstraint;
	 iconImageViewHeightConstraint;
	 iconImageViewBaselineConstraint;
	 iconImageViewCenterYConstraint;
	 item;

}

@property (assign,__weak,nonatomic) UILabel * title; 
@property (assign,__weak,nonatomic) UIImageView * iconImageView; 
@property (assign,__weak,nonatomic) _TtC18HealthExperienceUI21ScaledLabelConstraint * iconImageViewWidthConstraint; 
@property (assign,__weak,nonatomic) _TtC18HealthExperienceUI21ScaledLabelConstraint * iconImageViewHeightConstraint; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * iconImageViewBaselineConstraint; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * iconImageViewCenterYConstraint; 
-(id)initWithCoder:(id)arg1 ;
-(UILabel *)title;
-(void)setTitle:(UILabel *)arg1 ;
-(void)awakeFromNib;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(_TtC18HealthExperienceUI21ScaledLabelConstraint *)iconImageViewWidthConstraint;
-(void)setIconImageViewWidthConstraint:(_TtC18HealthExperienceUI21ScaledLabelConstraint *)arg1 ;
-(_TtC18HealthExperienceUI21ScaledLabelConstraint *)iconImageViewHeightConstraint;
-(void)setIconImageViewHeightConstraint:(_TtC18HealthExperienceUI21ScaledLabelConstraint *)arg1 ;
-(NSLayoutConstraint *)iconImageViewBaselineConstraint;
-(void)setIconImageViewBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)iconImageViewCenterYConstraint;
-(void)setIconImageViewCenterYConstraint:(NSLayoutConstraint *)arg1 ;
@end

