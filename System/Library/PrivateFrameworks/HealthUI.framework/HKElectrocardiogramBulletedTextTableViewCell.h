/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSMutableArray, NSLayoutConstraint, NSString;

@interface HKElectrocardiogramBulletedTextTableViewCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _detailLabel;
	NSMutableArray* _bodyFirstBaselineConstraints;
	NSLayoutConstraint* _detailLabelLastBaselineConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                                               //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * bodyFirstBaselineConstraints;                       //@synthesize bodyFirstBaselineConstraints=_bodyFirstBaselineConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * detailLabelLastBaselineConstraint;              //@synthesize detailLabelLastBaselineConstraint=_detailLabelLastBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,readonly) NSString * detailText; 
+(id)defaultReuseIdentifier;
-(void)prepareForReuse;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)detailText;
-(NSString *)titleText;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(UILabel *)detailLabel;
-(void)_setupConstraints;
-(void)_setUpUI;
-(void)_updateLeadingDetailAttributedTextSize;
-(NSMutableArray *)bodyFirstBaselineConstraints;
-(void)setDetailLabelLastBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)detailLabelLastBaselineConstraint;
-(void)setDetailTextWithBullets:(id)arg1 ;
-(void)setBodyFirstBaselineConstraints:(NSMutableArray *)arg1 ;
@end

