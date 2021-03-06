/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iCalendar/ICSComponent.h>

@class ICSDate, NSArray;

@interface ICSTimeZoneBlock : ICSComponent

@property (nonatomic,retain) ICSDate * dtstart; 
@property (nonatomic,retain) NSArray * rdate; 
@property (nonatomic,retain) NSArray * rrule; 
@property (assign,nonatomic) NSArray * tzname; 
@property (assign,nonatomic) long long tzoffsetfrom; 
@property (assign,nonatomic) long long tzoffsetto; 
-(long long)compare:(id)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(NSArray *)rrule;
-(void)setDtstart:(ICSDate *)arg1 ;
-(ICSDate *)dtstart;
-(void)setRrule:(NSArray *)arg1 ;
-(void)setRdate:(NSArray *)arg1 ;
-(NSArray *)rdate;
-(long long)tzoffsetfrom;
-(long long)tzoffsetto;
-(NSArray *)tzname;
-(void)setTzname:(NSArray *)arg1 ;
-(void)setTzoffsetfrom:(long long)arg1 ;
-(void)setTzoffsetto:(long long)arg1 ;
-(void)addRecurrenceDate:(id)arg1 ;
-(id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2 ;
@end

