//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC8AppStore14BaseLockupView.h"

@class MISSING_TYPE, UIButton, _TtC8AppStore10RatingView, _TtC8AppStore16DynamicTypeLabel;

@interface _TtC8AppStore21SmallSearchLockupView : _TtC8AppStore14BaseLockupView
{
    MISSING_TYPE *metadataRegularMargin;	// 96 = 0x60
    MISSING_TYPE *metadataSmallMargin;	// 104 = 0x68
    MISSING_TYPE *metadataTextSpace;	// 112 = 0x70
    MISSING_TYPE *regularWidthColumnSpacing;	// 128 = 0x80
    MISSING_TYPE *includeRatings;	// 136 = 0x88
    MISSING_TYPE *userRatingView;	// 144 = 0x90
    MISSING_TYPE *ratingCountLabel;	// 152 = 0x98
    MISSING_TYPE *includeEditorsChoice;	// 160 = 0xa0
    MISSING_TYPE *editorsChoiceView;	// 168 = 0xa8
    MISSING_TYPE *descriptionLabel;	// 176 = 0xb0
    MISSING_TYPE *searchAdTransparencyButton;	// 184 = 0xb8
    MISSING_TYPE *isDisplayingSearchAd;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000001000465a8
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityDescriptionLabel;
@property(nonatomic, readonly) UIButton *accessibilityAdButton;
@property(nonatomic, readonly) _Bool accessibilityIsAd;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityRatingCountLabel;
@property(nonatomic, readonly) _TtC8AppStore10RatingView *accessibilitytUserRatingView;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100046444
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000001000462b4
- (void)layoutSubviews;	// IMP=0x00000001000461b0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100045dc0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100045a84

@end
