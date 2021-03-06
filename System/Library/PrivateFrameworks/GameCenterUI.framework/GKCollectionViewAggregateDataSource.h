/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GKCollectionViewDataSource.h>

@class NSMutableArray, NSMapTable, NSMutableDictionary;

@interface GKCollectionViewAggregateDataSource : GKCollectionViewDataSource {

	NSMutableArray* _mappings;
	NSMapTable* _dataSourceToMappings;
	NSMutableDictionary* _globalSectionToMappings;
	unsigned long long _sectionCount;

}

@property (nonatomic,retain) NSMutableArray * mappings;                                  //@synthesize mappings=_mappings - In the implementation block
@property (nonatomic,retain) NSMapTable * dataSourceToMappings;                          //@synthesize dataSourceToMappings=_dataSourceToMappings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * globalSectionToMappings;              //@synthesize globalSectionToMappings=_globalSectionToMappings - In the implementation block
@property (assign,nonatomic) unsigned long long sectionCount;                            //@synthesize sectionCount=_sectionCount - In the implementation block
-(id)init;
-(void)dealloc;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(unsigned long long)sectionCount;
-(NSMutableArray *)mappings;
-(void)setMappings:(NSMutableArray *)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)removeDataSource:(id)arg1 ;
-(id)_gkDescriptionWithChildren:(int)arg1 ;
-(id)dataSourceForSection:(unsigned long long)arg1 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(id)indexPathsForItem:(id)arg1 ;
-(BOOL)item:(id)arg1 matchesSearchTerms:(id)arg2 inSection:(long long)arg3 ;
-(void)removeItemAtIndexPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)configureCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 evaluateFactoryForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 isRecursive:(BOOL)arg4 ;
-(id)createMetricsTreeWithGridLayout:(id)arg1 ;
-(void)collectionViewWillBecomeActive:(id)arg1 ;
-(void)collectionViewDidBecomeInactive:(id)arg1 ;
-(BOOL)containsDataSource:(id)arg1 ;
-(unsigned long long)sectionForDataSource:(id)arg1 ;
-(void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)dataSource:(id)arg1 didInsertSections:(id)arg2 ;
-(void)dataSource:(id)arg1 didRemoveSections:(id)arg2 ;
-(void)dataSource:(id)arg1 didRefreshSections:(id)arg2 ;
-(void)dataSource:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3 ;
-(void)dataSourceDidReloadData:(id)arg1 ;
-(void)dataSource:(id)arg1 performBatchUpdate:(/*^block*/id)arg2 complete:(/*^block*/id)arg3 ;
-(id)_gkDescription;
-(void)setSectionCount:(unsigned long long)arg1 ;
-(id)wrapperForView:(id)arg1 mapping:(id)arg2 ;
-(void)updateMappings;
-(id)mappingForDataSource:(id)arg1 ;
-(id)mappingForGlobalSection:(long long)arg1 ;
-(id)allDataSources;
-(id)globalIndexPathsForLocal:(id)arg1 dataSource:(id)arg2 ;
-(id)globalSectionsForLocal:(id)arg1 dataSource:(id)arg2 ;
-(void)addDataSource:(id)arg1 withTag:(id)arg2 ;
-(void)setDataSource:(id)arg1 forTag:(id)arg2 ;
-(NSMapTable *)dataSourceToMappings;
-(void)setDataSourceToMappings:(NSMapTable *)arg1 ;
-(NSMutableDictionary *)globalSectionToMappings;
-(void)setGlobalSectionToMappings:(NSMutableDictionary *)arg1 ;
@end

