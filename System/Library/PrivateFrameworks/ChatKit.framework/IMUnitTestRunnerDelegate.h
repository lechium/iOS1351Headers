/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:38 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IMUnitTestRunnerDelegate <NSObject>
@optional
-(void)unitTestRunner:(id)arg1 didReceiveOutput:(id)arg2;
-(void)unitTestRunner:(id)arg1 runningTestsInBundleAtPath:(id)arg2 failedWithError:(id)arg3;
-(void)unitTestRunner:(id)arg1 willRunTestsInBundleAtPath:(id)arg2;
-(void)unitTestRunner:(id)arg1 didRunTestsInBundleAtPath:(id)arg2 results:(id)arg3;
-(void)unitTestRunner:(id)arg1 testSuiteWillStart:(id)arg2;
-(void)unitTestRunner:(id)arg1 testSuite:(id)arg2 didFailWithDescription:(id)arg3 inFile:(id)arg4 atLine:(unsigned long long)arg5;
-(void)unitTestRunner:(id)arg1 testSuiteDidFinish:(id)arg2 withResult:(id)arg3;
-(void)unitTestRunner:(id)arg1 testCaseWillStart:(id)arg2;
-(void)unitTestRunner:(id)arg1 testCase:(id)arg2 didFailWithDescription:(id)arg3 inFile:(id)arg4 atLine:(unsigned long long)arg5;
-(void)unitTestRunner:(id)arg1 testCaseDidFinish:(id)arg2 withResult:(id)arg3;

@end
