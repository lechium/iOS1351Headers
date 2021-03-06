/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WFTemperature : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_WF3 _temperatureValues;

}

@property (assign,nonatomic) double celsius; 
@property (assign,nonatomic) double fahrenheit; 
@property (assign,nonatomic) double kelvin; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)celsius;
-(double)fahrenheit;
-(double)kelvin;
-(double)temperatureForUnit:(int)arg1 ;
-(id)initWithTemperatureUnit:(int)arg1 value:(double)arg2 ;
-(void)setCelsius:(double)arg1 ;
-(void)setKelvin:(double)arg1 ;
-(void)setFahrenheit:(double)arg1 ;
-(BOOL)isEqualToTemperature:(id)arg1 ;
-(void)_setValue:(double)arg1 forUnit:(int)arg2 ;
-(void)_resetTemperatureValues;
-(BOOL)_unitIsHydrated:(int)arg1 outputValue:(out double*)arg2 ;
@end

