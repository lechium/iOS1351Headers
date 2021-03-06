/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TAMetricsProtocol.h>

@class TAInterVisitMetricPerDevice, TASPAdvertisement, NSString;

@interface TAMetricsInterVisit : NSObject <TAMetricsProtocol> {

	TAInterVisitMetricPerDevice* _currentInterVisitMetric;
	TAInterVisitMetricPerDevice* _totalInterVisitMetric;

}

@property (nonatomic,readonly) TAInterVisitMetricPerDevice * currentInterVisitMetric;              //@synthesize currentInterVisitMetric=_currentInterVisitMetric - In the implementation block
@property (nonatomic,readonly) TAInterVisitMetricPerDevice * totalInterVisitMetric;                //@synthesize totalInterVisitMetric=_totalInterVisitMetric - In the implementation block
@property (nonatomic,readonly) TASPAdvertisement * latestAdvertisement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)descriptionDictionary;
-(unsigned long long)getMetricsCollectionType;
-(TASPAdvertisement *)latestAdvertisement;
-(TAInterVisitMetricPerDevice *)currentInterVisitMetric;
-(TAInterVisitMetricPerDevice *)totalInterVisitMetric;
@end

