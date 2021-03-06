/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AADataEventType.h>

@class NSNumber, NSString, WAStartMethod, WALocationAccessData, WACellularRadioAccessTechnology;

@interface WASessionData : NSObject <AADataEventType> {

	NSNumber* _utcOffset;
	NSString* _languageCode;
	NSString* _countryCode;
	WAStartMethod* _startMethod;
	NSString* _productType;
	WALocationAccessData* _locationAccess;
	WACellularRadioAccessTechnology* _cellularRadioAccessTechnology;

}

@property (nonatomic,readonly) NSNumber * utcOffset;                                                         //@synthesize utcOffset=_utcOffset - In the implementation block
@property (nonatomic,readonly) NSString * languageCode;                                                      //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) NSString * countryCode;                                                       //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) WAStartMethod * startMethod;                                                  //@synthesize startMethod=_startMethod - In the implementation block
@property (nonatomic,readonly) NSString * productType;                                                       //@synthesize productType=_productType - In the implementation block
@property (nonatomic,readonly) WALocationAccessData * locationAccess;                                        //@synthesize locationAccess=_locationAccess - In the implementation block
@property (nonatomic,readonly) WACellularRadioAccessTechnology * cellularRadioAccessTechnology;              //@synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology - In the implementation block
+(id)dataName;
-(NSString *)languageCode;
-(NSString *)countryCode;
-(NSString *)productType;
-(NSNumber *)utcOffset;
-(WACellularRadioAccessTechnology *)cellularRadioAccessTechnology;
-(id)toDict;
-(WAStartMethod *)startMethod;
-(WALocationAccessData *)locationAccess;
-(id)initWithUtcOffset:(id)arg1 languageCode:(id)arg2 countryCode:(id)arg3 startMethod:(id)arg4 productType:(id)arg5 locationAccess:(id)arg6 cellularRadioAccessTechnology:(id)arg7 ;
@end

