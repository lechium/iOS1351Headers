//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BCCloudData.h"

#import "BCAssetReview-Protocol.h"

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCAssetReview : BCCloudData <BCAssetReview>
{
}

+ (id)userIDFromAssetReviewID:(id)arg1;	// IMP=0x00000001000407c4
+ (id)assetIDFromAssetReviewID:(id)arg1;	// IMP=0x000000010004074c
+ (id)assetReviewIDWithUserID:(id)arg1 assetID:(id)arg2;	// IMP=0x00000001000406e4
+ (id)propertyIDKey;	// IMP=0x00000001000404f8
@property(readonly, copy) NSString *debugDescription;
- (id)zoneName;	// IMP=0x00000001000405e8
@property(nonatomic) double normalizedStarRating;
- (id)identifier;	// IMP=0x00000001000404ec
- (id)recordType;	// IMP=0x00000001000404e0
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;	// IMP=0x000000010003ffec
- (_Bool)isEqualExceptForDate:(id)arg1;	// IMP=0x000000010003fd28
- (void)_configureFromAssetReview:(id)arg1 withMergers:(id)arg2;	// IMP=0x000000010003fb34
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;	// IMP=0x000000010003fa70
- (id)mutableCopy;	// IMP=0x000000010003fa3c

// Remaining properties
@property(copy, nonatomic) NSString *assetReviewID; // @dynamic assetReviewID;
@property(readonly, copy, nonatomic) NSData *ckSystemFields;
@property(readonly, nonatomic) _Bool deletedFlag;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long editGeneration;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate;
@property(copy, nonatomic) NSString *reviewBody; // @dynamic reviewBody;
@property(copy, nonatomic) NSString *reviewTitle; // @dynamic reviewTitle;
@property(nonatomic) short starRating; // @dynamic starRating;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long syncGeneration;
@property(readonly, copy, nonatomic) CKRecord *systemFields;
@property(copy, nonatomic) NSString *userID; // @dynamic userID;

@end

