/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TAFilterGeneralSettings, TAFilterVisitsSettings, TAFilterSingleVisitSettings, TAEventBufferSettings, TAVisitStateSettings, TAScanRequestSettings, TATrackingAvoidanceServiceSettings;

@interface TASettings : NSObject {

	BOOL _trackingAvoidanceEnabled;
	BOOL _peopleDensityEnabled;
	TAFilterGeneralSettings* _filterGeneralSettings;
	TAFilterVisitsSettings* _filterVisitsSettings;
	TAFilterSingleVisitSettings* _filterSingleVisitSettings;
	TAEventBufferSettings* _eventBufferSettings;
	TAVisitStateSettings* _visitStateSettings;
	TAScanRequestSettings* _scanRequestSettings;
	TATrackingAvoidanceServiceSettings* _serviceSettings;

}

@property (assign,nonatomic) BOOL trackingAvoidanceEnabled;                                        //@synthesize trackingAvoidanceEnabled=_trackingAvoidanceEnabled - In the implementation block
@property (assign,nonatomic) BOOL peopleDensityEnabled;                                            //@synthesize peopleDensityEnabled=_peopleDensityEnabled - In the implementation block
@property (nonatomic,retain) TAFilterGeneralSettings * filterGeneralSettings;                      //@synthesize filterGeneralSettings=_filterGeneralSettings - In the implementation block
@property (nonatomic,retain) TAFilterVisitsSettings * filterVisitsSettings;                        //@synthesize filterVisitsSettings=_filterVisitsSettings - In the implementation block
@property (nonatomic,retain) TAFilterSingleVisitSettings * filterSingleVisitSettings;              //@synthesize filterSingleVisitSettings=_filterSingleVisitSettings - In the implementation block
@property (nonatomic,retain) TAEventBufferSettings * eventBufferSettings;                          //@synthesize eventBufferSettings=_eventBufferSettings - In the implementation block
@property (nonatomic,retain) TAVisitStateSettings * visitStateSettings;                            //@synthesize visitStateSettings=_visitStateSettings - In the implementation block
@property (nonatomic,retain) TAScanRequestSettings * scanRequestSettings;                          //@synthesize scanRequestSettings=_scanRequestSettings - In the implementation block
@property (nonatomic,retain) TATrackingAvoidanceServiceSettings * serviceSettings;                 //@synthesize serviceSettings=_serviceSettings - In the implementation block
+(id)convertEnabledLoiTypesValueContentToNSNumberType:(id)arg1 ;
+(id)getBooleanSettingsKeys;
+(id)getIntegerSettingsKeys;
+(id)getUnsignedIntegerSettingsKeys;
+(id)getDoubleSettingsKeys;
+(id)getStringSettingsKeys;
+(id)getArraySettingsKeys;
-(id)init;
-(id)description;
-(id)initWithSettings:(id)arg1 ;
-(void)setSettings:(id)arg1 ;
-(TATrackingAvoidanceServiceSettings *)serviceSettings;
-(TAEventBufferSettings *)eventBufferSettings;
-(TAScanRequestSettings *)scanRequestSettings;
-(TAVisitStateSettings *)visitStateSettings;
-(TAFilterVisitsSettings *)filterVisitsSettings;
-(TAFilterSingleVisitSettings *)filterSingleVisitSettings;
-(TAFilterGeneralSettings *)filterGeneralSettings;
-(BOOL)trackingAvoidanceEnabled;
-(void)setTrackingAvoidanceEnabled:(BOOL)arg1 ;
-(BOOL)peopleDensityEnabled;
-(void)setPeopleDensityEnabled:(BOOL)arg1 ;
-(void)setFilterGeneralSettings:(TAFilterGeneralSettings *)arg1 ;
-(void)setFilterVisitsSettings:(TAFilterVisitsSettings *)arg1 ;
-(void)setFilterSingleVisitSettings:(TAFilterSingleVisitSettings *)arg1 ;
-(void)setEventBufferSettings:(TAEventBufferSettings *)arg1 ;
-(void)setVisitStateSettings:(TAVisitStateSettings *)arg1 ;
-(void)setScanRequestSettings:(TAScanRequestSettings *)arg1 ;
-(void)setServiceSettings:(TATrackingAvoidanceServiceSettings *)arg1 ;
@end

