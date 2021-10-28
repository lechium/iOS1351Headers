//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BCMutableCloudData.h"

#import "BCAssetReview-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableAssetReview : BCMutableCloudData <BCAssetReview, NSSecureCoding>
{
    short _starRating;	// 8 = 0x8
    NSString *_assetReviewID;	// 16 = 0x10
    NSString *_reviewTitle;	// 24 = 0x18
    NSString *_reviewBody;	// 32 = 0x20
    NSString *_userID;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100040f8c
- (void).cxx_destruct;	// IMP=0x0000000100041280
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *reviewBody; // @synthesize reviewBody=_reviewBody;
@property(copy, nonatomic) NSString *reviewTitle; // @synthesize reviewTitle=_reviewTitle;
@property(nonatomic) short starRating; // @synthesize starRating=_starRating;
@property(copy, nonatomic) NSString *assetReviewID; // @synthesize assetReviewID=_assetReviewID;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000410a4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100040f94
- (id)configuredRecordFromAttributes;	// IMP=0x0000000100040e5c
- (id)zoneName;	// IMP=0x0000000100040e4c
@property(nonatomic) double normalizedStarRating;
- (id)identifier;	// IMP=0x0000000100040d5c
- (id)recordType;	// IMP=0x0000000100040d50
@property(readonly, copy) NSString *description;
- (id)initWithRecord:(id)arg1;	// IMP=0x0000000100040ad4
- (id)initWithCloudData:(id)arg1;	// IMP=0x0000000100040908
- (id)initWithAssetReviewID:(id)arg1;	// IMP=0x000000010004083c

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
