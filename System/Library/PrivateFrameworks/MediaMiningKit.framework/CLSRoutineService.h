/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class CLSLocationOfInterestCache, NSDateInterval, NSMutableSet;

@interface CLSRoutineService : NSObject {

	CLSLocationOfInterestCache* _visitsCache;
	BOOL _routineIsAvailable;
	NSDateInterval* _fetchDateInterval;
	NSMutableSet* _pendingPinningVisitIdentifiers;
	CLSRoutineServiceStatisticsStruct _statistics;

}

@property (nonatomic,retain) NSDateInterval * fetchDateInterval;                         //@synthesize fetchDateInterval=_fetchDateInterval - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingPinningVisitIdentifiers;              //@synthesize pendingPinningVisitIdentifiers=_pendingPinningVisitIdentifiers - In the implementation block
@property (nonatomic,readonly) CLSLocationOfInterestCache * visitsCache;                 //@synthesize visitsCache=_visitsCache - In the implementation block
@property (assign,nonatomic) BOOL routineIsAvailable;                                    //@synthesize routineIsAvailable=_routineIsAvailable - In the implementation block
@property (readonly) CLSRoutineServiceStatisticsStruct statistics;                       //@synthesize statistics=_statistics - In the implementation block
-(CLSRoutineServiceStatisticsStruct)statistics;
-(BOOL)routineIsAvailable;
-(id)initWithFetchDateInterval:(id)arg1 ;
-(id)locationsOfInterestOfType:(long long)arg1 ;
-(id)locationOfInterestAtLocation:(id)arg1 ;
-(CLSLocationOfInterestCache *)visitsCache;
-(void)invalidateLocationsOfInterest;
-(void)postProcessLocationsOfInterest;
-(BOOL)hasLocationsOfInterestInformation;
-(id)locationOfInterestCloseToLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(id)locationOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(BOOL)isRemoteLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(unsigned long long)_devicePlacementTypeForLocationsOfInterestVisits:(id)arg1 ;
-(double)_disambiguationDistanceForDevicePlacementType:(unsigned long long)arg1 ;
-(void)_buildLocationsOfInterestCache;
-(id)_fetchLocationsOfInterestWithinDateInterval:(id)arg1 routineManager:(id)arg2 ;
-(id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)arg1 ;
-(void)_pinPendingVisits;
-(NSDateInterval *)fetchDateInterval;
-(void)setFetchDateInterval:(NSDateInterval *)arg1 ;
-(NSMutableSet *)pendingPinningVisitIdentifiers;
-(void)setPendingPinningVisitIdentifiers:(NSMutableSet *)arg1 ;
-(id)placemarksOfInterestOfType:(long long)arg1 ;
-(long long)predominantTransportationModeForDateInterval:(id)arg1 confidence:(double*)arg2 ;
-(id)_fetchLocationOfInterestTransitionsWithinDateInterval:(id)arg1 routineManager:(id)arg2 ;
-(id)_placemarksFromLocationsOfInterest:(id)arg1 ;
-(void)setRoutineIsAvailable:(BOOL)arg1 ;
@end

