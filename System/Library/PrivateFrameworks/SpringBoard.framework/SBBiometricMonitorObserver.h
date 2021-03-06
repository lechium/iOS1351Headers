/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBBiometricMonitorObserver <NSObject>
@optional
-(void)biometricMonitorDataSourceMatchingStarted:(id)arg1;
-(void)biometricMonitorDataSourceMatchingFailed:(id)arg1;
-(void)biometricMonitorDataSourceMatchingSucceeded:(id)arg1;
-(void)biometricMonitorDataSourceMatchingEnded:(id)arg1;
-(void)biometricMonitorDataSourcePresenceDetectionStarted:(id)arg1;
-(void)biometricMonitorDataSourcePresenceDetectionFailed:(id)arg1;
-(void)biometricMonitorDataSourcePresenceDetectionSucceeded:(id)arg1;
-(void)biometricMonitorDataSourcePresenceDetectionEnded:(id)arg1;
-(void)biometricMonitorDataSourcePoseUpdated:(id)arg1;

@end

