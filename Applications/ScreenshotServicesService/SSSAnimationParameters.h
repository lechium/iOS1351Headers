//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "_UIBasicAnimationFactory-Protocol.h"

@class NSString;

@interface SSSAnimationParameters : NSObject <_UIBasicAnimationFactory, NSCopying>
{
    double _delay;	// 8 = 0x8
    unsigned long long _animationOptions;	// 16 = 0x10
    double _duration;	// 24 = 0x18
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long animationOptions; // @synthesize animationOptions=_animationOptions;
@property(nonatomic) double delay; // @synthesize delay=_delay;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100004340
- (id)timingParameters;	// IMP=0x0000000100004324
- (id)animationUsingParametersForKeyPath:(id)arg1;	// IMP=0x0000000100004310
- (id)_animationForKeyPath:(id)arg1;	// IMP=0x0000000100004284
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0000000100004274
- (_Bool)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x000000010000426c
- (id)init;	// IMP=0x0000000100004218

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
