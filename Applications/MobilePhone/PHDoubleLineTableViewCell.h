//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PHTableViewCell.h"

@class UIColor;

@interface PHDoubleLineTableViewCell : PHTableViewCell
{
}

@property(readonly, nonatomic) UIColor *subtitleLabelTextColor;
- (void)_updateTextColor;	// IMP=0x00000001000c7210
- (void)tintColorDidChange;	// IMP=0x00000001000c71c0
@property(readonly, nonatomic) double titleLabelFirstBaselineLayoutConstraintConstant;
@property(readonly, nonatomic) double subtitleLabelLastBaselineLayoutConstraintConstant;
@property(readonly, nonatomic) double subtitleLabelFirstBaselineLayoutConstraintConstant;
- (struct NSDirectionalEdgeInsets)rootViewLayoutMargins;	// IMP=0x00000001000c6e50
- (id)loadRootViewAndContentViews;	// IMP=0x00000001000c6d30

@end
