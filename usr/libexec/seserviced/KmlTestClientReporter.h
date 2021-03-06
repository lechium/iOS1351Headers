//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "KmlClientReporter-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface KmlTestClientReporter : NSObject <KmlClientReporter>
{
    CDUnknownBlockType _ownerCompletionHandler;	// 8 = 0x8
    CDUnknownBlockType _friendCompletionHandler;	// 16 = 0x10
    CDUnknownBlockType _friendInvitationHandler;	// 24 = 0x18
    CDUnknownBlockType _ownerInvitationRequestHandler;	// 32 = 0x20
    NSMutableSet *_invitationSet;	// 40 = 0x28
    NSMutableDictionary *_results;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100050c4c
- (void)didReceiveInvitationRequestWithUuid:(id)arg1 ownerKeyIdentifier:(id)arg2 friendKeyIdentifier:(id)arg3 targetType:(long long)arg4;	// IMP=0x0000000100050b90
- (void)sharingCompleteForInvitationIndentifier:(id)arg1 friendKeyIdentifier:(id)arg2 status:(id)arg3;	// IMP=0x0000000100050a54
- (void)requestAuthorizationForSharingInvitationIdentifier:(id)arg1;	// IMP=0x0000000100050a38
- (void)finishedSharingForKey:(id)arg1 result:(id)arg2;	// IMP=0x00000001000509c8
- (void)didReceiveSharingInvitationWithIdentifier:(id)arg1 uuid:(id)arg2 metadata:(id)arg3 ownerIdsId:(id)arg4;	// IMP=0x0000000100050928
- (void)registerOwnerSideInvitationRequestHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000508c0
- (void)registerOwnerSideSharingTestInvitations:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100050814
- (void)registerFriendSideSharingTestCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000507ac
- (void)registerFriendSideSharingTestInvitationHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100050744
- (void)cleanup;	// IMP=0x00000001000506fc
- (id)init;	// IMP=0x0000000100050658

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

