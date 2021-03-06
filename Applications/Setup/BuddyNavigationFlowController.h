//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BFFFlowDelegate-Protocol.h"
#import "BFFFlowItemDelegate-Protocol.h"
#import "BFFNavigationControllerDelegate-Protocol.h"
#import "BuddyNavigationFlowDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class BFFNavigationController, BYExpressSetupDataProvider, BuddyLanguageController, BuddyLocaleController, BuddyWiFiController, NSArray, NSMutableArray, NSPointerArray, NSString, ProximitySetupController, UIViewController;
@protocol BYEnvironmentComposite, BuddyActivationDelegate, BuddyFlowCloudConfigDelegate, BuddyFlowDelegate, BuddyLanguageLocaleDelegate, BuddyLifecycleDelegate, BuddyRestoreProvider;

@interface BuddyNavigationFlowController : NSObject <BFFFlowDelegate, BFFFlowItemDelegate, BFFNavigationControllerDelegate, BuddyNavigationFlowDelegate, UINavigationControllerDelegate>
{
    _Bool _tapFreeSetUp;	// 8 = 0x8
    id <BuddyFlowDelegate> _flowDelegate;	// 16 = 0x10
    id <BuddyActivationDelegate> _activationDelegate;	// 24 = 0x18
    id <BuddyLanguageLocaleDelegate> _languageLocaleDelegate;	// 32 = 0x20
    id <BuddyLifecycleDelegate> _lifecycleDelegate;	// 40 = 0x28
    id <BuddyFlowCloudConfigDelegate> _flowCloudConfigurationDelegate;	// 48 = 0x30
    ProximitySetupController *_proximitySetupController;	// 56 = 0x38
    BuddyLanguageController *_languageController;	// 64 = 0x40
    BuddyLocaleController *_localeController;	// 72 = 0x48
    BuddyWiFiController *_wifiController;	// 80 = 0x50
    BYExpressSetupDataProvider *_expressSetupDataProvider;	// 88 = 0x58
    BFFNavigationController *_navigationController;	// 96 = 0x60
    id <BuddyRestoreProvider> _restoreProvider;	// 104 = 0x68
    NSMutableArray *_buddyControllers;	// 112 = 0x70
    NSArray *_viewControllersToRemoveOnPush;	// 120 = 0x78
    NSPointerArray *_weakBuddyControllersPrecedingDeviceRestoreChoiceController;	// 128 = 0x80
    NSPointerArray *_weakViewControllersPrecedingDeviceRestoreChoiceController;	// 136 = 0x88
    UIViewController *_topViewControllerForRemoving;	// 144 = 0x90
    id <BYEnvironmentComposite> _composite;	// 152 = 0x98
}

+ (void)preheat;	// IMP=0x000000010002562c
- (void).cxx_destruct;	// IMP=0x000000010002e67c
@property(retain, nonatomic) id <BYEnvironmentComposite> composite; // @synthesize composite=_composite;
@property(getter=isTapFreeSetUp) _Bool tapFreeSetUp; // @synthesize tapFreeSetUp=_tapFreeSetUp;
@property(retain) UIViewController *topViewControllerForRemoving; // @synthesize topViewControllerForRemoving=_topViewControllerForRemoving;
@property(retain, nonatomic) NSPointerArray *weakViewControllersPrecedingDeviceRestoreChoiceController; // @synthesize weakViewControllersPrecedingDeviceRestoreChoiceController=_weakViewControllersPrecedingDeviceRestoreChoiceController;
@property(retain, nonatomic) NSPointerArray *weakBuddyControllersPrecedingDeviceRestoreChoiceController; // @synthesize weakBuddyControllersPrecedingDeviceRestoreChoiceController=_weakBuddyControllersPrecedingDeviceRestoreChoiceController;
@property(retain) NSArray *viewControllersToRemoveOnPush; // @synthesize viewControllersToRemoveOnPush=_viewControllersToRemoveOnPush;
@property(retain) NSMutableArray *buddyControllers; // @synthesize buddyControllers=_buddyControllers;
@property __weak id <BuddyRestoreProvider> restoreProvider; // @synthesize restoreProvider=_restoreProvider;
@property(retain) BFFNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) BYExpressSetupDataProvider *expressSetupDataProvider; // @synthesize expressSetupDataProvider=_expressSetupDataProvider;
@property(retain) BuddyWiFiController *wifiController; // @synthesize wifiController=_wifiController;
@property(retain) BuddyLocaleController *localeController; // @synthesize localeController=_localeController;
@property(retain) BuddyLanguageController *languageController; // @synthesize languageController=_languageController;
@property(retain) ProximitySetupController *proximitySetupController; // @synthesize proximitySetupController=_proximitySetupController;
@property __weak id <BuddyFlowCloudConfigDelegate> flowCloudConfigurationDelegate; // @synthesize flowCloudConfigurationDelegate=_flowCloudConfigurationDelegate;
@property __weak id <BuddyLifecycleDelegate> lifecycleDelegate; // @synthesize lifecycleDelegate=_lifecycleDelegate;
@property __weak id <BuddyLanguageLocaleDelegate> languageLocaleDelegate; // @synthesize languageLocaleDelegate=_languageLocaleDelegate;
@property __weak id <BuddyActivationDelegate> activationDelegate; // @synthesize activationDelegate=_activationDelegate;
@property __weak id <BuddyFlowDelegate> flowDelegate; // @synthesize flowDelegate=_flowDelegate;
- (id)injectedFlowForClass:(Class)arg1;	// IMP=0x000000010002e3d0
- (CDUnknownBlockType)environmentInjector;	// IMP=0x000000010002e2ac
- (void)_injectDependencies:(id)arg1 withComposite:(id)arg2;	// IMP=0x000000010002e17c
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 operation:(long long)arg3 animated:(_Bool)arg4;	// IMP=0x000000010002d374
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 operation:(long long)arg3 animated:(_Bool)arg4;	// IMP=0x000000010002d194
- (void)presentWiFiPaneForFlowItem:(id)arg1;	// IMP=0x000000010002d0ec
- (void)flowItemDone:(id)arg1 nextItemClass:(Class)arg2;	// IMP=0x000000010002d0d4
- (void)flowItemDone:(id)arg1 nextItem:(id)arg2;	// IMP=0x000000010002d07c
- (void)flowItemDone:(id)arg1;	// IMP=0x000000010002d064
- (void)flow:(id)arg1 finishedWithLastItem:(id)arg2 nextItem:(id)arg3;	// IMP=0x000000010002cf48
- (void)_ensureControllerExistsWithTarget:(id)arg1 viewControllerInsertionIndexGenerator:(CDUnknownBlockType)arg2 buddyControllerInsertionIndexGenerator:(CDUnknownBlockType)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000010002ca2c
- (id)_ensureDeviceProximitySetupControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002c770
- (id)_ensureDeviceRestoreChoiceControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002c2cc
- (id)_popToBuddyControllerWithClass:(Class)arg1 withOffset:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x000000010002c17c
- (id)popToBuddyControllerWithClass:(Class)arg1 withOffset:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x000000010002bd14
- (id)popToBuddyControllerWithClass:(Class)arg1 animated:(_Bool)arg2;	// IMP=0x000000010002bd00
- (void)removeViewControllersOnNextPush:(id)arg1;	// IMP=0x000000010002bbc0
- (void)pushFlowItem:(id)arg1 inFlow:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010002bb68
- (void)pushFlowItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010002bb54
- (_Bool)isFlowItemOnTop:(id)arg1;	// IMP=0x000000010002bac8
- (_Bool)_stackHasOnlyCloudConfigurationItems;	// IMP=0x000000010002b8f8
- (void)restartFlow;	// IMP=0x000000010002b52c
- (_Bool)_hasWiFiControllerInNavigationStack;	// IMP=0x000000010002b3d0
- (void)_insertWiFiControllerAsFirstPane;	// IMP=0x000000010002b28c
- (void)removeViewControllersFromNavHierarchyOnNextPush:(id)arg1;	// IMP=0x000000010002b160
- (void)removeViewControllerFromNavHierarchy:(id)arg1;	// IMP=0x000000010002b07c
- (void)_hideBackButtonIfNecessaryOnFlowItem:(id)arg1 withViewController:(id)arg2;	// IMP=0x000000010002ad6c
- (id)_viewControllerForBuddyController:(id)arg1;	// IMP=0x000000010002ace0
- (void)_presentViewControllerForBuddyController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100029eb4
- (void)_pushBuddyItem:(id)arg1 inFlow:(id)arg2 withExtendedInitialization:(_Bool)arg3 animated:(_Bool)arg4;	// IMP=0x0000000100029a2c
- (void)_pushBuddyItem:(id)arg1 inFlow:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000001000299d0
- (void)_disableInteractionWhilePerformingExtendedInitializationForBuddyItem:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100028e30
- (void)_flowItemDone:(id)arg1 flow:(id)arg2 nextItemClass:(Class)arg3 nextItem:(id)arg4;	// IMP=0x00000001000286d8
- (void)_addItems:(id)arg1 toFlow:(id)arg2;	// IMP=0x00000001000285e0
- (Class)_possibleNextFlowItemClassFollowingClass:(Class)arg1;	// IMP=0x0000000100027ad0
- (_Bool)_shouldTapFreeSetUpSkipControllerClass:(Class)arg1;	// IMP=0x0000000100027a84
- (_Bool)_doesTapFreeSetUpAffectsClass:(Class)arg1;	// IMP=0x0000000100027a38
- (id)_savedItemForClass:(Class)arg1;	// IMP=0x00000001000279d4
- (id)_createFlowItemForClass:(Class)arg1;	// IMP=0x00000001000277fc
- (id)_flowItemFollowingClass:(Class)arg1;	// IMP=0x000000010002746c
- (_Bool)isStartOverAllowed;	// IMP=0x00000001000272d0
- (_Bool)currentlyShowingActivationFlow;	// IMP=0x0000000100027250
- (void)handleDebugGesture;	// IMP=0x0000000100027164
- (void)activatedByComputer;	// IMP=0x00000001000270d4
- (void)setUpByComputer;	// IMP=0x0000000100026e9c
- (void)removeLanguageLocalePanes;	// IMP=0x0000000100026ae8
- (void)removeLanguagePane;	// IMP=0x000000010002683c
- (void)proceedPastLanguageLocalePane;	// IMP=0x00000001000267d4
- (void)updateLanguageLocale;	// IMP=0x0000000100026780
- (void)beginTapFreeSetUp;	// IMP=0x00000001000265cc
- (void)setupInitialFlow:(id)arg1;	// IMP=0x0000000100025788
- (id)initWithNavigationController:(id)arg1 usingRestoreProvider:(id)arg2 environmentComposite:(id)arg3;	// IMP=0x0000000100025690

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

