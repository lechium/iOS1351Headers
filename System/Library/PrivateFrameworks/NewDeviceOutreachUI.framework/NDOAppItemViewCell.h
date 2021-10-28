/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewDeviceOutreachUI/NewDeviceOutreachUI-Structs.h>
#import <Preferences/PSTableCell.h>

@class NSMutableArray, UIImageView, UIView, UILabel, UIButton;

@interface NDOAppItemViewCell : PSTableCell {

	NSMutableArray* _imageConstraints;
	UIImageView* _itemImageView;
	UIView* _itemTitleView;
	UILabel* _itemTitleLabel;
	UILabel* _itemSubtitleLabel;
	UILabel* _itemDetailLabel;
	UIButton* _itemButton;

}

@property (nonatomic,retain) UIImageView * itemImageView;              //@synthesize itemImageView=_itemImageView - In the implementation block
@property (nonatomic,retain) UIView * itemTitleView;                   //@synthesize itemTitleView=_itemTitleView - In the implementation block
@property (nonatomic,retain) UILabel * itemTitleLabel;                 //@synthesize itemTitleLabel=_itemTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * itemSubtitleLabel;              //@synthesize itemSubtitleLabel=_itemSubtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * itemDetailLabel;                //@synthesize itemDetailLabel=_itemDetailLabel - In the implementation block
@property (nonatomic,retain) UIButton * itemButton;                    //@synthesize itemButton=_itemButton - In the implementation block
+(long long)cellStyle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(double)getCurrentTitleFontSize;
-(void)setItemButton:(UIButton *)arg1 ;
-(UIButton *)itemButton;
-(UIImageView *)itemImageView;
-(UIView *)itemTitleView;
-(UILabel *)itemTitleLabel;
-(UILabel *)itemSubtitleLabel;
-(void)setItemImageView:(UIImageView *)arg1 ;
-(void)setItemTitleView:(UIView *)arg1 ;
-(void)setItemTitleLabel:(UILabel *)arg1 ;
-(void)setItemSubtitleLabel:(UILabel *)arg1 ;
-(id)_imageAppropriateForDevice:(id)arg1 ;
-(void)_setupAppSuportCell;
-(void)_setupWarrantyCoverageCell;
-(void)executeAction:(id)arg1 ;
-(UILabel *)itemDetailLabel;
-(id)_imageFromAppStore:(id)arg1 ;
-(void)setItemDetailLabel:(UILabel *)arg1 ;
@end
