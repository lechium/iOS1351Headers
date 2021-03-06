/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HDDatabaseTransactionContext, HDProfile, HDSQLitePredicate;

@interface ACHWorkoutUtility : NSObject {

	HDDatabaseTransactionContext* _databaseContext;
	HDProfile* _profile;
	HDSQLitePredicate* _firstPartyPredicate;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HDSQLitePredicate * firstPartyPredicate;                   //@synthesize firstPartyPredicate=_firstPartyPredicate - In the implementation block
@property (nonatomic,copy) HDDatabaseTransactionContext * databaseContext;              //@synthesize databaseContext=_databaseContext - In the implementation block
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(HDDatabaseTransactionContext *)databaseContext;
-(void)setDatabaseContext:(HDDatabaseTransactionContext *)arg1 ;
-(id)workoutsInDateInterval:(id)arg1 ;
-(unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)arg1 containedInInterval:(id)arg2 ;
-(unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)arg1 withType:(unsigned long long)arg2 endingOnOrBeforeDate:(id)arg3 ;
-(id)bestEnergyBurnedForFirstPartyWorkoutsWithType:(unsigned long long)arg1 endingBeforeDate:(id)arg2 ;
-(unsigned long long)numberOfWorkoutsWithDuration:(double)arg1 containedInInterval:(id)arg2 ;
-(id)workoutsWithDuration:(double)arg1 withType:(id)arg2 startingAtOrAfterDate:(id)arg3 endingOnOrBeforeDate:(id)arg4 firstPartyOnly:(BOOL)arg5 ;
-(id)_predicateWithDuration:(double)arg1 withType:(id)arg2 startingAtOrAfterDate:(id)arg3 endingOnOrBeforeDate:(id)arg4 firstPartyOnly:(BOOL)arg5 ;
-(unsigned long long)_countOfSamplesWithPredicate:(id)arg1 ;
-(HDSQLitePredicate *)firstPartyPredicate;
-(void)setFirstPartyPredicate:(HDSQLitePredicate *)arg1 ;
@end

