/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface SKUIItemContentRating : NSObject {

	NSArray* _contentRatingAdvisories;
	NSString* _contentRatingName;
	NSString* _contentRatingSystemName;
	NSString* _contentRank;

}

@property (nonatomic,readonly) NSArray * contentRatingAdvisories;               //@synthesize contentRatingAdvisories=_contentRatingAdvisories - In the implementation block
@property (nonatomic,readonly) NSString * contentRatingName;                    //@synthesize contentRatingName=_contentRatingName - In the implementation block
@property (nonatomic,readonly) NSString * contentRank;                          //@synthesize contentRank=_contentRank - In the implementation block
@property (nonatomic,readonly) NSString * contentRatingSystemName;              //@synthesize contentRatingSystemName=_contentRatingSystemName - In the implementation block
-(id)description;
-(NSString *)contentRatingSystemName;
-(NSString *)contentRank;
-(NSString *)contentRatingName;
-(NSArray *)contentRatingAdvisories;
-(id)initWithContentRatingDictionary:(id)arg1 systemName:(id)arg2 ;
@end
