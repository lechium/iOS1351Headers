//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BCMutableCloudData.h"

#import "BCCollectionMember-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableCollectionMember : BCMutableCloudData <BCCollectionMember, NSSecureCoding>
{
    int _sortOrder;	// 8 = 0x8
    NSString *_collectionMemberID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100053ff8
- (void).cxx_destruct;	// IMP=0x0000000100054184
@property(nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
@property(copy, nonatomic) NSString *collectionMemberID; // @synthesize collectionMemberID=_collectionMemberID;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100054090
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100054000
- (id)configuredRecordFromAttributes;	// IMP=0x0000000100053f44
- (id)zoneName;	// IMP=0x0000000100053f34
- (id)identifier;	// IMP=0x0000000100053f28
- (id)recordType;	// IMP=0x0000000100053f1c
@property(readonly, copy) NSString *description;
- (id)initWithRecord:(id)arg1;	// IMP=0x0000000100053d04
- (id)initWithCloudData:(id)arg1;	// IMP=0x0000000100053b98
- (id)initWithCollectionMemberID:(id)arg1;	// IMP=0x0000000100053acc

// Remaining properties
@property(readonly, copy, nonatomic) NSData *ckSystemFields;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) _Bool deletedFlag;
@property(readonly, nonatomic) long long editGeneration;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long syncGeneration;
@property(readonly, copy, nonatomic) CKRecord *systemFields;

@end
