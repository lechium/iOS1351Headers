/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>
#import <libobjc.A.dylib/SKUIStorePageCollectionViewLayout.h>
@class NSString, NSArray;


@protocol SKUIStorePageCollectionViewLayout <NSObject>
@property (nonatomic,copy) NSString * backdropGroupName; 
@property (nonatomic,readonly) NSArray * indexPathsForPinningItems; 
@property (nonatomic,copy) NSArray * indexPathsForGradientItems; 
@property (assign,nonatomic) BOOL rendersWithParallax; 
@property (assign,nonatomic) BOOL rendersWithPerspective; 
@required
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(id)arg1;
-(BOOL)rendersWithParallax;
-(BOOL)rendersWithPerspective;
-(void)setRendersWithPerspective:(BOOL)arg1;
-(void)setRendersWithParallax:(BOOL)arg1;
-(NSArray *)indexPathsForPinningItems;
-(id)layoutAttributesForUnpinnedItemAtIndexPath:(id)arg1;
-(id)pinnedLayoutAttributesForItemsInRect:(CGRect)arg1;
-(NSArray *)indexPathsForGradientItems;
-(void)setIndexPathsForGradientItems:(id)arg1;

@end


@class NSString, NSArray, UIColor, NSMapTable, NSIndexSet;

@interface SKUIStorePageCollectionViewLayout : UICollectionViewFlowLayout <SKUIStorePageCollectionViewLayout> {

	NSString* _backdropGroupName;
	UIColor* _collectionViewBackgroundColor;
	BOOL _hasValidGradientIndexPaths;
	BOOL _hasValidIndexPathsForPinningItems;
	BOOL _hasValidPinnedBackdropViewStyle;
	BOOL _hasValidPinningLayoutInformation;
	long long _inLayoutAttributesForElementsCount;
	NSMapTable* _indexPathToItemPinningConfiguration;
	NSMapTable* _indexPathToPinningLayoutInformation;
	NSArray* _indexPathsForGradientItems;
	NSArray* _indexPathsForPinningItems;
	double _overrideContentWidth;
	long long _pinnedBackdropViewStyle;
	BOOL _rendersWithParallax;
	BOOL _rendersWithPerspective;
	struct {
		unsigned respondsToIndexPathsForPinningItems : 1;
		unsigned respondsToPinningContentInsetForItemAtIndexPath : 1;
		unsigned respondsToPinningStyleForItemAtIndexPath : 1;
		unsigned respondsToPinningGroupForItemAtIndexPath : 1;
		unsigned respondsToPinningTransitionStyleForItemAtIndexPath : 1;
		unsigned respondsToWillApplyLayoutAttributes : 1;
	}  _collectionViewDelegateFlags;
	NSArray* _updateItems;
	BOOL _allowsPinningTransitions;
	NSIndexSet* _expandChildPageSectionsIndexSet;

}

@property (assign,nonatomic) BOOL allowsPinningTransitions;                           //@synthesize allowsPinningTransitions=_allowsPinningTransitions - In the implementation block
@property (assign,nonatomic) double overrideContentWidth;                             //@synthesize overrideContentWidth=_overrideContentWidth - In the implementation block
@property (nonatomic,copy) NSIndexSet * expandChildPageSectionsIndexSet;              //@synthesize expandChildPageSectionsIndexSet=_expandChildPageSectionsIndexSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * backdropGroupName;                              //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (nonatomic,readonly) NSArray * indexPathsForPinningItems; 
@property (nonatomic,copy) NSArray * indexPathsForGradientItems;                      //@synthesize indexPathsForGradientItems=_indexPathsForGradientItems - In the implementation block
@property (assign,nonatomic) BOOL rendersWithParallax;                                //@synthesize rendersWithParallax=_rendersWithParallax - In the implementation block
@property (assign,nonatomic) BOOL rendersWithPerspective;                             //@synthesize rendersWithPerspective=_rendersWithPerspective - In the implementation block
+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(id)init;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(BOOL)rendersWithParallax;
-(BOOL)rendersWithPerspective;
-(void)setRendersWithPerspective:(BOOL)arg1 ;
-(void)setRendersWithParallax:(BOOL)arg1 ;
-(NSArray *)indexPathsForPinningItems;
-(void)setOverrideContentWidth:(double)arg1 ;
-(void)setExpandChildPageSectionsIndexSet:(NSIndexSet *)arg1 ;
-(id)layoutAttributesForUnpinnedItemAtIndexPath:(id)arg1 ;
-(id)pinnedLayoutAttributesForItemsInRect:(CGRect)arg1 ;
-(id)_indexPathsForPinningItems;
-(id)_getCollectionViewUpdateItemForItemFromIndex:(long long)arg1 initalLayout:(BOOL)arg2 ;
-(void)_invalidatePinningLayoutInformation;
-(id)_itemPinningConfigurationForItemAtIndexPath:(id)arg1 ;
-(id)_itemPinningLayoutInformationForItemAtIndexPath:(id)arg1 ;
-(id)_layoutAttributesForPinnedBackdropDecorationViewAtIndexPath:(id)arg1 pinningConfiguration:(id)arg2 layoutInformation:(id)arg3 ;
-(void)_appendAdditionalLayoutAttributesForPinningItemsInRect:(CGRect)arg1 toArray:(id)arg2 ;
-(void)_configureCellLayoutAttributes:(id)arg1 forItemWithPinningConfiguration:(id)arg2 layoutInformation:(id)arg3 atIndexPath:(id)arg4 allowPinning:(BOOL)arg5 returningIsPinning:(out BOOL*)arg6 ;
-(BOOL)_allowsBackdropDecorationForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_indexPathsForBackgroundGradients;
-(id)_layoutAttributesForGradientDecorationViewAtIndexPath:(id)arg1 currentAttributes:(id)arg2 ;
-(void)_alginCellsToTop:(id)arg1 ;
-(void)_updateItemsLayoutForRect:(CGRect)arg1 ;
-(CGRect)_pinningFrameForStartingFrame:(CGRect)arg1 itemPinningConfiguration:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)_pinningStyleForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2 ;
-(UIEdgeInsets)_pinningContentInsetForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2 ;
-(long long)_pinningGroupForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2 ;
-(CGRect)_targetFrameForStartingFrame:(CGRect)arg1 itemPinningConfiguration:(id)arg2 layoutInformation:(id)arg3 atIndexPath:(id)arg4 returningIsPinning:(out BOOL*)arg5 ;
-(void)_calculatePinningLayoutInformation;
-(long long)_pinningTransitionStyleForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2 ;
-(long long)_pinnedBackdropViewStyle;
-(NSArray *)indexPathsForGradientItems;
-(void)setIndexPathsForGradientItems:(NSArray *)arg1 ;
-(void)setAllowsPinningTransitions:(BOOL)arg1 ;
-(double)overrideContentWidth;
-(BOOL)allowsPinningTransitions;
-(NSIndexSet *)expandChildPageSectionsIndexSet;
@end

