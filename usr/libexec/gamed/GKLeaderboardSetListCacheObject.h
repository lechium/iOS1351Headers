//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKListCacheObject.h"

@class GKGameCacheObject;

@interface GKLeaderboardSetListCacheObject : GKListCacheObject
{
}

+ (Class)entryClass;	// IMP=0x000000010004de48
+ (id)entityName;	// IMP=0x000000010004de3c
- (_Bool)isValid;	// IMP=0x000000010004df08
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x000000010004de54

// Remaining properties
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;

@end
