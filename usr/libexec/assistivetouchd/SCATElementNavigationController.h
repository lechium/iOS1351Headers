//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATElementManager.h"

@class AXElement, NSIndexPath, NSValue, SCATFocusContext, SCATMenuOpeningAuxiliaryElementManager, SCATVisualScrollersAuxiliaryElementManager;
@protocol HNDAccessibilityManagerProtocol, SCATElementNavigationControllerDelegate;

@interface SCATElementNavigationController : SCATElementManager
{
    _Bool _shouldRescanAfterFetch;	// 8 = 0x8
    _Bool _shouldRescanFromTopAfterFetch;	// 9 = 0x9
    _Bool _shouldScanKeyboardOnAppearance;	// 10 = 0xa
    _Bool _menuOpeningElementEnabled;	// 11 = 0xb
    _Bool _topLevelVisualScrollersEnabled;	// 12 = 0xc
    _Bool _groupVisualScrollersEnabled;	// 13 = 0xd
    int _keyboardSelectBehavior;	// 16 = 0x10
    id <HNDAccessibilityManagerProtocol> _axManager;	// 24 = 0x18
    id <SCATElementNavigationControllerDelegate> _delegate;	// 32 = 0x20
    SCATFocusContext *_currentFocusContext;	// 40 = 0x28
    NSValue *_keyboardKeyCenterPoint;	// 48 = 0x30
    NSIndexPath *_keyboardIndexPath;	// 56 = 0x38
    AXElement *_lastScannedElementCommunity;	// 64 = 0x40
    AXElement *_firstResponder;	// 72 = 0x48
    SCATMenuOpeningAuxiliaryElementManager *_menuOpeningAuxElementManager;	// 80 = 0x50
    SCATVisualScrollersAuxiliaryElementManager *_topLevelVisualScrollersAuxElementManager;	// 88 = 0x58
    SCATVisualScrollersAuxiliaryElementManager *_groupVisualScrollersAuxElementManager;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100080a18
@property(nonatomic, getter=areGroupVisualScrollersEnabled) _Bool groupVisualScrollersEnabled; // @synthesize groupVisualScrollersEnabled=_groupVisualScrollersEnabled;
@property(retain, nonatomic) SCATVisualScrollersAuxiliaryElementManager *groupVisualScrollersAuxElementManager; // @synthesize groupVisualScrollersAuxElementManager=_groupVisualScrollersAuxElementManager;
@property(nonatomic, getter=areTopLevelVisualScrollersEnabled) _Bool topLevelVisualScrollersEnabled; // @synthesize topLevelVisualScrollersEnabled=_topLevelVisualScrollersEnabled;
@property(retain, nonatomic) SCATVisualScrollersAuxiliaryElementManager *topLevelVisualScrollersAuxElementManager; // @synthesize topLevelVisualScrollersAuxElementManager=_topLevelVisualScrollersAuxElementManager;
@property(nonatomic, getter=isMenuOpeningElementEnabled) _Bool menuOpeningElementEnabled; // @synthesize menuOpeningElementEnabled=_menuOpeningElementEnabled;
@property(retain, nonatomic) SCATMenuOpeningAuxiliaryElementManager *menuOpeningAuxElementManager; // @synthesize menuOpeningAuxElementManager=_menuOpeningAuxElementManager;
@property(nonatomic) _Bool shouldScanKeyboardOnAppearance; // @synthesize shouldScanKeyboardOnAppearance=_shouldScanKeyboardOnAppearance;
@property(retain, nonatomic) AXElement *firstResponder; // @synthesize firstResponder=_firstResponder;
@property(retain, nonatomic) AXElement *lastScannedElementCommunity; // @synthesize lastScannedElementCommunity=_lastScannedElementCommunity;
@property(nonatomic) int keyboardSelectBehavior; // @synthesize keyboardSelectBehavior=_keyboardSelectBehavior;
@property(retain, nonatomic) NSIndexPath *keyboardIndexPath; // @synthesize keyboardIndexPath=_keyboardIndexPath;
@property(retain, nonatomic) NSValue *keyboardKeyCenterPoint; // @synthesize keyboardKeyCenterPoint=_keyboardKeyCenterPoint;
@property(nonatomic) _Bool shouldRescanFromTopAfterFetch; // @synthesize shouldRescanFromTopAfterFetch=_shouldRescanFromTopAfterFetch;
@property(nonatomic) _Bool shouldRescanAfterFetch; // @synthesize shouldRescanAfterFetch=_shouldRescanAfterFetch;
@property(retain, nonatomic) SCATFocusContext *currentFocusContext; // @synthesize currentFocusContext=_currentFocusContext;
@property(nonatomic) __weak id <SCATElementNavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)focusContextAfterDrillOutOnGroup:(id)arg1;	// IMP=0x0000000100080728
- (id)nextFocusContextAfterActivatingKeyboardElement:(id)arg1;	// IMP=0x000000010008045c
- (id)nextFocusContextAfterDismissingMenuForElement:(id)arg1;	// IMP=0x00000001000800cc
- (void)scannerManager:(id)arg1 didActivateElement:(id)arg2;	// IMP=0x000000010007fd1c
- (id)_replacementForLastFocusedKeyboardItem;	// IMP=0x000000010007fb48
- (void)_trackLastFocusedKeyboardItem:(id)arg1;	// IMP=0x000000010007f754
- (id)_keyboardElementForIndexPath:(id)arg1;	// IMP=0x000000010007f5c0
- (id)_indexPathForKeyboardElement:(id)arg1;	// IMP=0x000000010007f498
- (_Bool)_didFocusLastOnKeyboardElement;	// IMP=0x000000010007f3e4
- (_Bool)_isScanningKeyboardContainer:(id)arg1;	// IMP=0x000000010007f350
- (_Bool)_isKeyboardContainerElement:(id)arg1 allowKeyboardContainerItself:(_Bool)arg2;	// IMP=0x000000010007f288
- (id)_firstKeyboardFocusContext;	// IMP=0x000000010007f1e4
- (void)didFetchElements:(id)arg1 foundNewElements:(_Bool)arg2 currentFocusContext:(id)arg3 didChangeActiveElementManager:(_Bool)arg4;	// IMP=0x000000010007eaec
- (void)scannerManager:(id)arg1 nativeFocusElementDidChange:(id)arg2;	// IMP=0x000000010007eaac
- (_Bool)_deferFocusToNativeFocusElementIfNeeded:(id)arg1;	// IMP=0x000000010007eaa4
- (_Bool)_shouldTrackNativeFocusElement;	// IMP=0x000000010007ea24
- (void)_attemptToRestoreFocusContext:(id)arg1 scannerManager:(id)arg2;	// IMP=0x000000010007de2c
- (unsigned long long)_depthForElement:(id)arg1;	// IMP=0x000000010007dd84
- (void)scannerWillMakeManagerInactive:(id)arg1;	// IMP=0x000000010007dbd4
- (void)driver:(id)arg1 willUnfocusFromContext:(id)arg2;	// IMP=0x000000010007db1c
- (void)driver:(id)arg1 didFocusOnContext:(id)arg2 oldContext:(id)arg3;	// IMP=0x000000010007d898
- (void)_updateMenuOpeningElementEnabledWithFocusContext:(id)arg1;	// IMP=0x000000010007d5b0
- (void)_updateVisualScrollersWithFocusContext:(id)arg1 oldContext:(id)arg2;	// IMP=0x000000010007d310
- (void)firstResponderDidChange:(id)arg1;	// IMP=0x000000010007cdc4
- (void)_trackLastScannedElementCommunityFromFocusContext:(id)arg1;	// IMP=0x000000010007cc90
- (void)screenChangingButtonWasPressed:(id)arg1;	// IMP=0x000000010007cb0c
- (void)alertDidAppear:(id)arg1;	// IMP=0x000000010007c974
- (void)screenWillChange:(id)arg1;	// IMP=0x000000010007c968
- (void)screenDidChange:(id)arg1;	// IMP=0x000000010007c678
- (void)appTransitionDidOccur:(id)arg1;	// IMP=0x000000010007c4e0
- (void)orientationDidChange:(id)arg1;	// IMP=0x000000010007c35c
- (void)_resetFetchFlags;	// IMP=0x000000010007c1c0
- (void)_pauseScanningForLikelyScreenChange;	// IMP=0x000000010007c01c
- (void)_pauseScanningTemporarily;	// IMP=0x000000010007bd1c
- (void)_startWaitingForFetchAfterTemporaryPause;	// IMP=0x000000010007bd00
- (void)_stopWaitingForFetchAfterTemporaryPause;	// IMP=0x000000010007bcdc
- (void)_giveUpWaitingForFetchAfterPause;	// IMP=0x000000010007b8c0
- (id)numberOfItemsInCurrentScanCycle;	// IMP=0x000000010007b66c
- (id)_nativeFocusElementContext;	// IMP=0x000000010007b5c0
- (id)elementBefore:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x000000010007b360
- (id)elementAfter:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x000000010007b100
- (id)lastElementWithOptions:(int *)arg1;	// IMP=0x000000010007b074
- (id)firstElementWithOptions:(int *)arg1;	// IMP=0x000000010007afe8
- (void)_menuOpeningElementActivated:(id)arg1;	// IMP=0x000000010007ac74
- (id)identifier;	// IMP=0x000000010007ac64
@property(retain, nonatomic) id <HNDAccessibilityManagerProtocol> axManager; // @synthesize axManager=_axManager;
@property(readonly, nonatomic) _Bool isGroupingEnabled;
- (id)init;	// IMP=0x000000010007ab50

@end

