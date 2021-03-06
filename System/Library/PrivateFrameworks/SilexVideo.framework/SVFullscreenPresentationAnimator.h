/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SVFullscreenTransitionCoordinator.h>

@protocol SVFullscreenTransitionContext;
@class UIViewPropertyAnimator, UIView, NSString;

@interface SVFullscreenPresentationAnimator : NSObject <SVFullscreenTransitionCoordinator> {

	UIViewPropertyAnimator* _animator;
	id<SVFullscreenTransitionContext> _context;
	UIView* _fromView;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) UIViewPropertyAnimator * animator;                      //@synthesize animator=_animator - In the implementation block
@property (nonatomic,retain) id<SVFullscreenTransitionContext> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIView * fromView;                                      //@synthesize fromView=_fromView - In the implementation block
@property (nonatomic,readonly) id completionBlock;                                   //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionBlock;
-(id<SVFullscreenTransitionContext>)context;
-(void)setContext:(id<SVFullscreenTransitionContext>)arg1 ;
-(void)completeTransition:(BOOL)arg1 ;
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)animator;
-(UIView *)fromView;
-(void)setFromView:(UIView *)arg1 ;
-(id)initWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)animateWithContext:(id)arg1 ;
@end

