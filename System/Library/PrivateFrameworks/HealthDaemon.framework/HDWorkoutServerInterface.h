/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HDWorkoutServerInterface <NSObject>
@required
-(void)remote_finishAllWorkoutsWithCompletion:(/*^block*/id)arg1;
-(void)remote_generatePauseOrResumeRequestWithCompletion:(/*^block*/id)arg1;
-(void)remote_addSamples:(id)arg1 toWorkout:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_replaceWorkout:(id)arg1 withWorkout:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_startWatchAppWithWorkoutConfiguration:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_recoverActiveWorkoutSessionWithCompletion:(/*^block*/id)arg1;
-(void)remote_registerConnectionInitiatorClient:(id)arg1 withConnectionUUID:(id)arg2;
-(void)remote_permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 withConnectionUUID:(id)arg3;
-(void)remote_forbidConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;
-(void)remote_simulateTapWithFitnessMachineType:(unsigned long long)arg1;
-(void)remote_simulateAccept;
-(void)remote_simulateDisconnect;
-(void)remote_registerClient:(id)arg1 withConnectionUUID:(id)arg2;
-(void)remote_endFitnessMachineConnectionWithUUID:(id)arg1;
-(void)remote_endFitnessMachineConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;
-(void)remote_markClientReadyWithConnectionUUID:(id)arg1;

@end

