/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <Celestial/Celestial-Structs.h>
@class NSObject, FigCaptureDisplayLayoutMonitor;

@interface BWAutoFocusPositionSensorMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _apsMonitorQueue;
	FigCaptureDisplayLayoutMonitor* _displayLayoutMonitor;

}
+(void)initialize;
+(id)sharedInstance;
+(void)clientHasBeenBackgrounded;
+(void)processAPSOffsetEstimatorInfo:(id)arg1 portType:(id)arg2 ;
+(void)logStillImageAPSStatistics:(id)arg1 ;
+(void)logVideoRecordingAPSStatistics:(BWAPSStatistics*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)clientHasBeenBackgrounded;
-(void)processAPSOffsetEstimatorInfo:(id)arg1 portType:(id)arg2 ;
-(void)logStillImageAPSStatistics:(id)arg1 ;
-(void)logVideoRecordingAPSStatistics:(BWAPSStatistics*)arg1 ;
-(void)_processAPSOffsetEstimatorInfo:(id)arg1 portType:(id)arg2 ;
-(void)_reportStillImageAPSStatisticsToAggd:(id)arg1 ;
-(void)_logStillImageAPSStatistics:(id)arg1 ;
-(void)_reportVideoRecordingAPSStatisticsToAggd:(BWAPSStatistics*)arg1 ;
-(void)_logVideoRecordingAPSStatistics:(BWAPSStatistics*)arg1 ;
-(void)_postMagneticDetectionUserNotification;
-(void)_reportAPSOffsetEstimatorInfoToAggdAndCoreAnalytics:(id)arg1 portType:(id)arg2 ;
-(void)_logAPSOffsetEstimatorInfo:(id)arg1 portType:(id)arg2 ;
-(id)_getLogFileHandle;
-(void)_appendApsMotionData:(id)arg1 sphereMotionData:(id)arg2 toDataString:(id)arg3 ;
@end

