/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WBSFrequentlyVisitedSitesBannedURLStore, WBSHistory, NSArray;

@interface WBSFrequentlyVisitedSitesController : NSObject {

	WBSFrequentlyVisitedSitesBannedURLStore* _bannedURLStore;
	double _timeOfLastFrequentlyVisitedSitesComputation;
	WBSHistory* _history;

}

@property (nonatomic,readonly) NSArray * frequentlyVisitedSites; 
+(float)scoreForHistoryItem:(id)arg1 atTime:(double)arg2 withMinimumVisitCount:(unsigned long long)arg3 ;
+(float)scoreWithHistoryItemForVisitScoring:(id)arg1 historyItemForURLScoring:(id)arg2 atTime:(double)arg3 withMinimumVisitCount:(unsigned long long)arg4 ;
+(float)scoreForHistoryItem:(id)arg1 atTime:(double)arg2 ;
+(float)scoreWithHistoryItemForVisitScoring:(id)arg1 historyItemForURLScoring:(id)arg2 atTime:(double)arg3 ;
-(void)_recomputeFrequentlyVisitedSitesNow;
-(id)_computeFrequentlyVisitedSiteCandidates;
-(void)_updateFrequentlyVisitedSitesWithCandidates:(id)arg1 ;
-(float)_scoreForHistoryItem:(id)arg1 ;
-(id)_canonicalizedFavoritesURLStringSet;
-(BOOL)_saveFrequentlyVisitedSites:(id)arg1 ;
-(void)_postFrequentlyVisitedSitesDidChangeNotification;
-(id)initWithHistory:(id)arg1 bannedURLStore:(id)arg2 ;
-(NSArray *)frequentlyVisitedSites;
-(BOOL)recomputeFrequentlyVisitedSitesIfNecessary;
-(void)clearFrequentlyVisitedSites;
@end

