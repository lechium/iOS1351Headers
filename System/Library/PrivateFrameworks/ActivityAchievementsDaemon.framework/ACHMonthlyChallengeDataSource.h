/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HDDatabaseTransactionContext, HDProfile, ACHWorkoutUtility, ACHActivitySummaryUtility;

@interface ACHMonthlyChallengeDataSource : NSObject {

	HDDatabaseTransactionContext* _databaseContext;
	HDProfile* _profile;
	ACHWorkoutUtility* _workoutUtility;
	ACHActivitySummaryUtility* _activitySummaryUtility;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                             //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) ACHWorkoutUtility * workoutUtility;                              //@synthesize workoutUtility=_workoutUtility - In the implementation block
@property (assign,nonatomic,__weak) ACHActivitySummaryUtility * activitySummaryUtility;              //@synthesize activitySummaryUtility=_activitySummaryUtility - In the implementation block
@property (nonatomic,copy) HDDatabaseTransactionContext * databaseContext;                           //@synthesize databaseContext=_databaseContext - In the implementation block
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(HDDatabaseTransactionContext *)databaseContext;
-(void)setDatabaseContext:(HDDatabaseTransactionContext *)arg1 ;
-(double)valueForMonthlyChallengeType:(unsigned long long)arg1 forDateComponentInterval:(id)arg2 inCalendar:(id)arg3 ;
-(void)setActivitySummaryUtility:(ACHActivitySummaryUtility *)arg1 ;
-(ACHActivitySummaryUtility *)activitySummaryUtility;
-(ACHWorkoutUtility *)workoutUtility;
-(void)setWorkoutUtility:(ACHWorkoutUtility *)arg1 ;
-(long long)numberOfAllRingsClosedDuringDateComponentInterval:(id)arg1 ;
-(long long)numberOfMoveRingsClosedDuringDateComponentInterval:(id)arg1 ;
-(long long)numberOfExerciseRingsClosedDuringDateComponentInterval:(id)arg1 ;
-(long long)numberOfStandRingsClosedDuringDateComponentInterval:(id)arg1 ;
-(double)walkingRunningDistanceDuringDateComponentInterval:(id)arg1 ;
-(double)caloriesDuringDateComponentInterval:(id)arg1 ;
-(double)exerciseMinutesDuringDateComponentInterval:(id)arg1 ;
-(long long)numberOfWorkoutsCompletedDuringDateInterval:(id)arg1 ;
-(long long)numberOfDaysDoublingMoveGoalDuringDateComponentInterval:(id)arg1 ;
-(id)initWithProfile:(id)arg1 activitySummaryUtility:(id)arg2 workoutUtility:(id)arg3 ;
@end

