/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <libobjc.A.dylib/HKValueDataProviderObserver.h>
#import <libobjc.A.dylib/HKActivitySummaryDataProviderObserver.h>
#import <libobjc.A.dylib/WDDashboardCellPrimaryValueSource.h>
#import <libobjc.A.dylib/WDDashboardCellSecondaryValueSource.h>
#import <libobjc.A.dylib/WDDashboardCellChartSource.h>

@protocol WDDashboardCellPrimaryValueSourceDelegate, WDDashboardCellSecondaryValueSourceDelegate;
@class HKDisplayType, HKDisplayCategory, NSString, NSDate, NSAttributedString, HKActivitySummaryDataProvider, NSDictionary, HKUnitPreferenceController, WDProfile, HKValueDataProvider;

@interface WDDashboardChartItem : NSObject <HKValueDataProviderObserver, HKActivitySummaryDataProviderObserver, WDDashboardCellPrimaryValueSource, WDDashboardCellSecondaryValueSource, WDDashboardCellChartSource> {

	NSDictionary* _dataPoints;
	BOOL _isActive;
	HKUnitPreferenceController* _unitController;
	WDProfile* _profile;
	HKValueDataProvider* _currentValueDataProvider;
	HKValueDataProvider* _secondaryValueDataProvider;
	HKActivitySummaryDataProvider* _activitySummaryProvider;
	BOOL _localeDidChange;
	HKDisplayType* _displayType;
	id<WDDashboardCellPrimaryValueSourceDelegate> _primaryValueSourceDelegate;
	id<WDDashboardCellSecondaryValueSourceDelegate> _secondaryValueSourceDelegate;
	HKDisplayCategory* _displayCategory;
	NSDate* _startDate;
	NSDate* _endDate;
	long long _timeScope;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WDDashboardCellPrimaryValueSourceDelegate> primaryValueSourceDelegate;                  //@synthesize primaryValueSourceDelegate=_primaryValueSourceDelegate - In the implementation block
@property (nonatomic,readonly) HKDisplayType * displayType;                                                                    //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,readonly) HKDisplayCategory * displayCategory;                                                            //@synthesize displayCategory=_displayCategory - In the implementation block
@property (nonatomic,readonly) NSString * primaryValueContextualText; 
@property (nonatomic,readonly) NSDate * lastUpdated; 
@property (assign,nonatomic,__weak) id<WDDashboardCellSecondaryValueSourceDelegate> secondaryValueSourceDelegate;              //@synthesize secondaryValueSourceDelegate=_secondaryValueSourceDelegate - In the implementation block
@property (nonatomic,readonly) NSAttributedString * secondaryValue; 
@property (nonatomic,readonly) long long timeScope;                                                                            //@synthesize timeScope=_timeScope - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                                                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                                                               //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) HKActivitySummaryDataProvider * activitySummaryProvider;                                        //@synthesize activitySummaryProvider=_activitySummaryProvider - In the implementation block
@property (assign,nonatomic) BOOL localeDidChange;                                                                             //@synthesize localeDidChange=_localeDidChange - In the implementation block
-(id)init;
-(void)dealloc;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(HKDisplayType *)displayType;
-(NSDate *)lastUpdated;
-(NSAttributedString *)secondaryValue;
-(BOOL)localeDidChange;
-(long long)timeScope;
-(HKDisplayCategory *)displayCategory;
-(id)initWithDisplayType:(id)arg1 useAlternateCurrentValue:(BOOL)arg2 displayCategory:(id)arg3 profile:(id)arg4 healthStore:(id)arg5 ;
-(id<WDDashboardCellPrimaryValueSourceDelegate>)primaryValueSourceDelegate;
-(id<WDDashboardCellSecondaryValueSourceDelegate>)secondaryValueSourceDelegate;
-(void)dataProviderDidUpdateValues:(id)arg1 ;
-(void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg1 ;
-(id)mostRecentValueWithValueFont:(id)arg1 unitFont:(id)arg2 ;
-(void)setPrimaryValueSourceDelegate:(id<WDDashboardCellPrimaryValueSourceDelegate>)arg1 ;
-(NSString *)primaryValueContextualText;
-(void)setSecondaryValueSourceDelegate:(id<WDDashboardCellSecondaryValueSourceDelegate>)arg1 ;
-(BOOL)shouldHideAverageLineForTimeScope:(long long)arg1 ;
-(BOOL)shouldHideMinMaxOnBackgroundForTimeScope:(long long)arg1 ;
-(void)invalidateChart;
-(HKActivitySummaryDataProvider *)activitySummaryProvider;
-(void)setLocaleDidChange:(BOOL)arg1 ;
-(UIEdgeInsets)_chartInsetsForTimeScope:(long long)arg1 ;
@end

