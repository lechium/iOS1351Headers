/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateComponents, NSArray;

@interface WFTimeOfDayTrigger : WFTrigger <NSSecureCoding> {

	unsigned long long _event;
	unsigned long long _timeOffset;
	NSDateComponents* _time;
	NSArray* _daysOfWeek;

}

@property (assign,nonatomic) unsigned long long event;                   //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) unsigned long long timeOffset;              //@synthesize timeOffset=_timeOffset - In the implementation block
@property (nonatomic,retain) NSDateComponents * time;                    //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) NSArray * daysOfWeek;                         //@synthesize daysOfWeek=_daysOfWeek - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dateFormatter;
+(id)localizedDisplayName;
+(id)localizedDisplayExplanation;
+(id)localizedRecurrenceDescriptionForDaysOfWeek:(id)arg1 ;
+(id)localizedSunriseSunsetDescriptionForTriggerEvent:(unsigned long long)arg1 timeOffset:(unsigned long long)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDateComponents *)time;
-(void)setTime:(NSDateComponents *)arg1 ;
-(unsigned long long)event;
-(void)setEvent:(unsigned long long)arg1 ;
-(void)setTimeOffset:(unsigned long long)arg1 ;
-(unsigned long long)timeOffset;
-(NSArray *)daysOfWeek;
-(void)setDaysOfWeek:(NSArray *)arg1 ;
-(BOOL)hasValidConfiguration;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
@end

