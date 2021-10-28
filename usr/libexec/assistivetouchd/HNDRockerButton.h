//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HNDView.h"

#import "AXAssistiveTouchLayoutItem-Protocol.h"

@class NSBundle, NSString, UIImage, UIImageView, UILabel, UIView;
@protocol HNDRockerButtonDataSource;

@interface HNDRockerButton : HNDView <AXAssistiveTouchLayoutItem>
{
    CDUnknownBlockType _downBlock;	// 16 = 0x10
    CDUnknownBlockType _upBlock;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    _Bool _selected;	// 40 = 0x28
    _Bool _highlighted;	// 41 = 0x29
    UILabel *_label;	// 48 = 0x30
    NSString *_imageName;	// 56 = 0x38
    UIImageView *_imageView;	// 64 = 0x40
    _Bool _isEmptyFavorite;	// 72 = 0x48
    _Bool _customTitle;	// 73 = 0x49
    _Bool _isBackButton;	// 74 = 0x4a
    _Bool _showWithGuidedAccess;	// 75 = 0x4b
    _Bool isEmptyFavorite;	// 76 = 0x4c
    _Bool customTitle;	// 77 = 0x4d
    _Bool isModalDown;	// 78 = 0x4e
    _Bool _continueHighlightAfterTouch;	// 79 = 0x4f
    _Bool _disabled;	// 80 = 0x50
    NSBundle *_imageBundle;	// 88 = 0x58
    CDUnknownBlockType _substantialTransitionOccurredBlock;	// 96 = 0x60
    NSString *_location;	// 104 = 0x68
    id <HNDRockerButtonDataSource> _dataSource;	// 112 = 0x70
    NSString *_type;	// 120 = 0x78
    UIImage *_selectedImage;	// 128 = 0x80
    UIImage *_unselectedImage;	// 136 = 0x88
}

+ (id)buttonWithTitle:(id)arg1 imageName:(id)arg2 downBlock:(CDUnknownBlockType)arg3 upBlock:(CDUnknownBlockType)arg4 dataSource:(id)arg5 showWithGuidedAccess:(_Bool)arg6;	// IMP=0x000000010004ade0
- (void).cxx_destruct;	// IMP=0x000000010004cf10
@property(retain, nonatomic) UIImage *unselectedImage; // @synthesize unselectedImage=_unselectedImage;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <HNDRockerButtonDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) CDUnknownBlockType substantialTransitionOccurredBlock; // @synthesize substantialTransitionOccurredBlock=_substantialTransitionOccurredBlock;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool showWithGuidedAccess; // @synthesize showWithGuidedAccess=_showWithGuidedAccess;
@property(retain, nonatomic) NSBundle *imageBundle; // @synthesize imageBundle=_imageBundle;
@property(nonatomic) _Bool continueHighlightAfterTouch; // @synthesize continueHighlightAfterTouch=_continueHighlightAfterTouch;
@property(nonatomic) _Bool isBackButton; // @synthesize isBackButton=_isBackButton;
@property(nonatomic) _Bool isModalDown; // @synthesize isModalDown;
@property(nonatomic) _Bool customTitle; // @synthesize customTitle;
@property(nonatomic) _Bool isEmptyFavorite; // @synthesize isEmptyFavorite;
@property(copy, nonatomic) CDUnknownBlockType upBlock; // @synthesize upBlock=_upBlock;
@property(copy, nonatomic) CDUnknownBlockType downBlock; // @synthesize downBlock=_downBlock;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (id)description;	// IMP=0x000000010004cbf4
- (id)accessibilityLabel;	// IMP=0x000000010004cb68
- (struct CGRect)accessibilityFrame;	// IMP=0x000000010004caa8
- (_Bool)isAccessibilityElement;	// IMP=0x000000010004caa0
@property(readonly, nonatomic) UIView *imageViewContainerView;
- (void)dealloc;	// IMP=0x000000010004ca18
- (void)updateTextColor;	// IMP=0x000000010004c57c
- (void)getDeviceSpecificImageForColor:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004c238
- (id)currentImage;	// IMP=0x000000010004c044
- (void)resetImages;	// IMP=0x000000010004c004
- (_Bool)_inSelectedState;	// IMP=0x000000010004bfb0
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000010004befc
- (void)performPress:(_Bool)arg1;	// IMP=0x000000010004be60
- (void)handleRealUpEvent:(struct CGPoint)arg1 maxOrb:(double)arg2;	// IMP=0x000000010004be00
- (void)handleRealCancelEvent:(struct CGPoint)arg1;	// IMP=0x000000010004bce4
- (void)handleFingerDriftedAway;	// IMP=0x000000010004bc88
- (void)handleRealDownEvent:(struct CGPoint)arg1;	// IMP=0x000000010004bc40
- (void)_updateImageView;	// IMP=0x000000010004ba38
- (void)_updateImage;	// IMP=0x000000010004ba04
- (void)_updateFont;	// IMP=0x000000010004b968
- (id)viewForLastBaselineLayout;	// IMP=0x000000010004b958
- (id)initWithImageName:(id)arg1;	// IMP=0x000000010004af28

@end
