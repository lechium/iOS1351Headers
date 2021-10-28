/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUI/PhotosUI-Structs.h>
@class NSIndexPath, UICollectionViewLayoutAttributes;

@interface PUPhotosSharingCollectionViewItemSublayout : NSObject {

	CGPoint _selectionBadgeCenter;
	CGPoint _optionBadgeCenter;
	NSIndexPath* _indexPath;
	double _bottomBadgeInset;
	unsigned long long _badgesCorner;
	UICollectionViewLayoutAttributes* _selectionBadgeLayoutAttributes;
	UICollectionViewLayoutAttributes* _optionBadgeLayoutAttributes;
	UIOffset _badgesOffset;
	CGRect _itemFrame;
	CGRect _visibleItemFrame;
	CGRect _badgesContainerFrame;
	CGRect _floatingBadgesContainerFrame;

}

@property (nonatomic,readonly) NSIndexPath * indexPath;                                                        //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) CGRect itemFrame;                                                               //@synthesize itemFrame=_itemFrame - In the implementation block
@property (assign,nonatomic) CGRect visibleItemFrame;                                                          //@synthesize visibleItemFrame=_visibleItemFrame - In the implementation block
@property (assign,nonatomic) CGSize selectionBadgeSize; 
@property (assign,nonatomic) CGSize optionBadgeSize; 
@property (assign,nonatomic) double bottomBadgeInset;                                                          //@synthesize bottomBadgeInset=_bottomBadgeInset - In the implementation block
@property (assign,nonatomic) UIOffset badgesOffset;                                                            //@synthesize badgesOffset=_badgesOffset - In the implementation block
@property (assign,nonatomic) unsigned long long badgesCorner;                                                  //@synthesize badgesCorner=_badgesCorner - In the implementation block
@property (nonatomic,readonly) UICollectionViewLayoutAttributes * selectionBadgeLayoutAttributes;              //@synthesize selectionBadgeLayoutAttributes=_selectionBadgeLayoutAttributes - In the implementation block
@property (nonatomic,readonly) UICollectionViewLayoutAttributes * optionBadgeLayoutAttributes;                 //@synthesize optionBadgeLayoutAttributes=_optionBadgeLayoutAttributes - In the implementation block
@property (nonatomic,readonly) CGRect badgesContainerFrame;                                                    //@synthesize badgesContainerFrame=_badgesContainerFrame - In the implementation block
@property (nonatomic,readonly) CGRect floatingBadgesContainerFrame;                                            //@synthesize floatingBadgesContainerFrame=_floatingBadgesContainerFrame - In the implementation block
-(NSIndexPath *)indexPath;
-(CGRect)itemFrame;
-(CGSize)selectionBadgeSize;
-(UIOffset)badgesOffset;
-(unsigned long long)badgesCorner;
-(void)setBadgesOffset:(UIOffset)arg1 ;
-(void)setBadgesCorner:(unsigned long long)arg1 ;
-(id)initWithIndexPath:(id)arg1 itemFrame:(CGRect)arg2 ;
-(void)setSelectionBadgeSize:(CGSize)arg1 ;
-(void)setOptionBadgeSize:(CGSize)arg1 ;
-(CGSize)optionBadgeSize;
-(void)prepareSublayout;
-(void)setFloatingOffset:(UIOffset)arg1 ;
-(CGRect)visibleItemFrame;
-(void)setVisibleItemFrame:(CGRect)arg1 ;
-(double)bottomBadgeInset;
-(void)setBottomBadgeInset:(double)arg1 ;
-(UICollectionViewLayoutAttributes *)selectionBadgeLayoutAttributes;
-(UICollectionViewLayoutAttributes *)optionBadgeLayoutAttributes;
-(CGRect)badgesContainerFrame;
-(CGRect)floatingBadgesContainerFrame;
@end
