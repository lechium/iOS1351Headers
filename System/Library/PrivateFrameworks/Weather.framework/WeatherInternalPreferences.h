/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSUserDefaults.h>

@protocol WeatherPreferencesPersistence;
@interface WeatherInternalPreferences : NSUserDefaults {

	id<WeatherPreferencesPersistence> _persistence;

}

@property (retain) id<WeatherPreferencesPersistence> persistence;              //@synthesize persistence=_persistence - In the implementation block
@property (readonly) BOOL isInternalInstall; 
@property (readonly) BOOL isV3Enabled; 
@property (readonly) BOOL shouldShowUpdateTimestamp; 
+(id)sharedInternalPreferences;
-(BOOL)isInternalInstall;
-(id<WeatherPreferencesPersistence>)persistence;
-(void)setPersistence:(id<WeatherPreferencesPersistence>)arg1 ;
-(BOOL)isV3Enabled;
-(BOOL)shouldShowUpdateTimestamp;
@end

