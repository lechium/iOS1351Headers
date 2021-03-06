//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKDisplayRenderOverlay.h"

#import "CAAnimationDelegate-Protocol.h"

@class CAContext, CALayer, NSString;

@interface BKDisplayBootUIRenderOverlay : BKDisplayRenderOverlay <CAAnimationDelegate>
{
    CALayer *_backgroundLayer;	// 8 = 0x8
    unsigned long long _outstandingAnimationsCount;	// 16 = 0x10
    _Bool _lightBackground;	// 24 = 0x18
    CAContext *_context;	// 32 = 0x20
    CALayer *_contentLayer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000195f0
@property(readonly, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000194b8
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000001000193cc
- (id)_animationForBackgroundLayerCrossfading:(id)arg1;	// IMP=0x0000000100019344
- (id)_animationForContentLayerCrossfading:(id)arg1;	// IMP=0x00000001000191e4
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000010001918c
- (void)_cleanUpContentLayer;	// IMP=0x0000000100019188
- (id)_prepareContentLayerForPresentation:(id)arg1;	// IMP=0x0000000100019178
- (void)_cleanup;	// IMP=0x0000000100018ff0
- (void)_freeze;	// IMP=0x0000000100018fec
- (void)_dismissWithAnimationSettings:(id)arg1;	// IMP=0x0000000100018de0
- (_Bool)_presentWithAnimationSettings:(id)arg1;	// IMP=0x0000000100018794
- (_Bool)disablesDisplayUpdates;	// IMP=0x000000010001878c
@property(nonatomic, getter=_bounds, setter=_setBounds:) struct CGRect bounds;
@property(readonly, nonatomic, getter=_useLightBackground) _Bool lightBackground; // @synthesize lightBackground=_lightBackground;
- (id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2;	// IMP=0x00000001000183cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

