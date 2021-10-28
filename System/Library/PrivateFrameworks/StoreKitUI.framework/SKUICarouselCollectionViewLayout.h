/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class NSIndexPath;

@interface SKUICarouselCollectionViewLayout : UICollectionViewFlowLayout {

	NSIndexPath* _startScrollingIndexPath;

}

@property (nonatomic,retain) NSIndexPath * startScrollingIndexPath;              //@synthesize startScrollingIndexPath=_startScrollingIndexPath - In the implementation block
+(Class)layoutAttributesClass;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)prepareForTransitionToLayout:(id)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)_panGestureRecognized:(id)arg1 ;
-(NSIndexPath *)startScrollingIndexPath;
-(CGPoint)_collectionViewBoundsCenter;
-(void)setStartScrollingIndexPath:(NSIndexPath *)arg1 ;
@end
