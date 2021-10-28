//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXElementFetcherDelegate-Protocol.h"
#import "AXElementFetcherObserver-Protocol.h"
#import "HNDAccessibilityManagerProtocol-Protocol.h"

@class AXDispatchTimer, AXElement, AXElementFetcher, AXElementGroup, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HNDAccessibilityManager : NSObject <AXElementFetcherDelegate, AXElementFetcherObserver, HNDAccessibilityManagerProtocol>
{
    NSObject<OS_dispatch_queue> *_appTransitionQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_ignoredTouchRegionsQueue;	// 16 = 0x10
    NSMutableDictionary *_pauseCountsByPid;	// 24 = 0x18
    _Bool _isPausingScanning;	// 32 = 0x20
    _Bool _initialized;	// 33 = 0x21
    struct __AXObserver *_observer;	// 40 = 0x28
    AXDispatchTimer *_elementFetchQueueTimer;	// 48 = 0x30
    AXElementFetcher *_elementFetcher;	// 56 = 0x38
    NSString *_springboardActionIdentifier;	// 64 = 0x40
    NSMutableArray *_accessibilityObservers;	// 72 = 0x48
    NSDate *_lastAppTransitionTime;	// 80 = 0x50
    AXElementGroup *_rootScannerGroup;	// 88 = 0x58
    AXElement *_axOrbPreviewWindow;	// 96 = 0x60
    NSArray *_currentApplications;	// 104 = 0x68
    NSArray *_ignoredTouchRegions;	// 112 = 0x70
    NSArray *__testingElements;	// 120 = 0x78
}

+ (void)_clearExistingSharedManager;	// IMP=0x00000001000586fc
+ (id)_existingSharedManager;	// IMP=0x00000001000586f0
+ (id)sharedManager;	// IMP=0x0000000100053434
- (void).cxx_destruct;	// IMP=0x0000000100058804
@property(retain, nonatomic, setter=_setTestingElements:) NSArray *_testingElements; // @synthesize _testingElements=__testingElements;
@property(retain, nonatomic) NSArray *ignoredTouchRegions; // @synthesize ignoredTouchRegions=_ignoredTouchRegions;
@property(retain, nonatomic) NSArray *currentApplications; // @synthesize currentApplications=_currentApplications;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property(nonatomic) _Bool isPausingScanning; // @synthesize isPausingScanning=_isPausingScanning;
@property(retain, nonatomic) AXElement *axOrbPreviewWindow; // @synthesize axOrbPreviewWindow=_axOrbPreviewWindow;
@property(retain, nonatomic) AXElementGroup *rootScannerGroup; // @synthesize rootScannerGroup=_rootScannerGroup;
@property(retain, nonatomic) NSDate *lastAppTransitionTime; // @synthesize lastAppTransitionTime=_lastAppTransitionTime;
@property(retain, nonatomic) NSMutableArray *accessibilityObservers; // @synthesize accessibilityObservers=_accessibilityObservers;
@property(retain, nonatomic) NSString *springboardActionIdentifier; // @synthesize springboardActionIdentifier=_springboardActionIdentifier;
@property(retain, nonatomic) AXElementFetcher *elementFetcher; // @synthesize elementFetcher=_elementFetcher;
@property(retain, nonatomic) AXDispatchTimer *elementFetchQueueTimer; // @synthesize elementFetchQueueTimer=_elementFetchQueueTimer;
@property(nonatomic) struct __AXObserver *observer; // @synthesize observer=_observer;
- (void)fetcher:(id)arg1 mediaDidBegin:(struct __CFData *)arg2;	// IMP=0x00000001000586e0
- (void)fetcher:(id)arg1 screenWillChange:(struct __CFData *)arg2;	// IMP=0x00000001000586d0
- (void)fetcher:(id)arg1 applicationWasActivated:(id)arg2;	// IMP=0x00000001000586c0
- (void)fetcher:(id)arg1 updateElementVisuals:(id)arg2;	// IMP=0x00000001000586b0
- (void)fetcher:(id)arg1 nativeFocusElementDidChange:(id)arg2;	// IMP=0x00000001000586a0
- (void)fetcher:(id)arg1 didFetchElementsForEvent:(unsigned long long)arg2 foundNewElements:(_Bool)arg3;	// IMP=0x0000000100057fbc
- (void)fetcher:(id)arg1 willFetchElementsForEvent:(unsigned long long)arg2 fromApplications:(id)arg3;	// IMP=0x0000000100057ea8
- (void)fetcher:(id)arg1 didScheduleFetchEvent:(unsigned long long)arg2;	// IMP=0x0000000100057e6c
- (_Bool)isSystemSleeping:(id)arg1;	// IMP=0x0000000100057e18
- (struct CGRect)screenFrame:(id)arg1;	// IMP=0x0000000100057e04
- (void)userDidPerformSwitchAction;	// IMP=0x0000000100057c80
- (void)speechEnabledDidChange;	// IMP=0x0000000100057c0c
- (void)groupingEnabledDidChange;	// IMP=0x0000000100057b98
- (long long)_hndAccessibilityEventForFetchEvent:(unsigned long long)arg1;	// IMP=0x0000000100057b10
- (id)scannerElementMatchingElement:(id)arg1;	// IMP=0x0000000100057a0c
- (id)lastKeyboardElement;	// IMP=0x000000010005781c
- (id)firstKeyboardItem;	// IMP=0x0000000100057748
- (id)previousItemForScanningFromItem:(id)arg1 didWrap:(_Bool *)arg2;	// IMP=0x0000000100057734
- (id)nextItemForScanningFromItem:(id)arg1 didWrap:(_Bool *)arg2;	// IMP=0x0000000100057720
- (id)_itemForScanningFromItem:(id)arg1 inDirection:(_Bool)arg2 didWrap:(_Bool *)arg3;	// IMP=0x00000001000573c4
- (id)lastItemForScanningWithElementCommunity:(id)arg1;	// IMP=0x00000001000573b4
- (id)firstItemForScanningWithElementCommunity:(id)arg1;	// IMP=0x00000001000573a4
- (id)_itemForScanningWithElementCommunity:(id)arg1 useFirst:(_Bool)arg2;	// IMP=0x0000000100057114
- (id)scrollViewsForAction:(int)arg1 elementsToScroll:(id *)arg2;	// IMP=0x0000000100056cd0
- (id)elementsForMatchingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100056a10
- (id)scrollViewsForAction:(int)arg1;	// IMP=0x0000000100056a00
- (id)firstResponder;	// IMP=0x00000001000568bc
- (id)findGroupableMatchingGroupable:(id)arg1;	// IMP=0x000000010005683c
- (id)elementAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000100056770
- (id)rootKeyboardGroup;	// IMP=0x000000010005671c
- (id)lastScannerGroupable;	// IMP=0x0000000100056668
- (id)firstScannerGroupable;	// IMP=0x00000001000565b4
- (id)lastScannerElement;	// IMP=0x0000000100056538
- (id)firstScannerElement;	// IMP=0x00000001000564bc
- (id)nativeFocusElement;	// IMP=0x0000000100056468
- (id)elements;	// IMP=0x0000000100056414
- (void)_handleResumeForPid:(int)arg1;	// IMP=0x0000000100055fb4
- (void)_handlePauseForPid:(int)arg1;	// IMP=0x00000001000559a8
- (id)_currentAppPids;	// IMP=0x00000001000557bc
- (id)_pauseReasonForPid:(int)arg1;	// IMP=0x0000000100055784
- (void)_requestResumeScanning;	// IMP=0x0000000100055630
- (void)_requestPauseScanning;	// IMP=0x00000001000554dc
- (void)_handleRefreshEvent:(long long)arg1 data:(id)arg2;	// IMP=0x00000001000554d0
- (void)_handleKeyboardPopupAppeared;	// IMP=0x00000001000554bc
- (void)_handleScrolledByPage;	// IMP=0x00000001000554a8
- (void)_handleScreenLocked;	// IMP=0x0000000100055494
- (void)_handleScreenChanged;	// IMP=0x0000000100055480
- (void)_handleAnnouncementNotification:(id)arg1;	// IMP=0x0000000100055310
- (void)_handleOrientationChanged;	// IMP=0x00000001000552fc
- (void)_handleAlertAppeared;	// IMP=0x00000001000552e8
- (void)_handleLayoutChanged;	// IMP=0x00000001000552d4
- (_Bool)willFetchElements;	// IMP=0x0000000100055288
- (_Bool)isFetchingElements;	// IMP=0x000000010005523c
- (void)refreshElements;	// IMP=0x00000001000551fc
- (_Bool)hasZeroElements;	// IMP=0x0000000100055128
- (_Bool)applicationIsRTL;	// IMP=0x000000010005508c
- (_Bool)frontmostAppMayBeLoading;	// IMP=0x0000000100054fec
- (void)_handleSystemServerDied;	// IMP=0x0000000100054f08
- (void)_handleFirstResponderChanged;	// IMP=0x0000000100054ef4
- (void)_observeNotifications:(_Bool)arg1;	// IMP=0x0000000100054b54
- (_Bool)_isElementInIgnoredTouchRegions:(id)arg1;	// IMP=0x00000001000547c4
- (void)_initializeAccessibility;	// IMP=0x00000001000541d4
- (void)_enableApplicationAccessibility:(_Bool)arg1;	// IMP=0x0000000100054184
- (void)_notifyObserversMediaDidBegin:(struct __CFData *)arg1;	// IMP=0x000000010005403c
- (void)_notifyObserversScreenWillChange:(struct __CFData *)arg1;	// IMP=0x0000000100053ef4
- (void)_notifyObserversApplicationWasActivated:(id)arg1;	// IMP=0x0000000100053d98
- (void)_notifyObserversUpdateElementVisuals:(id)arg1;	// IMP=0x0000000100053c3c
- (void)_notifyObserversNativeFocusElementDidChange:(id)arg1;	// IMP=0x0000000100053ae0
- (void)_notifyObserversDidFetchElementsForEvent:(long long)arg1 foundNewElements:(_Bool)arg2;	// IMP=0x0000000100053990
- (void)_notifyObserversWillFetchElementsForEvent:(long long)arg1;	// IMP=0x0000000100053848
- (void)_notifyObserversDidScheduleFetchEvent:(long long)arg1;	// IMP=0x0000000100053700
- (void)_notifyObserversDidReceiveEvent:(long long)arg1 data:(id)arg2;	// IMP=0x000000010005359c
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100053530
- (void)addObserver:(id)arg1;	// IMP=0x00000001000534b8
- (void)_initialize;	// IMP=0x0000000100052e68
- (void)dealloc;	// IMP=0x0000000100052d7c
- (_Bool)_elementFetchingRequired;	// IMP=0x0000000100052d18
@property(readonly, nonatomic) _Bool _isSpeechEnabled;
@property(readonly, nonatomic) _Bool _isScannerEnabled;
@property(readonly, nonatomic) _Bool _isGroupingEnabled;
- (id)orbPreviewWindow;	// IMP=0x0000000100052ba4
- (void)updateCachedOrbPreviewWindow:(id)arg1;	// IMP=0x000000010005295c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
