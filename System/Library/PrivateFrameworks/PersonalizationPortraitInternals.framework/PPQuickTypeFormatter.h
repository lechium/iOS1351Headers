/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PPQuickTypeQuery, NSLocale, _PASLock, NSDateFormatter, NSCache, NSURL, NSString, NSMeasurementFormatter, NSLengthFormatter, NSDateComponentsFormatter;

@interface PPQuickTypeFormatter : NSObject {

	PPQuickTypeQuery* _query;
	NSLocale* _locale;
	_PASLock* _localizedStrings;
	NSDateFormatter* _birthdayFormatter;
	NSDateFormatter* _chineseBirthdayFormatter;
	NSDateFormatter* _yearlessChineseBirthdayFormatter;
	NSDateFormatter* _shortEventFormatter;
	NSDateFormatter* _longEventFormatter;
	NSCache* _localizedLabelCache;
	NSCache* _dateFormatCache;
	NSURL* _labeledValueLocalizationURL;
	NSCache* _appNameCache;
	NSString* _appNameFallbackLanguage;
	NSString* _appNameDesiredLanguage;
	NSMeasurementFormatter* _measurementWholeFormatter;
	NSMeasurementFormatter* _measurementDecimalFormatter;
	NSMeasurementFormatter* _measurementUnscaledFormatter;
	NSLengthFormatter* _lengthFormatter;
	NSDateComponentsFormatter* _dateComponentFormatter;

}
+(id)new;
+(id)formatterWithQuery:(id)arg1 ;
+(id)keyDictionaryForQuery:(id)arg1 ;
-(id)init;
-(id)_locale;
-(id)distanceLabel;
-(id)destinationLabel;
-(id)_localizedStringForKey:(id)arg1 ;
-(id)initWithquery:(id)arg1 ;
-(id)_dateFormatForTemplate:(id)arg1 ;
-(BOOL)_isYearlessComponents:(id)arg1 ;
-(id)_dateFromComponents:(id)arg1 destinationCalendar:(id)arg2 ;
-(id)makeShortEventFormatter;
-(id)makeLongEventFormatter;
-(id)makeYearlessChineseBirthdayFormatter;
-(id)makeChineseBirthdayFormatter;
-(id)makeBirthdayFormatter;
-(id)formattedBirthday:(id)arg1 ;
-(id)formattedEventTime:(id)arg1 ;
-(void)_initializeLocalizedLableCache;
-(id)formattedStringForLabel:(id)arg1 ;
-(id)formattedStringsForLabels:(id)arg1 ;
-(void)_precacheDateFormats;
-(id)localizedAppNameForBundleIdentifier:(id)arg1 ;
-(id)makeMeasurementWholeFormatter;
-(id)makeMeasurementDecimalFormatter;
-(id)makeMeasurementUnscaledFormatter;
-(id)formattedMeasurement:(id)arg1 allowDecimals:(BOOL)arg2 scaleUnits:(BOOL)arg3 ;
-(id)makeLengthFormatter;
-(id)formattedLengthInMeters:(double)arg1 ;
-(id)formattedPostalAddress:(id)arg1 ;
-(id)makeDateComponentFormatter;
-(id)formattedTimeInterval:(double)arg1 ;
-(id)navigationItemLabelForTypeLabel:(id)arg1 destination:(id)arg2 ;
-(id)itemLabelForBundleId:(id)arg1 typeLabel:(id)arg2 ;
-(id)attributionPattern;
-(id)etaLabel;
-(id)streetLabel;
-(id)timeLeftLabel;
@end

