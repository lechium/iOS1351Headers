/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AADataEventType.h>

@class NSString;

@interface WAPrivateUserData : NSObject <AADataEventType> {

	NSString* _privateUserID;

}

@property (nonatomic,readonly) NSString * privateUserID;              //@synthesize privateUserID=_privateUserID - In the implementation block
+(id)dataName;
-(id)toDict;
-(NSString *)privateUserID;
-(id)initWithPrivateUserID:(id)arg1 ;
@end

