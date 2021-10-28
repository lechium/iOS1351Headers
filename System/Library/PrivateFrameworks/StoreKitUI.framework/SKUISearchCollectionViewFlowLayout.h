/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIItemGridCollectionViewLayout.h>

@class UICollectionView;

@interface SKUISearchCollectionViewFlowLayout : SKUIItemGridCollectionViewLayout {

	UICollectionView* _collectionView;
	long long _numberOfRows;
	long long _numberOfColumns;
	CGSize _headerSize;
	double _horizontalPadding;
	double _verticalPadding;
	BOOL _backfills;

}

@property (assign,nonatomic) double horizontalPadding;              //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
@property (assign,nonatomic) double verticalPadding;                //@synthesize verticalPadding=_verticalPadding - In the implementation block
@property (assign,nonatomic) BOOL backfills;                        //@synthesize backfills=_backfills - In the implementation block
-(id)init;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setHorizontalPadding:(double)arg1 ;
-(double)horizontalPadding;
-(double)verticalPadding;
-(void)setVerticalPadding:(double)arg1 ;
-(BOOL)backfills;
-(void)setBackfills:(BOOL)arg1 ;
@end
