/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_os_log;
@class NSObject;

@interface STYDiagnosticsCollector : NSObject {

	NSObject*<OS_dispatch_queue> _serialUtilityQueue;
	NSObject*<OS_os_log> _logger;

}

@property (retain) NSObject*<OS_dispatch_queue> serialUtilityQueue;              //@synthesize serialUtilityQueue=_serialUtilityQueue - In the implementation block
@property (retain) NSObject*<OS_os_log> logger;                                  //@synthesize logger=_logger - In the implementation block
+(id)sharedDiagnosticsCollector;
-(NSObject*<OS_os_log>)logger;
-(void)setLogger:(NSObject*<OS_os_log>)arg1 ;
-(void)setSerialUtilityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)collectTailspinForScenarioReport:(id)arg1 tailspinFileDescriptor:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)serialUtilityQueue;
@end

