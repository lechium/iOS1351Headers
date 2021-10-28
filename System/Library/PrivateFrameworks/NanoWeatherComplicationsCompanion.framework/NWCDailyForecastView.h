/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoWeatherComplicationsCompanion/NanoWeatherComplicationsCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class LinearGaugeView, UILabel;

@interface NWCDailyForecastView : UIView {

	double _percentage;
	LinearGaugeView* _linearGaugeView;
	UILabel* _weekdayLabel;

}

@property (assign,nonatomic) double percentage;                                //@synthesize percentage=_percentage - In the implementation block
@property (nonatomic,readonly) LinearGaugeView * linearGaugeView;              //@synthesize linearGaugeView=_linearGaugeView - In the implementation block
@property (nonatomic,readonly) UILabel * weekdayLabel;                         //@synthesize weekdayLabel=_weekdayLabel - In the implementation block
-(double)percentage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)weekdayLabel;
-(void)setPercentage:(double)arg1 ;
-(void)applyFilter:(id)arg1 ;
-(void)updateMonochromeColor:(id)arg1 fraction:(double)arg2 ;
-(LinearGaugeView *)linearGaugeView;
-(void)_applyLayoutConstraints:(SCD_Struct_NW0)arg1 ;
@end
