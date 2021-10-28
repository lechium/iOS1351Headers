/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKCalendarDayCell.h>

@interface HKMonthDayCell : HKCalendarDayCell {

	long long _dayOfWeek;
	long long _circleState;

}

@property (nonatomic,readonly) long long circleState;              //@synthesize circleState=_circleState - In the implementation block
+(double)dayLabelFontSize;
-(void)dealloc;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithDateCache:(id)arg1 ;
-(void)updateWithDate:(id)arg1 dayOfMonth:(long long)arg2 ;
-(void)_updateFontAndCircle;
-(void)_setCircleState:(long long)arg1 ;
-(BOOL)_representsWeekendDay;
-(long long)circleState;
-(void)pressToTransition:(BOOL)arg1 ;
@end
