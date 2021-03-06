//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary;

@interface BuddyConstrainedView : UIView
{
    NSMutableDictionary *_views;	// 8 = 0x8
    NSMutableDictionary *_metrics;	// 16 = 0x10
    NSMutableArray *_buddyConstraints;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000d4808
@property(retain, nonatomic) NSMutableArray *buddyConstraints; // @synthesize buddyConstraints=_buddyConstraints;
@property(retain, nonatomic) NSMutableDictionary *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) NSMutableDictionary *views; // @synthesize views=_views;
- (void)adjustMarginMetricA:(id)arg1 B:(id)arg2 toFitHeight:(double)arg3 metricMinA:(id)arg4;	// IMP=0x00000001000d445c
- (_Bool)adjustMetric:(id)arg1 untilHeightUnder:(double)arg2 step:(double)arg3 limit:(double)arg4;	// IMP=0x00000001000d43c0
- (_Bool)adjustMetric:(id)arg1 untilSentinel:(CDUnknownBlockType)arg2 step:(double)arg3 limit:(double)arg4;	// IMP=0x00000001000d42b4
- (_Bool)attemptAdjustToDescriptionLines:(int)arg1;	// IMP=0x00000001000d4014
- (void)adjustToFit;	// IMP=0x00000001000d3dec
- (double)layoutHeight;	// IMP=0x00000001000d3d74
- (void)adjustMetric:(id)arg1 by:(double)arg2;	// IMP=0x00000001000d3c0c
- (void)resetConstraints;	// IMP=0x00000001000d3b64
- (void)buddyAddSubview:(id)arg1 named:(id)arg2;	// IMP=0x00000001000d3ab4
- (void)buddyAddConstraints:(id)arg1;	// IMP=0x00000001000d3a34
- (void)applyConstraints;	// IMP=0x00000001000d3a30
- (void)initMetrics;	// IMP=0x00000001000d3538
- (void)centerLabel:(id)arg1 withMargin:(double)arg2;	// IMP=0x00000001000d348c
- (void)center:(id)arg1;	// IMP=0x00000001000d347c
- (void)center:(id)arg1 withMargin:(double)arg2;	// IMP=0x00000001000d32d0
- (float)metric:(id)arg1;	// IMP=0x00000001000d3270
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000d31a0

@end

