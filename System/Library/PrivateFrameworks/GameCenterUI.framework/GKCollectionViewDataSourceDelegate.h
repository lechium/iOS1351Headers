/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GKCollectionViewDataSourceDelegate <NSObject>
@optional
-(void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
-(void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2;
-(void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2;
-(void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
-(void)dataSource:(id)arg1 didInsertSections:(id)arg2;
-(void)dataSource:(id)arg1 didRemoveSections:(id)arg2;
-(void)dataSource:(id)arg1 didRefreshSections:(id)arg2;
-(void)dataSource:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
-(void)dataSourceDidReloadData:(id)arg1;
-(void)dataSource:(id)arg1 performBatchUpdate:(/*^block*/id)arg2 complete:(/*^block*/id)arg3;
-(void)dataSource:(id)arg1 didUpdatePlaceholderVisibility:(BOOL)arg2;
-(void)dataSourceDidMoveSectionsWithItems:(id)arg1;

@end
