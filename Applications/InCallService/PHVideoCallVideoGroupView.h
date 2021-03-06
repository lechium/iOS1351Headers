//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CADisplayLink, NSString, UIPanGestureRecognizer;
@protocol PHVideoCallVideoGroupViewDelegate;

@interface PHVideoCallVideoGroupView : UIControl <UIGestureRecognizerDelegate>
{
    CADisplayLink *_displayLink;	// 8 = 0x8
    struct CGPoint _velocity;	// 16 = 0x10
    struct CGPoint _target;	// 32 = 0x20
    struct CGRect _cornerLocationsRect;	// 48 = 0x30
    _Bool _startedThrowAnimation;	// 80 = 0x50
    UIPanGestureRecognizer *_panGestureRecognizer;	// 88 = 0x58
    id <PHVideoCallVideoGroupViewDelegate> _delegate;	// 96 = 0x60
    long long _corner;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000010003f0ac
@property(nonatomic) long long corner; // @synthesize corner=_corner;
@property(nonatomic) __weak id <PHVideoCallVideoGroupViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect cornerLocationsRect; // @synthesize cornerLocationsRect=_cornerLocationsRect;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000010003f048
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000010003f040
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000010003f038
- (void)cancelThrowAnimation;	// IMP=0x000000010003efbc
- (void)finishedThrowAnimation;	// IMP=0x000000010003eea4
- (void)updateThrowAnimation:(id)arg1;	// IMP=0x000000010003ed08
- (void)startThrowAnimation;	// IMP=0x000000010003ec50
- (double)_gridViewRubberBandValueForValue:(double)arg1 target:(double)arg2 timeInterval:(double)arg3 velocity:(double *)arg4;	// IMP=0x000000010003ec0c
- (void)handlePanDetected:(id)arg1;	// IMP=0x000000010003e9a4
- (void)handlePanGestureFinished:(id)arg1;	// IMP=0x000000010003e7ec
- (void)addPanningGestureRecognizer;	// IMP=0x000000010003e770
- (void)refreshPositionInCorner;	// IMP=0x000000010003e720
- (struct CGPoint)centerPointForCurrentVideoGroupCorner;	// IMP=0x000000010003e614
- (void)setTransformForNewCenter:(struct CGPoint)arg1;	// IMP=0x000000010003e424
- (struct CGPoint)transformedCenter;	// IMP=0x000000010003e390
- (void)dealloc;	// IMP=0x000000010003e320
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010003e248

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

