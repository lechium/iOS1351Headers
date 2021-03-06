/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FIUIWorkoutActivityType, NSMutableDictionary, NSMutableArray, FIUIWorkoutDefaultMetricsProvider, NPSDomainAccessor, NPSManager;

@interface FIUIWorkoutSettingsManager : NSObject {

	FIUIWorkoutActivityType* _workoutActivityType;
	NSMutableDictionary* _settingsByActivityType;
	NSMutableDictionary* _settingOverridesByMetric;
	NSMutableArray* _enabledMetrics;
	FIUIWorkoutDefaultMetricsProvider* _defaultMetricsProvider;
	NPSDomainAccessor* _domainAccessor;
	NPSManager* _syncManager;

}

@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;              //@synthesize domainAccessor=_domainAccessor - In the implementation block
@property (nonatomic,retain) NPSManager * syncManager;                        //@synthesize syncManager=_syncManager - In the implementation block
+(void)obliterateUserConfiguredWorkoutMetrics;
-(id)init;
-(NPSManager *)syncManager;
-(void)setSyncManager:(NPSManager *)arg1 ;
-(NPSDomainAccessor *)domainAccessor;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(void)_clearOldMetricsIfNeeded;
-(void)_readFromDomain;
-(BOOL)_hasUserMadeMetricChangesToWorkoutType:(id)arg1 enabledMetrics:(id)arg2 settingOverridesByMetric:(id)arg3 metricFormatVersion:(id)arg4 ;
-(void)_writeToDomainWithShouldUpdateVersion:(BOOL)arg1 ;
-(id)supportedMetrics;
-(id)orderedDisabledMetrics;
-(BOOL)isMetricEnabled:(unsigned long long)arg1 ;
-(BOOL)_enabledMetricsAreDefaultAfterPaceMigration:(id)arg1 workoutActivityType:(id)arg2 ;
-(void)_migratePaceViewSettingIfNeeded;
-(id)initWithWorkoutActivityType:(id)arg1 ;
-(id)orderedEnabledMetrics;
-(id)orderedSupportedMetrics;
-(id)orderedEnabledAndSupportedMetrics;
-(void)setEnabled:(BOOL)arg1 forMetricType:(unsigned long long)arg2 didChange:(BOOL*)arg3 ;
-(void)moveMetricType:(unsigned long long)arg1 toEnabledIndex:(long long)arg2 ;
-(long long)disabledIndexForMetricType:(unsigned long long)arg1 ;
-(void)reloadMetrics;
@end

