//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol HNDViewDelegateControl;

@interface HNDView : UIView
{
    _Bool _active;	// 8 = 0x8
    _Bool _requiresRealUpEvent;	// 9 = 0x9
    id <HNDViewDelegateControl> _controlDelegate;	// 16 = 0x10
    double _inactiveAlpha;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010004d310
@property(nonatomic) double inactiveAlpha; // @synthesize inactiveAlpha=_inactiveAlpha;
@property _Bool requiresRealUpEvent; // @synthesize requiresRealUpEvent=_requiresRealUpEvent;
@property(nonatomic) __weak id <HNDViewDelegateControl> controlDelegate; // @synthesize controlDelegate=_controlDelegate;
- (id)description;	// IMP=0x000000010004d1e4
- (void)handleRealDownEvent:(struct CGPoint)arg1;	// IMP=0x000000010004d1e0
- (void)handleRealMoveEvent:(struct CGPoint)arg1 maxOrb:(double)arg2 currentForce:(double)arg3;	// IMP=0x000000010004d1dc
- (void)handleRealUpEvent:(struct CGPoint)arg1 maxOrb:(double)arg2;	// IMP=0x000000010004d168
- (void)handleRealCancelEvent:(struct CGPoint)arg1;	// IMP=0x000000010004d158
- (void)handleFingerDriftedAway;	// IMP=0x000000010004d154
@property(nonatomic) _Bool isActive; // @dynamic isActive;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010004d028

@end

