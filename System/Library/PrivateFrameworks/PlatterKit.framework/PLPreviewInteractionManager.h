/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PlatterKit/PlatterKit-Structs.h>
#import <PlatterKit/PLClickPresentationInteractionManager.h>

@interface PLPreviewInteractionManager : PLClickPresentationInteractionManager

@property (assign,nonatomic,__weak) id<PLPreviewInteractionManagerDelegate> delegate; 
+(void)initialize;
-(void)setDelegate:(id<PLPreviewInteractionManagerDelegate>)arg1 ;
-(id)initWithPresentingViewController:(id)arg1 ;
-(void)_delegateDidEndUserInteraction;
-(BOOL)_delegateShouldBeginInteractionWithTouchAtLocation:(CGPoint)arg1 ;
-(void)_delegateWillBeginUserInteraction;
-(id)_delegateTransitioningDelegate;
-(id)_delegateContainerView;
-(id)_delegatePresentedViewController;
-(void)_delegateWillDismissPresentedContentWithTrigger:(long long)arg1 ;
-(void)_delegateDeclinedDismissingPresentedContentWithTrigger:(long long)arg1 ;
-(void)_delegateShouldFinishInteractionWithCompletionBlock:(/*^block*/id)arg1 ;
@end
