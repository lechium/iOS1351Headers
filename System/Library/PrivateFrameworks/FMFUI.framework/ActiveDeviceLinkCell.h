/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSTableCell.h>

@class UILabel, NSLayoutConstraint;

@interface ActiveDeviceLinkCell : PSTableCell {

	UILabel* _fromLabel;
	UILabel* _deviceNameLabel;
	UILabel* _detailsLabel;
	NSLayoutConstraint* _detailsHeightContraint;
	NSLayoutConstraint* _fromLabelLeadingConstraint;

}

@property (nonatomic,retain) UILabel * fromLabel;                                          //@synthesize fromLabel=_fromLabel - In the implementation block
@property (nonatomic,retain) UILabel * deviceNameLabel;                                    //@synthesize deviceNameLabel=_deviceNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailsLabel;                                       //@synthesize detailsLabel=_detailsLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * detailsHeightContraint;                  //@synthesize detailsHeightContraint=_detailsHeightContraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * fromLabelLeadingConstraint;              //@synthesize fromLabelLeadingConstraint=_fromLabelLeadingConstraint - In the implementation block
+(long long)cellStyle;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)setupConstraints;
-(void)setupSubviews;
-(UILabel *)fromLabel;
-(void)setFromLabel:(UILabel *)arg1 ;
-(UILabel *)detailsLabel;
-(UILabel *)deviceNameLabel;
-(void)setDeviceNameLabel:(UILabel *)arg1 ;
-(void)setDetailsLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)detailsHeightContraint;
-(void)setFromLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDetailsHeightContraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)fromLabelLeadingConstraint;
@end

