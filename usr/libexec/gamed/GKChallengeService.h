//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKChallengeService-Protocol.h"

@class NSString;

@interface GKChallengeService : GKService <GKChallengeService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00000001001861a0
+ (Class)interfaceClass;	// IMP=0x0000000100186194
- (oneway void)abortChallenges:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001896d4
- (oneway void)issueChallenge:(id)arg1 toPlayers:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100189308
- (oneway void)getChallengeDetailsForChallengeIDs:(id)arg1 receiverID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100187e64
- (oneway void)getChallengeDetailsForChallengeIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100187e50
- (oneway void)getChallengesForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001873fc
- (void)loadChallengesForGameDescriptor:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100186e64
- (void)fetchChallengesForGameDescriptor:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100186bf8
- (void)_updateGamesForChallenges:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x00000001001869ac
- (void)_determineCompatibleGamesForChallenges:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x000000010018662c
- (id)_filterChallenges:(id)arg1 compatibleWithBundleID:(id)arg2;	// IMP=0x0000000100186538
- (void)_updatePlayersForChallenges:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x00000001001861a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
