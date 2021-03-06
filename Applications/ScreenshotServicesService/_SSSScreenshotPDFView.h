//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_SSSScreenshotAnnotationView.h"

#import "SSSScreenshotContainerView-Protocol.h"

@class PDFView, SSSScreenshot, UIActivityIndicatorView, UIView, _SSSScreenshotContentOverlayController;

@interface _SSSScreenshotPDFView : _SSSScreenshotAnnotationView <SSSScreenshotContainerView>
{
    PDFView *_pdfView;	// 8 = 0x8
    UIActivityIndicatorView *_activityIndicatorView;	// 16 = 0x10
    long long _currentVellumPage;	// 24 = 0x18
    struct CGPoint _scrollOffset;	// 32 = 0x20
    double _scrollZoomScale;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010002d3e4
- (void)updateViewState;	// IMP=0x000000010002d328
@property(readonly, nonatomic) long long currentPDFPage;
@property(readonly, nonatomic) PDFView *_pdfView;
@property(readonly, nonatomic) UIView *viewWithScreenshotImage;
- (void)enterMarkupMode;	// IMP=0x000000010002d1dc
- (void)enterCropMode;	// IMP=0x000000010002d100
- (void)setupOverlayControllerWithPDFDocument:(id)arg1;	// IMP=0x000000010002cfdc
- (void)setupPDFData;	// IMP=0x000000010002ce34
- (id)undoManager;	// IMP=0x000000010002cddc
@property(nonatomic) __weak SSSScreenshot *screenshot;
- (void)setCrop:(struct CGRect)arg1;	// IMP=0x000000010002cba4
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010002cafc
- (void)layoutSubviews;	// IMP=0x000000010002c5a8
- (void)didMoveToWindow;	// IMP=0x000000010002c4dc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010002c0c8

// Remaining properties
@property(retain, nonatomic) _SSSScreenshotContentOverlayController *overlayController;
@property(nonatomic) _Bool screenshotEditsSnapshotted;
@property(nonatomic) double vellumOpacity;

@end

