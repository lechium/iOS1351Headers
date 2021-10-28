//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UISlider;
@protocol MAGLiveViewControlPanelDelegate;

__attribute__((visibility("hidden")))
@interface MAGControlPanel : UIView
{
    unsigned long long _panelState;	// 8 = 0x8
    unsigned long long _panelStyle;	// 16 = 0x10
    id <MAGLiveViewControlPanelDelegate> _delegate;	// 24 = 0x18
    UIView *_backgroundView;	// 32 = 0x20
    UIButton *_manualFocusButton;	// 40 = 0x28
    UIButton *_snapshotButton;	// 48 = 0x30
    UIButton *_filtersButton;	// 56 = 0x38
    UIView *_filtersButtonContainer;	// 64 = 0x40
    UIButton *_torchButton;	// 72 = 0x48
    UISlider *_zoomSlider;	// 80 = 0x50
    UIImageView *_zoomOutView;	// 88 = 0x58
    UIImageView *_zoomInView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100013ca8
@property(retain, nonatomic) UIImageView *zoomInView; // @synthesize zoomInView=_zoomInView;
@property(retain, nonatomic) UIImageView *zoomOutView; // @synthesize zoomOutView=_zoomOutView;
@property(retain, nonatomic) UISlider *zoomSlider; // @synthesize zoomSlider=_zoomSlider;
@property(retain, nonatomic) UIButton *torchButton; // @synthesize torchButton=_torchButton;
@property(retain, nonatomic) UIView *filtersButtonContainer; // @synthesize filtersButtonContainer=_filtersButtonContainer;
@property(retain, nonatomic) UIButton *filtersButton; // @synthesize filtersButton=_filtersButton;
@property(retain, nonatomic) UIButton *snapshotButton; // @synthesize snapshotButton=_snapshotButton;
@property(retain, nonatomic) UIButton *manualFocusButton; // @synthesize manualFocusButton=_manualFocusButton;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <MAGLiveViewControlPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)filtersButtonForUnitTesting;	// IMP=0x0000000100013b24
- (id)snapshotbuttonForUnitTesting;	// IMP=0x0000000100013b18
- (id)zoomSliderForUnitTesting;	// IMP=0x0000000100013b0c
- (id)manualFocusButtonForUnitTesting;	// IMP=0x0000000100013b00
- (id)torchButtonForUnitTesting;	// IMP=0x0000000100013af4
- (void)resumeFromTransitionWithFilterSelectionVCAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001375c
- (void)prepForTransitionWithFilterSelectionVCAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001327c
@property(nonatomic) unsigned long long panelState;
- (void)setManualFocusSwitchValue:(_Bool)arg1;	// IMP=0x0000000100012bac
- (void)setSnapshotButtonSelected:(_Bool)arg1;	// IMP=0x0000000100012b64
- (void)manualFocusButtonPressed:(id)arg1;	// IMP=0x0000000100012ac0
- (void)_handleFilterButtonLongPress:(id)arg1;	// IMP=0x0000000100012a50
- (void)filtersButtonPressed:(id)arg1;	// IMP=0x0000000100012a08
- (void)snapshotButtonPressed:(id)arg1;	// IMP=0x00000001000129c0
- (void)torchButtonPressed:(id)arg1;	// IMP=0x0000000100012984
- (void)setTorchSwitchValue:(_Bool)arg1;	// IMP=0x00000001000128a0
- (void)zoomSliderDragged:(id)arg1;	// IMP=0x0000000100012808
- (void)setZoomSliderValue:(double)arg1;	// IMP=0x00000001000127f8
- (void)setZoomSliderValue:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100012784
- (void)updateZoomSliderAXLabel;	// IMP=0x00000001000126dc
- (void)orientationChanged:(id)arg1;	// IMP=0x0000000100012660
- (void)userTextSizeChanged:(id)arg1;	// IMP=0x0000000100012444
- (void)dealloc;	// IMP=0x00000001000123bc
- (void)reduceTransparencyChanged:(id)arg1;	// IMP=0x00000001000123b0
- (id)accessibilityElements;	// IMP=0x0000000100012254
- (void)applyControlRotationForDeviceOrientation;	// IMP=0x0000000100012024
- (id)initWithStyle:(unsigned long long)arg1;	// IMP=0x000000010000fbc0
- (_Bool)showAccessibilityExtendedControls;	// IMP=0x000000010000fba8
- (void)_colorBackgroundView;	// IMP=0x000000010000fb44

@end
