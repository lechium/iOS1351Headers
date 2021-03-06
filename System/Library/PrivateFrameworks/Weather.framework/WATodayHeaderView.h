/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class NSString, UIImage, UIVisualEffectView, UILabel, UIImageView;

@interface WATodayHeaderView : UIView {

	NSString* _conditionsLine1;
	NSString* _conditionsLine2;
	UIImage* _conditionsImage;
	NSString* _temperature;
	NSString* _temperatureHigh;
	NSString* _temperatureLow;
	NSString* _locationName;
	UIVisualEffectView* _weatherInformationVisualEffectView;
	UILabel* _locationLabel;
	UILabel* _conditionsLabel1;
	UILabel* _conditionsLabel2;
	UIImageView* _conditionsImageView;
	UILabel* _temperatureLabel;
	UILabel* _temperatureHighLowLabel;
	double _pageFontSize;
	double _pageDegreeFontSize;
	double _pageBaselineOffset;

}

@property (nonatomic,retain) UIVisualEffectView * weatherInformationVisualEffectView;              //@synthesize weatherInformationVisualEffectView=_weatherInformationVisualEffectView - In the implementation block
@property (nonatomic,retain) UILabel * locationLabel;                                              //@synthesize locationLabel=_locationLabel - In the implementation block
@property (nonatomic,retain) UILabel * conditionsLabel1;                                           //@synthesize conditionsLabel1=_conditionsLabel1 - In the implementation block
@property (nonatomic,retain) UILabel * conditionsLabel2;                                           //@synthesize conditionsLabel2=_conditionsLabel2 - In the implementation block
@property (nonatomic,retain) UIImageView * conditionsImageView;                                    //@synthesize conditionsImageView=_conditionsImageView - In the implementation block
@property (nonatomic,retain) UILabel * temperatureLabel;                                           //@synthesize temperatureLabel=_temperatureLabel - In the implementation block
@property (nonatomic,retain) UILabel * temperatureHighLowLabel;                                    //@synthesize temperatureHighLowLabel=_temperatureHighLowLabel - In the implementation block
@property (assign,nonatomic) double pageFontSize;                                                  //@synthesize pageFontSize=_pageFontSize - In the implementation block
@property (assign,nonatomic) double pageDegreeFontSize;                                            //@synthesize pageDegreeFontSize=_pageDegreeFontSize - In the implementation block
@property (assign,nonatomic) double pageBaselineOffset;                                            //@synthesize pageBaselineOffset=_pageBaselineOffset - In the implementation block
@property (nonatomic,copy) NSString * conditionsLine1;                                             //@synthesize conditionsLine1=_conditionsLine1 - In the implementation block
@property (nonatomic,copy) NSString * conditionsLine2;                                             //@synthesize conditionsLine2=_conditionsLine2 - In the implementation block
@property (nonatomic,copy) UIImage * conditionsImage;                                              //@synthesize conditionsImage=_conditionsImage - In the implementation block
@property (nonatomic,copy) NSString * temperature;                                                 //@synthesize temperature=_temperature - In the implementation block
@property (nonatomic,copy) NSString * temperatureHigh;                                             //@synthesize temperatureHigh=_temperatureHigh - In the implementation block
@property (nonatomic,copy) NSString * temperatureLow;                                              //@synthesize temperatureLow=_temperatureLow - In the implementation block
@property (nonatomic,copy) NSString * locationName;                                                //@synthesize locationName=_locationName - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)init;
-(NSString *)locationName;
-(void)setLocationName:(NSString *)arg1 ;
-(NSString *)temperature;
-(void)setTemperature:(NSString *)arg1 ;
-(void)_setupSubviews;
-(void)_setupConstraints;
-(UILabel *)locationLabel;
-(void)setLocationLabel:(UILabel *)arg1 ;
-(void)_updateContent;
-(void)setTemperatureLabel:(UILabel *)arg1 ;
-(UILabel *)temperatureLabel;
-(void)setConditionsImageView:(UIImageView *)arg1 ;
-(UIImageView *)conditionsImageView;
-(void)setConditionsImage:(UIImage *)arg1 ;
-(UIImage *)conditionsImage;
-(NSString *)temperatureHigh;
-(NSString *)temperatureLow;
-(UILabel *)temperatureHighLowLabel;
-(NSString *)conditionsLine1;
-(UILabel *)conditionsLabel1;
-(NSString *)conditionsLine2;
-(UILabel *)conditionsLabel2;
-(void)setWeatherInformationVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)weatherInformationVisualEffectView;
-(void)setConditionsLabel1:(UILabel *)arg1 ;
-(void)setConditionsLabel2:(UILabel *)arg1 ;
-(void)setTemperatureHighLowLabel:(UILabel *)arg1 ;
-(void)setConditionsLine1:(NSString *)arg1 ;
-(void)setConditionsLine2:(NSString *)arg1 ;
-(void)setTemperatureLow:(NSString *)arg1 ;
-(void)setTemperatureHigh:(NSString *)arg1 ;
-(double)pageFontSize;
-(void)setPageFontSize:(double)arg1 ;
-(double)pageDegreeFontSize;
-(void)setPageDegreeFontSize:(double)arg1 ;
-(double)pageBaselineOffset;
-(void)setPageBaselineOffset:(double)arg1 ;
@end

