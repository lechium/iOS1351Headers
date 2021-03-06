/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXAdvertisingSettings.h>

@class NSString;

@interface SXJSONAdvertisementSettings : SXJSONObject <SXAdvertisingSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long frequency; 
@property (nonatomic,readonly) unsigned long long bannerType; 
@property (nonatomic,readonly) id<SXAutoPlacementLayout> layout; 
@property (nonatomic,readonly) SXConvertibleValue distanceFromMedia; 
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
-(SXConvertibleValue)distanceFromMedia;
-(id<SXAutoPlacementLayout>)layout;
-(unsigned long long)bannerType;
-(unsigned long long)frequency;
-(unsigned long long)bannerTypeWithValue:(id)arg1 withType:(int)arg2 ;
@end

