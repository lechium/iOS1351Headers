/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SUItemReviewStatistics : NSObject <NSCopying> {

	float _averageUserRating;
	long long _numberOfUserRatings;
	NSString* _numberOfUserRatingsString;
	long long _numberOfUserReviews;
	NSString* _numberOfUserReviewsString;

}

@property (assign,nonatomic) float averageUserRating;                         //@synthesize averageUserRating=_averageUserRating - In the implementation block
@property (assign,nonatomic) long long numberOfUserRatings;                   //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (nonatomic,copy) NSString * numberOfUserRatingsString;              //@synthesize numberOfUserRatingsString=_numberOfUserRatingsString - In the implementation block
@property (assign,nonatomic) long long numberOfUserReviews;                   //@synthesize numberOfUserReviews=_numberOfUserReviews - In the implementation block
@property (nonatomic,copy) NSString * numberOfUserReviewsString;              //@synthesize numberOfUserReviewsString=_numberOfUserReviewsString - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)numberOfUserRatings;
-(float)averageUserRating;
-(void)setNumberOfUserRatings:(long long)arg1 ;
-(void)setAverageUserRating:(float)arg1 ;
-(NSString *)numberOfUserRatingsString;
-(void)setNumberOfUserRatingsString:(NSString *)arg1 ;
-(long long)numberOfUserReviews;
-(void)setNumberOfUserReviews:(long long)arg1 ;
-(NSString *)numberOfUserReviewsString;
-(void)setNumberOfUserReviewsString:(NSString *)arg1 ;
@end

