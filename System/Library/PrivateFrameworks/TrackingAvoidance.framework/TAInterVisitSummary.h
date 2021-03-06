/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDateInterval, NSArray, TASPAdvertisement;

@interface TAInterVisitSummary : NSObject {

	NSDateInterval* _deviceObservationInterval;
	NSArray* _deviceLocationHistory;
	TASPAdvertisement* _latestObservation;

}

@property (nonatomic,readonly) NSDateInterval * deviceObservationInterval;              //@synthesize deviceObservationInterval=_deviceObservationInterval - In the implementation block
@property (nonatomic,readonly) NSArray * deviceLocationHistory;                         //@synthesize deviceLocationHistory=_deviceLocationHistory - In the implementation block
@property (nonatomic,readonly) TASPAdvertisement * latestObservation;                   //@synthesize latestObservation=_latestObservation - In the implementation block
-(NSArray *)deviceLocationHistory;
-(NSDateInterval *)deviceObservationInterval;
-(TASPAdvertisement *)latestObservation;
-(id)initWithObservationInterval:(id)arg1 andLocationHistory:(id)arg2 andLastObservation:(id)arg3 ;
@end

