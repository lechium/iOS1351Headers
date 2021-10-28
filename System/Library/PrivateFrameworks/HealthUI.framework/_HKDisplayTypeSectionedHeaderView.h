/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UIView, NSString, NSLayoutConstraint, UILabel;

@interface _HKDisplayTypeSectionedHeaderView : UICollectionReusableView {

	UIView* _contentView;
	NSString* _title;
	NSLayoutConstraint* _maxTitleWidthConstraint;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                      //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * maxTitleWidthConstraint;              //@synthesize maxTitleWidthConstraint=_maxTitleWidthConstraint - In the implementation block
+(id)reuseIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)maxTitleWidthConstraint;
-(void)setMaxTitleWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updatePreferredTitleFont;
@end
