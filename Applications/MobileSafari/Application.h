//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>

#import "MCProfileConnectionObserver-Protocol.h"
#import "PageLoadTestRunnerDelegate-Protocol.h"
#import "TabSnapshotCacheStressTestRunnerDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "UIApplicationDelegatePrivate-Protocol.h"
#import "WBDatabaseLockAcquisitorDelegate-Protocol.h"
#import "_SFDownloadDelegate-Protocol.h"
#import "_SFNavigationIntentHandling-Protocol.h"
#import "_SFUIApplicationModifierFlagsProviding-Protocol.h"

@class AutomationController, BookmarksDatabaseHealthReporter, BrowserController, BrowserWindowController, ForYouRecommendationMediator, NSArray, NSMutableArray, NSString, ReadingListLeadImageCache, SBSAssertion, UIWindow, WBDatabaseLockAcquisitor, WBSCloudHistory, WBSCyclerConnectionManager, WBSForYouRecentParsecResultsManager, WBSFormAutoFillCorrectionsHistoryObserver, WBSParsecABGroupManager;

@interface Application : UIApplication <PageLoadTestRunnerDelegate, TabSnapshotCacheStressTestRunnerDelegate, MCProfileConnectionObserver, UIApplicationDelegatePrivate, WBDatabaseLockAcquisitorDelegate, _SFDownloadDelegate, _SFUIApplicationModifierFlagsProviding, UIApplicationDelegate, _SFNavigationIntentHandling>
{
    _Bool _isReadingDefaults;	// 8 = 0x8
    _Bool _shouldReadDefaultsOnResume;	// 9 = 0x9
    _Bool _isRunningShowBookmarksTest;	// 10 = 0xa
    _Bool _startedBookmarksTest;	// 11 = 0xb
    _Bool _isRunningCanvasTest;	// 12 = 0xc
    _Bool _willEnterSuspendedState;	// 13 = 0xd
    _Bool _finishedLaunching;	// 14 = 0xe
    WBSCloudHistory *_cloudHistory;	// 16 = 0x10
    _Bool _resigningActive;	// 24 = 0x18
    NSString *_openURLOriginBundleIdentifier;	// 32 = 0x20
    WBSFormAutoFillCorrectionsHistoryObserver *_formAutoFillCorrectionsHistoryObserver;	// 40 = 0x28
    BookmarksDatabaseHealthReporter *_bookmarksDatabaseHealthReporter;	// 48 = 0x30
    unsigned long long _bookmarksDatabaseBackgroundTaskIdentifier;	// 56 = 0x38
    WBDatabaseLockAcquisitor *_bookmarksDatabaseBackgroundTaskLockAcquisitor;	// 64 = 0x40
    SBSAssertion *_wallpaperSuspensionAssertion;	// 72 = 0x48
    WBSCyclerConnectionManager *_cyclerConnectionManager;	// 80 = 0x50
    ReadingListLeadImageCache *_readingListImageCache;	// 88 = 0x58
    NSMutableArray *_activeDownloads;	// 96 = 0x60
    ForYouRecommendationMediator *_forYouRecommendationMediator;	// 104 = 0x68
    WBSForYouRecentParsecResultsManager *_forYouRecentParsecResultsManager;	// 112 = 0x70
    WBSParsecABGroupManager *_abGroupManager;	// 120 = 0x78
    long long _currentKeyboardModifierFlags;	// 128 = 0x80
    BrowserWindowController *_browserWindowController;	// 136 = 0x88
    AutomationController *_automationController;	// 144 = 0x90
    ForYouRecommendationMediator *_existingForYouRecommendationMediator;	// 152 = 0x98
}

+ (id)contextClient;	// IMP=0x00000001000115a0
+ (unsigned long long)systemMemorySize;	// IMP=0x000000010000e174
+ (void)initialize;	// IMP=0x000000010000ce84
+ (id)sharedApplication;	// IMP=0x000000010000ce74
+ (id)sharedTestRunner;	// IMP=0x000000010001eb20
+ (void)commandLineTestOption:(int)arg1 arg:(const char *)arg2;	// IMP=0x0000000100017348
+ (void)postTestNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000100021478
+ (void)postTestNotificationName:(id)arg1 object:(id)arg2;	// IMP=0x0000000100021424
- (void).cxx_destruct;	// IMP=0x00000001000116ac
@property(nonatomic) __weak ForYouRecommendationMediator *existingForYouRecommendationMediator; // @synthesize existingForYouRecommendationMediator=_existingForYouRecommendationMediator;
@property(readonly, nonatomic) AutomationController *automationController; // @synthesize automationController=_automationController;
@property(readonly, nonatomic) BrowserWindowController *browserWindowController; // @synthesize browserWindowController=_browserWindowController;
@property(readonly, nonatomic) long long currentKeyboardModifierFlags; // @synthesize currentKeyboardModifierFlags=_currentKeyboardModifierFlags;
- (void)handleNavigationIntent:(id)arg1;	// IMP=0x0000000100011630
- (void)dispatchNavigationIntent:(id)arg1;	// IMP=0x0000000100011624
- (void)_getBookmarksDataClassEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100011424
- (void)_updateCloudFeatureAvailability;	// IMP=0x0000000100011164
- (void)_resetCloudHistoryAccountIfNeeded;	// IMP=0x00000001000110d0
@property(readonly, nonatomic) _Bool isCloudHistoryEnabled;
- (void)downloadShouldContinueAfterReceivingResponse:(id)arg1 decisionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100010f74
- (void)downloadDidReceiveResponse:(id)arg1;	// IMP=0x0000000100010ea0
- (void)downloadDidStart:(id)arg1;	// IMP=0x0000000100010e50
- (void)downloadDidFail:(id)arg1;	// IMP=0x0000000100010e00
- (void)downloadDidFinish:(id)arg1;	// IMP=0x0000000100010d24
@property(readonly, nonatomic) WBSParsecABGroupManager *abGroupManager;
@property(readonly, nonatomic) WBSForYouRecentParsecResultsManager *forYouRecentParsecResultsManager;
- (id)createRecommendationMediatorOrReuseExistingOneIfPossible;	// IMP=0x0000000100010b40
- (void)_downloadDidStopNotification:(id)arg1;	// IMP=0x0000000100010ac0
- (void)_downloadDidStartNotification:(id)arg1;	// IMP=0x0000000100010a28
- (void)_export30DaysWorthOfHistoryAfterUpgrade;	// IMP=0x000000010001083c
@property(readonly, nonatomic) ReadingListLeadImageCache *readingListLeadImageCache;
- (void)_pruneExpiredScenes;	// IMP=0x00000001000106d8
- (void)application:(id)arg1 didDiscardSceneSessions:(id)arg2;	// IMP=0x00000001000106cc
- (void)applicationWillTerminate;	// IMP=0x00000001000080a0
- (void)_reportLaunchAnalyticsSoon;	// IMP=0x00000001000102ac
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000010000ee04
- (void)_handleHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010000ed50
- (void)updateTabCount;	// IMP=0x000000010000ece8
- (void)auditTabCount;	// IMP=0x000000010000ecac
- (_Bool)canAddNewTabForPrivateBrowsing:(_Bool)arg1;	// IMP=0x000000010000ec0c
@property(readonly, nonatomic) unsigned long long maximumTabCount;
- (unsigned long long)_maximumTabCount;	// IMP=0x000000010000eb00
- (unsigned long long)_numberOfTabsForPrivateBrowsing:(_Bool)arg1;	// IMP=0x000000010000e984
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010000e69c
- (void)_addDefaultsObserver;	// IMP=0x000000010000e380
- (void)_managedProfileConfigurationDidUpdate;	// IMP=0x000000010000e32c
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010000e320
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010000e314
- (void)_appleKeyboardsChanged:(id)arg1;	// IMP=0x000000010000e308
- (void)_reloadSearchEngines;	// IMP=0x000000010000e2a4
- (void)userDefaultsDidChange:(id)arg1;	// IMP=0x0000000100006804
- (void)handleKeyUIEvent:(id)arg1;	// IMP=0x000000010000e228
- (void)_saveBrowserState;	// IMP=0x000000010000e15c
- (void)didReceiveMemoryWarning;	// IMP=0x000000010000dfa0
- (void)databaseLockAcquisitor:(id)arg1 acquiredLock:(_Bool)arg2;	// IMP=0x000000010000dd5c
- (void)_performBookmarksDatabaseTasksInBackground;	// IMP=0x000000010000da54
- (void)_suspendOrResumeWallpaperAnimationIfNeeded;	// IMP=0x000000010000d9a4
- (void)_reportBookmarksDatabaseHealth;	// IMP=0x000000010000d950
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x000000010000d6a8
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x000000010000d554
- (void)_applicationDidBecomeActive:(id)arg1;	// IMP=0x000000010000d454
- (void)_applicationWillResignActive:(id)arg1;	// IMP=0x000000010000d384
- (void)_updateKeyboardCorrectionLearningAllowed;	// IMP=0x000000010000d2a0
- (void)saveChangesToCloudHistoryStore;	// IMP=0x000000010000d244
- (void)_applicationWillSuspend:(id)arg1;	// IMP=0x000000010000d224
- (void)_readDefaults;	// IMP=0x000000010000706c
@property(readonly, nonatomic) _Bool usesPrivateBrowsingModeInAnyWindow;
@property(readonly, nonatomic) _Bool usesDefaultBrowsingModeInAllWindows;
- (id)_browserControllerForExternalNavigation;	// IMP=0x000000010000cf8c
@property(readonly, nonatomic) BrowserController *primaryBrowserController;
@property(readonly, nonatomic) NSArray *browserControllers;
- (_Bool)runMemoryOrIOTestWithType:(unsigned long long)arg1;	// IMP=0x000000010002123c
- (_Bool)startHistoryLoadTest;	// IMP=0x00000001000210d4
- (id)_generateMemoryFootprintResults:(id)arg1;	// IMP=0x0000000100020810
- (_Bool)startHistoryTest;	// IMP=0x000000010002041c
- (_Bool)_resetHistoryWithCompressedDatabaseAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001fd90
- (void)_doSearchTestOnCVC:(id)arg1 WithTestStrings:(id)arg2 andDispatchGroup:(id)arg3;	// IMP=0x000000010001fa08
- (void)startSearchPerformanceUnifiedFieldKeyTimeTest;	// IMP=0x000000010001f5fc
- (void)startSearchPerformanceTestWithTestStrings:(id)arg1;	// IMP=0x000000010001ebe8
- (void)startSearchPerformanceTest;	// IMP=0x000000010001eb2c
- (_Bool)didStartBookmarksTest;	// IMP=0x000000010001eb0c
- (_Bool)isRunningCanvasTest;	// IMP=0x000000010000617c
- (_Bool)isRunningShowBookmarksTest;	// IMP=0x000000010000ac4c
- (void)runBookmarksViewTest;	// IMP=0x000000010001e8fc
- (void)_switchToBookmarksCollectionForTestNamed:(id)arg1;	// IMP=0x000000010001e674
- (id)_scrollViewForTestNamed:(id)arg1;	// IMP=0x000000010001e41c
- (void)_populateInMemoryBookmarksDBForTestNamed:(id)arg1;	// IMP=0x000000010001df6c
- (void)finishedBookmarksTest;	// IMP=0x000000010001de98
- (void)startBookmarksTest;	// IMP=0x000000010001ddf8
- (_Bool)prepareBookmarksTest;	// IMP=0x000000010001dd58
- (void)_runTabOverviewScrollPerfTest;	// IMP=0x000000010001d928
- (void)_runTabOverviewPresentingAndDismissalTest;	// IMP=0x000000010001d484
- (void)_runTabOverviewOpenNewTabTest;	// IMP=0x000000010001cec0
- (void)runTabOverviewTest;	// IMP=0x000000010001cc2c
- (void)_runTabBarSwitchTabTest;	// IMP=0x000000010001ca3c
- (_Bool)startTabBarTest;	// IMP=0x000000010001c558
- (id)_syntheticHTMLString;	// IMP=0x000000010001c54c
- (void)finishedCanvasTestWithURL:(id)arg1 forTabDocument:(id)arg2;	// IMP=0x000000010001c134
- (void)_pollCanvasTest:(id)arg1;	// IMP=0x000000010001c010
- (_Bool)startCanvasTest:(id)arg1;	// IMP=0x000000010001bee0
- (void)failedPurpleTestWithError:(id)arg1;	// IMP=0x000000010001be2c
- (void)finishedPurpleTest:(id)arg1;	// IMP=0x000000010001bd90
- (void)startedPurpleTest;	// IMP=0x0000000100009744
- (void)_runSidebarTest;	// IMP=0x000000010001b980
- (_Bool)startSidebarTest;	// IMP=0x000000010001b708
- (void)startTabViewScrollTest;	// IMP=0x000000010001b528
- (void)_prepareTabViewScrollTest;	// IMP=0x000000010001b4b8
- (void)prepareTabViewScrollTest;	// IMP=0x000000010001b450
- (void)startTabViewRotationTest;	// IMP=0x000000010001b358
- (void)_prepareTabViewRotationTest;	// IMP=0x000000010001b2bc
- (void)prepareTabViewRotationTest;	// IMP=0x000000010001b254
- (void)startTabViewCloseTest;	// IMP=0x000000010001afe0
- (void)_prepareTabViewCloseTest;	// IMP=0x000000010001af44
- (void)prepareTabViewCloseTest;	// IMP=0x000000010001aedc
- (void)startTabViewSelectTest;	// IMP=0x000000010001ad04
- (void)_prepareTabViewSelectTest;	// IMP=0x000000010001a874
- (void)prepareTabViewSelectTest;	// IMP=0x000000010001a80c
- (void)startTabViewOpenTest;	// IMP=0x000000010001a708
- (void)_prepareTabViewOpenTest;	// IMP=0x000000010001a1c4
- (void)prepareTabViewOpenTest;	// IMP=0x000000010001a15c
- (void)startTabViewBringUpTest;	// IMP=0x000000010001a09c
- (void)_prepareTabViewBringUpTest;	// IMP=0x0000000100019b3c
- (void)prepareTabViewBringUpTest;	// IMP=0x0000000100019ad4
- (void)_loadTabsForTesting:(unsigned long long)arg1 presentTabView:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000196ec
- (void)_preparePageLoadTestControllerParameters;	// IMP=0x0000000100019644
- (void)loadTabsForTesting:(unsigned long long)arg1 presentTabView:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001958c
- (void)loadTabsForTesting:(unsigned long long)arg1 presentTabView:(_Bool)arg2;	// IMP=0x00000001000193b0
- (void)runGeneratePasswordTest;	// IMP=0x0000000100019204
- (void)runLargeFormTypingTest;	// IMP=0x0000000100019148
- (void)_runFormTypingTextWithSetupScript:(id)arg1;	// IMP=0x0000000100018b6c
- (void)_typeTextInForm:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100018910
- (void)runLargeFormFocusTest;	// IMP=0x0000000100018760
- (void)_loadLargeForm:(CDUnknownBlockType)arg1;	// IMP=0x0000000100018748
- (void)_loadAlternateHTMLString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000184dc
- (void)loadBlankPageforKeyboardTests;	// IMP=0x00000001000183b8
- (void)startKeyboardRotationTest;	// IMP=0x0000000100018238
- (void)startKeyboardBringupTest;	// IMP=0x00000001000180b4
- (void)startKeyboardSplitAndMergeTest;	// IMP=0x0000000100017fb0
- (void)_observeNotificationOnce:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100017cf8
- (_Bool)runTest:(id)arg1 options:(id)arg2;	// IMP=0x00000001000072d8
- (id)_numberOption:(id)arg1;	// IMP=0x0000000100017b4c
- (void)checkExtendedLaunchPageLoad:(id)arg1 forTabDocument:(id)arg2;	// IMP=0x00000001000179b4
- (id)_extendLaunchTest;	// IMP=0x0000000100017998
- (_Bool)overrideBrowserStateForTestNamed:(id)arg1 browserController:(id)arg2;	// IMP=0x00000001000175b8
- (void)startCommandLineTest;	// IMP=0x000000010001750c
- (id)_browserControllerForApplicationTesting;	// IMP=0x00000001000172f4
- (void)pageLoadTestRunnerFinished:(id)arg1;	// IMP=0x00000001000213d8
- (void)tabSnapshotCacheStressTestRunnerDidFinish:(id)arg1;	// IMP=0x0000000100021608
- (void)runTabSnapshotCacheStressTest;	// IMP=0x0000000100021534

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
