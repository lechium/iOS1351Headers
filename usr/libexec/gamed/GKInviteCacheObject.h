//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKCacheObject.h"

@class GKGameCacheObject, NSDate, NSString;

@interface GKInviteCacheObject : GKCacheObject
{
}

+ (id)fetchSortDescriptors;	// IMP=0x000000010005a1b0
+ (id)entityName;	// IMP=0x000000010005a128
- (void)awakeFromInsert;	// IMP=0x000000010005a134

// Remaining properties
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;
@property(retain, nonatomic) NSString *inviteID; // @dynamic inviteID;
@property(retain, nonatomic) NSDate *timeStamp; // @dynamic timeStamp;
@property(nonatomic) int type; // @dynamic type;

@end
