//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HNDAnimationFactory.h"

@interface HNDSpringAnimationFactory : HNDAnimationFactory
{
    double _mass;	// 32 = 0x20
    double _stiffness;	// 40 = 0x28
    double _damping;	// 48 = 0x30
}

+ (id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3;	// IMP=0x00000001000774b4
@property(readonly, nonatomic) double damping; // @synthesize damping=_damping;
@property(readonly, nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(readonly, nonatomic) double mass; // @synthesize mass=_mass;
- (id)_animation;	// IMP=0x0000000100077680
- (id)_springAnimation;	// IMP=0x00000001000775f0
- (void)_calculateDuration;	// IMP=0x0000000100077594
- (id)_initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3;	// IMP=0x00000001000774fc

@end

