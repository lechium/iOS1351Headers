/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UICollectionViewDelegate_Private <UICollectionViewDelegate,UICollectionViewFocusDelegate_Legacy>
@optional
-(id)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(id)arg1;
-(BOOL)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(CGPoint)arg2 contentSize:(CGSize)arg3;
-(CGPoint*)_collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2;
-(id)_collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
-(id)_collectionView:(id)arg1 templateLayoutCellForCellsWithReuseIdentifier:(id)arg2;
-(void)_collectionView:(id)arg1 willLayoutCell:(id)arg2 usingTemplateLayoutCell:(id)arg3 forItemAtIndexPath:(id)arg4;
-(void)_collectionView:(id)arg1 horizontalIndexTitleBar:(id)arg2 selectedEntry:(id)arg3;
-(void)collectionView:(id)arg1 willDisplayContextMenuWithConfiguration:(id)arg2 animator:(id)arg3;
-(void)collectionView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3;
-(id)_collectionView:(id)arg1 styleForContextMenuWithConfiguration:(id)arg2;
-(id)_collectionView:(id)arg1 accessoriesForContextMenuWithConfiguration:(id)arg2 layoutAnchor:(SCD_Struct_CK5)arg3;
-(void)collectionView:(id)arg1 willCommitMenuWithAnimator:(id)arg2;
-(BOOL)_collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;
-(id)_collectionView:(id)arg1 cursorRegionForItemAtIndexPath:(id)arg2 defaultRegion:(id)arg3;
-(id)_collectionView:(id)arg1 cursorStyleForModifiers:(long long)arg2 atIndexPath:(id)arg3;
-(void)_collectionView:(id)arg1 cursorWillEnterItemAtIndexPath:(id)arg2;
-(void)_collectionView:(id)arg1 cursorWillExitItemAtIndexPath:(id)arg2;

@end

