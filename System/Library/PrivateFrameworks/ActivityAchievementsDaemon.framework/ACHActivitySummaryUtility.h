/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HDProfile, HDActivitySummaryBuilder, HDDatabaseTransactionContext;

@interface ACHActivitySummaryUtility : NSObject {

	HDProfile* _profile;
	HDActivitySummaryBuilder* _summaryBuilder;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HDActivitySummaryBuilder * summaryBuilder;                 //@synthesize summaryBuilder=_summaryBuilder - In the implementation block
@property (nonatomic,copy) HDDatabaseTransactionContext * databaseContext; 
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(HDDatabaseTransactionContext *)databaseContext;
-(HDActivitySummaryBuilder *)summaryBuilder;
-(void)setSummaryBuilder:(HDActivitySummaryBuilder *)arg1 ;
-(void)setDatabaseContext:(HDDatabaseTransactionContext *)arg1 ;
-(void)enumerateActivitySummariesForDateComponentInterval:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)_enumerateActivitySummariesForDateComponentInterval:(id)arg1 handler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)initWithProfile:(id)arg1 shouldIncludePrivateProperties:(BOOL)arg2 ;
-(id)newEmptyActivitySummaryFromSummary:(id)arg1 ;
@end

