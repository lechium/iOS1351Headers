/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AADataEventType.h>

@class NSString;

@interface WAReferralData : NSObject <AADataEventType> {

	NSString* _referringApplication;
	NSString* _referringUrl;

}

@property (nonatomic,readonly) NSString * referringApplication;              //@synthesize referringApplication=_referringApplication - In the implementation block
@property (nonatomic,readonly) NSString * referringUrl;                      //@synthesize referringUrl=_referringUrl - In the implementation block
+(id)dataName;
-(NSString *)referringUrl;
-(id)toDict;
-(NSString *)referringApplication;
-(id)initWithReferringApplication:(id)arg1 referringUrl:(id)arg2 ;
@end

