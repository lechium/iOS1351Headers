//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VOTGesturedTextInputManager.h"

#import "VOTGesturedTextInputManagerRequiredMethods-Protocol.h"

@class NSArray;
@protocol VOTMapsExplorationGestureManagerDelegate;

@interface VOTMapsExplorationGestureManager : VOTGesturedTextInputManager <VOTGesturedTextInputManagerRequiredMethods>
{
    NSArray *_explorationSegments;	// 8 = 0x8
    long long _currentIndex;	// 16 = 0x10
    long long _selectionIndex;	// 24 = 0x18
    double _movedAngle;	// 32 = 0x20
    double _lastAngle;	// 40 = 0x28
    _Bool _recentlyMoved;	// 48 = 0x30
    struct CGPoint _currentLocation;	// 56 = 0x38
    struct CGPoint _currentCenter;	// 72 = 0x48
    id <VOTMapsExplorationGestureManagerDelegate> _mapsExplorationGestureManagerDelegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010004edc4
@property(nonatomic) __weak id <VOTMapsExplorationGestureManagerDelegate> mapsExplorationGestureManagerDelegate; // @synthesize mapsExplorationGestureManagerDelegate=_mapsExplorationGestureManagerDelegate;
- (_Bool)isWordBackspaceEvent:(id)arg1;	// IMP=0x000000010004ed88
- (_Bool)isSpaceEvent:(id)arg1;	// IMP=0x000000010004ed80
- (_Bool)isReturnKeyEvent:(id)arg1;	// IMP=0x000000010004ed78
- (_Bool)isPreviousSuggestionEvent:(id)arg1;	// IMP=0x000000010004ed70
- (_Bool)isNextSuggestionEvent:(id)arg1;	// IMP=0x000000010004ed68
- (_Bool)isNextKeyboardLanguageEvent:(id)arg1;	// IMP=0x000000010004ed60
- (_Bool)isLaunchAppEvent:(id)arg1;	// IMP=0x000000010004ed58
- (_Bool)isBackspaceEvent:(id)arg1;	// IMP=0x000000010004ed50
- (void)applyPreviousSuggestionToElement:(id)arg1;	// IMP=0x000000010004ed4c
- (void)applyNextSuggestionToElement:(id)arg1;	// IMP=0x000000010004ed48
- (_Bool)processTouchLocations:(id)arg1 isFirstTouch:(_Bool)arg2;	// IMP=0x000000010004ed40
- (_Bool)processTapWithFingerCount:(unsigned long long)arg1;	// IMP=0x000000010004ed38
- (void)_playSound:(id)arg1;	// IMP=0x000000010004ecc8
- (void)_speakText:(id)arg1 doesNotInterrupt:(_Bool)arg2 cannotBeInterrupted:(_Bool)arg3;	// IMP=0x000000010004ec24
- (long long)indexForPoint:(struct CGPoint)arg1;	// IMP=0x000000010004e9b0
- (void)processTouch:(struct CGPoint)arg1;	// IMP=0x000000010004e85c
- (id)explorationSegmentsForRoadsWithAngles:(id)arg1;	// IMP=0x000000010004e540
- (_Bool)processEvent:(id)arg1;	// IMP=0x000000010004e324
- (_Bool)handleVerbosityChangeIncreasing:(_Bool)arg1;	// IMP=0x000000010004e298
- (_Bool)handleSelection;	// IMP=0x000000010004e03c
- (_Bool)handleTracking:(struct CGPoint)arg1;	// IMP=0x000000010004de50
- (void)setActive:(_Bool)arg1;	// IMP=0x000000010004dcb0
- (void)endExploration;	// IMP=0x000000010004dc70
- (void)beginExploration;	// IMP=0x000000010004dbec
- (_Bool)explorationIsPending;	// IMP=0x000000010004dba0
- (_Bool)explorationIsActive;	// IMP=0x000000010004db54
- (id)currentIntersectionInformation;	// IMP=0x000000010004db00
- (void)updateCurrentLocation;	// IMP=0x000000010004dab0
- (void)updateExplorationSegments;	// IMP=0x000000010004d980
- (id)currentMap;	// IMP=0x000000010004d840
- (id)init;	// IMP=0x000000010004d72c

@end

