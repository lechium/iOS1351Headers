/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKSimpleDataEntryItem.h>

@class HKSimpleDataEntryPlainTextCell, NSString, NSDate, HKValueRange, UIDatePicker, NSDateFormatter;

@interface HKSimpleDataEntryDateItem : HKSimpleDataEntryItem {

	HKSimpleDataEntryPlainTextCell* _cell;
	NSString* _title;
	NSString* _registrantModelKey;
	NSDate* _date;
	NSDate* _defaultDate;
	HKValueRange* _dateRange;
	UIDatePicker* _datePicker;
	NSDateFormatter* _exportFormatter;

}
+(id)_dateFormatter;
+(id)gregorianGMTCalendar;
-(void)beginEditing;
-(id)cell;
-(void)localeDidChange:(id)arg1 ;
-(void)datePickerValueChanged:(id)arg1 ;
-(id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 date:(id)arg3 defaultDate:(id)arg4 dateRange:(id)arg5 exportFormatter:(id)arg6 ;
-(id)formattedKeyAndValue;
-(void)updateCellDisplay;
-(void)_setTextForInputTextField:(id)arg1 ;
@end

