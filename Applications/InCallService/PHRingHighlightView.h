//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

@interface PHRingHighlightView : UIView
{
    CALayer *_luminanceRingLayer;	// 8 = 0x8
    CALayer *_dodgeRingLayer;	// 16 = 0x10
    CALayer *_highlightDodgeLayer;	// 24 = 0x18
    CALayer *_highlightLuminanceLayer;	// 32 = 0x20
    CALayer *_selectionLayer;	// 40 = 0x28
}

+ (id)createRingImageWithSize:(struct CGSize)arg1 strokeWidth:(double)arg2 color:(id)arg3;	// IMP=0x00000001000360fc
+ (id)ringImageForDodge;	// IMP=0x0000000100036030
+ (id)ringImageForLuminance;	// IMP=0x0000000100035f64
+ (id)colorForDodge;	// IMP=0x0000000100035f44
+ (id)colorForLuminance;	// IMP=0x0000000100035f24
+ (double)ringCornerRadius;	// IMP=0x0000000100035efc
+ (double)ringStroke;	// IMP=0x0000000100035ef4
+ (struct CGSize)ringSize;	// IMP=0x0000000100035de0
- (void).cxx_destruct;	// IMP=0x0000000100036eb0
@property(retain) CALayer *selectionLayer; // @synthesize selectionLayer=_selectionLayer;
@property(retain) CALayer *highlightLuminanceLayer; // @synthesize highlightLuminanceLayer=_highlightLuminanceLayer;
@property(retain) CALayer *highlightDodgeLayer; // @synthesize highlightDodgeLayer=_highlightDodgeLayer;
@property(retain) CALayer *dodgeRingLayer; // @synthesize dodgeRingLayer=_dodgeRingLayer;
@property(retain) CALayer *luminanceRingLayer; // @synthesize luminanceRingLayer=_luminanceRingLayer;
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000100036e08
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000365e0
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000100036494
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000001000363a0
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000001000362a4

@end

