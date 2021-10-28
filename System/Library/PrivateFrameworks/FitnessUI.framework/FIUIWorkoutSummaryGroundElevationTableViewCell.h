/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UIFont, UILabel, FIUIDividerView, NSString;

@interface FIUIWorkoutSummaryGroundElevationTableViewCell : UITableViewCell {

	UIFont* _labelFont;
	UILabel* _titleLabel;
	UILabel* _minElevationLabel;
	UILabel* _maxElevationLabel;
	FIUIDividerView* _dividerView;
	NSString* _minElevation;
	NSString* _maxElevation;

}
+(double)rowHeight;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setupUI;
-(void)setMinElevationString:(id)arg1 ;
-(void)setMaxElevationString:(id)arg1 ;
@end
