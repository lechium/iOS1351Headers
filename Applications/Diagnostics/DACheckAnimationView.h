//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAShapeLayer, NSString, UIColor;

@interface DACheckAnimationView : UIView <CAAnimationDelegate>
{
    UIColor *_strokeColor;	// 8 = 0x8
    CAShapeLayer *_check;	// 16 = 0x10
    CDUnknownBlockType _animationCompletion;	// 24 = 0x18
}

+ (Class)layerClass;	// IMP=0x000000010001c864
- (void).cxx_destruct;	// IMP=0x000000010001cdb0
@property(copy, nonatomic) CDUnknownBlockType animationCompletion; // @synthesize animationCompletion=_animationCompletion;
@property(retain, nonatomic) CAShapeLayer *check; // @synthesize check=_check;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000010001ccc8
- (void)playCheckAnimationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001cab0
- (void)layoutSubviews;	// IMP=0x000000010001c980
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x000000010001c8f8
- (void)showCheck;	// IMP=0x000000010001c8b4
- (void)hideCheck;	// IMP=0x000000010001c870
- (id)initWithColor:(id)arg1 lineWidth:(double)arg2 scale:(double)arg3;	// IMP=0x000000010001c7e0
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2 scale:(double)arg3;	// IMP=0x000000010001c414

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

