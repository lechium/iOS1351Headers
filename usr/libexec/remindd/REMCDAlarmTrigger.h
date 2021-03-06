//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "REMCDObject.h"

@class REMCDAlarm;

@interface REMCDAlarmTrigger : REMCDObject
{
}

+ (id)cdEntityName;	// IMP=0x0000000100032e8c
+ (id)fetchRequest;	// IMP=0x0000000100063b24
+ (_Bool)shouldAttemptLocalObjectMerge;	// IMP=0x000000010030a558
+ (id)newCloudObjectForRecord:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x00000001003086e8
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;	// IMP=0x00000001003082f0
+ (id)recordTypes;	// IMP=0x000000010030822c
@property(retain, nonatomic) REMCDAlarm *alarm; // @dynamic alarm;
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x000000010003ba80
- (id)modelObject;	// IMP=0x000000010003b9f8
- (void)fixBrokenReferences;	// IMP=0x000000010030b144
- (void)cleanUpAfterLocalObjectMerge;	// IMP=0x000000010030abb4
- (_Bool)mergeWithLocalObject:(id)arg1;	// IMP=0x000000010030a924
- (id)existingLocalObjectToMergeWithPredicate:(id)arg1;	// IMP=0x000000010030a690
- (id)parentCloudObject;	// IMP=0x000000010030a50c
- (id)newlyCreatedRecord;	// IMP=0x000000010030a4b4
- (void)mergeDataFromRecord:(id)arg1;	// IMP=0x0000000100309a84
- (_Bool)shouldMarkAsDeletedInsteadOfDeletingImmediately;	// IMP=0x0000000100308834
- (_Bool)supportsDeletionByTTL;	// IMP=0x0000000100308824
- (id)recordType;	// IMP=0x00000001003087ec
- (id)recordZoneName;	// IMP=0x000000010030878c

@end

