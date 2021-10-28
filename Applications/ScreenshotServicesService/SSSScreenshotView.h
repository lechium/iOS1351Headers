//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SSSCropControllerDelegate-Protocol.h"
#import "SSSScreenshotRepresentation-Protocol.h"
#import "_SSSScreenshotContentOverlayControllerDelegate-Protocol.h"

@class AKController, NSString, SSSCropController, SSSScreenshot, SSSScreenshotBorderView, UITapGestureRecognizer, UIViewController, _SSSScreenshotImageView, _SSSScreenshotPDFView;
@protocol SSSScreenshotViewDelegate;

@interface SSSScreenshotView : UIView <SSSCropControllerDelegate, _SSSScreenshotContentOverlayControllerDelegate, SSSScreenshotRepresentation>
{
    SSSCropController *_imageCropController;	// 8 = 0x8
    _SSSScreenshotImageView *_screenshotImageView;	// 16 = 0x10
    SSSCropController *_pdfCropController;	// 24 = 0x18
    _SSSScreenshotPDFView *_screenshotPDFView;	// 32 = 0x20
    SSSScreenshotBorderView *_borderView;	// 40 = 0x28
    UIView *_flashView;	// 48 = 0x30
    _Bool _hasPreparedForFullscreenExperience;	// 56 = 0x38
    _Bool _hasFinishedPreparingForFullscreenExperience;	// 57 = 0x39
    UITapGestureRecognizer *_tapGesture;	// 64 = 0x40
    struct CGRect _lastScreenshotImageViewFrameInScreen;	// 72 = 0x48
    _Bool _hasPositionedPDFViewToMatchImageView;	// 104 = 0x68
    _Bool _hasCroppedImageView;	// 105 = 0x69
    _Bool _useTrilinearMinificationFilter;	// 106 = 0x6a
    _Bool _usesOriginalImageAspectRatio;	// 107 = 0x6b
    _Bool _gesturesEnabled;	// 108 = 0x6c
    _Bool _annotationsEnabled;	// 109 = 0x6d
    _Bool _cropHandlesFadedOut;	// 110 = 0x6e
    _Bool _isBeingRemoved;	// 111 = 0x6f
    _Bool _showBackgroundForOccludingView;	// 112 = 0x70
    SSSScreenshot *_screenshot;	// 120 = 0x78
    unsigned long long _state;	// 128 = 0x80
    id <SSSScreenshotViewDelegate> _delegate;	// 136 = 0x88
    long long _editMode;	// 144 = 0x90
    struct CGRect _currentlyVisibleRect;	// 152 = 0x98
    struct CGRect _extent;	// 184 = 0xb8
}

+ (void)_zoomToRectWithinContentInsetBounds:(struct CGRect)arg1 scrollView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100008808
+ (struct CGRect)_scaledAndCenteredRect:(struct CGRect)arg1 withinRect:(struct CGRect)arg2;	// IMP=0x00000001000086d0
+ (struct CGAffineTransform)_transformToConvertFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2;	// IMP=0x000000010000856c
- (void).cxx_destruct;	// IMP=0x000000010000a864
@property(nonatomic) _Bool showBackgroundForOccludingView; // @synthesize showBackgroundForOccludingView=_showBackgroundForOccludingView;
@property(nonatomic) long long editMode; // @synthesize editMode=_editMode;
@property(nonatomic) __weak id <SSSScreenshotViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect extent; // @synthesize extent=_extent;
@property(nonatomic) _Bool isBeingRemoved; // @synthesize isBeingRemoved=_isBeingRemoved;
@property(nonatomic) _Bool cropHandlesFadedOut; // @synthesize cropHandlesFadedOut=_cropHandlesFadedOut;
@property(nonatomic) struct CGRect currentlyVisibleRect; // @synthesize currentlyVisibleRect=_currentlyVisibleRect;
@property(nonatomic) _Bool annotationsEnabled; // @synthesize annotationsEnabled=_annotationsEnabled;
@property(nonatomic) _Bool gesturesEnabled; // @synthesize gesturesEnabled=_gesturesEnabled;
@property(nonatomic) _Bool usesOriginalImageAspectRatio; // @synthesize usesOriginalImageAspectRatio=_usesOriginalImageAspectRatio;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool useTrilinearMinificationFilter; // @synthesize useTrilinearMinificationFilter=_useTrilinearMinificationFilter;
@property(retain, nonatomic) SSSScreenshot *screenshot; // @synthesize screenshot=_screenshot;
- (void)revert;	// IMP=0x000000010000a6e0
- (_Bool)canRedo;	// IMP=0x000000010000a674
- (_Bool)canUndo;	// IMP=0x000000010000a608
- (void)redo;	// IMP=0x000000010000a5a8
- (void)undo;	// IMP=0x000000010000a548
- (void)promoteViewValueToModelValueForKey:(unsigned long long)arg1;	// IMP=0x000000010000a4d8
- (id)modelModificationInfo;	// IMP=0x000000010000a464
- (id)viewModificationInfo;	// IMP=0x000000010000a3f0
- (id)currentCropController;	// IMP=0x000000010000a3c0
- (id)currentView;	// IMP=0x000000010000a390
- (void)pageChanged:(id)arg1;	// IMP=0x000000010000a274
- (CDStruct_6a6871ea)_viewState;	// IMP=0x000000010000a230
- (long long)currentPDFPage;	// IMP=0x000000010000a200
- (id)_internalPDFView;	// IMP=0x000000010000a1e8
@property(readonly, nonatomic, getter=isCropped) _Bool cropped;
- (void)cancelCrop;	// IMP=0x000000010000a148
- (void)doneCrop;	// IMP=0x000000010000a0f4
- (void)resetCrop;	// IMP=0x000000010000a0a0
- (void)enterCrop;	// IMP=0x000000010000a04c
- (void)adjustPDFPositioningToMatchImageIfNecessary;	// IMP=0x000000010000a004
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000100009c40
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000100009aac
- (void)requireGestureRecognizerToFailBeforeAllOtherGestureRecognizers:(id)arg1;	// IMP=0x0000000100009a24
- (void)requireAllOtherGestureRecognizersToFailBeforeGestureRecognizer:(id)arg1;	// IMP=0x00000001000099b4
- (void)uninstallInterstitialGesture:(id)arg1;	// IMP=0x00000001000099a8
- (void)installInterstitialGesture:(id)arg1;	// IMP=0x000000010000999c
@property(readonly, nonatomic) UIViewController *viewControllerForOverlayPresentations;
@property(readonly, nonatomic) UIView *viewContainingScreenshotContents;
- (id)_currentOverlayController;	// IMP=0x0000000100009898
- (void)_prepareGesturesForOverlayController:(id)arg1;	// IMP=0x0000000100009650
@property(readonly, nonatomic) struct CGRect rectToCenterAboveKeyboard;
@property(readonly, nonatomic) AKController *akController;
@property(nonatomic) _Bool screenshotEditsSnapshotted;
- (void)_stopFlash;	// IMP=0x000000010000933c
@property(readonly, nonatomic) _Bool shouldFlash;
- (void)flash;	// IMP=0x0000000100008f1c
- (void)finishPreparingForFullscreenExperience;	// IMP=0x0000000100008e90
- (void)prepareForFullscreenExperience;	// IMP=0x0000000100008d10
- (void)_handleTap;	// IMP=0x0000000100008cc8
- (void)commitInflightEdits;	// IMP=0x0000000100008c28
@property(nonatomic) double lineGrabberAlpha;
@property(nonatomic) double lineAlpha;
@property(nonatomic) double cornerGrabberAlpha;
- (void)cropControllerCropRectDidChange:(id)arg1;	// IMP=0x0000000100008b50
- (void)cropController:(id)arg1 changedToCropRect:(struct CGRect)arg2;	// IMP=0x00000001000089a8
@property(nonatomic) double geometryMultiplier;
- (void)safeAreaInsetsDidChange;	// IMP=0x00000001000084a8
- (void)setRulerHostingView:(id)arg1;	// IMP=0x0000000100008438
- (void)_layoutPDFViewToMatchImageViewIfNeeded;	// IMP=0x0000000100008138
- (_Bool)_layoutPDFViewVerticalContentInsetToMatchImageView;	// IMP=0x0000000100007f1c
- (void)updateForFrame:(struct CGRect)arg1;	// IMP=0x0000000100007e74
- (void)layoutSubviews;	// IMP=0x0000000100007648
- (void)_layoutUpdateCropControllers;	// IMP=0x0000000100007370
- (id)screenshotRepresentationAKControllerForPDF;	// IMP=0x00000001000072e8
- (void)screenshotDidReceivePDFData;	// IMP=0x000000010000725c
- (void)_goToPDFPage:(unsigned long long)arg1 rect:(struct CGRect)arg2 force:(_Bool)arg3;	// IMP=0x0000000100006ea8
- (void)screenshot:(id)arg1 didHaveChangeOnPage:(unsigned long long)arg2;	// IMP=0x0000000100006e38
- (void)screenshotDidRevert:(id)arg1;	// IMP=0x0000000100006dd0
- (void)screenshotShouldJumpToPDFPageIndex:(long long)arg1;	// IMP=0x0000000100006db0
- (void)screenshotDidHaveViewModificationInfoChanged:(id)arg1;	// IMP=0x0000000100006da4
- (void)screenshotDidHaveUndoStackChanged:(id)arg1;	// IMP=0x0000000100006bf8
- (id)undoManager;	// IMP=0x0000000100006b88
@property(nonatomic) long long borderStyle;
- (void)dealloc;	// IMP=0x00000001000068e8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000659c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
