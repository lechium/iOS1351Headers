//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MAGFilterLabelDial, NSArray, UIButton, UIImageView, UISlider;
@protocol MAGFilterSelectionControlPanelDelegate;

__attribute__((visibility("hidden")))
@interface MAGFilterSelectionControlPanel : UIView
{
    id <MAGFilterSelectionControlPanelDelegate> _delegate;	// 8 = 0x8
    MAGFilterLabelDial *_dial;	// 16 = 0x10
    UIButton *_filtersButton;	// 24 = 0x18
    UIView *_filtersButtonContainer;	// 32 = 0x20
    UIButton *_invertButton;	// 40 = 0x28
    UISlider *_contrastSlider;	// 48 = 0x30
    UIImageView *_contrastIconImageView;	// 56 = 0x38
    UIImageView *_brightnessIconImageView;	// 64 = 0x40
    UISlider *_brightnessSlider;	// 72 = 0x48
    UIView *_toolbarBackground;	// 80 = 0x50
    NSArray *_normalLayoutConstraints;	// 88 = 0x58
    NSArray *_transitioningLayoutConstraints;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000010000e084
@property(retain, nonatomic) NSArray *transitioningLayoutConstraints; // @synthesize transitioningLayoutConstraints=_transitioningLayoutConstraints;
@property(retain, nonatomic) NSArray *normalLayoutConstraints; // @synthesize normalLayoutConstraints=_normalLayoutConstraints;
@property(retain, nonatomic) UIView *toolbarBackground; // @synthesize toolbarBackground=_toolbarBackground;
@property(retain, nonatomic) UISlider *brightnessSlider; // @synthesize brightnessSlider=_brightnessSlider;
@property(retain, nonatomic) UIImageView *brightnessIconImageView; // @synthesize brightnessIconImageView=_brightnessIconImageView;
@property(retain, nonatomic) UIImageView *contrastIconImageView; // @synthesize contrastIconImageView=_contrastIconImageView;
@property(retain, nonatomic) UISlider *contrastSlider; // @synthesize contrastSlider=_contrastSlider;
@property(retain, nonatomic) UIButton *invertButton; // @synthesize invertButton=_invertButton;
@property(retain, nonatomic) UIView *filtersButtonContainer; // @synthesize filtersButtonContainer=_filtersButtonContainer;
@property(retain, nonatomic) UIButton *filtersButton; // @synthesize filtersButton=_filtersButton;
@property(retain, nonatomic) MAGFilterLabelDial *dial; // @synthesize dial=_dial;
@property(nonatomic) __weak id <MAGFilterSelectionControlPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)contrastSliderForUnitTesting;	// IMP=0x000000010000deb8
- (id)brightnessSliderForUnitTesting;	// IMP=0x000000010000deac
- (id)invertButtonForUnitTesting;	// IMP=0x000000010000dea0
- (void)changeConstraintsToNormal;	// IMP=0x000000010000de08
- (void)changeConstraintsForFiltersButtonFrameInControlPanel:(struct CGRect)arg1;	// IMP=0x000000010000db6c
- (void)showControlsForTransition;	// IMP=0x000000010000d92c
- (void)hideControlsForTransition;	// IMP=0x000000010000d6f8
- (void)setFiltersButtonSelected:(_Bool)arg1;	// IMP=0x000000010000d6b0
- (void)setInvertButtonSelected:(_Bool)arg1;	// IMP=0x000000010000d668
- (void)setDialSelectedFilterSet:(id)arg1;	// IMP=0x000000010000d5fc
- (void)setContrastSliderValue:(double)arg1;	// IMP=0x000000010000d5ac
- (void)setBrightnessSliderValue:(double)arg1;	// IMP=0x000000010000d55c
- (void)dialChanged:(id)arg1;	// IMP=0x000000010000d4c4
- (void)filtersButtonTapped:(id)arg1;	// IMP=0x000000010000d47c
- (void)invertButtonTapped:(id)arg1;	// IMP=0x000000010000d434
- (void)brightnessSliderDragged:(id)arg1;	// IMP=0x000000010000d364
- (void)contrastSliderDragged:(id)arg1;	// IMP=0x000000010000d294
- (double)sliderSnapToCenterRadius;	// IMP=0x000000010000d288
- (void)orientationChanged:(id)arg1;	// IMP=0x000000010000d20c
- (void)applyControlRotationForDeviceOrientation;	// IMP=0x000000010000d0fc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000ac88
- (void)_colorToolbarBackground;	// IMP=0x000000010000ac24

@end
