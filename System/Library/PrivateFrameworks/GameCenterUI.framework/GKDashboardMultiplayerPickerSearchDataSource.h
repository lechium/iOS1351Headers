/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>

@class NSMutableDictionary, UISearchBar, NSArray;

@interface GKDashboardMultiplayerPickerSearchDataSource : GKCollectionDataSource {

	BOOL _searching;
	NSMutableDictionary* _playerStates;
	UISearchBar* _searchBar;
	NSArray* _allPlayers;
	NSArray* _searchPlayers;
	long long _maxSelectable;

}

@property (nonatomic,copy) NSArray * allPlayers;                              //@synthesize allPlayers=_allPlayers - In the implementation block
@property (nonatomic,copy) NSArray * searchPlayers;                           //@synthesize searchPlayers=_searchPlayers - In the implementation block
@property (nonatomic,readonly) NSArray * selectedPlayers; 
@property (nonatomic,readonly) long long maxSelectable;                       //@synthesize maxSelectable=_maxSelectable - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * playerStates;              //@synthesize playerStates=_playerStates - In the implementation block
@property (assign,getter=isSearching,nonatomic) BOOL searching;               //@synthesize searching=_searching - In the implementation block
@property (assign,nonatomic,__weak) UISearchBar * searchBar;                  //@synthesize searchBar=_searchBar - In the implementation block
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)itemCount;
-(UISearchBar *)searchBar;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setSearching:(BOOL)arg1 ;
-(BOOL)isSearching;
-(double)preferredCollectionHeight;
-(void)setupCollectionView:(id)arg1 ;
-(void)setAllPlayers:(NSArray *)arg1 ;
-(NSArray *)allPlayers;
-(void)setPlayerStates:(NSMutableDictionary *)arg1 ;
-(void)setSearchPlayers:(NSArray *)arg1 ;
-(NSArray *)selectedPlayers;
-(id)searchKeyForSection:(long long)arg1 ;
-(void)searchTextHasChanged;
-(NSMutableDictionary *)playerStates;
-(NSArray *)searchPlayers;
-(long long)maxSelectable;
-(id)initWithSearchPlayers:(id)arg1 maxSelectable:(long long)arg2 ;
@end

