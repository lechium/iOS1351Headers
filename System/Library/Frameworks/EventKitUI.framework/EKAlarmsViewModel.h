/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <EventKitUI/EventKitUI-Structs.h>
@class EKCalendarItem, NSMutableArray;

@interface EKAlarmsViewModel : NSObject {

	BOOL _canHaveLeaveNowAlarm;
	BOOL _hasLeaveNowAlarm;
	BOOL _needsUpdate;
	EKCalendarItem* _calendarItem;
	NSMutableArray* _uiAlarms;

}

@property (nonatomic,retain) EKCalendarItem * calendarItem;              //@synthesize calendarItem=_calendarItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * uiAlarms;                  //@synthesize uiAlarms=_uiAlarms - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                           //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (nonatomic,readonly) BOOL canHaveLeaveNowAlarm; 
@property (nonatomic,readonly) BOOL hasLeaveNowAlarm; 
+(id)labelTextForIndex:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(void)updateIfNeeded;
-(EKCalendarItem *)calendarItem;
-(void)setCalendarItem:(EKCalendarItem *)arg1 ;
-(NSMutableArray *)uiAlarms;
-(id)initWithCalendarItem:(id)arg1 ;
-(void)_updateAlarms;
-(id)createAlarmEditItemViewControllerWithFrame:(CGRect)arg1 forAlarmAtIndex:(unsigned long long)arg2 ;
-(void)updatedUIAlarmFromUIAlarm:(id)arg1 toUIAlarm:(id)arg2 atIndex:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_hasUIAlarmChangedFromUIAlarm:(id)arg1 toUIAlarm:(id)arg2 ;
-(void)_updateLeaveNowFlags;
-(BOOL)canHaveLeaveNowAlarm;
-(BOOL)hasLeaveNowAlarm;
-(void)setUiAlarms:(NSMutableArray *)arg1 ;
@end

