/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>
#import <libobjc.A.dylib/GKDashboardChallengeDetailViewControllerDelegate.h>

@class GKGameRecord, NSArray;

@interface GKChallengeDataSource : GKCollectionDataSource <GKDashboardChallengeDetailViewControllerDelegate> {

	BOOL _shouldShowPlay;
	GKGameRecord* _gameRecord;
	NSArray* _challenges;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;              //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) NSArray * challenges;                   //@synthesize challenges=_challenges - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlay;                    //@synthesize shouldShowPlay=_shouldShowPlay - In the implementation block
-(void)dealloc;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)itemCount;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(double)preferredCollectionHeight;
-(void)setupCollectionView:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(id)sectionHeaderText;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(GKGameRecord *)gameRecord;
-(id)initWithGameRecord:(id)arg1 ;
-(void)userDidSelectPlay:(id)arg1 ;
-(BOOL)shouldShowPlay;
-(void)setShouldShowPlay:(BOOL)arg1 ;
-(void)setChallenges:(NSArray *)arg1 ;
-(NSArray *)challenges;
@end

