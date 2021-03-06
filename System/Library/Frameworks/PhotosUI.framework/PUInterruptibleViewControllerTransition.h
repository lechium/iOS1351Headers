/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PUInterruptibleViewControllerTransition <NSObject>
@property (getter=isTransitionPaused,nonatomic,readonly) BOOL transitionPaused; 
@required
-(void)pauseTransition;
-(void)updatePausedTransitionWithProgress:(double)arg1 interactionProgress:(double)arg2;
-(void)resumeTransition:(BOOL)arg1;
-(BOOL)isTransitionPaused;

@end

