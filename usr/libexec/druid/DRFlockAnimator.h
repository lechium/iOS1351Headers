//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DRFlockLayoutOutput;

@interface DRFlockAnimator : NSObject
{
    _Bool _badgeAppeared;	// 8 = 0x8
    DRFlockLayoutOutput *_lastLayout;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100022bc8
@property(nonatomic) _Bool badgeAppeared; // @synthesize badgeAppeared=_badgeAppeared;
@property(retain, nonatomic) DRFlockLayoutOutput *lastLayout; // @synthesize lastLayout=_lastLayout;
- (void)_runWithoutRetargeting:(id)arg1;	// IMP=0x0000000100022abc
- (void)_runAnimatableWithOneToOneTracking:(id)arg1 response:(double)arg2;	// IMP=0x00000001000229dc
- (void)_runAnimatableWithOneToOneTracking:(id)arg1;	// IMP=0x0000000100022998
- (void)_runAnimatableWithBarelyBouncyAnimation:(id)arg1;	// IMP=0x00000001000226ec
- (void)_runAnimatableWithBouncyAnimation:(id)arg1 response:(double)arg2;	// IMP=0x0000000100022424
- (void)_runAnimatableWithBouncyAnimation:(id)arg1;	// IMP=0x00000001000223e0
- (void)_runBadgeLayout:(id)arg1 bouncy:(_Bool)arg2 slowOffset:(_Bool)arg3;	// IMP=0x00000001000220a8
- (void)animateFlockLayoutOutput:(id)arg1;	// IMP=0x0000000100021b64

@end
