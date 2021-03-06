//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKGameSessionService.h"

#import "GKGameSessionServicePrivate-Protocol.h"

@class NSString;

@interface GKGameSessionServicePrivate : GKGameSessionService <GKGameSessionServicePrivate>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x000000010012a574
+ (Class)interfaceClass;	// IMP=0x000000010012a568
- (oneway void)saveConnectionStateForLostPlayerWithCloudID:(id)arg1 sessionIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010012a878
- (oneway void)sendInvitePushForSessionWithID:(id)arg1 userMessage:(id)arg2 recipientIDs:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010012a6ec
- (oneway void)getFriendPlayersWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010012a638
- (oneway void)getZonesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010012a584
- (_Bool)requiresAuthentication;	// IMP=0x000000010012a57c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

