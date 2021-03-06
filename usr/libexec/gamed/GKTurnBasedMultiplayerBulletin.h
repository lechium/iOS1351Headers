//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKMultiplayerBulletin.h"

@class NSDictionary, NSNumber, NSString;

@interface GKTurnBasedMultiplayerBulletin : GKMultiplayerBulletin
{
    _Bool _userTapped;	// 16 = 0x10
    NSString *_matchID;	// 24 = 0x18
    NSNumber *_turnCount;	// 32 = 0x20
    NSDictionary *_localizableMessage;	// 40 = 0x28
    NSString *_exchangeID;	// 48 = 0x30
    NSString *_guestID;	// 56 = 0x38
    NSString *_aggregateDictionaryKey;	// 64 = 0x40
}

+ (_Bool)displayNotification;	// IMP=0x00000001000d6de4
+ (_Bool)shouldExpirePlayerList;	// IMP=0x00000001000d6ddc
+ (_Bool)shouldLoadCacheDetails;	// IMP=0x00000001000d6dd4
+ (_Bool)shouldLoadCacheList;	// IMP=0x00000001000d6dcc
+ (_Bool)shouldLoadCacheData;	// IMP=0x00000001000d6dc4
+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d62bc
+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000d6224
@property(readonly) NSString *aggregateDictionaryKey; // @synthesize aggregateDictionaryKey=_aggregateDictionaryKey;
@property(retain) NSString *guestID; // @synthesize guestID=_guestID;
@property(retain) NSString *exchangeID; // @synthesize exchangeID=_exchangeID;
@property(retain) NSDictionary *localizableMessage; // @synthesize localizableMessage=_localizableMessage;
@property _Bool userTapped; // @synthesize userTapped=_userTapped;
@property(retain) NSNumber *turnCount; // @synthesize turnCount=_turnCount;
@property(retain) NSString *matchID; // @synthesize matchID=_matchID;
- (id)description;	// IMP=0x00000001000d9fdc
- (void)handleAction:(id)arg1;	// IMP=0x00000001000d9d64
- (void)handleAcceptAction;	// IMP=0x00000001000d9c34
- (void)expireAndLoadCaches;	// IMP=0x00000001000d9678
- (void)assembleBulletin;	// IMP=0x00000001000d9170
- (id)bulletinMessage;	// IMP=0x00000001000d8fac
- (void *)removePreviousTurnBulletins;	// IMP=0x00000001000d8d0c
- (void)declineTurnBasedInviteWithReason:(int)arg1;	// IMP=0x00000001000d8918
- (void)acceptTurnBasedTurn;	// IMP=0x00000001000d8674
- (void)invalidateTurnCache;	// IMP=0x00000001000d8354
- (void)saveTurnBasedEvent;	// IMP=0x00000001000d81f0
- (void)updateBadgeCount;	// IMP=0x00000001000d8034
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d76ac
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000d7438
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000d7190
- (id)initWithPushNotification:(id)arg1;	// IMP=0x00000001000d6f40
- (void)update;	// IMP=0x00000001000d6dec
- (void)dealloc;	// IMP=0x00000001000d622c

@end

