/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SDRDiagnosticReporter;

@interface WBSAutomaticBugCaptureManager : NSObject {

	SDRDiagnosticReporter* _reporter;

}
+(id)sharedManager;
-(id)init;
-(void)captureLoadingStallWithDomain:(id)arg1 detectedProcess:(id)arg2 context:(id)arg3 duration:(double)arg4 ;
-(void)_startLoggingSessionForDomain:(id)arg1 detectedProcess:(id)arg2 type:(id)arg3 subType:(id)arg4 context:(id)arg5 duration:(double)arg6 ;
-(void)captureLoadingStallWithDomain:(id)arg1 detectedProcess:(id)arg2 context:(id)arg3 ;
-(void)captureProcessTerminationDueToResourceLimitsWithDomain:(id)arg1 detectedProcess:(id)arg2 resourceType:(id)arg3 ;
-(void)captureDeferredNavigationWithDomain:(id)arg1 detectedProcess:(id)arg2 context:(id)arg3 ;
-(void)capturePerformanceTimeoutWithDomain:(id)arg1 detectedProcess:(id)arg2 context:(id)arg3 ;
@end

