//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKCloudTournament : NSObject
{
}

+ (void)lookForCustomTournamentInvitesInParticipantRecords:(id)arg1;	// IMP=0x0000000100025ea0
+ (id)findContactParticipantRecordToRemoveForTournamentID:(id)arg1;	// IMP=0x0000000100025b4c
+ (void)createZoneForPrivateContactDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002582c
+ (void)createPrivateContactInviteRecordsForPlayers:(id)arg1 tournamentID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100024ac8
+ (id)contactInviteRecordNameForTournamentID:(id)arg1 playerID:(id)arg2;	// IMP=0x0000000100024a60
+ (_Bool)isMessagesIDForLocalUser:(id)arg1;	// IMP=0x000000010002474c
+ (void)acceptShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100024574
+ (void)fetchTournamentRecordIfNeededWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100023fac
+ (void)addInviteeAndGenerateBulletinForShareMetadata:(id)arg1;	// IMP=0x00000001000230a0
+ (id)databaseForZoneID:(id)arg1;	// IMP=0x0000000100022f40
+ (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000228c8
+ (void)setInProgressAcceptShareRecordIDs:(id)arg1;	// IMP=0x0000000100022874
+ (id)inProgressAcceptShareRecordIDs;	// IMP=0x0000000100022868
+ (void)createShareWithShareRecordID:(id)arg1 rootRecord:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100021dd0
+ (void)createCustomInviteZoneWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100021ab0
+ (void)fetchExistingShareWithRecordID:(id)arg1 fromDatabase:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100021668
+ (void)shareURLForCustomTournament:(id)arg1 clientProxy:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100020bc4
+ (id)inviteRecordWithDataForSharingTournament:(id)arg1 clientProxy:(id)arg2;	// IMP=0x00000001000209b0
+ (id)inviteDictionaryForTournament:(id)arg1 originatingPlayerID:(id)arg2 clientProxy:(id)arg3;	// IMP=0x00000001000207ac
+ (id)cloudKitOperationConfigurationForCustomInvite;	// IMP=0x00000001000206e0
+ (id)shareRecordIDForTournamentID:(id)arg1 zoneID:(id)arg2;	// IMP=0x0000000100020620
+ (id)sharedDatabaseForInviteContainer;	// IMP=0x00000001000205bc
+ (id)privateDatabaseForInviteContainer;	// IMP=0x0000000100020558
+ (void)removeCustomTournament:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100020134
+ (void)manageStatesForTournamentsWithDefinitionID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f068
+ (void)manageTournamentsForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001e778
+ (_Bool)canManageTournaments;	// IMP=0x000000010001e6d4
+ (id)lastUsedBundleID;	// IMP=0x000000010001e6c8
+ (void)setLastUsedBundleID:(id)arg1;	// IMP=0x000000010001e634
+ (id)lastManagementDate;	// IMP=0x000000010001e628
+ (void)setLastManagementDate:(id)arg1;	// IMP=0x000000010001e5d4
+ (void)resetDataForTournamentsWithTournamentDefinitionID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001e0ec
+ (void)fetchAndUpdateRecordsWithIDs:(id)arg1 database:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001d814
+ (id)checkForServerRecordChangedErrorsInModifyRecordsOperationError:(id)arg1;	// IMP=0x000000010001d4c8
+ (void)subscribeToDatabaseChangesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001cbe4
+ (void)activeAutomaticTournamentsForTournamentDefinition:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c3a0
+ (void)allParticipantRecordsForTournamentReferences:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001bd00
+ (void)localPlayerTournamentRecordsForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ab24
+ (void)localPlayerParticipantRecordsForTournaments:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001a3c4
+ (void)allTournamentDefintionRecordsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019d74
+ (void)updateCacheForDatabase:(id)arg1 zoneIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100018250
+ (void)updateCacheForPublicDatabaseForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100017a80
+ (void)updateCacheForDatabaseWithScope:(long long)arg1 bundleID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100017128
+ (void)updatePlayerRanksForTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016644
+ (void)updateScoreDataForParticipantRecord:(id)arg1 newScore:(long long)arg2 tournamentScoringMethod:(long long)arg3;	// IMP=0x0000000100016494
+ (id)createParticipantRecordForTournamentRecord:(id)arg1 playerID:(id)arg2;	// IMP=0x00000001000160e8
+ (void)saveTournamentRecords:(id)arg1 deleteTournamentRecordIDs:(id)arg2 database:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100015124
+ (id)cloudKitOperationConfiguration;	// IMP=0x0000000100015058
+ (void)createCustomTournamentWithRequest:(id)arg1 clientProxy:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100013f04
+ (id)customTournamentRecordsForRequest:(id)arg1 definitionReference:(id)arg2;	// IMP=0x0000000100013658
+ (void)createAutomaticTournamentFromDefinition:(id)arg1 startDate:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100012740
+ (id)automaticTournamentNameFromDefinition:(id)arg1 startDate:(id)arg2;	// IMP=0x0000000100012400
+ (long long)timePeriod:(id)arg1;	// IMP=0x0000000100012384
+ (id)nextAutomaticTournamentStartDateForDefinitionRecurrenceRule:(id)arg1;	// IMP=0x00000001000121f4
+ (void)sortParticipants:(id)arg1;	// IMP=0x00000001000120a4
+ (void)loadParticipantsForTournament:(id)arg1 request:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000112f4
+ (id)contactPlayerInternalForPlayerID:(id)arg1 tournamentID:(id)arg2;	// IMP=0x00000001000110d8
+ (void)declineLocalPlayerInvitationInTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000104d4
+ (void)removeInvitees:(id)arg1 fromCustomTournamentWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000f57c
+ (void)removeCreator:(id)arg1 forTournamentWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e80c
+ (void)addCreator:(id)arg1 forTournamentWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000da60
+ (void)addInvitees:(id)arg1 toCustomTournamentWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c4b4
+ (id)participantRecordNameForTournamentID:(id)arg1 playerID:(id)arg2;	// IMP=0x000000010000c440
+ (void)historicalDataForPlayer:(id)arg1 tournamentDefinitionWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000b420
+ (id)computeHistoricalDataFromParticipationRecords:(id)arg1;	// IMP=0x000000010000af9c
+ (void)reportProgressScore:(long long)arg1 withTryToken:(id)arg2 forLocalPlayerInTournamentWithID:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010000a300
+ (void)reportScore:(long long)arg1 withTryToken:(id)arg2 forLocalPlayerInTournamentWithID:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100009418
+ (_Bool)tryTokenIsValid:(id)arg1 forTournamentParticipantRecord:(id)arg2;	// IMP=0x000000010000938c
+ (_Bool)deviceIsValidForTournamentParticipantRecord:(id)arg1;	// IMP=0x00000001000092d0
+ (void)resignLocalPlayerFromTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008638
+ (void)resumePlayInTournamentWithID:(id)arg1 withTryToken:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000077d8
+ (void)beginPlayInTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000068a4
+ (void)registerLocalPlayerForTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000057b4
+ (void)decrementPlayerCountForTournamentRecord:(id)arg1 by:(long long)arg2;	// IMP=0x00000001000056e4
+ (void)incrementPlayerCountForTournamentRecord:(id)arg1 by:(long long)arg2;	// IMP=0x0000000100005618
+ (void)getLocalParticipantForTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000552c
+ (void)getFriendCountInTournamentWithID:(id)arg1 forGroup:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005518
+ (void)getTotalPlayerCountInTournamentWithID:(id)arg1 forGroup:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000053ac
+ (void)tournamentsMatchingPredicate:(id)arg1 bundleID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100004c70
+ (id)filterCustomTournamentsForLocalPlayer:(id)arg1;	// IMP=0x0000000100004968
+ (void)tournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004838
+ (void)tournamentDefinitionWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004580
+ (void)tournamentDefinitionsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000456c
+ (void)updateUserRecordWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004100
+ (void)setProcessedRecordIDsForBulletins:(id)arg1;	// IMP=0x00000001000040ac
+ (id)processedRecordIDsForBulletins;	// IMP=0x00000001000040a0
+ (id)privateDatabase;	// IMP=0x000000010000403c
+ (id)publicDatabase;	// IMP=0x0000000100003fd8
+ (id)tournamentQueue;	// IMP=0x0000000100003f64
+ (id)cacheQueue;	// IMP=0x0000000100003ef4
+ (id)tournamentCache;	// IMP=0x0000000100003e88

@end

