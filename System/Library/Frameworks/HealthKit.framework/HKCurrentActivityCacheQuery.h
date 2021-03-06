/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKCurrentActivityCacheQueryClientInterface.h>

@class NSDateComponents;

@interface HKCurrentActivityCacheQuery : HKQuery <HKCurrentActivityCacheQueryClientInterface> {

	NSDateComponents* _statisticsIntervalComponents;
	/*^block*/id _updateHandler;

}

@property (nonatomic,copy) id updateHandler;              //@synthesize updateHandler=_updateHandler - In the implementation block
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)queue_validate;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)client_deliverQueryResult:(id)arg1 queryUUID:(id)arg2 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(id)initWithStatisticsIntervalComponents:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
@end

