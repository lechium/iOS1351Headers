/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AADataEventType.h>

@class NSDate;

@interface AATimedData : NSObject <AADataEventType> {

	 duration;

}

@property (readonly,nonatomic) NSDate * startDate; 
@property (readonly,nonatomic) NSDate * endDate; 
@property (readonly,nonatomic) double duration; 
+(id)dataName;
-(id)init;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)duration;
-(id)toDict;
@end
