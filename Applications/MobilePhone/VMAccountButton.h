//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface VMAccountButton : UIButton
{
    double _preferredIntrinsicContentSizeWidth;	// 8 = 0x8
}

+ (id)imageCache;	// IMP=0x000000010009009c
+ (id)backgroundImageForSize:(struct CGSize)arg1 state:(unsigned long long)arg2;	// IMP=0x000000010008ff10
+ (id)backgroundImageNameForSize:(struct CGSize)arg1 state:(unsigned long long)arg2;	// IMP=0x000000010008fe64
+ (id)accountButton;	// IMP=0x000000010008fe54
@property(nonatomic) double preferredIntrinsicContentSizeWidth; // @synthesize preferredIntrinsicContentSizeWidth=_preferredIntrinsicContentSizeWidth;
@property(readonly, nonatomic) double titleLabelLastBaselineAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double titleLabelFirstBaselineAnchorLayoutConstraintConstant;
- (void)layoutSubviews;	// IMP=0x0000000100090360
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000100090304
- (void)commonInit;	// IMP=0x0000000100090174
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100090108

@end
