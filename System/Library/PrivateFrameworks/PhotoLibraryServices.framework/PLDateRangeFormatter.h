/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLMutableDateRangeFormatter.h>

@class NSLocale, NSDateFormatter, NSTimeZone, NSString;

@interface PLDateRangeFormatter : NSObject <PLMutableDateRangeFormatter> {

	BOOL _includeDayNumbers;
	BOOL _includeDayNumbersWhenMonthsDiffer;
	BOOL _useRelativeDayFormatting;
	BOOL _useShortMonths;
	BOOL _useShortDaysInRanges;
	BOOL _useTime;
	BOOL _yearOnly;
	BOOL _monthOnly;
	BOOL _timeOnly;
	NSDateFormatter* _sameDayDateFormatter;
	NSDateFormatter* _sameDayNoYearDateFormatter;
	NSDateFormatter* _dayOfTheWeekDateFormatter;
	NSDateFormatter* _yearDateFormatter;
	NSDateFormatter* _monthDateFormatter;
	NSDateFormatter* _relativeDateFormatter;
	UDateIntervalFormatRef _monthDayIntervalFormat;
	UDateIntervalFormatRef _monthDayNoYearIntervalFormat;
	UDateIntervalFormatRef _differentMonthDayIntervalFormat;
	UDateIntervalFormatRef _differentMonthDayNoYearIntervalFormat;
	UDateIntervalFormatRef _dayOfTheWeekIntervalFormat;
	UDateIntervalFormatRef _timeIntervalFormat;
	UDateIntervalFormatRef _monthIntervalFormat;
	UDateIntervalFormatRef _yearIntervalFormat;
	id _currentLocaleDidChangeNotificationObserver;
	id _currentTimeZoneDidChangeNotificationObserver;
	id _significantTimeChangeNotificationObserver;
	BOOL _autoUpdateOnChanges;
	BOOL _useLocalDates;
	BOOL _shouldOmitYear;
	NSLocale* _locale;
	NSTimeZone* _timeZone;

}

@property (assign,nonatomic) BOOL autoUpdateOnChanges;              //@synthesize autoUpdateOnChanges=_autoUpdateOnChanges - In the implementation block
@property (assign,nonatomic) BOOL useLocalDates;                    //@synthesize useLocalDates=_useLocalDates - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                     //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                 //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) BOOL shouldOmitYear;                   //@synthesize shouldOmitYear=_shouldOmitYear - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSLocale *)locale;
-(id)formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithFormatPreset:(unsigned long long)arg1 autoUpdateOnChanges:(BOOL)arg2 ;
-(void)setShouldOmitYear:(BOOL)arg1 ;
-(void)setUseLocalDates:(BOOL)arg1 ;
-(void)setAutoUpdateOnChanges:(BOOL)arg1 ;
-(id)initWithFormatPreset:(unsigned long long)arg1 configurationBlock:(/*^block*/id)arg2 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_handleNotification:(id)arg1 ;
-(void)configureForFormatPreset:(unsigned long long)arg1 ;
-(BOOL)autoUpdateOnChanges;
-(BOOL)useLocalDates;
-(BOOL)shouldOmitYear;
-(void)_updateTimeZone;
-(void)_updateFormatters;
-(id)_sameMonthTemplate;
-(id)_dayTemplate;
-(id)_dayDifferentMonthsTemplate;
-(void)_updateSameDayDateFormatter;
-(void)_updateSameDayNoYearDateFormatter;
-(void)_updateDayOfTheWeekDateFormatter;
-(void)_updateYearDateFormatter;
-(void)_updateMonthDateFormatter;
-(void)_updateRelativeDateFormatter;
-(void)_updateMonthDayIntervalFormat;
-(void)_updateMonthDayNoYearIntervalFormat;
-(void)_updateDifferentMonthDayIntervalFormat;
-(void)_updateDifferentMonthDayNoYearIntervalFormat;
-(void)_updateDayOfTheWeekIntervalFormat;
-(void)_updateTimeIntervalFormat;
-(void)_updateMonthIntervalFormat;
-(void)_updateYearIntervalFormat;
-(id)_formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 ;
-(id)_formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)formattedDate:(id)arg1 ;
@end

