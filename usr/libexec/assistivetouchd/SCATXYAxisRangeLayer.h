//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATAxisLayer.h"

@class SCATXYAxisLineLayer;

@interface SCATXYAxisRangeLayer : SCATAxisLayer
{
    SCATXYAxisLineLayer *_lineLayer;	// 24 = 0x18
}

+ (double)rangeLayerFrameInset;	// IMP=0x000000010009b87c
- (void).cxx_destruct;	// IMP=0x000000010009c72c
@property(retain, nonatomic) SCATXYAxisLineLayer *lineLayer; // @synthesize lineLayer=_lineLayer;
- (id)_borderForegroundColorForTheme:(int)arg1;	// IMP=0x000000010009c66c
- (id)_borderBackgroundColorForTheme:(int)arg1;	// IMP=0x000000010009c5d0
- (id)_backgroundColorForTheme:(int)arg1;	// IMP=0x000000010009c4d8
- (void)updateToFitWithinParentBounds:(struct CGRect)arg1;	// IMP=0x000000010009c350
- (void)updateFrameForParentBounds:(struct CGRect)arg1 refinementPoint:(struct CGPoint *)arg2;	// IMP=0x000000010009beb8
- (void)updateTheme:(int)arg1 animated:(_Bool)arg2;	// IMP=0x000000010009bcdc
- (void)resetLineLayer;	// IMP=0x000000010009bbd4
- (void)removeAllAnimations;	// IMP=0x000000010009ba6c
- (id)initWithAxis:(int)arg1;	// IMP=0x000000010009b884

@end
