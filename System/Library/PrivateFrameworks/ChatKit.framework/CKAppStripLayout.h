/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSArray;

@interface CKAppStripLayout : UICollectionViewLayout {

	NSArray* _minifiedAttributes;
	NSArray* _magnifiedAttributes;
	NSArray* _supplementryMinifiedAttributes;
	NSArray* _supplementryMagnifiedAttributes;
	BOOL _inLayoutModeTransition;
	BOOL _shouldDimPluginCells;
	BOOL _shouldShowCellBorders;
	unsigned long long _layoutMode;

}

@property (assign,nonatomic) unsigned long long layoutMode;              //@synthesize layoutMode=_layoutMode - In the implementation block
@property (assign,nonatomic) BOOL shouldDimPluginCells;                  //@synthesize shouldDimPluginCells=_shouldDimPluginCells - In the implementation block
@property (assign,nonatomic) BOOL shouldShowCellBorders;                 //@synthesize shouldShowCellBorders=_shouldShowCellBorders - In the implementation block
+(double)minHeight;
+(double)maxHeight;
-(id)init;
-(void)invalidateLayout;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(long long)_itemCount;
-(id)_currentAttributes;
-(unsigned long long)layoutMode;
-(void)setLayoutMode:(unsigned long long)arg1 ;
-(void)setShouldDimPluginCells:(BOOL)arg1 ;
-(void)setShouldShowCellBorders:(BOOL)arg1 ;
-(BOOL)shouldShowCellBorders;
-(CGSize)collectionViewContentSizeForLayoutMode:(unsigned long long)arg1 ;
-(void)prepareForLayoutModeTransition;
-(void)finishLayoutModeTransition;
-(BOOL)shouldDimPluginCells;
-(void)invalidateCachedLayout;
-(Spec)_specForLayoutMode:(unsigned long long)arg1 ;
-(long long)_favoritesCount;
-(long long)_recentsCount;
-(id)_attributesForLayoutMode:(unsigned long long)arg1 ;
-(id)_supplementryAttributesForLayoutMode:(unsigned long long)arg1 ;
-(id)_generateAttributesForSpec:(Spec)arg1 ;
-(id)_generateSupplementryAttributesForSpec:(Spec)arg1 minified:(BOOL)arg2 ;
-(id)_currentSupplementryAttributes;
@end

