/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FCFeedPersonalizing <FCTagRanking>
@optional
-(void)prepareFavorites:(/*^block*/id)arg1;
-(id)bestOfGroupFromItems:(id)arg1 configurationSet:(long long)arg2;
-(id)sortItems:(id)arg1 configurationSet:(long long)arg2;
-(id)sortItems:(id)arg1 options:(long long)arg2 configurationSet:(long long)arg3;
-(double)personalizedScoreForFeatureWithIdentifier:(id)arg1 items:(id)arg2;
-(double)personalizedScoreForFeatureWithIdentifier:(id)arg1 items:(id)arg2 scores:(id)arg3;
-(void)fetchAggregateMapForPersonalizingItem:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(unsigned long long)whitelistLevelForTagID:(id)arg1;
-(void)prepareForUseWithCompletionHandler:(/*^block*/id)arg1;
-(double)decayedPublisherDiversificationPenalty;
-(id)limitItemsByMinimumItemQuality:(id)arg1;
-(id)sortItems:(id)arg1 options:(long long)arg2;
-(id)limitItemsByFlowRate:(id)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3;
-(id)diversifyItems:(id)arg1 limit:(unsigned long long)arg2 preselectedItems:(id)arg3;
-(id)diversifyItems:(id)arg1 limit:(unsigned long long)arg2;
-(id)sortItems:(id)arg1;

@end

