//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BuddyActivationDelegate-Protocol.h"
#import "BuddyFlowCloudConfigDelegate-Protocol.h"
#import "BuddyFlowDelegate-Protocol.h"
#import "BuddyLanguageChangeObserverDelegate-Protocol.h"
#import "BuddyLanguageLocaleDelegate-Protocol.h"
#import "BuddyLifecycleDelegate-Protocol.h"
#import "BuddyNavigationFlowStartupProvider-Protocol.h"
#import "BuddyRestoreProvider-Protocol.h"
#import "EmergencyDialerDelegate-Protocol.h"
#import "FBSDisplayLayoutObserver-Protocol.h"
#import "WFBuddyViewControllerDelegate-Protocol.h"

@class BFFBackupDeviceController, BFFFlow, BFFNavigationController, BFFWindow, BYChronicle, BYExpressSetupDataProvider, BuddyLanguageChangeObserver, BuddyMenuController, BuddyMigrationLockscreenController, BuddyNavigationFlowController, BuddyPendingRestoreState, BuddyProximityPairingController, BuddyTargetDeviceMigrationManager, EmergencyDialer, NSArray, NSData, NSDate, NSString, NSTimer, PCPersistentTimer, ProximitySetupController, UIAlertController, UIViewController, WFNetworkListController;
@protocol BYEnvironmentComposite, BuddyNavigationFlowDelegate;

@interface SetupController : NSObject <BuddyNavigationFlowStartupProvider, BuddyRestoreProvider, BuddyFlowDelegate, BuddyActivationDelegate, BuddyLanguageLocaleDelegate, BuddyLifecycleDelegate, BuddyFlowCloudConfigDelegate, FBSDisplayLayoutObserver, WFBuddyViewControllerDelegate, EmergencyDialerDelegate, BuddyLanguageChangeObserverDelegate>
{
    BFFWindow *_window;	// 8 = 0x8
    UIAlertController *_homeButtonMenuController;	// 16 = 0x10
    NSString *_languageAtStartup;	// 24 = 0x18
    NSString *_localeIdentifierAtStartup;	// 32 = 0x20
    _Bool _shouldAnimateLocaleScreen;	// 40 = 0x28
    _Bool _shouldIgnoreiTunesLanguagePushOnResume;	// 41 = 0x29
    _Bool _buddyDone;	// 42 = 0x2a
    _Bool _userSelectedCellularActivation;	// 43 = 0x2b
    _Bool _appleIDConfigured;	// 44 = 0x2c
    PCPersistentTimer *_inactivityTimer;	// 48 = 0x30
    int _systemTimeUpdateStatus;	// 56 = 0x38
    EmergencyDialer *_emergencyDialer;	// 64 = 0x40
    struct SBSAlertItemsSuppressionAssertion *_sbAlertItemsSuppressionAssertion;	// 72 = 0x48
    BuddyLanguageChangeObserver *_languageObserver;	// 80 = 0x50
    NSTimer *_TFDEPPollTimer;	// 88 = 0x58
    _Bool _isTapFreeSetup;	// 96 = 0x60
    BFFNavigationController *_nav;	// 104 = 0x68
    BuddyMenuController *_menuButtonConsumer;	// 112 = 0x70
    _Bool _inMiniBuddyFromBreadcrumb;	// 120 = 0x78
    BFFFlow *_passcodeFlow;	// 128 = 0x80
    _Bool _connectedOverWiFi;	// 136 = 0x88
    _Bool _showWiFiInMenu;	// 137 = 0x89
    NSDate *_buddyStartDate;	// 144 = 0x90
    NSDate *_lockStartDate;	// 152 = 0x98
    double _cumulativeLockedDuration;	// 160 = 0xa0
    NSArray *_relevantGreenKeys;	// 168 = 0xa8
    int _greenPlistState;	// 176 = 0xb0
    _Bool _wifiControllerInAdvancedMode;	// 180 = 0xb4
    _Bool _networkReachable;	// 181 = 0xb5
    _Bool _userSkippedWiFi;	// 182 = 0xb6
    _Bool _remoteManagementDeviceEnrollmentOccurred;	// 183 = 0xb7
    _Bool _deviceRestoreChoiceIsiCloudRestore;	// 184 = 0xb8
    _Bool _markBuddyCompleteDidRun;	// 185 = 0xb9
    _Bool _shouldRereadCloudConfigurationForControllersToSkip;	// 186 = 0xba
    _Bool _applyingProximitySettings;	// 187 = 0xbb
    BYExpressSetupDataProvider *_expressSetupDataProvider;	// 192 = 0xc0
    id <BuddyNavigationFlowDelegate> _navigationFlowDelegate;	// 200 = 0xc8
    BYChronicle *_chronicle;	// 208 = 0xd0
    NSString *_iCloudAppleIdFromActivation;	// 216 = 0xd8
    ProximitySetupController *_proximitySetupController;	// 224 = 0xe0
    BFFBackupDeviceController *_backupDeviceController;	// 232 = 0xe8
    BuddyTargetDeviceMigrationManager *_migrationManager;	// 240 = 0xf0
    BuddyMigrationLockscreenController *_migrationLockscreenController;	// 248 = 0xf8
    BuddyPendingRestoreState *_pendingRestoreState;	// 256 = 0x100
    BuddyNavigationFlowController *_navigationFlowController;	// 264 = 0x108
    NSArray *_viewControllersToRemoveOnPush;	// 272 = 0x110
    UIViewController *_topViewControllerForRemoving;	// 280 = 0x118
    id _cloudConfigurationChangeNotificationObserver;	// 288 = 0x120
    WFNetworkListController *_modalWifiManager;	// 296 = 0x128
    BuddyProximityPairingController *_proximityPairingController;	// 304 = 0x130
    NSData *_defaultAccessibilitySettings;	// 312 = 0x138
    id <BYEnvironmentComposite> _composite;	// 320 = 0x140
}

+ (void)localeCheck:(double)arg1;	// IMP=0x0000000100010a74
+ (id)sharedSetupController;	// IMP=0x0000000100004a90
+ (void)initialize;	// IMP=0x0000000100004a60
- (void).cxx_destruct;	// IMP=0x0000000100010e30
@property(retain, nonatomic) id <BYEnvironmentComposite> composite; // @synthesize composite=_composite;
@property(nonatomic) _Bool applyingProximitySettings; // @synthesize applyingProximitySettings=_applyingProximitySettings;
@property(retain, nonatomic) NSData *defaultAccessibilitySettings; // @synthesize defaultAccessibilitySettings=_defaultAccessibilitySettings;
@property(retain, nonatomic) BuddyProximityPairingController *proximityPairingController; // @synthesize proximityPairingController=_proximityPairingController;
@property(retain, nonatomic) WFNetworkListController *modalWifiManager; // @synthesize modalWifiManager=_modalWifiManager;
@property(retain, nonatomic) id cloudConfigurationChangeNotificationObserver; // @synthesize cloudConfigurationChangeNotificationObserver=_cloudConfigurationChangeNotificationObserver;
@property(nonatomic) _Bool shouldRereadCloudConfigurationForControllersToSkip; // @synthesize shouldRereadCloudConfigurationForControllersToSkip=_shouldRereadCloudConfigurationForControllersToSkip;
@property(retain, nonatomic) UIViewController *topViewControllerForRemoving; // @synthesize topViewControllerForRemoving=_topViewControllerForRemoving;
@property(copy, nonatomic) NSArray *viewControllersToRemoveOnPush; // @synthesize viewControllersToRemoveOnPush=_viewControllersToRemoveOnPush;
@property(nonatomic) _Bool markBuddyCompleteDidRun; // @synthesize markBuddyCompleteDidRun=_markBuddyCompleteDidRun;
@property(retain, nonatomic) BuddyNavigationFlowController *navigationFlowController; // @synthesize navigationFlowController=_navigationFlowController;
@property(retain, nonatomic) BuddyPendingRestoreState *pendingRestoreState; // @synthesize pendingRestoreState=_pendingRestoreState;
@property(retain, nonatomic) BuddyMigrationLockscreenController *migrationLockscreenController; // @synthesize migrationLockscreenController=_migrationLockscreenController;
@property(retain, nonatomic) BuddyTargetDeviceMigrationManager *migrationManager; // @synthesize migrationManager=_migrationManager;
@property(retain) BFFBackupDeviceController *backupDeviceController; // @synthesize backupDeviceController=_backupDeviceController;
@property(retain) ProximitySetupController *proximitySetupController; // @synthesize proximitySetupController=_proximitySetupController;
@property(nonatomic) _Bool deviceRestoreChoiceIsiCloudRestore; // @synthesize deviceRestoreChoiceIsiCloudRestore=_deviceRestoreChoiceIsiCloudRestore;
@property(copy, nonatomic) NSString *iCloudAppleIdFromActivation; // @synthesize iCloudAppleIdFromActivation=_iCloudAppleIdFromActivation;
@property(nonatomic) _Bool remoteManagementDeviceEnrollmentOccurred; // @synthesize remoteManagementDeviceEnrollmentOccurred=_remoteManagementDeviceEnrollmentOccurred;
@property(retain, nonatomic) BYChronicle *chronicle; // @synthesize chronicle=_chronicle;
@property __weak id <BuddyNavigationFlowDelegate> navigationFlowDelegate; // @synthesize navigationFlowDelegate=_navigationFlowDelegate;
@property(retain, nonatomic) BYExpressSetupDataProvider *expressSetupDataProvider; // @synthesize expressSetupDataProvider=_expressSetupDataProvider;
@property(nonatomic) _Bool userSelectedCellularActivation; // @synthesize userSelectedCellularActivation=_userSelectedCellularActivation;
@property(nonatomic) _Bool userSkippedWiFi; // @synthesize userSkippedWiFi=_userSkippedWiFi;
@property(readonly, nonatomic, getter=isNetworkReachable) _Bool networkReachable; // @synthesize networkReachable=_networkReachable;
- (void)handleDebugGesture;	// IMP=0x0000000100010c14
- (void)setAppleIDConfigured;	// IMP=0x0000000100010c08
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;	// IMP=0x00000001000109ac
- (_Bool)isLanguageSet;	// IMP=0x00000001000108e0
- (_Bool)shouldBeginMigration;	// IMP=0x00000001000108cc
- (_Bool)shouldBeginRestore;	// IMP=0x00000001000108b8
- (_Bool)airplaneModeEnabled;	// IMP=0x0000000100010874
- (unsigned long long)startupCause;	// IMP=0x00000001000106dc
- (unsigned long long)restoreType;	// IMP=0x00000001000106c0
- (void)endLifecycleDueToCause:(unsigned long long)arg1;	// IMP=0x00000001000101c8
- (void)willEndLifecycleDueToCause:(unsigned long long)arg1;	// IMP=0x0000000100010110
- (_Bool)shouldEndLifecycleForCause:(unsigned long long)arg1;	// IMP=0x0000000100010088
- (_Bool)languageLocalePaneCompleted;	// IMP=0x000000010001007c
- (void)activationPaneCompleted;	// IMP=0x0000000100010078
- (_Bool)_writeGreenFileToDisk:(id)arg1 desiredPlistState:(int)arg2;	// IMP=0x000000010000fe10
- (unsigned long long)_greenEffectivePlaceForLocaleCountryCode:(id)arg1;	// IMP=0x000000010000fcac
- (id)_extractGreenValuesFromServerPlist:(id)arg1 forGreenEffectivePlace:(unsigned long long)arg2 desiredPlistState:(int)arg3;	// IMP=0x000000010000fb68
- (id)_greenRegionCode;	// IMP=0x000000010000fab8
- (void)_writeGreenInformedDefaultPlistIfNecessaryForLocaleCountryCode:(id)arg1;	// IMP=0x000000010000f540
- (void)_writeGreenInformedDefaultPlistIfNecessary;	// IMP=0x000000010000f4c4
- (void)_initializeGreen;	// IMP=0x000000010000f29c
- (_Bool)_canShortCircuitGreen;	// IMP=0x000000010000f294
- (void)disableTapFreeSetUp;	// IMP=0x000000010000f27c
- (void)didRestartFlow;	// IMP=0x000000010000f200
- (_Bool)willRestartFlow;	// IMP=0x000000010000ed94
- (_Bool)doesRestartFlowCauseErase;	// IMP=0x000000010000ece8
- (void)setNeedsConfigurationUpdate;	// IMP=0x000000010000eca0
- (void)startDeviceMigration;	// IMP=0x000000010000e9ac
- (void)prepareForDeviceMigrationAfterSoftwareUpdate:(_Bool)arg1;	// IMP=0x000000010000e558
- (void)prepareForDeviceMigration;	// IMP=0x000000010000e548
- (void)endAdvertisingProximitySetup;	// IMP=0x000000010000e470
- (void)connectedToWiFiAfterProximity;	// IMP=0x000000010000e3e4
- (void)skippedApplyProximitySettings;	// IMP=0x000000010000e320
- (void)unableToApplyProximitySettings;	// IMP=0x000000010000e17c
- (void)didApplyProximitySettings;	// IMP=0x000000010000e060
- (void)willApplyProximitySettings:(CDUnknownBlockType)arg1;	// IMP=0x000000010000df34
- (void)willPerformProximityHandshake;	// IMP=0x000000010000dde0
- (void)dismissProximityPinCode;	// IMP=0x000000010000dc28
- (void)displayProximityPinCode:(id)arg1 language:(id)arg2 visual:(_Bool)arg3 accessibilitySettings:(id)arg4;	// IMP=0x000000010000d8c0
- (_Bool)updateLanguageLocale;	// IMP=0x000000010000cc94
- (void)_localeChanged;	// IMP=0x000000010000cabc
- (void)_activationStateChanged;	// IMP=0x000000010000c850
- (_Bool)_restoreFromBackupJustFinished;	// IMP=0x000000010000c6f4
- (_Bool)_didRestoreIniTunes;	// IMP=0x000000010000c69c
- (void)userDidChooseLanguage;	// IMP=0x000000010000c4f8
- (void)_languageChangeAlertDone;	// IMP=0x000000010000c394
- (void)_showMiniAlertWithRestart:(_Bool)arg1 withLanguage:(id)arg2;	// IMP=0x000000010000c094
- (void)_animateControllerGroup;	// IMP=0x000000010000bedc
- (void)_setupStateChanged;	// IMP=0x000000010000bd54
- (void)_setupSnapshotRemoved;	// IMP=0x000000010000bc74
- (void)dialerDidDismiss:(id)arg1;	// IMP=0x000000010000bb90
- (void)_removeSBAlertItemsSupressionAssertion;	// IMP=0x000000010000bb0c
- (void)_addSBAlertItemsSupressionAssertion;	// IMP=0x000000010000ba80
- (void)_modalWifiControllerDone:(id)arg1;	// IMP=0x000000010000ba38
- (void)showModalWiFiSettings;	// IMP=0x000000010000b5a8
- (void)menuButtonPressed;	// IMP=0x000000010000a544
- (void)dismissAlert:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000a490
- (void)dismissAlert:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010000a480
- (_Bool)isAlertPresented:(id)arg1;	// IMP=0x000000010000a3cc
- (void)showAlert:(id)arg1;	// IMP=0x000000010000a284
- (void)respring;	// IMP=0x000000010000a1a0
- (void)observer:(id)arg1 didObserveLanguageChange:(_Bool)arg2 localeChange:(_Bool)arg3;	// IMP=0x0000000100009eb4
- (void)removeSeenOnBoardingAssets;	// IMP=0x0000000100009af8
- (void)prepareForMigrationReboot;	// IMP=0x0000000100009a68
- (void)prepareForCloudRestoreReboot;	// IMP=0x00000001000099d8
- (void)exitBuddyForDemoSetUp;	// IMP=0x0000000100009948
- (void)didMarkBuddyComplete;	// IMP=0x000000010000978c
- (void)markBuddyComplete;	// IMP=0x00000001000092ec
- (void)willMarkBuddyComplete;	// IMP=0x0000000100008f54
- (void)terminate;	// IMP=0x0000000100008e18
- (void)willTerminate;	// IMP=0x0000000100008db0
- (void)didEnterBackground;	// IMP=0x0000000100008c24
- (void)willResignActive;	// IMP=0x0000000100008b28
- (void)didBecomeActive;	// IMP=0x000000010000858c
- (_Bool)shouldTapFreeSetupSkipControllerClass:(Class)arg1;	// IMP=0x0000000100008570
- (_Bool)doesTapFreeSetupAffectsClass:(Class)arg1;	// IMP=0x0000000100008524
- (void)TFDEPPollTimerFired:(id)arg1;	// IMP=0x00000001000083f0
- (_Bool)isTeslaEnrolled;	// IMP=0x0000000100008340
- (void)stopTFDEPPolling;	// IMP=0x00000001000082ac
- (void)startTFDEPPolling;	// IMP=0x00000001000081f0
- (_Bool)startedInFakeMode;	// IMP=0x00000001000081e8
- (_Bool)networkReachable;	// IMP=0x00000001000081e0
@property(nonatomic, getter=isConnectedOverWiFi) _Bool connectedOverWiFi;
- (int)systemTimeUpdateStatus;	// IMP=0x00000001000081a4
- (void)_setSystemTime;	// IMP=0x0000000100007ec8
- (void)updateLoadingStatus;	// IMP=0x0000000100007e8c
- (void)_refreshLanguage;	// IMP=0x0000000100007dd8
- (void)checkForUpdatedCarrierBundle;	// IMP=0x0000000100007d78
- (void)_reachabilityChanged:(id)arg1;	// IMP=0x0000000100007a9c
- (void)buddyViewControllerDidPressAlternateSetupButton:(id)arg1;	// IMP=0x0000000100007a98
- (void)run;	// IMP=0x0000000100006834
- (void)checkMiniBuddyBreadcrumbs;	// IMP=0x0000000100006424
- (void)_createNavInAirplaneMode:(_Bool)arg1;	// IMP=0x000000010000590c
- (void)_resumeDurationAnalyticsAfterLanguageChange;	// IMP=0x0000000100005828
- (void)_stashDurationAnalyticsBeforeLanguageChange;	// IMP=0x00000001000057b4
- (_Bool)_isBackInBuddyAfterRestoreFromBackup:(_Bool)arg1;	// IMP=0x00000001000056c0
- (_Bool)_isBackInBuddyForActivationOnly;	// IMP=0x00000001000055b8
- (_Bool)_hasLocaleAndLanguage;	// IMP=0x00000001000054d4
- (id)navigationController;	// IMP=0x00000001000054cc
- (_Bool)isFirstRunWithoutCloudConfiguration;	// IMP=0x0000000100005468
- (void)batteryStateDidChange;	// IMP=0x0000000100005434
- (void)_inactivityTimerFired:(id)arg1;	// IMP=0x0000000100005340
- (void)checkAndStartInactivityTimer;	// IMP=0x0000000100004f30
- (void)stopInactivityTimer;	// IMP=0x0000000100004e9c
- (void)dealloc;	// IMP=0x0000000100004dfc
- (id)init;	// IMP=0x0000000100004ad4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
