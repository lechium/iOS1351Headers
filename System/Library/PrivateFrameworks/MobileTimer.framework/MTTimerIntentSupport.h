/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, NSDate, NSString, NSDictionary;


@protocol MTTimerIntentSupport <NSObject>
@property (nonatomic,readonly) NSUUID * timerID; 
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double remainingTime; 
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSDictionary * siriContext; 
@property (nonatomic,readonly) long long type; 
@required
-(long long)type;
-(unsigned long long)state;
-(NSString *)title;
-(double)duration;
-(NSUUID *)timerID;
-(NSDate *)lastModifiedDate;
-(double)remainingTime;
-(NSDictionary *)siriContext;

@end
