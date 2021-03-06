//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class BuddyPosedDeviceSelectionItemView, UITapGestureRecognizer;
@protocol BuddyPosedDeviceSelectionDelegate;

@interface BuddyPosedDeviceSelectionView : UIView
{
    id <BuddyPosedDeviceSelectionDelegate> _delegate;	// 8 = 0x8
    UIView *_leftPosedDeviceView;	// 16 = 0x10
    UIView *_rightPosedDeviceView;	// 24 = 0x18
    UIView *_mainContainer;	// 32 = 0x20
    UIView *_leftContainer;	// 40 = 0x28
    UIView *_rightContainer;	// 48 = 0x30
    UITapGestureRecognizer *_leftTap;	// 56 = 0x38
    UITapGestureRecognizer *_rightTap;	// 64 = 0x40
    BuddyPosedDeviceSelectionItemView *_leftPosedView;	// 72 = 0x48
    BuddyPosedDeviceSelectionItemView *_rightPosedView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001000e31c0
@property(retain, nonatomic) BuddyPosedDeviceSelectionItemView *rightPosedView; // @synthesize rightPosedView=_rightPosedView;
@property(retain, nonatomic) BuddyPosedDeviceSelectionItemView *leftPosedView; // @synthesize leftPosedView=_leftPosedView;
@property(retain, nonatomic) UITapGestureRecognizer *rightTap; // @synthesize rightTap=_rightTap;
@property(retain, nonatomic) UITapGestureRecognizer *leftTap; // @synthesize leftTap=_leftTap;
@property(retain, nonatomic) UIView *rightContainer; // @synthesize rightContainer=_rightContainer;
@property(retain, nonatomic) UIView *leftContainer; // @synthesize leftContainer=_leftContainer;
@property(retain, nonatomic) UIView *mainContainer; // @synthesize mainContainer=_mainContainer;
@property(retain, nonatomic) UIView *rightPosedDeviceView; // @synthesize rightPosedDeviceView=_rightPosedDeviceView;
@property(retain, nonatomic) UIView *leftPosedDeviceView; // @synthesize leftPosedDeviceView=_leftPosedDeviceView;
@property(nonatomic) __weak id <BuddyPosedDeviceSelectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateViewContainerForAccessibilityOptions:(id)arg1 contents:(id)arg2;	// IMP=0x00000001000e2f74
- (double)composedDeviceHeight;	// IMP=0x00000001000e2ea4
- (double)heightForCurrentDevice;	// IMP=0x00000001000e2e48
- (void)selectSegment:(long long)arg1;	// IMP=0x00000001000e2ca0
- (void)tapped:(id)arg1;	// IMP=0x00000001000e2c24
- (void)didMoveToSuperview;	// IMP=0x00000001000e2b54
- (id)initWithPosedViewLeft:(id)arg1 posedViewRight:(id)arg2;	// IMP=0x00000001000e205c
- (id)initWithLeftContentView:(id)arg1 leftAccessoryImageName:(id)arg2 leftText:(id)arg3 rightContentView:(id)arg4 rightAccessoryImageName:(id)arg5 rightText:(id)arg6;	// IMP=0x00000001000e1e58
- (id)initWithLeftImageName:(id)arg1 leftAccessoryImageName:(id)arg2 leftText:(id)arg3 rightImageName:(id)arg4 rightAccessoryImageName:(id)arg5 rightText:(id)arg6;	// IMP=0x00000001000e1c04

@end

