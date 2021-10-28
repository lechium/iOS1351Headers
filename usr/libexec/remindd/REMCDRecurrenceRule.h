//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "REMCDObject.h"

@class NSData, NSDate, REMCDReminder;

@interface REMCDRecurrenceRule : REMCDObject
{
}

+ (id)fetchRequest;	// IMP=0x0000000100036b8c
+ (_Bool)shouldAttemptLocalObjectMerge;	// IMP=0x00000001001e4e04
+ (id)newCloudObjectForRecord:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x00000001001e38f8
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;	// IMP=0x00000001001e375c
+ (id)recordTypes;	// IMP=0x00000001001e3698
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x000000010003692c
- (void)fixBrokenReferences;	// IMP=0x00000001001e59f0
- (void)cleanUpAfterLocalObjectMerge;	// IMP=0x00000001001e5460
- (_Bool)mergeWithLocalObject:(id)arg1;	// IMP=0x00000001001e51d0
- (id)existingLocalObjectToMergeWithPredicate:(id)arg1;	// IMP=0x00000001001e4f3c
- (id)parentCloudObject;	// IMP=0x00000001001e4db8
- (id)newlyCreatedRecord;	// IMP=0x00000001001e4d60
- (void)mergeDataFromRecord:(id)arg1;	// IMP=0x00000001001e4508
- (_Bool)shouldMarkAsDeletedInsteadOfDeletingImmediately;	// IMP=0x00000001001e3a4c
- (_Bool)supportsDeletionByTTL;	// IMP=0x00000001001e3a3c
- (id)recordType;	// IMP=0x00000001001e3a00
- (id)recordZoneName;	// IMP=0x00000001001e399c

// Remaining properties
@property(retain, nonatomic) NSData *daysOfTheMonth; // @dynamic daysOfTheMonth;
@property(retain, nonatomic) NSData *daysOfTheWeek; // @dynamic daysOfTheWeek;
@property(retain, nonatomic) NSData *daysOfTheYear; // @dynamic daysOfTheYear;
@property(copy, nonatomic) NSDate *endDate; // @dynamic endDate;
@property(nonatomic) short firstDayOfTheWeek; // @dynamic firstDayOfTheWeek;
@property(nonatomic) short frequency; // @dynamic frequency;
@property(nonatomic) short interval; // @dynamic interval;
@property(retain, nonatomic) NSData *monthsOfTheYear; // @dynamic monthsOfTheYear;
@property(nonatomic) long long occurrenceCount; // @dynamic occurrenceCount;
@property(retain, nonatomic) REMCDReminder *reminder; // @dynamic reminder;
@property(retain, nonatomic) NSData *setPositions; // @dynamic setPositions;
@property(retain, nonatomic) NSData *weeksOfTheYear; // @dynamic weeksOfTheYear;

@end
