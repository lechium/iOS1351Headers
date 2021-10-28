/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/WFSettings.h>

@class NSString, NSSet, NSURL;

@interface WFInternalAppSettings : NSObject <WFSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * apiVersion; 
@property (nonatomic,readonly) NSSet * aqiEnabledCountryCodes; 
@property (nonatomic,readonly) NSString * apiVersionFallback; 
@property (nonatomic,readonly) unsigned long long networkFailedAttemptsLimit; 
@property (nonatomic,readonly) unsigned long long networkSwitchExpirationTimeInSeconds; 
@property (nonatomic,readonly) unsigned long long locationNumDecimalsOfPrecision; 
@property (nonatomic,readonly) NSURL * appAnalyticsEndpointUrl; 
@property (nonatomic,readonly) float dataSamplingRate; 
@property (nonatomic,readonly) double userIdentifierResetTimeInterval; 
@property (nonatomic,readonly) double privateUserIdentifierResetTimeInterval; 
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)apiVersion;
-(NSSet *)aqiEnabledCountryCodes;
-(unsigned long long)networkFailedAttemptsLimit;
-(unsigned long long)networkSwitchExpirationTimeInSeconds;
-(NSString *)apiVersionFallback;
-(unsigned long long)locationNumDecimalsOfPrecision;
-(NSURL *)appAnalyticsEndpointUrl;
-(float)dataSamplingRate;
-(double)userIdentifierResetTimeInterval;
-(double)privateUserIdentifierResetTimeInterval;
@end
