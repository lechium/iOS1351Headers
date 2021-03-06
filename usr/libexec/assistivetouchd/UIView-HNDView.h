//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCATElement-Protocol.h"

@class AXElementGroup, NSArray, NSNumber, NSString, SCATAuxiliaryElementManager;

@interface UIView (HNDView) <SCATElement>
- (id)_axSubviews;	// IMP=0x0000000100052660
- (void)_axPrintSubviews:(long long)arg1 string:(id)arg2;	// IMP=0x00000001000523fc
- (void)didUpdateScatMenuItemStyle;	// IMP=0x000000010009aa54
@property(nonatomic) unsigned long long scatMenuItemStyle;
@property(readonly, nonatomic) NSArray *scatDrags;
@property(readonly, nonatomic) NSArray *scatDrops;
@property(readonly, nonatomic) int scatPid;
@property(nonatomic) _Bool scatAssistiveTechFocused;
@property(readonly, nonatomic) NSArray *scatAlternateKeys;
@property(readonly, nonatomic) _Bool scatCanShowAlternateKeys;
@property(readonly, nonatomic) _Bool scatIsKeyboardKey;
@property(readonly, nonatomic) _Bool scatIndicatesOwnFocus;
@property(readonly, nonatomic) _Bool scatIsAXElement;
- (_Bool)isGroup;	// IMP=0x00000001000b0f14
@property(readonly, nonatomic) _Bool scatPathIsInSceneReferenceSpace;
- (id)highestAncestorGroup;	// IMP=0x00000001000b0eb8
@property(nonatomic) AXElementGroup *parentGroup;
@property(readonly, nonatomic) _Bool scatUpdatesMenu;
@property(readonly, nonatomic) _Bool scatBeginScanningFromSelfAfterActivation;
@property(readonly, nonatomic) _Bool scatIsOnScreen;
@property(readonly, nonatomic) _Bool scatIsAuxiliaryElement;
@property(readonly, nonatomic) _Bool scatIsMemberOfGroup;
- (_Bool)scatPerformAction:(int)arg1 withValue:(id)arg2;	// IMP=0x00000001000b0d5c
- (_Bool)scatPerformAction:(int)arg1;	// IMP=0x00000001000b0bd8
- (_Bool)scatSupportsAction:(int)arg1;	// IMP=0x00000001000b0bcc
@property(readonly, nonatomic) NSArray *scatCustomActions;
- (id)scatSupportedGestures;	// IMP=0x00000001000b0bbc
- (void)scatScrollToVisible;	// IMP=0x00000001000b0bb8
- (_Bool)scatCanScrollInAtLeastOneDirection;	// IMP=0x00000001000b0bb0
@property(retain, nonatomic) NSString *scatSpeakableDescription;
@property(readonly, nonatomic) _Bool scatHidesGroupCursorWhenFocused;
@property(readonly, nonatomic) NSNumber *scatOverrideCursorTheme;
@property(readonly, nonatomic) long long scatActivateBehavior;
@property(nonatomic) SCATAuxiliaryElementManager *scatAuxiliaryElementManager;
@property(nonatomic) _Bool scatShouldActivateDirectly;
@property(readonly, nonatomic) _Bool scatShouldAllowDeferFocusToNativeFocusedElement;
@property(readonly, nonatomic) _Bool scatIsValid;
@property(readonly, nonatomic) unsigned long long scatScanningBehaviorTraits;
@property(readonly, nonatomic) unsigned long long scatTraits;
@property(readonly, nonatomic) struct CGPath *scatPath;
@property(readonly, nonatomic) struct CGRect scatFrame;
@property(readonly, nonatomic) struct CGPoint scatScreenPointForOperations;
@property(readonly, nonatomic) struct CGPoint scatCenterPoint;
@property(readonly, nonatomic) struct CGRect scatTextCursorFrame;
- (id)scrollableElement;	// IMP=0x00000001000b09a0
- (id)keyboardContainer;	// IMP=0x00000001000b0998

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) struct CGRect frame; // @dynamic frame;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

