//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class GKGameInternal, NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface GKPlayerInternal : GKInternalRepresentation
{
    NSString *_playerID;	// 8 = 0x8
    NSString *_gamePlayerID;	// 16 = 0x10
    NSString *_teamPlayerID;	// 24 = 0x18
    NSString *_alias;	// 32 = 0x20
    NSNumber *_avatarType;	// 40 = 0x28
    NSDictionary *_photos;	// 48 = 0x30
    NSString *_messagesID;	// 56 = 0x38
    NSNumber *_friendLevel;	// 64 = 0x40
    NSNumber *_friendBiDirectional;	// 72 = 0x48
    NSNumber *_friendPlayedWith;	// 80 = 0x50
    NSNumber *_friendPlayedNearby;	// 88 = 0x58
    NSString *_lastPersonalizationVersionDisplayed;	// 96 = 0x60
    unsigned long long _lastPrivacyNoticeVersionDisplayed;	// 104 = 0x68
    unsigned short _numberOfFriends;	// 112 = 0x70
    unsigned short _numberOfGames;	// 114 = 0x72
    unsigned short _numberOfFriendsInCommon;	// 116 = 0x74
    unsigned short _numberOfGamesInCommon;	// 118 = 0x76
    unsigned int _numberOfAchievements;	// 120 = 0x78
    unsigned int _numberOfAchievementPoints;	// 124 = 0x7c
    union {
        struct {
            unsigned int _unused:8;
            unsigned int _purpleBuddyAccount:1;
            unsigned int _underage:1;
            unsigned int _photoPending:1;
            unsigned int _findable:1;
            unsigned int _defaultNickname:1;
            unsigned int _reserved:18;
        } ;
        unsigned int _value;
    } _flags;	// 128 = 0x80
    NSArray *_monogramComponents;	// 136 = 0x88
}

+ (Class)classForFamiliarity:(int)arg1;	// IMP=0x0000000100131400
+ (id)displayNameWithOptions:(unsigned char)arg1 alias:(id)arg2 composite:(id)arg3;	// IMP=0x0000000100131380
+ (id)compositeNameForFirstName:(id)arg1 lastName:(id)arg2;	// IMP=0x0000000100131240
+ (id)secureCodedPropertyKeys;	// IMP=0x0000000100130b40
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100130b38
+ (id)propertiesToFetch;	// IMP=0x00000001001435ec
+ (int)familiarity;	// IMP=0x00000001001435e4
+ (unsigned char)piecesToLoad;	// IMP=0x00000001001435a8
@property(retain, nonatomic) NSArray *monogramComponents; // @synthesize monogramComponents=_monogramComponents;
@property(nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed; // @synthesize lastPrivacyNoticeVersionDisplayed=_lastPrivacyNoticeVersionDisplayed;
@property(retain, nonatomic) NSString *lastPersonalizationVersionDisplayed; // @synthesize lastPersonalizationVersionDisplayed=_lastPersonalizationVersionDisplayed;
@property(retain, nonatomic) NSNumber *friendPlayedNearby; // @synthesize friendPlayedNearby=_friendPlayedNearby;
@property(retain, nonatomic) NSNumber *friendPlayedWith; // @synthesize friendPlayedWith=_friendPlayedWith;
@property(retain, nonatomic) NSNumber *friendBiDirectional; // @synthesize friendBiDirectional=_friendBiDirectional;
@property(retain, nonatomic) NSNumber *friendLevel; // @synthesize friendLevel=_friendLevel;
@property(retain, nonatomic) NSString *messagesID; // @synthesize messagesID=_messagesID;
@property(nonatomic) unsigned int numberOfAchievementPoints; // @synthesize numberOfAchievementPoints=_numberOfAchievementPoints;
@property(nonatomic) unsigned int numberOfAchievements; // @synthesize numberOfAchievements=_numberOfAchievements;
@property(nonatomic) unsigned short numberOfGamesInCommon; // @synthesize numberOfGamesInCommon=_numberOfGamesInCommon;
@property(nonatomic) unsigned short numberOfGames; // @synthesize numberOfGames=_numberOfGames;
@property(nonatomic) unsigned short numberOfFriendsInCommon; // @synthesize numberOfFriendsInCommon=_numberOfFriendsInCommon;
@property(nonatomic) unsigned short numberOfFriends; // @synthesize numberOfFriends=_numberOfFriends;
@property(retain, nonatomic) NSDictionary *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) NSNumber *avatarType; // @synthesize avatarType=_avatarType;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSString *teamPlayerID; // @synthesize teamPlayerID=_teamPlayerID;
@property(retain, nonatomic) NSString *gamePlayerID; // @synthesize gamePlayerID=_gamePlayerID;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(retain, nonatomic) NSString *guestIdentifier; // @dynamic guestIdentifier;
@property(nonatomic) unsigned short numberOfChallenges; // @dynamic numberOfChallenges;
@property(nonatomic) unsigned short numberOfTurns; // @dynamic numberOfTurns;
@property(nonatomic) unsigned short numberOfRequests; // @dynamic numberOfRequests;
- (void)setAllowNearbyMultiplayer:(_Bool)arg1;	// IMP=0x0000000100131638
- (_Bool)allowNearbyMultiplayer;	// IMP=0x0000000100131630
@property(nonatomic, getter=isPhotoPending) _Bool photoPending; // @dynamic photoPending;
@property(nonatomic, getter=isFindable) _Bool findable; // @dynamic findable;
@property(nonatomic, getter=isUnderage) _Bool underage; // @dynamic underage;
@property(nonatomic, getter=isDefaultNickname) _Bool defaultNickname; // @dynamic defaultNickname;
@property(nonatomic, getter=isPurpleBuddyAccount) _Bool purpleBuddyAccount; // @dynamic purpleBuddyAccount;
@property(retain, nonatomic) NSNumber *iCloudUserID; // @dynamic iCloudUserID;
@property(retain, nonatomic) NSString *facebookUserID; // @dynamic facebookUserID;
@property(retain, nonatomic) NSArray *friends; // @dynamic friends;
@property(retain, nonatomic) NSArray *emailAddresses; // @dynamic emailAddresses;
@property(retain, nonatomic) NSString *accountName; // @dynamic accountName;
@property(retain, nonatomic) GKGameInternal *lastPlayedGame; // @dynamic lastPlayedGame;
@property(retain, nonatomic) NSDate *lastPlayedDate; // @dynamic lastPlayedDate;
@property(retain, nonatomic) NSString *status; // @dynamic status;
@property(retain, nonatomic) NSString *compositeName; // @dynamic compositeName;
@property(retain, nonatomic) NSString *lastName; // @dynamic lastName;
@property(retain, nonatomic) NSString *firstName; // @dynamic firstName;
@property(nonatomic) unsigned int flags; // @dynamic flags;
@property(readonly, nonatomic) _Bool isGuestPlayer;
@property(readonly, nonatomic) _Bool isAnonymousPlayer;
@property(readonly, nonatomic) _Bool isUnknownPlayer;
@property(readonly, nonatomic) _Bool isAutomatchPlayer;
@property(readonly, nonatomic) _Bool isLocalPlayer;
@property(readonly, nonatomic) _Bool isFriend;
@property(readonly, nonatomic) _Bool isLoaded;
- (int)defaultFamiliarity;	// IMP=0x0000000100131460
- (id)displayNameWithOptions:(unsigned char)arg1;	// IMP=0x00000001001312dc
- (id)minimalInternal;	// IMP=0x0000000100131080
- (unsigned long long)hash;	// IMP=0x000000010013105c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100130fc0
- (id)serverRepresentation;	// IMP=0x0000000100130ecc
- (id)conciseDescription;	// IMP=0x0000000100130e44
- (id)cacheKey;	// IMP=0x0000000100130e38
- (void)dealloc;	// IMP=0x0000000100130a28
- (void)updateWithProperties:(id)arg1;	// IMP=0x0000000100143734
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x0000000100143274

@end

