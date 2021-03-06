/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OFViewControllerTransitioningContext <NSObject>
@property (assign,nonatomic) double progressVelocity; 
@required
-(double)progress;
-(BOOL)wasCancelled;
-(id)containerView;
-(BOOL)isInteractive;
-(void)completeTransition:(BOOL)arg1;
-(void)updateInteractiveTransition:(double)arg1;
-(void)startInteractiveTransition;
-(id)fromViewController;
-(id)toViewController;
-(BOOL)initiallyInteractive;
-(BOOL)isCompleting;
-(BOOL)isRubberBanding;
-(void)finishInteractiveTransitionWithVelocity:(double)arg1;
-(void)cancelInteractiveTransitionWithVelocity:(double)arg1;
-(void)setProgressVelocity:(double)arg1;
-(double)progressVelocity;
-(void)updateNonInteractiveTransitionWithProgress:(double)arg1;
-(BOOL)doEaseIn;
-(BOOL)doEaseOut;
-(void)makeTransitionInteractiveWithInteractor:(id)arg1 andProgress:(double)arg2;

@end

