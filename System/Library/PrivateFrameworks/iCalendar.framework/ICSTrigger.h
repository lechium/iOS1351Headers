/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iCalendar/ICSProperty.h>

@interface ICSTrigger : ICSProperty
-(id)initWithDate:(id)arg1 ;
-(void)setDate:(id)arg1 ;
-(void)setDuration:(id)arg1 ;
-(id)initWithDuration:(id)arg1 ;
-(BOOL)isDurationBased;
-(void)fixAlarmTrigger;
-(id)initWithDuration:(id)arg1 travelRelativeDuration:(id)arg2 ;
-(id)travelRelativeDuration;
@end
