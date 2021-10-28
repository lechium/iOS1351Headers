//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SSSScreenshot, _SSSScreenshotContentOverlayController, _SSSScreenshotFullsizeStaticImageView;

@interface _SSSScreenshotAnnotationView : UIView
{
    _Bool _screenshotEditsSnapshotted;	// 8 = 0x8
    _SSSScreenshotContentOverlayController *_overlayController;	// 16 = 0x10
    SSSScreenshot *_screenshot;	// 24 = 0x18
    UIView *_annotationOverlayView;	// 32 = 0x20
    _SSSScreenshotFullsizeStaticImageView *_cachedOutputImageView;	// 40 = 0x28
    UIView *_vellumView;	// 48 = 0x30
    double _vellumOpacity;	// 56 = 0x38
    double _cornerRadius;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100033ee8
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double vellumOpacity; // @synthesize vellumOpacity=_vellumOpacity;
@property(retain, nonatomic) UIView *vellumView; // @synthesize vellumView=_vellumView;
@property(retain, nonatomic) _SSSScreenshotFullsizeStaticImageView *cachedOutputImageView; // @synthesize cachedOutputImageView=_cachedOutputImageView;
@property(nonatomic) _Bool screenshotEditsSnapshotted; // @synthesize screenshotEditsSnapshotted=_screenshotEditsSnapshotted;
@property(retain, nonatomic) UIView *annotationOverlayView; // @synthesize annotationOverlayView=_annotationOverlayView;
@property(retain, nonatomic) SSSScreenshot *screenshot; // @synthesize screenshot=_screenshot;
@property(readonly, nonatomic) _SSSScreenshotContentOverlayController *overlayController; // @synthesize overlayController=_overlayController;
- (void)_hideAndShowViewsForScreenshotEditsSnapshotted:(_Bool)arg1;	// IMP=0x0000000100033c9c
- (void)_updateOverlayControllerForBeingActiveForScreenshotEditsSnapshotted:(_Bool)arg1;	// IMP=0x0000000100033c38
- (void)_cancelScheduledHideCachedOverlayView;	// IMP=0x0000000100033c14
- (void)_scheduleHideCachedOverlayViewWithDelay:(double)arg1;	// IMP=0x0000000100033bfc
- (void)_asyncHideCachedOverlayView;	// IMP=0x0000000100033b4c
- (void)setOverlayControllerActive:(_Bool)arg1;	// IMP=0x0000000100033820
- (void)endedEditing;	// IMP=0x00000001000337dc
- (void)enterEditing;	// IMP=0x0000000100033758
- (void)setRulerHostView:(id)arg1;	// IMP=0x00000001000336e0
- (void)setGesturesEnabled:(_Bool)arg1;	// IMP=0x00000001000336c8
- (void)updateUndoState;	// IMP=0x00000001000336b0
- (void)dealloc;	// IMP=0x0000000100033664
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000335c4

@end
