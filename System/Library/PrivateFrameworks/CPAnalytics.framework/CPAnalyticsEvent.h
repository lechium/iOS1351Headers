/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate, NSDictionary, CPAnalyticsSystemProperties;

@interface CPAnalyticsEvent : NSObject {

	NSString* _name;
	NSDate* _timestamp;
	NSDictionary* _payload;
	CPAnalyticsSystemProperties* _systemProperties;

}

@property (nonatomic,readonly) NSDictionary * payload;                                      //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) CPAnalyticsSystemProperties * systemProperties;              //@synthesize systemProperties=_systemProperties - In the implementation block
@property (nonatomic,readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
-(NSString *)name;
-(id)propertyForKey:(id)arg1 ;
-(NSDate *)timestamp;
-(NSDictionary *)payload;
-(id)initWithName:(id)arg1 payload:(id)arg2 systemProperties:(id)arg3 ;
-(id)copyRawPayload;
-(CPAnalyticsSystemProperties *)systemProperties;
@end
