//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDDatabaseEntity-Protocol.h"

@class NSString;
@protocol PDDatabaseValue;

@interface PDConfig : NSObject <PDDatabaseEntity>
{
    _Bool _mayRecordUserActivity;	// 8 = 0x8
    _Bool _maySyncWithCloudKit;	// 9 = 0x9
    _Bool _maySendToIngest;	// 10 = 0xa
    _Bool _contextTrackingAllowed;	// 11 = 0xb
    double _cloudKitSyncFetchGracePeriod;	// 16 = 0x10
}

+ (id)identityColumnName;	// IMP=0x000000010004f710
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x000000010004f4cc
+ (long long)migrationOrder;	// IMP=0x000000010004f4c4
+ (id)entityName;	// IMP=0x000000010004f170
@property(nonatomic) double cloudKitSyncFetchGracePeriod; // @synthesize cloudKitSyncFetchGracePeriod=_cloudKitSyncFetchGracePeriod;
@property(nonatomic, getter=isContextTrackingAllowed) _Bool contextTrackingAllowed; // @synthesize contextTrackingAllowed=_contextTrackingAllowed;
@property(nonatomic) _Bool maySendToIngest; // @synthesize maySendToIngest=_maySendToIngest;
@property(nonatomic) _Bool maySyncWithCloudKit; // @synthesize maySyncWithCloudKit=_maySyncWithCloudKit;
@property(nonatomic) _Bool mayRecordUserActivity; // @synthesize mayRecordUserActivity=_mayRecordUserActivity;
- (id)dictionaryRepresentation;	// IMP=0x000000010004f728
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
- (void)bindTo:(id)arg1;	// IMP=0x000000010004f304
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x000000010004f17c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
