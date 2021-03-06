/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CAMPerformanceTestHarness.h>

@class CAMViewfinderViewController;

@interface CAMCameraRollTestHarness : CAMPerformanceTestHarness {

	BOOL _awaitPreload;
	BOOL _testingWarmPresentation;
	BOOL _testingAnimation;
	double _settlingDelay;
	CAMViewfinderViewController* _viewfinderViewController;

}

@property (nonatomic,readonly) BOOL awaitPreload;                                                   //@synthesize awaitPreload=_awaitPreload - In the implementation block
@property (nonatomic,readonly) double settlingDelay;                                                //@synthesize settlingDelay=_settlingDelay - In the implementation block
@property (nonatomic,readonly) BOOL testingWarmPresentation;                                        //@synthesize testingWarmPresentation=_testingWarmPresentation - In the implementation block
@property (getter=isTestingAnimation,nonatomic,readonly) BOOL testingAnimation;                     //@synthesize testingAnimation=_testingAnimation - In the implementation block
@property (nonatomic,readonly) CAMViewfinderViewController * viewfinderViewController;              //@synthesize viewfinderViewController=_viewfinderViewController - In the implementation block
-(void)startTesting;
-(void)stopTesting;
-(CAMViewfinderViewController *)viewfinderViewController;
-(id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 testingAnimation:(BOOL)arg3 testingWarmPresentation:(BOOL)arg4 awaitPreload:(BOOL)arg5 settlingDelay:(double)arg6 ;
-(BOOL)isTestingAnimation;
-(BOOL)awaitPreload;
-(BOOL)testingWarmPresentation;
-(double)settlingDelay;
-(void)_presentCameraRollAnimated;
-(void)_dismissCameraRollImmediately;
-(void)_handlePUDisplayLinkStarted:(id)arg1 ;
@end

