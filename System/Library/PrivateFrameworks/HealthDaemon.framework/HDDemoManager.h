/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _HDDataFaker;

@interface HDDemoManager : NSObject {

	_HDDataFaker* _faker;

}
-(void)stopFakingData;
-(void)startFakingDataForActivityType:(long long)arg1 speed:(id)arg2 objectHandler:(/*^block*/id)arg3 ;
-(void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 objectHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isProvidingData;
@end
