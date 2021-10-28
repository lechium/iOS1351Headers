//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;
@protocol GKPreferencesDelegate;

@interface GKPreferences : NSObject
{
    _Bool _shouldSynchronizeOnNextRead;	// 8 = 0x8
    _Bool _webKitInspectElementEnabled;	// 9 = 0x9
    NSDictionary *_overrideValues;	// 16 = 0x10
}

+ (id)displayNameForEnvironment:(long long)arg1;	// IMP=0x000000010007d7b0
+ (id)hostNameForEnvironment:(long long)arg1;	// IMP=0x000000010007d784
+ (id)shared;	// IMP=0x000000010007c7e4
@property(copy) NSDictionary *overrideValues; // @synthesize overrideValues=_overrideValues;
@property(nonatomic, getter=isWebKitInspectElementEnabled) _Bool webKitInspectElementEnabled; // @synthesize webKitInspectElementEnabled=_webKitInspectElementEnabled;
@property(nonatomic) _Bool _shouldSynchronizeOnNextRead; // @synthesize _shouldSynchronizeOnNextRead;
@property(nonatomic) long long tournamentServer;
@property(nonatomic) _Bool restrictToTournamentPlayers;
@property(nonatomic) long long tournamentCreationMethod;
@property(nonatomic) long long tournamentUIAppearanceStyle;
@property(nonatomic) long long tournamentCustomDuration;
@property(nonatomic) long long tournamentCustomMaxReplays;
@property(nonatomic) long long tournamentCustomMaxPlayers;
@property(nonatomic) long long tournamentCustomMinPlayers;
@property(nonatomic) long long tournamentAutoDuration;
@property(nonatomic) long long tournamentMaxReplays;
@property(nonatomic) long long tournamentMaxPlayers;
@property(nonatomic) long long tournamentMinPlayers;
@property(retain, nonatomic) NSDate *tournamentEndDate;
@property(retain, nonatomic) NSDate *tournamentStartDate;
@property(nonatomic) long long tournamentDuration;
@property(nonatomic) long long tournamentReplays;
@property(nonatomic) long long tournamentPlayers;
@property(nonatomic) long long tournamentParticipantState;
@property(nonatomic) long long tournamentState;
@property(nonatomic) long long tournamentMaxSimulatedFriends;
@property(nonatomic) long long tournamentMaxSimulatedPlayers;
@property(nonatomic) _Bool tournamentDemoModeEnabled;
@property(nonatomic) _Bool tournamentsDebuggingEnabled;
@property(nonatomic, getter=isComprehensiveLoggingEnabled) _Bool comprehensiveLoggingEnabled;
@property(nonatomic, getter=isClipGestureEnabled) _Bool clipGestureEnabled;
@property(readonly, nonatomic) _Bool HTTPShouldUsePipelining;
@property(readonly, nonatomic) unsigned long long exchangeDefaultMaxInitiatedExchangesPerPlayer;
@property(readonly, nonatomic) unsigned long long exchangeDataDefaultMaximumSize;
@property(readonly, nonatomic) unsigned long long maxDefaultGameStateSizeTurnBased;
@property(readonly, nonatomic) unsigned long long maxDefaultPlayersTurnBased;
@property(readonly, nonatomic) unsigned long long maxDefaultPlayersHosted;
@property(readonly, nonatomic) unsigned long long maxDefaultPlayersP2P;
@property(nonatomic) double maxRecentPlayersTime;
@property(nonatomic) unsigned long long maxRecentPlayersCount;
@property(nonatomic) _Bool shouldAddPlayerInfoToAddressBook;
@property(nonatomic) _Bool shouldAllowNearbyMultiplayer;
@property(readonly, nonatomic) _Bool shouldDisallowInvitesFromStrangers;
@property(nonatomic) _Bool shouldLinkPlayerToFacebook;
@property(nonatomic) _Bool shouldLinkPlayerToTwitter;
@property(nonatomic) _Bool shouldLinkPlayerToICloud;
@property(nonatomic) _Bool shouldUseTestIcons;
@property(nonatomic) _Bool shouldTrackAtlasImageUsage;
@property(nonatomic) _Bool shouldAnnotateImageUsage;
@property(nonatomic) double cacheTTLOverride;
@property(nonatomic) double minimumCacheTTL;
@property(nonatomic) double garbageCollectionInterval;
@property(nonatomic) double terminationInterval;
@property(nonatomic) _Bool useInternalHeader;
@property(nonatomic) unsigned long long exchangeMaxInitiatedExchangesPerPlayer;
@property(nonatomic) unsigned long long exchangeDataMaximumSize;
@property(nonatomic) unsigned long long maxGameStateSizeTurnBased;
@property(nonatomic) unsigned long long maxPlayersTurnBased;
@property(nonatomic) unsigned long long maxPlayersHosted;
@property(nonatomic) unsigned long long maxPlayersP2P;
@property(nonatomic) unsigned long long recentNumberOfPlayers;
@property(nonatomic) _Bool restrictToAutomatch;
@property(nonatomic) long long pipeliningSetting;
@property(nonatomic) long long pushEnvironment;
@property(nonatomic) _Bool preemptiveRelay;
@property(nonatomic) _Bool forceRelay;
@property(copy, nonatomic) NSString *testRunID;
@property(nonatomic) unsigned int logFilter;
@property(nonatomic) _Bool verboseLogging;
@property(nonatomic) _Bool notificationAlertsEnabled;
@property(nonatomic) _Bool notificationSoundsEnabled;
@property(nonatomic) _Bool notificationBadgesEnabled;
@property(nonatomic, getter=isNotificationCenterEnabled) _Bool notificationCenterEnabled;
@property(nonatomic) double debugRequestTimeout;
@property(nonatomic) unsigned long long operationRetryCount;
@property(nonatomic) double operationRetryDelay;
@property(nonatomic) double operationTimeout;
@property(nonatomic) unsigned long long loginDisableThreshold;
@property(nonatomic) unsigned long long mescalSetupRetries;
@property(nonatomic) _Bool forceDefaultNickname;
@property(nonatomic) _Bool useTestProtocols;
@property(nonatomic) _Bool allowUnsignedBag;
@property(retain, nonatomic) NSString *storeBagURL;
@property(nonatomic) long long environment;
- (void)removeOverrideForKey:(id)arg1;	// IMP=0x000000010007cca4
- (void)setStringValue:(id)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x000000010007cc8c
- (id)stringValueForKey:(struct __CFString *)arg1 defaultValue:(id)arg2;	// IMP=0x000000010007cc5c
- (void)setTimeInterval:(double)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x000000010007cc00
- (double)timeIntervalForKey:(struct __CFString *)arg1 defaultValue:(double)arg2;	// IMP=0x000000010007cbbc
- (void)setUnsignedIntegerValue:(long long)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x000000010007cb60
- (long long)unsignedIntegerValueForKey:(struct __CFString *)arg1 defaultValue:(long long)arg2;	// IMP=0x000000010007cb1c
- (void)setIntegerValue:(long long)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x000000010007cac0
- (long long)integerValueForKey:(struct __CFString *)arg1 defaultValue:(long long)arg2;	// IMP=0x000000010007ca7c
- (void)setBooleanValue:(_Bool)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x000000010007ca1c
- (_Bool)booleanValueForKey:(struct __CFString *)arg1;	// IMP=0x000000010007ca0c
- (_Bool)booleanValueForKey:(struct __CFString *)arg1 defaultValue:(_Bool)arg2;	// IMP=0x000000010007c9c8
- (id)preferencesValueForKey:(id)arg1;	// IMP=0x000000010007c978
- (void)_didWriteKey:(struct __CFString *)arg1;	// IMP=0x000000010007c950
- (void)synchronize;	// IMP=0x000000010007c914
- (void)invalidate;	// IMP=0x000000010007c904
- (_Bool)isInternalBuild;	// IMP=0x000000010007c888
- (void)dealloc;	// IMP=0x000000010007c79c
- (id)init;	// IMP=0x000000010007c790
- (id)initWithoutUIKitNotifications;	// IMP=0x000000010007c710
- (id)initWithUIKitNotifications;	// IMP=0x000000010007c704
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000001000eb8c8
- (_Bool)restrictionEnabledForKey:(id)arg1;	// IMP=0x00000001000eb880
@property(readonly, nonatomic, getter=isGameCenterRestricted) _Bool gameCenterRestricted;
@property(readonly, nonatomic, getter=isAccountModificationRestricted) _Bool accountModificationRestricted;
@property(readonly, nonatomic, getter=isAppInstallationRestricted) _Bool appInstallationRestricted;
@property(readonly, nonatomic, getter=isAddingFriendsRestricted) _Bool addingFriendsRestricted;
@property(readonly, nonatomic, getter=isMultiplayerGamingRestricted) _Bool multiplayerGamingRestricted;
@property(readonly, nonatomic, getter=isStoreDemoModeEnabled) _Bool storeDemoModeEnabled;
@property(nonatomic) id <GKPreferencesDelegate> preferencesDelegate;

@end
