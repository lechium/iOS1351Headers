//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, _TtC8AppStore11OfferButton, _TtC8AppStore16DynamicTypeLabel;

@interface _TtC8AppStore16ArcadeLockupView : UIView
{
    MISSING_TYPE *wordmarkView;	// 8 = 0x8
    MISSING_TYPE *subtitleLabel;	// 16 = 0x10
    MISSING_TYPE *offerButton;	// 24 = 0x18
    MISSING_TYPE *offerLabelPresenter;	// 32 = 0x20
    MISSING_TYPE *metrics;	// 64 = 0x40
    MISSING_TYPE *offerButtonTapHandler;	// 312 = 0x138
}

- (void).cxx_destruct;	// IMP=0x00000001000b9020
@property(nonatomic, readonly) _TtC8AppStore11OfferButton *accessibilityOfferButton;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilitySubtitleLabel;
- (void)offerButtonWasTapped;	// IMP=0x00000001000b8f50
- (void)layoutSubviews;	// IMP=0x00000001000b8f24
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000b8d18
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000b8b5c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000b8b20

@end
