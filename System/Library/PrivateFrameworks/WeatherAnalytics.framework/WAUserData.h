/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AADataEventType.h>

@class NSString, NSNumber;

@interface WAUserData : NSObject <AADataEventType> {

	NSString* _userID;
	NSNumber* _userStartDate;

}

@property (nonatomic,readonly) NSString * userID;                     //@synthesize userID=_userID - In the implementation block
@property (nonatomic,readonly) NSNumber * userStartDate;              //@synthesize userStartDate=_userStartDate - In the implementation block
+(id)dataName;
-(NSString *)userID;
-(NSNumber *)userStartDate;
-(id)toDict;
-(id)initWithUserID:(id)arg1 userStartDate:(id)arg2 ;
@end
