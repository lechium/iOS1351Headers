/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TAInterVisitMetricPerDeviceSettings : NSObject {

	double _sampledObservationLocationsInterval;
	unsigned long long _sampledObservationLocationsBufferSize;

}

@property (assign,nonatomic) double sampledObservationLocationsInterval;                            //@synthesize sampledObservationLocationsInterval=_sampledObservationLocationsInterval - In the implementation block
@property (assign,nonatomic) unsigned long long sampledObservationLocationsBufferSize;              //@synthesize sampledObservationLocationsBufferSize=_sampledObservationLocationsBufferSize - In the implementation block
-(id)init;
-(id)initWithSampledObservationLocationsInterval:(double)arg1 sampledObservationLocationsBufferSize:(unsigned long long)arg2 ;
-(double)sampledObservationLocationsInterval;
-(void)setSampledObservationLocationsInterval:(double)arg1 ;
-(unsigned long long)sampledObservationLocationsBufferSize;
-(void)setSampledObservationLocationsBufferSize:(unsigned long long)arg1 ;
@end

