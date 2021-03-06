/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class HKSourceDataModel, UIImageView, UILabel;

@interface WDSourcesListTableViewCell : UITableViewCell {

	HKSourceDataModel* _sourceModel;
	UIImageView* _iconImage;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIImageView * iconImage;                      //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) HKSourceDataModel * sourceModel;              //@synthesize sourceModel=_sourceModel - In the implementation block
+(id)defaultReuseIdentifier;
-(void)prepareForReuse;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)iconImage;
-(HKSourceDataModel *)sourceModel;
-(void)setSourceModel:(HKSourceDataModel *)arg1 ;
-(void)setupConstraints;
-(void)setIconImage:(UIImageView *)arg1 ;
-(void)setUpSubviews;
-(void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 fetchError:(id)arg3 ;
@end

