//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICMediaLibraryAccessPermissionsHelper-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSNumber, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MediaLibraryAccessRevocationController : NSObject <ICMediaLibraryAccessPermissionsHelper, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSNumber *_activeAccountDSID;	// 16 = 0x10
    NSDictionary *_cookieHeadersForRevokingMusicUserTokens;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_notificationCoalescingTimer;	// 32 = 0x20
    _Bool _isObservingNotificationsForDataNeededUponSignOut;	// 40 = 0x28
    NSDictionary *_identifiersOfApplicationsWithGrantedAccessToMediaLibraryIncludingTCCAcceptanceDates;	// 48 = 0x30
    int _tccAccessChangedNotificationToken;	// 56 = 0x38
    _Bool _isObservingTCCAccessChangedNotification;	// 60 = 0x3c
    NSXPCListener *_listener;	// 64 = 0x40
    NSMutableDictionary *_replyBlocksForPID;	// 72 = 0x48
}

+ (id)_identifiersOfApplicationsWithGrantedAccessToMediaLibrary;	// IMP=0x000000010008b690
+ (id)sharedController;	// IMP=0x000000010008a274
- (void).cxx_destruct;	// IMP=0x000000010008dd24
- (id)_storeRequestContextWithIdentity:(id)arg1 clientInfo:(id)arg2;	// IMP=0x000000010008db10
- (void)_updateDataNeededUponSignOut;	// IMP=0x000000010008d0d8
- (void)_stopObservingRevocations;	// IMP=0x000000010008cff8
- (void)_startObservingRevocations;	// IMP=0x000000010008cd3c
- (void)_notificationCoalescingTimerDidExpire;	// IMP=0x000000010008cca0
- (void)_scheduleUpdateOfDataNeededUponSignOut;	// IMP=0x000000010008cb04
- (void)_registerFailureToRevokeMusicUserTokensForApplicationsWithIdentifiers:(id)arg1 error:(id)arg2;	// IMP=0x000000010008ca1c
- (void)_revokeMusicUserTokensForApplicationWithIdentifier:(id)arg1 revokeMusicUserTokenURL:(id)arg2 identity:(id)arg3 explicitDSID:(id)arg4 explicitCookieHeaders:(id)arg5;	// IMP=0x000000010008c41c
- (void)_revokeMusicUserTokensForApplicationsWithIdentifiers:(id)arg1;	// IMP=0x000000010008bff8
- (void)_displayNotificationForBuildier:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010008be98
- (void)_checkForRecentRevocations;	// IMP=0x000000010008bb28
- (id)_identifiersOfApplicationsWithExpiredAccessToMediaLibrary;	// IMP=0x000000010008b8c4
- (void)validateExpirationForBundleIdentifier:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010008a89c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010008a540
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;	// IMP=0x000000010008a534
- (void)stopObservingRevocations;	// IMP=0x000000010008a4cc
- (void)startObservingRevocations;	// IMP=0x000000010008a464
- (void)dealloc;	// IMP=0x000000010008a3d8
- (id)_init;	// IMP=0x000000010008a2ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
