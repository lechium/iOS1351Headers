/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CAMPerformanceTestHarness : NSObject {

	NSString* _testName;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy,readonly) NSString * testName;                           //@synthesize testName=_testName - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (getter=isRunningTest,nonatomic,readonly) BOOL runningTest; 
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)isRunningTest;
-(NSString *)testName;
-(void)startTesting;
-(void)stopTesting;
-(void)startSubtestWithName:(id)arg1 ;
-(void)stopSubtestWithName:(id)arg1 ;
-(id)initWithTestName:(id)arg1 ;
-(void)failedTestwithReason:(id)arg1 ;
@end

