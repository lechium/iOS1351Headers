/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SSTestingCoordinatorDelegate;
@interface SSTestingCoordinator : NSObject {

	id<SSTestingCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSTestingCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SSTestingCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<SSTestingCoordinatorDelegate>)arg1 ;
-(BOOL)_runPPTRequestRequiresTakingScreenshot:(id)arg1 ;
-(void)_delayedHandleRunPPTRequest:(id)arg1 ;
-(void)handleRunPPTRequest:(id)arg1 ;
@end

