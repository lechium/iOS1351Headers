//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BFFFlowItem-Protocol.h"

@class NSLayoutConstraint, NSString, _BuddyProximityBackingController;
@protocol BFFFlowItemDelegate;

@interface BuddyProximityPairingController : UIViewController <BFFFlowItem>
{
    id <BFFFlowItemDelegate> _delegate;	// 8 = 0x8
    _BuddyProximityBackingController *_proxBackingController;	// 16 = 0x10
    NSLayoutConstraint *_dynamicLayoutHeightConstraint;	// 24 = 0x18
    NSLayoutConstraint *_dynamicLayoutCenterConstraint;	// 32 = 0x20
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000dad04
- (void).cxx_destruct;	// IMP=0x00000001000dadbc
@property(retain, nonatomic) NSLayoutConstraint *dynamicLayoutCenterConstraint; // @synthesize dynamicLayoutCenterConstraint=_dynamicLayoutCenterConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dynamicLayoutHeightConstraint; // @synthesize dynamicLayoutHeightConstraint=_dynamicLayoutHeightConstraint;
@property(retain, nonatomic) _BuddyProximityBackingController *proxBackingController; // @synthesize proxBackingController=_proxBackingController;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldAllowStartOver;	// IMP=0x00000001000dad14
- (_Bool)isEphemeral;	// IMP=0x00000001000dad0c
- (_Bool)isLandscape;	// IMP=0x00000001000dac64
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000001000daafc
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000001000daa64
@property _Bool nonUserInitiatedDismissal;
@property(readonly, getter=isShowingVisualPairing) _Bool showVisual;
@property(retain) NSString *pairingCode;
@property(retain) NSString *language;
- (void)setMinimumBrightness:(float)arg1;	// IMP=0x00000001000da7b4
- (void)prepareForLanguageChange:(CDUnknownBlockType)arg1;	// IMP=0x00000001000da748
- (void)showPairingCode;	// IMP=0x00000001000da708
- (void)showVisualPairing;	// IMP=0x00000001000da6c8
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000da5b8
- (void)viewDidLoad;	// IMP=0x00000001000d9d10
- (id)init;	// IMP=0x00000001000d9c88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

