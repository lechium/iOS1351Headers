/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>

@class GKLeaderboard, GKGameRecord, NSArray, UIFont;

@interface GKDashboardLeaderboardScoreDataSource : GKCollectionDataSource {

	BOOL _showingMoreScores;
	BOOL _forceInitialShowMore;
	GKLeaderboard* _leaderboard;
	id _timeScopeTarget;
	SEL _timeScopeAction;
	GKGameRecord* _gameRecord;
	NSArray* _scores;
	long long _visibleItemCount;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;                                      //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) NSArray * scores;                                               //@synthesize scores=_scores - In the implementation block
@property (assign,nonatomic) long long visibleItemCount;                                     //@synthesize visibleItemCount=_visibleItemCount - In the implementation block
@property (nonatomic,readonly) BOOL needsShowcaseCell; 
@property (nonatomic,readonly) BOOL needsShowMoreCell; 
@property (nonatomic,readonly) UIFont * sectionHeaderFont; 
@property (assign,getter=isShowingMoreScores,nonatomic) BOOL showingMoreScores;              //@synthesize showingMoreScores=_showingMoreScores - In the implementation block
@property (assign,nonatomic) BOOL forceInitialShowMore;                                      //@synthesize forceInitialShowMore=_forceInitialShowMore - In the implementation block
@property (nonatomic,retain) GKLeaderboard * leaderboard;                                    //@synthesize leaderboard=_leaderboard - In the implementation block
@property (assign,nonatomic) long long playerScope; 
@property (assign,nonatomic) long long timeScope; 
@property (assign,nonatomic) id timeScopeTarget;                                             //@synthesize timeScopeTarget=_timeScopeTarget - In the implementation block
@property (assign,nonatomic) SEL timeScopeAction;                                            //@synthesize timeScopeAction=_timeScopeAction - In the implementation block
-(void)dealloc;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)itemCount;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(UIFont *)sectionHeaderFont;
-(NSArray *)scores;
-(void)setScores:(NSArray *)arg1 ;
-(void)setTimeScope:(long long)arg1 ;
-(long long)timeScope;
-(double)preferredCollectionHeight;
-(void)setupCollectionView:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(id)sectionHeaderText;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(void)setLeaderboard:(GKLeaderboard *)arg1 ;
-(id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2 ;
-(GKGameRecord *)gameRecord;
-(GKLeaderboard *)leaderboard;
-(void)setPlayerScope:(long long)arg1 ;
-(long long)playerScope;
-(BOOL)hasFriendsButton;
-(BOOL)needsShowMoreCell;
-(BOOL)isShowingMoreScores;
-(void)setShowingMoreScores:(BOOL)arg1 ;
-(void)revealMoreItemsInCollectionView:(id)arg1 section:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)needsShowcaseCell;
-(BOOL)isShowcaseIndexPath:(id)arg1 ;
-(BOOL)isShowMoreIndexPath:(id)arg1 ;
-(void)sectionHeaderButtonPressed:(id)arg1 ;
-(void)showMoreInCollectionView:(id)arg1 section:(long long)arg2 ;
-(id)timeScopeTarget;
-(void)setTimeScopeTarget:(id)arg1 ;
-(SEL)timeScopeAction;
-(void)setTimeScopeAction:(SEL)arg1 ;
-(long long)visibleItemCount;
-(void)setVisibleItemCount:(long long)arg1 ;
-(BOOL)forceInitialShowMore;
-(void)setForceInitialShowMore:(BOOL)arg1 ;
@end

