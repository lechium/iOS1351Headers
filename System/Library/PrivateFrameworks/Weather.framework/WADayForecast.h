/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Weather/Weather-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFTemperature;

@interface WADayForecast : NSObject <NSCopying> {

	BOOL _isYesterday;
	WFTemperature* _high;
	WFTemperature* _low;
	unsigned long long _icon;
	unsigned long long _dayOfWeek;
	unsigned long long _dayNumber;

}

@property (nonatomic,copy) WFTemperature * high;                        //@synthesize high=_high - In the implementation block
@property (nonatomic,copy) WFTemperature * low;                         //@synthesize low=_low - In the implementation block
@property (assign,nonatomic) unsigned long long icon;                   //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) unsigned long long dayOfWeek;              //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
@property (assign,nonatomic) unsigned long long dayNumber;              //@synthesize dayNumber=_dayNumber - In the implementation block
@property (assign,nonatomic) BOOL isYesterday;                          //@synthesize isYesterday=_isYesterday - In the implementation block
+(id)dayForecastForLocation:(id)arg1 conditions:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)dayOfWeek;
-(unsigned long long)icon;
-(void)setIcon:(unsigned long long)arg1 ;
-(void)setDayOfWeek:(unsigned long long)arg1 ;
-(WFTemperature *)high;
-(void)setHigh:(WFTemperature *)arg1 ;
-(WFTemperature *)low;
-(void)setLow:(WFTemperature *)arg1 ;
-(BOOL)isYesterday;
-(long long)compareDayNumberToDayForecast:(id)arg1 ;
-(void)setDayNumber:(unsigned long long)arg1 ;
-(void)setIsYesterday:(BOOL)arg1 ;
-(unsigned long long)dayNumber;
@end

