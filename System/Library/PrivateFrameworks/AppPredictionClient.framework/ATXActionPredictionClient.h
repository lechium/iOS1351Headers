/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ATXActionPredictionInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSString, ATXCacheReader, NSObject;

@interface ATXActionPredictionClient : NSObject <ATXActionPredictionInterface> {

	NSXPCConnection* _xpcConnection;
	NSString* _cacheBasePath;
	ATXCacheReader* _cacheReader;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(id)init;
-(void)dealloc;
-(void)getActionPredictionsForCandidateBundleIdentifiers:(id)arg1 candidateActionTypes:(id)arg2 consumerType:(unsigned long long)arg3 consumerSubType:(unsigned char)arg4 limit:(int)arg5 reply:(/*^block*/id)arg6 ;
-(void)shouldDisplayDailyRoutineForContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getActionPredictionsForContext:(id)arg1 includeBundleIds:(id)arg2 excludeBundleIds:(id)arg3 includeActionTypes:(id)arg4 excludeActionTypes:(id)arg5 limit:(unsigned long long)arg6 reply:(/*^block*/id)arg7 ;
-(void)sendFeedbackWithResponse:(id)arg1 ;
-(id)initWithCacheBasePath:(id)arg1 ;
-(id)actionPredictionsForConsumerSubType:(unsigned char)arg1 limit:(int)arg2 ;
@end

