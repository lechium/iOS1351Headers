//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, PSPointerHoverRegion;

@interface _PUIDPointerControllerClientState : NSObject
{
    NSTimer *_automaticHoverRegionExitTimer;	// 8 = 0x8
    _Bool _assertingPointerHidden;	// 16 = 0x10
    PSPointerHoverRegion *_activeHoverRegion;	// 24 = 0x18
    unsigned long long _hoverRegionGenerationID;	// 32 = 0x20
    long long _previousPointerEventActiveHoverRegionHitTestState;	// 40 = 0x28
    struct CATransform3D _transformFromClientContextToDisplay;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010000eb54
@property(nonatomic, getter=isAssertingPointerHidden) _Bool assertingPointerHidden; // @synthesize assertingPointerHidden=_assertingPointerHidden;
@property(nonatomic) long long previousPointerEventActiveHoverRegionHitTestState; // @synthesize previousPointerEventActiveHoverRegionHitTestState=_previousPointerEventActiveHoverRegionHitTestState;
@property(nonatomic) struct CATransform3D transformFromClientContextToDisplay; // @synthesize transformFromClientContextToDisplay=_transformFromClientContextToDisplay;
@property(nonatomic) unsigned long long hoverRegionGenerationID; // @synthesize hoverRegionGenerationID=_hoverRegionGenerationID;
@property(copy, nonatomic) PSPointerHoverRegion *activeHoverRegion; // @synthesize activeHoverRegion=_activeHoverRegion;
- (void)startAutomaticRegionExitTimerWithDelayInterval:(double)arg1 fireHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e924
- (void)invalidateAutomaticRegionExitTimer;	// IMP=0x000000010000e8f0
- (id)init;	// IMP=0x000000010000e890

@end

