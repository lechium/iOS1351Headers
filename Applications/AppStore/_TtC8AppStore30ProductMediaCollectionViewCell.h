//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MISSING_TYPE;

@interface _TtC8AppStore30ProductMediaCollectionViewCell : UICollectionViewCell
{
    MISSING_TYPE *collectionView;	// 8 = 0x8
    MISSING_TYPE *flowLayout;	// 16 = 0x10
    MISSING_TYPE *scrollViewDelegateCoordinator;	// 24 = 0x18
    MISSING_TYPE *screenshotFetcher;	// 32 = 0x20
    MISSING_TYPE *media;	// 40 = 0x28
    MISSING_TYPE *objectGraph;	// 48 = 0x30
    MISSING_TYPE *fallbackHorizontalViewMargin;	// 56 = 0x38
    MISSING_TYPE *pageTraits;	// 64 = 0x40
    MISSING_TYPE *topAccessoryView;	// 72 = 0x48
    MISSING_TYPE *bottomAccessoryView;	// 80 = 0x50
    MISSING_TYPE *displaysTopAccessoryDivider;	// 88 = 0x58
    MISSING_TYPE *displaysBottomAccessoryDivider;	// 89 = 0x59
    MISSING_TYPE *topAccessoryDividerView;	// 96 = 0x60
    MISSING_TYPE *bottomAccessoryDividerView;	// 104 = 0x68
    MISSING_TYPE *screenshotSelectionHandler;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000100238f58
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0000000100238e8c
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0000000100238e80
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100238da0
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000100238b30
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000100238b24
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000100238a0c
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100238924
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010023868c
- (void)prepareForReuse;	// IMP=0x0000000100238660
- (void)layoutSubviews;	// IMP=0x0000000100238538
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100237b1c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100237a2c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100237a0c

@end
