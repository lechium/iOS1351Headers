//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class MISSING_TYPE, UIView;

@interface _TtC6Health26CardPresentationController : UIPresentationController
{
    MISSING_TYPE *$__lazy_storage_$_panGestureRecognizer;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_backingView;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_shadowView;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_vibrancyAnimator;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_verticalMovementAnimator;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100038098
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x0000000100037ff8
- (void)handlePanGestureWithRecognizer:(id)arg1;	// IMP=0x0000000100037308
- (void)containerViewWillLayoutSubviews;	// IMP=0x00000001000372dc
- (void)dismissalTransitionWillBegin;	// IMP=0x0000000100036ff4
- (void)presentationTransitionWillBegin;	// IMP=0x0000000100036db4
@property(nonatomic, readonly) UIView *presentedView;

@end
