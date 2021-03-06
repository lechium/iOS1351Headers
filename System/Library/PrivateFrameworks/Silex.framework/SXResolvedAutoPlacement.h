/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXAutoPlacement.h>

@protocol SXAdvertisementPlacementType, SXSuggestedArticlesPlacementType;
@class NSString;

@interface SXResolvedAutoPlacement : NSObject <SXAutoPlacement> {

	id<SXAdvertisementPlacementType> _advertisement;
	id<SXSuggestedArticlesPlacementType> _suggestedArticles;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXAdvertisementPlacementType> advertisement;                      //@synthesize advertisement=_advertisement - In the implementation block
@property (nonatomic,readonly) id<SXSuggestedArticlesPlacementType> suggestedArticles;              //@synthesize suggestedArticles=_suggestedArticles - In the implementation block
-(id<SXAdvertisementPlacementType>)advertisement;
-(id<SXSuggestedArticlesPlacementType>)suggestedArticles;
-(id)initWithAdvertisement:(id)arg1 suggestedArticles:(id)arg2 ;
@end

