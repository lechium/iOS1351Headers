//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPresentationController.h>

@class UIView;

@interface FBAPartialPresentationController : UIPresentationController
{
    double _height;	// 8 = 0x8
    UIView *_dimmingView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100062570
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(nonatomic) double height; // @synthesize height=_height;
- (long long)adaptivePresentationStyle;	// IMP=0x0000000100062510
- (_Bool)isPresentingFullScreen;	// IMP=0x0000000100062490
- (void)dismissPresentation:(id)arg1;	// IMP=0x0000000100062448
- (struct CGRect)frameOfPresentedViewInContainerView;	// IMP=0x0000000100062100
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x00000001000620c0
- (void)dismissalTransitionWillBegin;	// IMP=0x0000000100061f68
- (void)presentationTransitionWillBegin;	// IMP=0x0000000100061c20
- (void)containerViewWillLayoutSubviews;	// IMP=0x0000000100061a98
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x0000000100061a28

@end
