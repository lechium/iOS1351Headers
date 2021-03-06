//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKProfileService-Protocol.h"

@class NSString;

@interface GKProfileService : GKService <GKProfileService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0000000100168b8c
+ (Class)interfaceClass;	// IMP=0x0000000100168b80
- (oneway void)getProfilesForPlayerIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010016a5fc
- (oneway void)getOcelotStateForCurrentAppWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010016a5bc
- (oneway void)setOcelotStateForCurrentApp;	// IMP=0x000000010016a550
- (void)loadProfilesForPlayerIDs:(id)arg1 pieces:(unsigned char)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100169c48
- (void)fetchProfilesForPlayerIDs:(id)arg1 familiarity:(int)arg2 responseKind:(int)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100169188
- (void)_updateLastPlayedGames:(id)arg1 forPlayers:(id)arg2 group:(id)arg3;	// IMP=0x0000000100168d18
- (id)_profileRequestForPlayerIDs:(id)arg1 pieces:(unsigned char)arg2;	// IMP=0x0000000100168b94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

