/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HDDataAggregationState, NSArray;

@interface HDDataAggregationResult : NSObject {

	HDDataAggregationState* _aggregationState;
	NSArray* _consumedSensorData;
	/*^block*/id _persistenceHandler;

}

@property (nonatomic,copy,readonly) HDDataAggregationState * aggregationState;              //@synthesize aggregationState=_aggregationState - In the implementation block
@property (nonatomic,copy,readonly) NSArray * consumedSensorData;                           //@synthesize consumedSensorData=_consumedSensorData - In the implementation block
@property (nonatomic,copy,readonly) id persistenceHandler;                                  //@synthesize persistenceHandler=_persistenceHandler - In the implementation block
-(id)initWithResultingAggregationState:(id)arg1 consumedSensorData:(id)arg2 persistenceHandler:(/*^block*/id)arg3 ;
-(id)persistenceHandler;
-(NSArray *)consumedSensorData;
-(HDDataAggregationState *)aggregationState;
@end

