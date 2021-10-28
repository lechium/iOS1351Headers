/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AFSiriRequest.h>

@class STWeatherAttributes, NSArray, STCity;

@interface STShowHourlyWeatherForecastRequest : AFSiriRequest {

	STWeatherAttributes* _currentAttributes;
	NSArray* _hourlyAttributes;
	STCity* _city;
	long long _startHour;
	long long _forecastType;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)city;
-(id)createResponse;
-(long long)forecastType;
-(id)currentAttributes;
-(id)_initWithCurrentAttributes:(id)arg1 hourlyAttributes:(id)arg2 city:(id)arg3 startHour:(long long)arg4 forecastType:(long long)arg5 ;
-(id)hourlyAttributes;
-(long long)startHour;
@end
