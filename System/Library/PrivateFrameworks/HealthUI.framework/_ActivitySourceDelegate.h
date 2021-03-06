/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HKDateRangeDataSourceDelegate.h>
#import <libobjc.A.dylib/HKActivitySummaryDataProviderObserver.h>

@protocol HKDateRangeDataUpdateDelegate;
@class HKActivitySummaryDataProvider, HKDisplayTypeController, HKUnitPreferenceController, NSCalendar, NSString;

@interface _ActivitySourceDelegate : NSObject <HKDateRangeDataSourceDelegate, HKActivitySummaryDataProviderObserver> {

	HKActivitySummaryDataProvider* _dataProvider;
	long long _activityValue;
	HKDisplayTypeController* _displayTypeController;
	HKUnitPreferenceController* _unitPreferenceController;
	id<HKDateRangeDataUpdateDelegate> _updateDelegate;
	NSCalendar* _currentCalendar;

}

@property (nonatomic,readonly) HKActivitySummaryDataProvider * dataProvider;                       //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,readonly) long long activityValue;                                            //@synthesize activityValue=_activityValue - In the implementation block
@property (nonatomic,readonly) HKDisplayTypeController * displayTypeController;                    //@synthesize displayTypeController=_displayTypeController - In the implementation block
@property (nonatomic,readonly) HKUnitPreferenceController * unitPreferenceController;              //@synthesize unitPreferenceController=_unitPreferenceController - In the implementation block
@property (nonatomic,retain) id<HKDateRangeDataUpdateDelegate> updateDelegate;                     //@synthesize updateDelegate=_updateDelegate - In the implementation block
@property (nonatomic,readonly) NSCalendar * currentCalendar;                                       //@synthesize currentCalendar=_currentCalendar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSCalendar *)currentCalendar;
-(HKActivitySummaryDataProvider *)dataProvider;
-(id<HKDateRangeDataUpdateDelegate>)updateDelegate;
-(void)setUpdateDelegate:(id<HKDateRangeDataUpdateDelegate>)arg1 ;
-(HKDisplayTypeController *)displayTypeController;
-(void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg1 ;
-(HKUnitPreferenceController *)unitPreferenceController;
-(id)dataForDateRange:(id)arg1 timeScope:(long long)arg2 ;
-(long long)activityValue;
-(id)initWithDataProvider:(id)arg1 activityValue:(long long)arg2 displayTypeController:(id)arg3 unitPreferenceController:(id)arg4 ;
-(id)_chartPointForActivityValue:(long long)arg1 summary:(id)arg2 timeScope:(long long)arg3 ;
-(id)_quantityForActivityValue:(long long)arg1 summary:(id)arg2 ;
-(double)_centerOffsetForTimeScope:(long long)arg1 startDate:(id)arg2 calendar:(id)arg3 ;
-(id)_healthChartPointForQuantity:(id)arg1 quantityType:(id)arg2 activityValue:(long long)arg3 referenceDisplayType:(id)arg4 activitySummaryData:(id)arg5 preferredUnit:(id)arg6 date:(id)arg7 createBarValue:(BOOL)arg8 ;
@end

