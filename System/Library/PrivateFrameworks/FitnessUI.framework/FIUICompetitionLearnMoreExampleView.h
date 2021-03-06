/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIView, NSNumber, UIColor, NSString;

@interface FIUICompetitionLearnMoreExampleView : UIView {

	UIImageView* _moveRingView;
	UIImageView* _exerciseRingView;
	UIImageView* _standRingView;
	UILabel* _movePercentLabel;
	UILabel* _exercisePercentLabel;
	UILabel* _standPercentLabel;
	UIView* _separatorView;
	UILabel* _totalPointsLabel;
	NSNumber* _previousLayoutWidth;
	UIColor* _separatorViewColor;
	UIColor* _totalPointsLabelColor;
	NSString* _totalPointsLabelText;

}

@property (nonatomic,retain) UIColor * separatorViewColor;                 //@synthesize separatorViewColor=_separatorViewColor - In the implementation block
@property (nonatomic,retain) UIColor * totalPointsLabelColor;              //@synthesize totalPointsLabelColor=_totalPointsLabelColor - In the implementation block
@property (nonatomic,retain) NSString * totalPointsLabelText;              //@synthesize totalPointsLabelText=_totalPointsLabelText - In the implementation block
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)layoutForWidth:(double)arg1 ;
-(id)_ringViewOfType:(long long)arg1 withMetricColors:(id)arg2 percentage:(double)arg3 ;
-(id)_ringPercentageLabelForPercentage:(double)arg1 withMetricColors:(id)arg2 ;
-(void)setSeparatorViewColor:(UIColor *)arg1 ;
-(void)setTotalPointsLabelText:(NSString *)arg1 ;
-(void)setTotalPointsLabelColor:(UIColor *)arg1 ;
-(UIColor *)separatorViewColor;
-(UIColor *)totalPointsLabelColor;
-(NSString *)totalPointsLabelText;
@end

