//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BCCloudData.h"

#import "BCCollectionMember-Protocol.h"

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCCollectionMember : BCCloudData <BCCollectionMember>
{
}

+ (id)collectionIDFromCollectionMemberID:(id)arg1;	// IMP=0x0000000100053a54
+ (id)assetIDFromCollectionMemberID:(id)arg1;	// IMP=0x00000001000539dc
+ (id)collectionMemberIDWithCollectionID:(id)arg1 assetID:(id)arg2;	// IMP=0x0000000100053974
+ (id)propertyIDKey;	// IMP=0x000000010005389c
@property(readonly, copy) NSString *debugDescription;
- (id)zoneName;	// IMP=0x00000001000538a8
- (id)identifier;	// IMP=0x0000000100053890
- (id)recordType;	// IMP=0x0000000100053884
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;	// IMP=0x0000000100053440
- (void)_configureFromCollectionMember:(id)arg1 withMergers:(id)arg2;	// IMP=0x0000000100053338
- (_Bool)isEqualExceptForDate:(id)arg1;	// IMP=0x000000010005320c
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;	// IMP=0x0000000100053148
- (id)mutableCopy;	// IMP=0x0000000100053114

// Remaining properties
@property(readonly, copy, nonatomic) NSData *ckSystemFields;
@property(copy, nonatomic) NSString *collectionMemberID; // @dynamic collectionMemberID;
@property(readonly, nonatomic) _Bool deletedFlag;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long editGeneration;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate;
@property(nonatomic) int sortOrder; // @dynamic sortOrder;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long syncGeneration;
@property(readonly, copy, nonatomic) CKRecord *systemFields;

@end
