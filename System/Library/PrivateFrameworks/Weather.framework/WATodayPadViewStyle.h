/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Weather/Weather-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIFont;

@interface WATodayPadViewStyle : NSObject <NSCopying> {

	long long _orientation;
	unsigned long long _format;
	UIFont* _locationFont;
	UIFont* _temperatureFont;
	UIFont* _conditionsFont;
	double _labelLeadingMargin;
	double _conditionsImageLeadingMargin;
	double _temperatureLabelBaselineToConditionsImageViewBottom;
	double _locationLabelBaselineToTemperatureLabelBaseline;
	double _conditionsLabelBaselineToLocationLabelBaseline;
	double _conditionsLabelBaselineToBottom;

}

@property (assign,nonatomic) long long orientation;                                                   //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) unsigned long long format;                                               //@synthesize format=_format - In the implementation block
@property (nonatomic,copy) UIFont * locationFont;                                                     //@synthesize locationFont=_locationFont - In the implementation block
@property (nonatomic,copy) UIFont * temperatureFont;                                                  //@synthesize temperatureFont=_temperatureFont - In the implementation block
@property (nonatomic,copy) UIFont * conditionsFont;                                                   //@synthesize conditionsFont=_conditionsFont - In the implementation block
@property (assign,nonatomic) double labelLeadingMargin;                                               //@synthesize labelLeadingMargin=_labelLeadingMargin - In the implementation block
@property (assign,nonatomic) double conditionsImageLeadingMargin;                                     //@synthesize conditionsImageLeadingMargin=_conditionsImageLeadingMargin - In the implementation block
@property (assign,nonatomic) double temperatureLabelBaselineToConditionsImageViewBottom;              //@synthesize temperatureLabelBaselineToConditionsImageViewBottom=_temperatureLabelBaselineToConditionsImageViewBottom - In the implementation block
@property (assign,nonatomic) double locationLabelBaselineToTemperatureLabelBaseline;                  //@synthesize locationLabelBaselineToTemperatureLabelBaseline=_locationLabelBaselineToTemperatureLabelBaseline - In the implementation block
@property (assign,nonatomic) double conditionsLabelBaselineToLocationLabelBaseline;                   //@synthesize conditionsLabelBaselineToLocationLabelBaseline=_conditionsLabelBaselineToLocationLabelBaseline - In the implementation block
@property (assign,nonatomic) double conditionsLabelBaselineToBottom;                                  //@synthesize conditionsLabelBaselineToBottom=_conditionsLabelBaselineToBottom - In the implementation block
+(id)styleForScreenWithSize:(CGSize)arg1 orientation:(long long)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)orientation;
-(unsigned long long)format;
-(void)setOrientation:(long long)arg1 ;
-(void)setFormat:(unsigned long long)arg1 ;
-(id)initWithFormat:(unsigned long long)arg1 orientation:(long long)arg2 ;
-(void)_setupForDefaultWithOrientation:(long long)arg1 ;
-(void)_setupForGigantorWithOrientation:(long long)arg1 ;
-(void)setTemperatureFont:(UIFont *)arg1 ;
-(void)setLocationFont:(UIFont *)arg1 ;
-(void)setConditionsFont:(UIFont *)arg1 ;
-(void)setLabelLeadingMargin:(double)arg1 ;
-(void)setConditionsImageLeadingMargin:(double)arg1 ;
-(void)setTemperatureLabelBaselineToConditionsImageViewBottom:(double)arg1 ;
-(void)setLocationLabelBaselineToTemperatureLabelBaseline:(double)arg1 ;
-(void)setConditionsLabelBaselineToLocationLabelBaseline:(double)arg1 ;
-(void)setConditionsLabelBaselineToBottom:(double)arg1 ;
-(UIFont *)temperatureFont;
-(UIFont *)locationFont;
-(UIFont *)conditionsFont;
-(double)labelLeadingMargin;
-(double)conditionsImageLeadingMargin;
-(double)temperatureLabelBaselineToConditionsImageViewBottom;
-(double)locationLabelBaselineToTemperatureLabelBaseline;
-(double)conditionsLabelBaselineToLocationLabelBaseline;
-(double)conditionsLabelBaselineToBottom;
@end

