/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCFeedTransforming.h>

@protocol FCFeedTransforming;
@class NSString;

@interface FCFeedTransformationUnconsumedOnly : NSObject <FCFeedTransforming> {

	id<FCFeedTransforming> _innerFilter;

}

@property (nonatomic,retain) id<FCFeedTransforming> innerFilter;              //@synthesize innerFilter=_innerFilter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)transformFeedItems:(id)arg1 ;
-(id<FCFeedTransforming>)innerFilter;
-(id)initWithFilterMethod:(unsigned long long)arg1 consumedArticleItems:(id)arg2 minimumTimeSinceFirstConsumedToFilter:(double)arg3 filterDate:(id)arg4 articleIDProvider:(/*^block*/id)arg5 dateOfArticleIDConsumptionProvider:(/*^block*/id)arg6 maxVersionConsumedProvider:(/*^block*/id)arg7 dateOfMaxVersionConsumptionProvider:(/*^block*/id)arg8 ;
-(void)setInnerFilter:(id<FCFeedTransforming>)arg1 ;
@end
