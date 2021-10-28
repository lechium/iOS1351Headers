//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKExpiringCacheObject.h"

@class NSNumber, NSString;

@interface GKGameRatingCacheObject : GKExpiringCacheObject
{
}

+ (id)entityName;	// IMP=0x000000010004de30
+ (id)ratingForGameDescriptor:(id)arg1 context:(id)arg2;	// IMP=0x000000010004daa8
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x000000010004dc90

// Remaining properties
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSString *bundleVersion; // @dynamic bundleVersion;
@property(retain, nonatomic) NSNumber *rating; // @dynamic rating;

@end
