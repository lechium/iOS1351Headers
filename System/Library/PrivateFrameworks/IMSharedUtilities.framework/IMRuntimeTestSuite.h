/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMSharedUtilities/IMRuntimeTest.h>

@class NSMutableArray, IMRuntimeTest, NSTimer, NSArray;

@interface IMRuntimeTestSuite : IMRuntimeTest {

	NSMutableArray* _tests;
	double _testSuiteStartDelay;
	double _testStartDelay;
	NSMutableArray* _runningTests;
	IMRuntimeTest* _currentTest;
	NSTimer* _timer;

}

@property (retain) NSArray * tests;                            //@synthesize tests=_tests - In the implementation block
@property (retain) NSMutableArray * runningTests;              //@synthesize runningTests=_runningTests - In the implementation block
@property (retain) IMRuntimeTest * currentTest;                //@synthesize currentTest=_currentTest - In the implementation block
@property (__weak) NSTimer * timer;                            //@synthesize timer=_timer - In the implementation block
@property (assign) double testSuiteStartDelay;                 //@synthesize testSuiteStartDelay=_testSuiteStartDelay - In the implementation block
@property (assign) double testStartDelay;                      //@synthesize testStartDelay=_testStartDelay - In the implementation block
+(void)runTestsIfNeededWithRepeatCount:(long long)arg1 withCount:(long long)arg2 ;
+(void)runTestsIfNeededWithRepeatCount:(long long)arg1 ;
-(id)init;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(IMRuntimeTest *)currentTest;
-(NSArray *)tests;
-(void)startTest;
-(void)currentTestDidFinish;
-(void)_startNextTest;
-(void)_cancelTimer;
-(double)testStartDelay;
-(void)_timerExpired:(id)arg1 ;
-(double)testSuiteStartDelay;
-(void)addTest:(id)arg1 ;
-(void)removeTest:(id)arg1 ;
-(void)setTests:(NSArray *)arg1 ;
-(void)setTestSuiteStartDelay:(double)arg1 ;
-(void)setTestStartDelay:(double)arg1 ;
-(NSMutableArray *)runningTests;
-(void)setRunningTests:(NSMutableArray *)arg1 ;
-(void)setCurrentTest:(IMRuntimeTest *)arg1 ;
@end
