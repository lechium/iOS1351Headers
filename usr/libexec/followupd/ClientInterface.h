//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FLDaemonProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface ClientInterface : NSObject <FLDaemonProtocol>
{
    NSXPCConnection *_conn;	// 8 = 0x8
    NSString *_uniqueIdentifier;	// 16 = 0x10
}

+ (void)refreshBadgesWithItems:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00000001000050cc
+ (id)allApprovedItemsByBundle;	// IMP=0x0000000100004fa4
+ (id)_badgeQueue;	// IMP=0x0000000100003c10
- (void).cxx_destruct;	// IMP=0x0000000100005844
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)_telemetryProcessor;	// IMP=0x00000001000057cc
- (void)postHSA2PasswordResetNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000055d0
- (void)didActivateHSA2LoginNotificationNotification:(id)arg1;	// IMP=0x0000000100005560
- (void)tearDownHSA2LoginNotificationWithPushMessageID:(id)arg1;	// IMP=0x000000010000555c
- (void)postHSA2LoginCode:(id)arg1 withNotification:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005558
- (void)postHSA2PasswordChangeForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005554
- (void)postHSA2LoginNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005550
- (void)_didChangeFollowUpItems;	// IMP=0x0000000100004d6c
- (id)_predicateForClientIdentifier:(id)arg1;	// IMP=0x0000000100004c40
- (id)itemsForClientIdentifier:(id)arg1;	// IMP=0x0000000100004b34
- (void)clearPendingFollowUpItemsForClientIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000048a0
- (void)clearNotificationForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000045f4
- (void)clearPendingFollowUpItemsForClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004344
- (void)pendingFollowUpItemsForClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000042ac
- (void)postFollowUpItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003d4c
- (void)countOfPendingFollowUpItemsForClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003ca8
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0000000100003b60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
