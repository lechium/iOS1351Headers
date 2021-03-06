//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, PHActionSliderKnob, UIBezierPath, UIColor, UIFont, UIImage, UIImageView, UILabel, UIPanGestureRecognizer, UIView, _UIBackdropView, _UIVibrantSettings;
@protocol PHActionSliderDelegate, PHActionSliderLabel;

@interface PHActionSlider : UIControl <UIGestureRecognizerDelegate>
{
    UIView *_contentView;	// 8 = 0x8
    UIView *_trackDodgeView;	// 16 = 0x10
    UIView *_trackBackgroundView;	// 24 = 0x18
    _UIBackdropView *_trackBlurView;	// 32 = 0x20
    UIView *_trackSolidView;	// 40 = 0x28
    PHActionSliderKnob *_knobView;	// 48 = 0x30
    UIImageView *_knobImageView;	// 56 = 0x38
    UILabel *_knobLabel;	// 64 = 0x40
    UIView<PHActionSliderLabel> *_trackLabel;	// 72 = 0x48
    UIPanGestureRecognizer *_slideGestureRecognizer;	// 80 = 0x50
    struct CGPoint _slideGestureInitialPoint;	// 88 = 0x58
    double _knobPosition;	// 104 = 0x68
    double _trackWidthProportion;	// 112 = 0x70
    _Bool _showingTrackLabel;	// 120 = 0x78
    _Bool _animating;	// 121 = 0x79
    _Bool _isLarge;	// 122 = 0x7a
    long long _style;	// 128 = 0x80
    long long _textStyle;	// 136 = 0x88
    unsigned long long _dragStyle;	// 144 = 0x90
    NSString *_trackText;	// 152 = 0x98
    UIFont *_trackFont;	// 160 = 0xa0
    double _minSlideCompletionPercentage;	// 168 = 0xa8
    double _minFastSlideCompletionPercentage;	// 176 = 0xb0
    double _trackTextBaselineFromBottom;	// 184 = 0xb8
    id <PHActionSliderDelegate> _delegate;	// 192 = 0xc0
    double _knobWidth;	// 200 = 0xc8
    double _cachedTrackMaskWidth;	// 208 = 0xd0
    _UIVibrantSettings *_vibrantSettings;	// 216 = 0xd8
    struct CGSize _knobImageOffset;	// 224 = 0xe0
    struct CGSize _trackSize;	// 240 = 0xf0
    struct UIEdgeInsets _knobInsets;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x0000000100096820
@property(nonatomic) _Bool isLarge; // @synthesize isLarge=_isLarge;
@property(retain, nonatomic) _UIVibrantSettings *vibrantSettings; // @synthesize vibrantSettings=_vibrantSettings;
@property(readonly, nonatomic, getter=_knobView) UIView *knobView; // @synthesize knobView=_knobView;
@property(nonatomic) double cachedTrackMaskWidth; // @synthesize cachedTrackMaskWidth=_cachedTrackMaskWidth;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic, getter=isShowingTrackLabel) _Bool showingTrackLabel; // @synthesize showingTrackLabel=_showingTrackLabel;
@property(nonatomic) double trackWidthProportion; // @synthesize trackWidthProportion=_trackWidthProportion;
@property(nonatomic) struct UIEdgeInsets knobInsets; // @synthesize knobInsets=_knobInsets;
@property(nonatomic) double knobWidth; // @synthesize knobWidth=_knobWidth;
@property(nonatomic) double knobPosition; // @synthesize knobPosition=_knobPosition;
@property(nonatomic) __weak id <PHActionSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIPanGestureRecognizer *slideGestureRecognizer; // @synthesize slideGestureRecognizer=_slideGestureRecognizer;
@property(nonatomic) double trackTextBaselineFromBottom; // @synthesize trackTextBaselineFromBottom=_trackTextBaselineFromBottom;
@property(nonatomic) double minFastSlideCompletionPercentage; // @synthesize minFastSlideCompletionPercentage=_minFastSlideCompletionPercentage;
@property(nonatomic) double minSlideCompletionPercentage; // @synthesize minSlideCompletionPercentage=_minSlideCompletionPercentage;
@property(nonatomic) struct CGSize trackSize; // @synthesize trackSize=_trackSize;
@property(retain, nonatomic) UIFont *trackFont; // @synthesize trackFont=_trackFont;
@property(copy, nonatomic) NSString *trackText; // @synthesize trackText=_trackText;
@property(nonatomic) struct CGSize knobImageOffset; // @synthesize knobImageOffset=_knobImageOffset;
@property(nonatomic) unsigned long long dragStyle; // @synthesize dragStyle=_dragStyle;
@property(nonatomic) long long textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) long long style; // @synthesize style=_style;
- (double)_currentScreenScale;	// IMP=0x00000001000965e0
- (_Bool)shouldReverseLayoutDirection;	// IMP=0x0000000100096598
- (void)hideTrackLabelIfNecessary:(_Bool)arg1;	// IMP=0x0000000100096574
- (void)_knobPanGesture:(id)arg1;	// IMP=0x00000001000960d8
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000100096034
- (void)_slideCompleted:(_Bool)arg1;	// IMP=0x0000000100095da4
- (void)hideTrackLabel:(_Bool)arg1;	// IMP=0x0000000100095d90
- (void)showTrackLabel;	// IMP=0x0000000100095d7c
- (void)setTrackLabelHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100095b60
- (void)setMaskFromImage:(id)arg1 onView:(id)arg2;	// IMP=0x0000000100095990
- (void)setMaskPath:(const struct CGPath *)arg1 onView:(id)arg2;	// IMP=0x0000000100095838
- (void)updateAllTrackMasks;	// IMP=0x0000000100095654
- (id)trackMaskPath;	// IMP=0x0000000100095544
- (id)trackMaskImage;	// IMP=0x0000000100095318
- (void)layoutSubviews;	// IMP=0x0000000100094d34
- (void)_makeTrackLabel;	// IMP=0x0000000100094ac8
- (void)didMoveToWindow;	// IMP=0x0000000100094a64
- (void)didMoveToSuperview;	// IMP=0x00000001000949c0
- (_Bool)shouldHideTrackLabelForXPoint:(double)arg1;	// IMP=0x0000000100094964
- (_Bool)xPointIsWithinTrack:(double)arg1;	// IMP=0x0000000100094908
- (double)_knobAvailableX;	// IMP=0x00000001000948c0
- (double)_knobRightMostX;	// IMP=0x0000000100094830
- (double)_knobLeftMostX;	// IMP=0x00000001000947e4
- (double)_knobMaxX;	// IMP=0x000000010009479c
- (double)_knobMinX;	// IMP=0x0000000100094754
- (double)_stretchKnobWidth;	// IMP=0x00000001000946d4
- (double)_stretchKnobX;	// IMP=0x0000000100094644
- (double)_knobHorizontalPosition;	// IMP=0x00000001000945c8
- (double)_knobVerticalInset;	// IMP=0x00000001000945a4
- (double)_knobMaxXInset;	// IMP=0x0000000100094584
- (double)_knobMinXInset;	// IMP=0x0000000100094564
- (double)_knobWidth;	// IMP=0x0000000100094558
- (struct CGRect)_trackFrame;	// IMP=0x000000010009449c
- (struct CGSize)_defaultTrackSize;	// IMP=0x00000001000943ac
- (id)backgroundColor;	// IMP=0x0000000100094394
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000010009437c
- (void)closeTrackAnimated:(_Bool)arg1;	// IMP=0x0000000100094168
- (void)openTrackAnimated:(_Bool)arg1;	// IMP=0x0000000100093e68
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100093d88
- (double)trackTextYOffset;	// IMP=0x0000000100093d5c
@property(readonly, nonatomic) struct CGRect trackTextRect;
@property(readonly, nonatomic) struct CGRect knobRect;
@property(readonly, nonatomic) UILabel *trackLabel;
@property(nonatomic) double trackAlpha;
@property(retain, nonatomic) UIColor *knobColor;
@property(readonly, nonatomic) UILabel *knobLabel;
@property(retain, nonatomic) NSString *knobText;
@property(retain, nonatomic) UIImage *knobImage;
@property(readonly, nonatomic) UIBezierPath *knobMaskPath;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100092f88
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100092f74
- (id)initWithFrame:(struct CGRect)arg1 vibrantSettings:(id)arg2 large:(_Bool)arg3;	// IMP=0x000000010009281c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

