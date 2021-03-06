//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ContentInteractionTestRunner.h"

@class CADisplayLink;

@interface ZoomTestProcessor : ContentInteractionTestRunner
{
    _Bool _didFirstZoomStep;	// 64 = 0x40
    _Bool _zoomingIn;	// 65 = 0x41
    int _stepsPerZoom;	// 68 = 0x44
    int _iterationsRemaining;	// 72 = 0x48
    CADisplayLink *_displayLink;	// 80 = 0x50
    long long _testState;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010012eb00
@property(nonatomic) _Bool zoomingIn; // @synthesize zoomingIn=_zoomingIn;
@property(nonatomic) _Bool didFirstZoomStep; // @synthesize didFirstZoomStep=_didFirstZoomStep;
@property(nonatomic) long long testState; // @synthesize testState=_testState;
@property(nonatomic) int iterationsRemaining; // @synthesize iterationsRemaining=_iterationsRemaining;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) int stepsPerZoom; // @synthesize stepsPerZoom=_stepsPerZoom;
- (_Bool)performActionForPage:(id)arg1;	// IMP=0x000000010012e9d0
- (void)startZoomingTest;	// IMP=0x000000010012e840
- (void)zoomTestStep;	// IMP=0x000000010012e71c
- (_Bool)updateWithNewScale;	// IMP=0x000000010012e5b8
- (_Bool)startPageAction:(id)arg1;	// IMP=0x000000010012e510
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;	// IMP=0x000000010012e478

@end

