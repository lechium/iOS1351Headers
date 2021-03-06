/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Weather/Weather-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, WFTemperature;

@interface WAHourlyForecast : NSObject <NSCopying> {

	float _percentPrecipitation;
	unsigned long long _eventType;
	NSString* _time;
	long long _hourIndex;
	WFTemperature* _temperature;
	NSString* _forecastDetail;
	long long _conditionCode;

}

@property (assign,nonatomic) unsigned long long eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy) NSString * time;                             //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) long long hourIndex;                       //@synthesize hourIndex=_hourIndex - In the implementation block
@property (nonatomic,retain) WFTemperature * temperature;               //@synthesize temperature=_temperature - In the implementation block
@property (nonatomic,copy) NSString * forecastDetail;                   //@synthesize forecastDetail=_forecastDetail - In the implementation block
@property (assign,nonatomic) long long conditionCode;                   //@synthesize conditionCode=_conditionCode - In the implementation block
@property (assign,nonatomic) float percentPrecipitation;                //@synthesize percentPrecipitation=_percentPrecipitation - In the implementation block
+(long long)TimeValueFromString:(id)arg1 ;
+(id)hourlyForecastForLocation:(id)arg1 conditions:(id)arg2 sunriseDateComponents:(id)arg3 sunsetDateComponents:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)time;
-(void)setTime:(NSString *)arg1 ;
-(unsigned long long)eventType;
-(void)setEventType:(unsigned long long)arg1 ;
-(WFTemperature *)temperature;
-(void)setTemperature:(WFTemperature *)arg1 ;
-(long long)conditionCode;
-(void)setConditionCode:(long long)arg1 ;
-(float)percentPrecipitation;
-(void)setPercentPrecipitation:(float)arg1 ;
-(NSString *)forecastDetail;
-(void)setHourIndex:(long long)arg1 ;
-(long long)hourIndex;
-(void)setForecastDetail:(NSString *)arg1 ;
@end

