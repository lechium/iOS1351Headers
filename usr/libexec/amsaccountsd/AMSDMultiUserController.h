//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMSDMultiUserController : NSObject
{
}

+ (void)_stopListeningForCloudKitAccountChanges;	// IMP=0x000000010001f820
+ (id)_setupSubscriptionForDatabase:(id)arg1 attempt:(unsigned long long)arg2;	// IMP=0x000000010001edc0
+ (void)_setNextRefreshTimestampWithTimeInterval:(double)arg1;	// IMP=0x000000010001ed50
+ (CDUnknownBlockType)_scheduledRefreshActivityBlock;	// IMP=0x000000010001eb60
+ (void)_removeNextRefreshTimestamp;	// IMP=0x000000010001eb40
+ (id)_refresh:(_Bool)arg1;	// IMP=0x000000010001e0e4
+ (void)_listenForCloudKitAccountChanges;	// IMP=0x000000010001de24
+ (_Bool)_canRunRefreshWithRefreshTimestamp:(double)arg1;	// IMP=0x000000010001dd88
+ (double)_nextRefreshTimestampForTimeInterval:(double)arg1;	// IMP=0x000000010001dd00
+ (double)_nextRefreshTimestamp;	// IMP=0x000000010001dc60
+ (id)_subscriptionIDForDatabase:(id)arg1;	// IMP=0x000000010001dbf4
+ (void)_saveAccountAfterRecordZoneDisassociation:(id)arg1;	// IMP=0x000000010001d694
+ (void)_disassociateiTunesAccount:(id)arg1 withRecordZoneName:(id)arg2;	// IMP=0x000000010001d4ac
+ (id)tearDownShareForHome:(id)arg1;	// IMP=0x000000010001cd20
+ (id)setupShareForHomeParticipant:(id)arg1;	// IMP=0x000000010001ba08
+ (id)setupSubscriptionForDatabase:(id)arg1;	// IMP=0x000000010001b9f8
+ (void)setup;	// IMP=0x000000010001b96c
+ (void)refreshAfterTimeInterval:(double)arg1 throttle:(_Bool)arg2;	// IMP=0x000000010001b600
+ (id)refresh:(_Bool)arg1;	// IMP=0x000000010001b370
+ (id)performAuthenticationForHomeParticipantRecord:(id)arg1;	// IMP=0x000000010001a920
+ (id)multiUserEnabledForHomeParticipantRecord:(id)arg1;	// IMP=0x000000010001a5c0
+ (id)homeIdentifierForRecordZone:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010001a40c
+ (id)homeForRecordZone:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010001a2f8
+ (id)homeForHomeParticipant:(id)arg1;	// IMP=0x000000010001a24c
+ (void)disassociateiTunesAccountWithRecordZoneID:(id)arg1;	// IMP=0x000000010001a04c
+ (void)disassociateiTunesAccount:(id)arg1 withRecordZoneID:(id)arg2;	// IMP=0x0000000100019fd8
+ (void)disassociateiTunesAccountWithAllRecordZones:(id)arg1;	// IMP=0x0000000100019e84
+ (_Bool)deviceSupportsMultipleUsers;	// IMP=0x0000000100019e38
+ (_Bool)deviceCanManageMultiUser;	// IMP=0x0000000100019dd8

@end

