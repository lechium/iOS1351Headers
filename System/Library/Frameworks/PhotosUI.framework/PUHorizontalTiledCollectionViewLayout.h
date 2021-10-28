/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@protocol PUHorizontalTiledCollectionViewLayoutDelegate;
@class PUCollectionViewData, UICollectionViewLayoutAttributes;

@interface PUHorizontalTiledCollectionViewLayout : UICollectionViewLayout {

	PUCollectionViewData* _data;
	UICollectionViewLayoutAttributes* _dummyAttrs;
	double _interitemSpacing;
	id<PUHorizontalTiledCollectionViewLayoutDelegate> _delegate;
	UIEdgeInsets _itemsContentInset;

}

@property (assign,nonatomic) double interitemSpacing;                                                        //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets itemsContentInset;                                                 //@synthesize itemsContentInset=_itemsContentInset - In the implementation block
@property (assign,nonatomic,__weak) id<PUHorizontalTiledCollectionViewLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasReferenceIndexPath; 
+(Class)invalidationContextClass;
-(id)init;
-(id<PUHorizontalTiledCollectionViewLayoutDelegate>)delegate;
-(void)setDelegate:(id<PUHorizontalTiledCollectionViewLayoutDelegate>)arg1 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)invalidateCachedLayout;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(BOOL)_shouldInvalidateCachedLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setItemsContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)itemsContentInset;
-(id)_layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(BOOL)hasReferenceIndexPath;
-(BOOL)_updateLayoutData:(id)arg1 inDirection:(long long)arg2 outDeltaOriginX:(double*)arg3 ;
-(void)_ensureRect:(CGRect)arg1 inData:(id)arg2 outDeltaOriginX:(double*)arg3 ;
-(void)_ensureIndexPath:(id)arg1 inData:(id)arg2 ;
-(id)layoutAttributesForItemsInRect:(CGRect)arg1 ;
@end
