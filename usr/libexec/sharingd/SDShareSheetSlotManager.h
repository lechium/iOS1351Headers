//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCConnectionDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"
#import "SDPeopleBrowserDiffableDelegate-Protocol.h"
#import "SDShareSheetSlotManagerProtocol-Protocol.h"
#import "_UIActivityHelperDelegate-Protocol.h"

@class CAContext, NSMutableDictionary, NSSet, NSString, NSXPCConnection, NSXPCListener, _UIActivityUserDefaults;

__attribute__((visibility("hidden")))
@interface SDShareSheetSlotManager : NSObject <SDShareSheetSlotManagerProtocol, _UIActivityHelperDelegate, SDPeopleBrowserDiffableDelegate, NSXPCConnectionDelegate, NSXPCListenerDelegate>
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
    _Bool _activateCalled;	// 16 = 0x10
    _Bool _invalidateCalled;	// 17 = 0x11
    _Bool _invalidateDone;	// 18 = 0x12
    CAContext *_shareSheetContext;	// 24 = 0x18
    NSMutableDictionary *_personToImageSlot;	// 32 = 0x20
    NSMutableDictionary *_personToLabelSlot;	// 40 = 0x28
    NSMutableDictionary *_bundleIDToSmallImageSlot;	// 48 = 0x30
    NSMutableDictionary *_activityTypeToLargeImageSlot;	// 56 = 0x38
    NSMutableDictionary *_activityTypeToLabelSlot;	// 64 = 0x40
    NSMutableDictionary *_sessionIDToShareSheetSession;	// 72 = 0x48
    _UIActivityUserDefaults *_shareUserDefaults;	// 80 = 0x50
    _UIActivityUserDefaults *_actionUserDefaults;	// 88 = 0x58
    NSMutableDictionary *_slotIDToLabel;	// 96 = 0x60
    NSXPCConnection *_currentConnection;	// 104 = 0x68
    NSSet *_activeConnections;	// 112 = 0x70
}

+ (id)nonBreakingActivityTitle:(id)arg1;	// IMP=0x00000001001828c8
+ (id)sharedManager;	// IMP=0x000000010017c55c
- (void).cxx_destruct;	// IMP=0x000000010018c7fc
@property(copy, nonatomic) NSSet *activeConnections; // @synthesize activeConnections=_activeConnections;
@property(retain, nonatomic) NSXPCConnection *currentConnection; // @synthesize currentConnection=_currentConnection;
@property(retain, nonatomic) NSMutableDictionary *slotIDToLabel; // @synthesize slotIDToLabel=_slotIDToLabel;
@property(retain, nonatomic) _UIActivityUserDefaults *actionUserDefaults; // @synthesize actionUserDefaults=_actionUserDefaults;
@property(retain, nonatomic) _UIActivityUserDefaults *shareUserDefaults; // @synthesize shareUserDefaults=_shareUserDefaults;
@property(retain, nonatomic) NSMutableDictionary *sessionIDToShareSheetSession; // @synthesize sessionIDToShareSheetSession=_sessionIDToShareSheetSession;
@property(retain, nonatomic) NSMutableDictionary *activityTypeToLabelSlot; // @synthesize activityTypeToLabelSlot=_activityTypeToLabelSlot;
@property(retain, nonatomic) NSMutableDictionary *activityTypeToLargeImageSlot; // @synthesize activityTypeToLargeImageSlot=_activityTypeToLargeImageSlot;
@property(retain, nonatomic) NSMutableDictionary *bundleIDToSmallImageSlot; // @synthesize bundleIDToSmallImageSlot=_bundleIDToSmallImageSlot;
@property(retain, nonatomic) NSMutableDictionary *personToLabelSlot; // @synthesize personToLabelSlot=_personToLabelSlot;
@property(retain, nonatomic) NSMutableDictionary *personToImageSlot; // @synthesize personToImageSlot=_personToImageSlot;
@property(retain, nonatomic) CAContext *shareSheetContext; // @synthesize shareSheetContext=_shareSheetContext;
- (void)requestMessagesRecipientInfoForSessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010018c5b8
- (id)mailRecipientsForSessionID:(id)arg1;	// IMP=0x000000010018c504
- (id)accessibilityStringForSlotID:(unsigned int)arg1;	// IMP=0x000000010018c470
- (void)connectionInvalidated:(id)arg1;	// IMP=0x000000010018b454
- (void)connectionEstablished:(id)arg1;	// IMP=0x000000010018b370
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x000000010018b368
- (id)remoteObjectInterface;	// IMP=0x000000010018af9c
- (id)exportedInterface;	// IMP=0x000000010018ad78
- (id)machServiceName;	// IMP=0x000000010018ad6c
- (void)establishConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010018ac54
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x000000010018abdc
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010018a7e4
- (struct CGImage *)createNameLabelWithString:(id)arg1 textColor:(id)arg2 maximumNumberOfLines:(unsigned long long)arg3 isAirDrop:(_Bool)arg4 ignoreNameWrapping:(_Bool)arg5 session:(id)arg6;	// IMP=0x000000010018a65c
- (void)createAirDropProxyForNode:(id)arg1 session:(id)arg2;	// IMP=0x0000000100189ac8
- (void)browser:(id)arg1 didUpdatePeople:(id)arg2 deletedContactIdentifiers:(id)arg3;	// IMP=0x0000000100189478
- (void)configureAirDropNodesFromSuggestionNodes:(id)arg1 forSession:(id)arg2;	// IMP=0x00000001001882b4
- (unsigned int)createSlot;	// IMP=0x00000001001880a8
- (id)activityHelper:(id)arg1 predictionContextForSessionID:(id)arg2;	// IMP=0x0000000100187f68
- (id)activityHelper:(id)arg1 activitiesForActivityType:(id)arg2 matchingContext:(id)arg3 sessionID:(id)arg4;	// IMP=0x0000000100187cac
- (_Bool)activityHelper:(id)arg1 matchingWithContext:(id)arg2 shouldIncludeSystemActivityType:(id)arg3 sessionID:(id)arg4;	// IMP=0x0000000100187ca4
- (void)activateSuggestionBrowserForSession:(id)arg1 withExtensionMatchingDictionaries:(id)arg2 assetIdentifiers:(id)arg3;	// IMP=0x0000000100187728
- (void)_loadPresentableActivitiesForSession:(id)arg1;	// IMP=0x0000000100187680
- (void)_instructHostToPerformAirDropActivityWithNoContentView:(_Bool)arg1 session:(id)arg2;	// IMP=0x00000001001875fc
- (void)_instructHostToPerformHostActivity:(id)arg1 session:(id)arg2;	// IMP=0x000000010018741c
- (void)_instructHostToPerformShortcutActivity:(id)arg1 singleUseToken:(id)arg2 session:(id)arg3;	// IMP=0x00000001001873c4
- (void)_instructHostToPerformExtensionActivity:(id)arg1 session:(id)arg2;	// IMP=0x00000001001872a4
- (void)_instructHostToPerformUserDefaultsActivityForCategory:(long long)arg1 session:(id)arg2;	// IMP=0x000000010018659c
- (void)actionActivityUserDefaultsDidChangeWithSession:(id)arg1;	// IMP=0x0000000100185fd4
- (void)shareActivityUserDefaultsDidChangeWithSession:(id)arg1;	// IMP=0x00000001001859e0
- (void)activityViewControllerPerformEditActionsWithSessionID:(id)arg1;	// IMP=0x000000010018592c
- (void)activityViewControllerWillEnterForegroundWithSessionID:(id)arg1;	// IMP=0x0000000100185804
- (void)activityViewControllerDidEnterBackgroundWithSessionID:(id)arg1;	// IMP=0x00000001001856a8
- (void)activityViewControllerPerformedActivityWithInfoDictionary:(id)arg1;	// IMP=0x0000000100185594
- (void)activityViewControllerWithSessionID:(id)arg1 selectedDefaultActivityWithIdentifier:(id)arg2 activityCategory:(long long)arg3;	// IMP=0x0000000100185138
- (void)activityViewControllerWithSessionID:(id)arg1 updatedFavoritesProxies:(id)arg2 activityCategory:(long long)arg3;	// IMP=0x0000000100184ce4
- (void)activityViewControllerWithSessionID:(id)arg1 favoritedActivity:(_Bool)arg2 withIdentifier:(id)arg3 activityCategory:(long long)arg4;	// IMP=0x000000010018489c
- (void)activityViewControllerWithSessionID:(id)arg1 toggledActivityWithIdentifier:(id)arg2 activityCategory:(long long)arg3;	// IMP=0x000000010018464c
- (id)_activityWithActivityType:(id)arg1 session:(id)arg2;	// IMP=0x00000001001844b4
- (void)_performServiceInitiatedActivityInServiceWithActivity:(id)arg1 session:(id)arg2;	// IMP=0x00000001001842e4
- (void)activityViewControllerWithSessionID:(id)arg1 selectedPersonWithIdentifier:(id)arg2;	// IMP=0x0000000100183284
- (void)activityViewControllerWithSessionID:(id)arg1 selectedActionWithIdentifier:(id)arg2;	// IMP=0x0000000100182da4
- (void)activityViewControllerWithSessionID:(id)arg1 selectedActivityWithIdentifier:(id)arg2;	// IMP=0x0000000100182ae8
- (id)actionProxiesFromActivities:(id)arg1 withTintColor:(id)arg2 session:(id)arg3;	// IMP=0x0000000100181d3c
- (id)shareProxiesFromActivities:(id)arg1 session:(id)arg2;	// IMP=0x0000000100180fec
- (void)updateNearbyCountSlotIDForSession:(id)arg1;	// IMP=0x0000000100180c58
- (void)sendConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010017ecc8
- (void)connectToDaemonWithSessionID:(id)arg1 discoveryContext:(id)arg2 assetIdentifiers:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010017e63c
- (void)requestAirDropItemsForNode:(id)arg1 session:(id)arg2;	// IMP=0x000000010017e338
- (void)notifySession:(id)arg1 setProgress:(id)arg2 withTopText:(id)arg3 bottomText:(id)arg4 forNodeWithIdentifier:(id)arg5 shouldPulse:(id)arg6 animated:(_Bool)arg7;	// IMP=0x000000010017e1f8
- (void)notifySession:(id)arg1 personSelectedWithActivityType:(id)arg2;	// IMP=0x000000010017e0f0
- (void)notifySession:(id)arg1 shortcutSelectedWithBundleID:(id)arg2 singleUseToken:(id)arg3;	// IMP=0x000000010017e01c
- (void)notifySession:(id)arg1 activitySelected:(id)arg2;	// IMP=0x000000010017ddac
- (void)notifySession:(id)arg1 favoritesProxies:(id)arg2 suggestionProxies:(id)arg3 activityCategory:(long long)arg4;	// IMP=0x000000010017dc68
- (void)updateDataSourceForSession:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010017db94
- (id)configurationForDataSourceUpdateWithSession:(id)arg1;	// IMP=0x000000010017d8e4
- (id)_remoteObjectProxyForConnection:(id)arg1;	// IMP=0x000000010017d798
- (void)invalidate;	// IMP=0x000000010017d64c
- (void)activate;	// IMP=0x000000010017d4c8
- (void)transferUpdated:(id)arg1;	// IMP=0x000000010017c67c
- (id)init;	// IMP=0x000000010017c5c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

