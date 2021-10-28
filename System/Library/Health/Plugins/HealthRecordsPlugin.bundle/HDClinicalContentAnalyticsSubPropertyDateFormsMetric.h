/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthRecordsPlugin/HDClinicalContentAnalyticsSubPropertyMetric.h>

@class HDClinicalContentAnalyticsDateFormsMetric;

@interface HDClinicalContentAnalyticsSubPropertyDateFormsMetric : HDClinicalContentAnalyticsSubPropertyMetric {

	HDClinicalContentAnalyticsDateFormsMetric* _metric;
	long long _extractionRulesVersion;
	long long _resourceType;
	long long _property;

}
-(id)initWithDateFormsMetric:(id)arg1 extractionRulesVersion:(long long)arg2 resourceType:(long long)arg3 property:(long long)arg4 ;
-(void)addDateFormsMetricElementForSubProperty:(long long)arg1 medicalDate:(id)arg2 ;
-(void)addDateFormsMetricsWithBlock:(/*^block*/id)arg1 ;
@end
