//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface _TtC8AppStore18UpsellBreakoutView : UIView
{
    MISSING_TYPE *tapGestureRecognizer;	// 8 = 0x8
    MISSING_TYPE *backgroundEffectView;	// 16 = 0x10
    MISSING_TYPE *mediaViewContainer;	// 24 = 0x18
    MISSING_TYPE *artworkView;	// 32 = 0x20
    MISSING_TYPE *detailsView;	// 40 = 0x28
    MISSING_TYPE *buttonDetailsView;	// 48 = 0x30
    MISSING_TYPE *buttonDetailsTextAlignment;	// 56 = 0x38
    MISSING_TYPE *offerButton;	// 64 = 0x40
    MISSING_TYPE *pageTraits;	// 72 = 0x48
    MISSING_TYPE *isBackgroundEffectViewHidden;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001002e7bd4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001002e7ad0
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000001002e7ac8
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000001002e7a4c
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000001002e79d8
- (void)didTapVideo;	// IMP=0x00000001002e7740
- (void)layoutSubviews;	// IMP=0x00000001002e73ec
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001002e6f44
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001002e6c60
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001002e6c40

@end
