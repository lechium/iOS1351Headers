//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, REMCDObject;

@interface REMCKCloudState : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x000000010004e4a4
- (_Bool)isInCloud;	// IMP=0x000000010004d09c

// Remaining properties
@property(nonatomic) long long currentLocalVersion; // @dynamic currentLocalVersion;
@property(nonatomic) _Bool inCloud; // @dynamic inCloud;
@property(nonatomic) long long latestVersionSyncedToCloud; // @dynamic latestVersionSyncedToCloud;
@property(copy, nonatomic) NSDate *localVersionDate; // @dynamic localVersionDate;
@property(retain, nonatomic) REMCDObject *object; // @dynamic object;

@end
