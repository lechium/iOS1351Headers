//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCATElementProvider-Protocol.h"

@class NSMutableDictionary, NSString, SCATAuxiliaryElementManager, SCATElementManagerViewController;

@interface SCATElementManager : NSObject <SCATElementProvider>
{
    SCATElementManagerViewController *_viewController;	// 8 = 0x8
    NSMutableDictionary *_auxiliaryElementManagers;	// 16 = 0x10
    SCATAuxiliaryElementManager *_currentAuxiliaryElementManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000cfa68
@property(retain, nonatomic) SCATAuxiliaryElementManager *currentAuxiliaryElementManager; // @synthesize currentAuxiliaryElementManager=_currentAuxiliaryElementManager;
@property(retain, nonatomic) NSMutableDictionary *auxiliaryElementManagers; // @synthesize auxiliaryElementManagers=_auxiliaryElementManagers;
@property(retain, nonatomic) SCATElementManagerViewController *viewController; // @synthesize viewController=_viewController;
- (long long)roleForElement:(id)arg1;	// IMP=0x00000001000cf9d4
- (long long)auxiliaryElementCountWithRole:(long long)arg1;	// IMP=0x00000001000cf814
- (id)auxiliaryElementAfter:(id)arg1;	// IMP=0x00000001000cf6ec
- (id)auxiliaryElementBefore:(id)arg1;	// IMP=0x00000001000cf5c4
- (id)lastAuxiliaryElementWithRole:(long long)arg1;	// IMP=0x00000001000cf3d4
- (id)firstAuxiliaryElementWithRole:(long long)arg1;	// IMP=0x00000001000cf208
- (id)previousAuxiliaryElementManagerTo:(id)arg1 role:(long long)arg2 excludeDisabled:(_Bool)arg3;	// IMP=0x00000001000cf00c
- (id)nextAuxiliaryElementManagerFrom:(id)arg1 role:(long long)arg2 excludeDisabled:(_Bool)arg3;	// IMP=0x00000001000cedf4
- (id)enabledAuxiliaryElementManagersForRoles:(long long)arg1;	// IMP=0x00000001000cec24
- (id)auxiliaryElementManagersForRole:(long long)arg1;	// IMP=0x00000001000ceab4
- (id)allAuxiliaryElementManagers;	// IMP=0x00000001000ce9e0
- (void)removeAuxiliaryElementManagerForAllRoles:(id)arg1;	// IMP=0x00000001000ce90c
- (void)appendAuxiliaryElementManager:(id)arg1 withRole:(long long)arg2;	// IMP=0x00000001000ce68c
- (void)driver:(id)arg1 willUnfocusFromContext:(id)arg2;	// IMP=0x00000001000ce5ec
- (void)driver:(id)arg1 didFocusOnContext:(id)arg2 oldContext:(id)arg3;	// IMP=0x00000001000ce524
- (void)driver:(id)arg1 willFocusOnContext:(id)arg2;	// IMP=0x00000001000ce2dc
- (id)focusContextAfterDrillOutOnGroup:(id)arg1;	// IMP=0x00000001000ce2bc
- (id)nextFocusContextAfterActivatingKeyboardElement:(id)arg1;	// IMP=0x00000001000ce2b4
- (id)nextFocusContextAfterDismissingMenuForElement:(id)arg1;	// IMP=0x00000001000ce2ac
- (void)scannerManager:(id)arg1 nativeFocusElementDidChange:(id)arg2;	// IMP=0x00000001000ce2a8
- (void)scannerManager:(id)arg1 didActivateElement:(id)arg2;	// IMP=0x00000001000ce2a4
- (void)didFetchElements:(id)arg1 foundNewElements:(_Bool)arg2 currentFocusContext:(id)arg3 didChangeActiveElementManager:(_Bool)arg4;	// IMP=0x00000001000ce2a0
- (void)firstResponderDidChange:(id)arg1;	// IMP=0x00000001000ce29c
- (void)screenChangingButtonWasPressed:(id)arg1;	// IMP=0x00000001000ce298
- (void)alertDidAppear:(id)arg1;	// IMP=0x00000001000ce294
- (void)screenWillChange:(id)arg1;	// IMP=0x00000001000ce290
- (void)screenDidChange:(id)arg1;	// IMP=0x00000001000ce28c
- (void)appTransitionDidOccur:(id)arg1;	// IMP=0x00000001000ce288
- (void)orientationDidChange:(id)arg1;	// IMP=0x00000001000ce284
- (void)closeCurrentScanningContext;	// IMP=0x00000001000ce280
- (_Bool)allowsDwellScanningToAbortAfterTimeout;	// IMP=0x00000001000ce278
- (double)scannerIdleTimeout;	// IMP=0x00000001000ce270
- (_Bool)shouldKeepScannerAwake;	// IMP=0x00000001000ce268
- (id)numberOfItemsInCurrentScanCycle;	// IMP=0x00000001000ce260
- (_Bool)canBeActiveElementManager;	// IMP=0x00000001000ce258
- (_Bool)handleInputAction:(long long)arg1 withElement:(id)arg2;	// IMP=0x00000001000ce250
- (_Bool)allowsDwellSelection;	// IMP=0x00000001000ce244
- (void)redisplayIfNeeded:(_Bool)arg1;	// IMP=0x00000001000ce124
- (void)hideIfNeeded:(_Bool)arg1;	// IMP=0x00000001000ce050
- (void)scannerWillMakeManagerInactive:(id)arg1;	// IMP=0x00000001000cdfa0
- (void)scannerWillMakeManagerActive:(id)arg1;	// IMP=0x00000001000cdebc
- (_Bool)containsElement:(id)arg1;	// IMP=0x00000001000cdeb4
- (void)didFinishProvidingElements;	// IMP=0x00000001000cdeb0
- (void)willBeginProvidingElements;	// IMP=0x00000001000cdeac
- (id)elementBefore:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x00000001000cdea4
- (id)elementAfter:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x00000001000cde9c
- (id)lastElementWithOptions:(int *)arg1;	// IMP=0x00000001000cde94
- (id)firstElementWithOptions:(int *)arg1;	// IMP=0x00000001000cde8c
@property(readonly, nonatomic) _Bool providesElements;
- (id)siblingOfElement:(id)arg1 inDirection:(long long)arg2 didWrap:(_Bool *)arg3 options:(int *)arg4;	// IMP=0x00000001000cde44
- (_Bool)isGestureDrawingElementManager;	// IMP=0x00000001000cddf0
- (_Bool)isGestureProviderElementManager;	// IMP=0x00000001000cdd9c
- (_Bool)isPointPickerElementManager;	// IMP=0x00000001000cdd48
- (_Bool)isAppleTVRemoteElementManager;	// IMP=0x00000001000cdcf4
- (_Bool)isMenuElementManager;	// IMP=0x00000001000cdca0
- (_Bool)isElementNavElementManager;	// IMP=0x00000001000cdc4c
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
