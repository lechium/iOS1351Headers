//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, UIColor;

@interface _TtC8AppStore10MirrorView : UIView
{
    MISSING_TYPE *sourceImageView;	// 8 = 0x8
    MISSING_TYPE *artworkLayer;	// 16 = 0x10
    MISSING_TYPE *contentsScaleFactor;	// 24 = 0x18
    MISSING_TYPE *contentsVerticalOffset;	// 32 = 0x20
    MISSING_TYPE *imageKVOContext;	// 40 = 0x28
    MISSING_TYPE *imageObserversAdded;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000bbd3c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000bc388
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000bc25c
- (void)layoutSubviews;	// IMP=0x00000001000bbf38
@property(nonatomic, retain) UIColor *backgroundColor;
- (void)dealloc;	// IMP=0x00000001000bbc8c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000bbbcc

@end

