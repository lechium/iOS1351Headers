//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import "BCCloudData-Protocol.h"

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCCloudData : NSManagedObject <BCCloudData>
{
    id <BCCloudDataPrivacyDelegate> _privacyDelegate;	// 8 = 0x8
}

+ (id)localIdentifierFromRecord:(id)arg1;	// IMP=0x0000000100026e4c
+ (id)propertyIDKey;	// IMP=0x0000000100026e00
- (void).cxx_destruct;	// IMP=0x0000000100026f3c
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate; // @synthesize privacyDelegate=_privacyDelegate;
- (id)zoneName;	// IMP=0x0000000100026db4
- (id)identifier;	// IMP=0x0000000100026d68
- (id)recordType;	// IMP=0x0000000100026d1c
- (id)configuredRecordFromAttributes;	// IMP=0x0000000100026c7c
- (void)incrementEditGeneration;	// IMP=0x0000000100026c44
@property(copy, nonatomic) CKRecord *systemFields; // @dynamic systemFields;
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;	// IMP=0x00000001000263d8
- (_Bool)isEqualExceptForDate:(id)arg1;	// IMP=0x00000001000260fc
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;	// IMP=0x0000000100025ca4
- (id)mutableCopy;	// IMP=0x0000000100025c70

// Remaining properties
@property(copy, nonatomic) NSData *ckSystemFields; // @dynamic ckSystemFields;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool deletedFlag; // @dynamic deletedFlag;
@property(readonly, copy) NSString *description;
@property(nonatomic) long long editGeneration; // @dynamic editGeneration;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property(copy, nonatomic) NSString *saltedHashedID; // @dynamic saltedHashedID;
@property(readonly) Class superclass;
@property(nonatomic) long long syncGeneration; // @dynamic syncGeneration;

@end

