/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@protocol UICollectionViewDataSource;
@class GKSectionMetrics, GKSupplementaryViewMetrics;

@interface GKCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {

	BOOL _allSectionItemsVisible;
	BOOL _isPinned;
	BOOL _isPartOfGlobalPinningGroup;
	BOOL _doesAbutLeftOfCollectionView;
	double _unpinnedY;
	id<UICollectionViewDataSource> _dataSource;
	GKSectionMetrics* _sectionMetrics;
	GKSupplementaryViewMetrics* _supplementaryMetrics;
	unsigned long long _currentVisibleItemCount;
	unsigned long long _currentTotalItemCount;
	unsigned long long _maxTotalItemCount;
	double _leadingMargin;
	double _trailingMargin;
	unsigned long long _gridLayoutLocation;

}

@property (assign,nonatomic) BOOL isPartOfGlobalPinningGroup;                                //@synthesize isPartOfGlobalPinningGroup=_isPartOfGlobalPinningGroup - In the implementation block
@property (assign,nonatomic) unsigned long long gridLayoutLocation;                          //@synthesize gridLayoutLocation=_gridLayoutLocation - In the implementation block
@property (assign,nonatomic) BOOL doesAbutLeftOfCollectionView;                              //@synthesize doesAbutLeftOfCollectionView=_doesAbutLeftOfCollectionView - In the implementation block
@property (assign,nonatomic) BOOL allSectionItemsVisible;                                    //@synthesize allSectionItemsVisible=_allSectionItemsVisible - In the implementation block
@property (assign,nonatomic) BOOL isPinned;                                                  //@synthesize isPinned=_isPinned - In the implementation block
@property (assign,nonatomic) double unpinnedY;                                               //@synthesize unpinnedY=_unpinnedY - In the implementation block
@property (nonatomic,retain) id<UICollectionViewDataSource> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) GKSectionMetrics * sectionMetrics;                              //@synthesize sectionMetrics=_sectionMetrics - In the implementation block
@property (nonatomic,retain) GKSupplementaryViewMetrics * supplementaryMetrics;              //@synthesize supplementaryMetrics=_supplementaryMetrics - In the implementation block
@property (assign,nonatomic) unsigned long long currentVisibleItemCount;                     //@synthesize currentVisibleItemCount=_currentVisibleItemCount - In the implementation block
@property (assign,nonatomic) unsigned long long currentTotalItemCount;                       //@synthesize currentTotalItemCount=_currentTotalItemCount - In the implementation block
@property (assign,nonatomic) unsigned long long maxTotalItemCount;                           //@synthesize maxTotalItemCount=_maxTotalItemCount - In the implementation block
@property (assign,nonatomic) double leadingMargin;                                           //@synthesize leadingMargin=_leadingMargin - In the implementation block
@property (assign,nonatomic) double trailingMargin;                                          //@synthesize trailingMargin=_trailingMargin - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<UICollectionViewDataSource>)dataSource;
-(void)setDataSource:(id<UICollectionViewDataSource>)arg1 ;
-(BOOL)isPinned;
-(void)setIsPinned:(BOOL)arg1 ;
-(GKSupplementaryViewMetrics *)supplementaryMetrics;
-(double)leadingMargin;
-(double)trailingMargin;
-(BOOL)doesAbutLeftOfCollectionView;
-(void)setLeadingMargin:(double)arg1 ;
-(void)setTrailingMargin:(double)arg1 ;
-(void)setAllSectionItemsVisible:(BOOL)arg1 ;
-(void)setIsPartOfGlobalPinningGroup:(BOOL)arg1 ;
-(void)setUnpinnedY:(double)arg1 ;
-(void)setSectionMetrics:(GKSectionMetrics *)arg1 ;
-(void)setSupplementaryMetrics:(GKSupplementaryViewMetrics *)arg1 ;
-(void)setCurrentVisibleItemCount:(unsigned long long)arg1 ;
-(void)setCurrentTotalItemCount:(unsigned long long)arg1 ;
-(void)setMaxTotalItemCount:(unsigned long long)arg1 ;
-(void)setGridLayoutLocation:(unsigned long long)arg1 ;
-(void)setDoesAbutLeftOfCollectionView:(BOOL)arg1 ;
-(unsigned long long)maxTotalItemCount;
-(unsigned long long)currentVisibleItemCount;
-(unsigned long long)currentTotalItemCount;
-(GKSectionMetrics *)sectionMetrics;
-(BOOL)allSectionItemsVisible;
-(double)unpinnedY;
-(BOOL)isPartOfGlobalPinningGroup;
-(unsigned long long)gridLayoutLocation;
@end

