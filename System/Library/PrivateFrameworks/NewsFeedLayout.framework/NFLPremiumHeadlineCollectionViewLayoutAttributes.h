/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <NewsFeedLayout/NFLHeadlineCollectionViewLayoutAttributes.h>

@interface NFLPremiumHeadlineCollectionViewLayoutAttributes : NFLHeadlineCollectionViewLayoutAttributes {

	double _shadowRadius;
	double _shadowOpacity;
	CGSize _shadowOffset;

}

@property (assign,nonatomic) double shadowRadius;               //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;               //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double shadowOpacity;              //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)shadowRadius;
-(void)setShadowRadius:(double)arg1 ;
-(CGSize)shadowOffset;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(double)shadowOpacity;
-(id)protobufRepresentationnormalizedWithFeedGutter:(double)arg1 ;
-(void)populateWithProtobuf:(id)arg1 normalizedWithFeedGutter:(double)arg2 ;
@end
