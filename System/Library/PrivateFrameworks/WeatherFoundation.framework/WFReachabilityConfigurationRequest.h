/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WFTask.h>

@interface WFReachabilityConfigurationRequest : WFTask {

	/*^block*/id _resultHandler;

}

@property (nonatomic,copy) id resultHandler;              //@synthesize resultHandler=_resultHandler - In the implementation block
-(void)cleanup;
-(id)resultHandler;
-(void)setResultHandler:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)initWithResultHandler:(/*^block*/id)arg1 ;
-(void)handleResponse:(id)arg1 ;
-(void)startWithService:(id)arg1 ;
-(void)handleCancellation;
@end
