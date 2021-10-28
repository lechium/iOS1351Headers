/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HDProfile, HKMCAnalysis, HDKeyValueDomain;

@interface HDMCDailyAnalytics : NSObject {

	HDProfile* _profile;
	HKMCAnalysis* _analysis;
	HDKeyValueDomain* _keyValueDomain;

}
+(BOOL)shouldSubmit;
-(BOOL)_collectDiagnosticFieldsForMetric:(id)arg1 gregorianCalendar:(id)arg2 error:(id*)arg3 ;
-(BOOL)_collectSensitiveFieldsForMetric:(id)arg1 gregorianCalendar:(id)arg2 error:(id*)arg3 ;
-(id)_weeksBetweenStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 ;
-(id)_yearsBetweenStartDateComponents:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 ;
-(id)initWithProfile:(id)arg1 analysis:(id)arg2 ;
-(BOOL)submitMetricWithError:(id*)arg1 ;
@end
