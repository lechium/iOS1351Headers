/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSFormatter.h>

@class NSLocale;

@interface WeatherPressureFormatter : NSFormatter {

	NSLocale* _locale;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
+(id)convenienceFormatter;
-(id)init;
-(void)dealloc;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)stringFromMillibars:(float)arg1 ;
-(void*)createNumberFormatter;
-(void)resetFormatter;
-(id)stringFromInchesHG:(float)arg1 ;
-(int)pressureUnit;
-(float)convertMBarPressure:(float)arg1 toUnit:(int)arg2 ;
-(id)formatStringForPressure:(float)arg1 inUnit:(int)arg2 ;
-(id)fallbackStringForPressure:(float)arg1 ;
-(float)convertInchesHGPressure:(float)arg1 toUnit:(int)arg2 ;
-(id)stringFromPressure:(float)arg1 isDataMetric:(BOOL)arg2 ;
@end
