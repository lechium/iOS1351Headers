/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSArray;

@interface HDHealthOntologyConfiguration : NSObject {

	NSDictionary* _countryConfigurations;

}

@property (nonatomic,copy,readonly) NSDictionary * countryConfigurations;              //@synthesize countryConfigurations=_countryConfigurations - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allCountryConfigurations; 
+(id)bundledHealthOntologyConfiguration;
-(id)init;
-(id)initWithCountryConfigurations:(id)arg1 ;
-(id)configurationForCountryCode:(id)arg1 ;
-(NSArray *)allCountryConfigurations;
-(NSDictionary *)countryConfigurations;
@end
