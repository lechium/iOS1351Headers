/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDateInterval, NSArray, MTAlarm, NSCalendar, NSDate;

@interface MTUIBedtimeGraphData : NSObject {

	BOOL _useTrailingWeek;
	NSDateInterval* _firstSleepAlarmInterval;
	NSArray* _allColumnData;
	MTAlarm* _sleepAlarm;
	NSCalendar* _calendar;

}

@property (nonatomic,retain) MTAlarm * sleepAlarm;                                    //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
@property (nonatomic,retain) NSArray * allColumnData;                                 //@synthesize allColumnData=_allColumnData - In the implementation block
@property (nonatomic,retain) NSCalendar * calendar;                                   //@synthesize calendar=_calendar - In the implementation block
@property (assign,nonatomic) BOOL useTrailingWeek;                                    //@synthesize useTrailingWeek=_useTrailingWeek - In the implementation block
@property (nonatomic,readonly) NSDate * earliestStartOnFirstDay; 
@property (nonatomic,readonly) NSDate * latestEndOnFirstDay; 
@property (nonatomic,readonly) long long columnCount; 
@property (nonatomic,readonly) NSDateInterval * firstSleepAlarmInterval;              //@synthesize firstSleepAlarmInterval=_firstSleepAlarmInterval - In the implementation block
-(id)objectAtIndexedSubscript:(long long)arg1 ;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(long long)columnCount;
-(MTAlarm *)sleepAlarm;
-(void)setSleepAlarm:(MTAlarm *)arg1 ;
-(id)initWithSleepData:(id)arg1 sleepAlarm:(id)arg2 ;
-(NSArray *)allColumnData;
-(NSDate *)earliestStartOnFirstDay;
-(NSDate *)latestEndOnFirstDay;
-(NSDateInterval *)firstSleepAlarmInterval;
-(id)initWithSleepData:(id)arg1 sleepAlarm:(id)arg2 useTrailingWeek:(BOOL)arg3 ;
-(id)sleepAlarmIntervalForDay:(long long)arg1 ;
-(long long)_earliestDay;
-(void)setAllColumnData:(NSArray *)arg1 ;
-(BOOL)useTrailingWeek;
-(void)setUseTrailingWeek:(BOOL)arg1 ;
@end
