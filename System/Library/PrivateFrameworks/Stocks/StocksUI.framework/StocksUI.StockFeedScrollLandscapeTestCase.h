/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:06 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SNTestCaseScroll.h>
#import <libobjc.A.dylib/SNTestRunOptions.h>

@class NSString, NSArray;

@interface StocksUI.StockFeedScrollLandscapeTestCase : NSObject <SNTestCaseScroll, SNTestRunOptions> {

	 testName;
	 timeoutInSeconds;
	 aggregate;
	 requiredCapabilities;
	 iterations;
	 offset;
	 numberOfScreens;
	 orientation;
	 waitForCommitToFinish;

}

@property (readonly,nonatomic) NSString * testName; 
@property (readonly,nonatomic) double timeoutInSeconds; 
@property (readonly,nonatomic) unsigned long long aggregate; 
@property (readonly,nonatomic) NSArray * requiredCapabilities; 
@property (readonly,nonatomic) long long iterations; 
@property (readonly,nonatomic) long long offset; 
@property (readonly,nonatomic) long long numberOfScreens; 
@property (readonly,nonatomic) long long orientation; 
@property (readonly,nonatomic) BOOL waitForCommitToFinish; 
-(id)init;
-(long long)orientation;
-(long long)offset;
-(NSString *)testName;
-(long long)iterations;
-(NSArray *)requiredCapabilities;
-(unsigned long long)aggregate;
-(double)timeoutInSeconds;
-(long long)numberOfScreens;
-(id)scrollViewWithContext:(id)arg1 ;
-(BOOL)waitForCommitToFinish;
@end
