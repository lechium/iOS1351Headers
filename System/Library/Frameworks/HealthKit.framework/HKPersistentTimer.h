/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface HKPersistentTimer : NSObject {

	NSString* _fullTimerKey;

}

@property (nonatomic,retain) NSString * fullTimerKey;              //@synthesize fullTimerKey=_fullTimerKey - In the implementation block
+(id)_prefixedKeyWithTimerKey:(id)arg1 ;
+(id)timerWithKey:(id)arg1 ;
-(void)clear;
-(void)start;
-(unsigned long long)elapsedNanoseconds;
-(id)timerValue;
-(unsigned long long)elapsedSeconds;
-(NSString *)fullTimerKey;
-(void)setFullTimerKey:(NSString *)arg1 ;
@end

