/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVCollectionView.h>

@class _TVShelfViewLayout;

@interface _TVShelfView : _TVCollectionView {

	_TVShelfViewLayout* _shelfFlowLayout;

}

@property (nonatomic,retain) _TVShelfViewLayout * shelfFlowLayout;              //@synthesize shelfFlowLayout=_shelfFlowLayout - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(CGPoint)_contentOffsetForNewFrame:(CGRect)arg1 oldFrame:(CGRect)arg2 newContentSize:(CGSize)arg3 andOldContentSize:(CGSize)arg4 ;
-(id)initWithFrame:(CGRect)arg1 shelfViewLayout:(id)arg2 ;
-(_TVShelfViewLayout *)shelfFlowLayout;
-(UIEdgeInsets)_selectionMarginsForCell:(id)arg1 ;
-(UIEdgeInsets)selectionMarginsForCellAtIndexPath:(id)arg1 ;
-(CGRect)tv_augmentedSelectionFrameForFrame:(CGRect)arg1 ;
-(CGSize)tv_sizeThatFits:(CGSize)arg1 withContentInset:(UIEdgeInsets)arg2 ;
-(void)_updateLayoutForFocusedView:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)updateLayoutForFocusedView:(id)arg1 ;
-(void)setShelfFlowLayout:(_TVShelfViewLayout *)arg1 ;
@end

