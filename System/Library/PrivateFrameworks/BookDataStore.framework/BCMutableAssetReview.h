/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BookDataStore/BCMutableCloudData.h>
#import <libobjc.A.dylib/BCAssetReview.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, CKRecord, NSData;

@interface BCMutableAssetReview : BCMutableCloudData <BCAssetReview, NSSecureCoding> {

	short _starRating;
	NSString* _assetReviewID;
	NSString* _reviewTitle;
	NSString* _reviewBody;
	NSString* _userID;

}

@property (nonatomic,copy) NSString * assetReviewID;                                             //@synthesize assetReviewID=_assetReviewID - In the implementation block
@property (nonatomic,copy) NSString * userID;                                                    //@synthesize userID=_userID - In the implementation block
@property (assign,nonatomic) short starRating;                                                   //@synthesize starRating=_starRating - In the implementation block
@property (assign,nonatomic) double normalizedStarRating; 
@property (nonatomic,copy) NSString * reviewTitle;                                               //@synthesize reviewTitle=_reviewTitle - In the implementation block
@property (nonatomic,copy) NSString * reviewBody;                                                //@synthesize reviewBody=_reviewBody - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL deletedFlag; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) long long editGeneration; 
@property (nonatomic,readonly) long long syncGeneration; 
@property (nonatomic,copy,readonly) CKRecord * systemFields; 
@property (nonatomic,copy,readonly) NSData * ckSystemFields; 
@property (assign,nonatomic,__weak) id<BCCloudDataPrivacyDelegate> privacyDelegate; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)userID;
-(id)identifier;
-(id)recordType;
-(id)zoneName;
-(void)setUserID:(NSString *)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(short)starRating;
-(void)setStarRating:(short)arg1 ;
-(id)initWithCloudData:(id)arg1 ;
-(id)configuredRecordFromAttributes;
-(NSString *)assetReviewID;
-(double)normalizedStarRating;
-(NSString *)reviewTitle;
-(NSString *)reviewBody;
-(void)setAssetReviewID:(NSString *)arg1 ;
-(void)setNormalizedStarRating:(double)arg1 ;
-(id)initWithAssetReviewID:(id)arg1 ;
-(void)setReviewTitle:(NSString *)arg1 ;
-(void)setReviewBody:(NSString *)arg1 ;
@end
