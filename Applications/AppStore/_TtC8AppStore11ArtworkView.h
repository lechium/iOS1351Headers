//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC8AppStore17RoundedCornerView.h"

@class MISSING_TYPE, UIColor;

@interface _TtC8AppStore11ArtworkView : _TtC8AppStore17RoundedCornerView
{
    MISSING_TYPE *imageView;	// 56 = 0x38
    MISSING_TYPE *shadowView;	// 64 = 0x40
    MISSING_TYPE *shadow;	// 72 = 0x48
    MISSING_TYPE *internalBackgroundColor;	// 104 = 0x68
    MISSING_TYPE *imageSize;	// 112 = 0x70
    MISSING_TYPE *frameUpdatesImageSize;	// 128 = 0x80
    MISSING_TYPE *isCornerRadiusInvalid;	// 129 = 0x81
    MISSING_TYPE *isStyleInvalid;	// 130 = 0x82
    MISSING_TYPE *style;	// 131 = 0x83
    MISSING_TYPE *artworkTintColor;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000001002245c8
@property(nonatomic) _Bool accessibilityIgnoresInvertColors;
@property(nonatomic) struct CGRect frame;
- (void)layoutSubviews;	// IMP=0x0000000100223f3c
@property(nonatomic, retain) UIColor *backgroundColor;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001002236d4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001002236b4

@end
