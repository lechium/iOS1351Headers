/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDStandardTaskServer.h>

@interface HDHealthKitControlTaskServer : HDStandardTaskServer
+(id)taskIdentifier;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_condenseWorkoutsForReason:(long long)arg1 workoutBatchLimit:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_condenseWorkoutWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_condensedWorkoutsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_condensableWorkoutsWithCompletion:(/*^block*/id)arg1 ;
@end
