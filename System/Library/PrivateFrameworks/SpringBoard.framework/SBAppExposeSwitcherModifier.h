/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBSwitcherModifier.h>

@protocol SBFluidSwitcherModifierProviding;
@class NSString, SBAppLayout, NSArray, SBSwitcherModifier;

@interface SBAppExposeSwitcherModifier : SBSwitcherModifier {

	NSString* _bundleIdentifier;
	SBAppLayout* _activatingAppLayout;
	unsigned long long _incomingTransitionPhase;
	NSArray* _appLayoutsToKeepDuringIncomingTransition;
	id<SBFluidSwitcherModifierProviding> _modifierProvider;
	SBSwitcherModifier* _outgoingTransitionModifier;
	BOOL _isFloating;
	BOOL _isShowingReopenClosedWindowsButton;
	long long _numberOfHiddenAppLayouts;

}
-(id)handleEvent:(id)arg1 ;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
-(long long)plusButtonStyle;
-(double)plusButtonAlpha;
-(double)reopenClosedWindowsButtonAlpha;
-(double)reopenClosedWindowsButtonScale;
-(long long)liveContentRasterizationStyle;
-(id)appLayoutToScrollToBeforeTransitioning;
-(id)handleTimerEvent:(id)arg1 ;
-(id)appLayoutToScrollToBeforeReopeningClosedWindows;
-(id)appLayoutsForInsertionOrRemoval;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg1 ;
-(id)_updateReopenClosedWindowsButtonPresence;
-(BOOL)isTetheredScrollingEnabled;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)handleRemovalEvent:(id)arg1 ;
-(id)handleAppExposeEvent:(id)arg1 ;
-(BOOL)_shouldFilteringIncludeAppLayout:(id)arg1 ;
-(id)handleInsertionEvent:(id)arg1 ;
-(id)handleTetheredRemovalEvent:(id)arg1 ;
-(id)handleTetheredInsertionEvent:(id)arg1 ;
-(BOOL)_canShowReopenClosedWindowsButton;
-(id)initWithBundleIdentifier:(id)arg1 modifierProvider:(id)arg2 floating:(BOOL)arg3 ;
@end
