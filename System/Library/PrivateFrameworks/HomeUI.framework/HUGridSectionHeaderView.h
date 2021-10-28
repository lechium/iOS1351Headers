/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class NSString, UIButton, HUGridLayoutOptions, UILabel, NSArray;

@interface HUGridSectionHeaderView : UICollectionReusableView {

	NSString* _sectionTitle;
	UIButton* _button;
	HUGridLayoutOptions* _layoutOptions;
	UILabel* _titleLabel;
	NSArray* _headerCellConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * button;                                //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) NSArray * headerCellConstraints;                  //@synthesize headerCellConstraints=_headerCellConstraints - In the implementation block
@property (nonatomic,retain) NSString * sectionTitle;                          //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;              //@synthesize layoutOptions=_layoutOptions - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)prepareForReuse;
-(NSString *)sectionTitle;
-(void)setSectionTitle:(NSString *)arg1 ;
-(HUGridLayoutOptions *)layoutOptions;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)button;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
-(void)_updateTitleLabel;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(void)_invalidateConstraints;
-(NSArray *)headerCellConstraints;
-(void)setHeaderCellConstraints:(NSArray *)arg1 ;
@end
