//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString;
@protocol UIViewControllerContextTransitioning;

@interface PRXPurelyInteractiveTransition : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning>
{
    id <UIViewControllerContextTransitioning> _transitionContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010008ba10
- (double)transitionDuration:(id)arg1;	// IMP=0x000000010008ba08
- (void)animateTransition:(id)arg1;	// IMP=0x000000010008b9f4
- (void)cancelInteractiveTransition;	// IMP=0x000000010008b988
- (void)finishInteractiveTransition;	// IMP=0x000000010008b91c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

