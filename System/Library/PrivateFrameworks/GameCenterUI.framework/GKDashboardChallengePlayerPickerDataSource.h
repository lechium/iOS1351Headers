/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>

@class GKChallenge, NSArray, NSMutableDictionary;

@interface GKDashboardChallengePlayerPickerDataSource : GKCollectionDataSource {

	GKChallenge* _challenge;
	NSArray* _players;
	NSMutableDictionary* _playerStates;
	NSMutableDictionary* _playerAchievementDates;
	NSArray* _searchPlayers;

}

@property (nonatomic,retain) GKChallenge * challenge;                                   //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,retain) NSArray * players;                                         //@synthesize players=_players - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * playerStates;                        //@synthesize playerStates=_playerStates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * playerAchievementDates;              //@synthesize playerAchievementDates=_playerAchievementDates - In the implementation block
@property (nonatomic,retain) NSArray * searchPlayers;                                   //@synthesize searchPlayers=_searchPlayers - In the implementation block
@property (nonatomic,readonly) NSArray * selectedPlayers; 
-(void)dealloc;
-(GKChallenge *)challenge;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)itemCount;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)clearSelection;
-(void)setChallenge:(GKChallenge *)arg1 ;
-(NSArray *)players;
-(double)preferredCollectionHeight;
-(void)setupCollectionView:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(id)sectionHeaderText;
-(void)setPlayers:(NSArray *)arg1 ;
-(void)setPlayerStates:(NSMutableDictionary *)arg1 ;
-(void)setPlayerAchievementDates:(NSMutableDictionary *)arg1 ;
-(id)currentPlayers;
-(id)playerForIndexPath:(id)arg1 ;
-(void)setSearchPlayers:(NSArray *)arg1 ;
-(id)initWithChallenge:(id)arg1 ;
-(NSArray *)selectedPlayers;
-(id)indexPathForPlayer:(id)arg1 ;
-(id)searchKeyForSection:(long long)arg1 ;
-(void)searchTextHasChanged;
-(NSMutableDictionary *)playerStates;
-(NSMutableDictionary *)playerAchievementDates;
-(NSArray *)searchPlayers;
@end

