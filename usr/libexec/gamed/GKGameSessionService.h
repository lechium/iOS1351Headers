//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKGameSessionService-Protocol.h"

@class NSString;

@interface GKGameSessionService : GKService <GKGameSessionService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x000000010012755c
+ (Class)interfaceClass;	// IMP=0x0000000100127550
- (id)actualIdentifiersForObsfucatedPlayerIDs:(id)arg1 inSession:(id)arg2;	// IMP=0x000000010012a3cc
- (oneway void)sendMessageForSessionWithID:(id)arg1 withLocalizedFormatKey:(id)arg2 arguments:(id)arg3 userMessage:(id)arg4 data:(id)arg5 recipientIDs:(id)arg6 badgePlayers:(_Bool)arg7 handler:(CDUnknownBlockType)arg8;	// IMP=0x0000000100129d4c
- (oneway void)setBadged:(_Bool)arg1 forPlayerIDs:(id)arg2 forSessionWithIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001297ec
- (oneway void)fetchShareURLForSessionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100129690
- (oneway void)sendData:(id)arg1 reliably:(_Bool)arg2 forSessionWithIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100129634
- (void)didSaveConnectionState:(long long)arg1 forGameSession:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100129050
- (void)_setConnectionState:(long long)arg1 forSessionWithIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100128800
- (oneway void)setConnectionState:(long long)arg1 forSessionWithIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001287e8
- (oneway void)saveData:(id)arg1 forSessionWithIdentifier:(id)arg2 changeTag:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100128420
- (oneway void)loadDataForSessionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010012832c
- (oneway void)removePlayers:(id)arg1 forSessionWithIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010012817c
- (oneway void)removeSessionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100127f28
- (oneway void)loadSessionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100127e20
- (oneway void)loadSessionsInContainer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100127a80
- (oneway void)createSessionInContainer:(id)arg1 withTitle:(id)arg2 maxConnectedPlayers:(long long)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010012775c
- (oneway void)primaryPlayerInContainer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001275e4
- (id)validateContainer:(id)arg1;	// IMP=0x000000010012756c
- (_Bool)requiresAuthentication;	// IMP=0x0000000100127564

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

