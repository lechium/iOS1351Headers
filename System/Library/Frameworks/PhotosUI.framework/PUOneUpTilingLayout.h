/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUSectionedTilingLayout.h>

@protocol PUOneUpTilingLayoutDelegate;
@class NSIndexPath, NSMutableDictionary, UITraitCollection, PUParallaxComputer;

@interface PUOneUpTilingLayout : PUSectionedTilingLayout {

	CGSize _itemSize;
	NSIndexPath* _inFocusIndexPath;
	NSIndexPath* _neighborIndexPath;
	double _transitionProgress;
	struct {
		BOOL respondsToAspectRatioForItemAtIndexPath;
		BOOL respondsToShouldScaleToFitSafeInsetsForItemAtIndexPath;
		BOOL respondsToBadgeSizeForItemAtIndexPath;
		BOOL respondsToActionBadgeSizeForItemAtIndexPath;
		BOOL respondsToAssetExplorerReviewScreenBadgeSizeForItemAtIndexPath;
		BOOL respondsToShouldShowPlayButtonForItemAtIndexPath;
		BOOL respondsToShouldShowProgressIndicatorForItemAtIndexPath;
		BOOL respondsToShouldMoveProgressIndicatorForItemAtIndexPath;
		BOOL respondsToShouldShowBufferingIndicatorForItemAtIndexPath;
		BOOL respondsToLoadingIndicatorSizeForItemAtIndexPath;
		BOOL respondsToModelTileTransformForItemAtIndexPath;
		BOOL respondsToContentOffsetForItemAtIndexPath;
		BOOL respondsToShouldShowAccessoryForItemAtIndexPath;
		BOOL respondsToMinimumVisibleContentHeightForItemAtIndexPath;
		BOOL respondsToMinimumVisibleAccessoryHeightForItemAtIndexPath;
		BOOL respondsToShouldShowVideoPlaceholderForItemAtIndexPath;
		BOOL respondsToDisableInitialZoomToFillForItemAtIndexPath;
		BOOL respondsToShouldShowReviewScreenScrubberBar;
		BOOL respondsToAlphaForReviewScreenBarsInLayout;
	}  _delegateFlags;
	NSMutableDictionary* _layoutInfosByIndexPathByTileKind;
	BOOL _useBackgroundTile;
	BOOL _useBadgeTiles;
	BOOL _useAssetExplorerReviewScreenBadgeTiles;
	BOOL _useSelectionIndicatorTiles;
	BOOL _useImportStatusIndicatorTiles;
	BOOL _useReviewScreenBars;
	BOOL _useVerticalReviewScreenControlBarLayout;
	BOOL _canDisplayLoadingIndicators;
	BOOL _useUserTransformTiles;
	BOOL _shouldPinContentToTop;
	BOOL _shouldHideMainContent;
	id<PUOneUpTilingLayoutDelegate> _delegate;
	long long _windowInterfaceOrientation;
	long long _tileInitialContentMode;
	UITraitCollection* _traitCollection;
	PUParallaxComputer* _parallaxComputer;
	CGSize _interpageSpacing;
	CGSize _playButtonSize;
	CGSize _progressIndicatorSize;
	CGSize _assetExplorerReviewScreenProgressIndicatorSize;
	CGSize _bufferingIndicatorSize;
	CGSize _displaySizeForInsetMatching;
	UIEdgeInsets _contentGuideInsets;
	UIEdgeInsets _contentSafeInsets;

}

@property (assign,nonatomic,__weak) id<PUOneUpTilingLayoutDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize interpageSpacing;                                            //@synthesize interpageSpacing=_interpageSpacing - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPathOfCurrentItem; 
@property (nonatomic,readonly) double transitionProgress;                                        //@synthesize transitionProgress=_transitionProgress - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentGuideInsets;                                    //@synthesize contentGuideInsets=_contentGuideInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentSafeInsets;                                     //@synthesize contentSafeInsets=_contentSafeInsets - In the implementation block
@property (assign,nonatomic) BOOL useBackgroundTile;                                             //@synthesize useBackgroundTile=_useBackgroundTile - In the implementation block
@property (assign,nonatomic) BOOL useBadgeTiles;                                                 //@synthesize useBadgeTiles=_useBadgeTiles - In the implementation block
@property (assign,nonatomic) BOOL useAssetExplorerReviewScreenBadgeTiles;                        //@synthesize useAssetExplorerReviewScreenBadgeTiles=_useAssetExplorerReviewScreenBadgeTiles - In the implementation block
@property (assign,nonatomic) BOOL useSelectionIndicatorTiles;                                    //@synthesize useSelectionIndicatorTiles=_useSelectionIndicatorTiles - In the implementation block
@property (assign,nonatomic) BOOL useImportStatusIndicatorTiles;                                 //@synthesize useImportStatusIndicatorTiles=_useImportStatusIndicatorTiles - In the implementation block
@property (assign,nonatomic) BOOL useReviewScreenBars;                                           //@synthesize useReviewScreenBars=_useReviewScreenBars - In the implementation block
@property (assign,nonatomic) long long windowInterfaceOrientation;                               //@synthesize windowInterfaceOrientation=_windowInterfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL useVerticalReviewScreenControlBarLayout;                       //@synthesize useVerticalReviewScreenControlBarLayout=_useVerticalReviewScreenControlBarLayout - In the implementation block
@property (assign,nonatomic) CGSize playButtonSize;                                              //@synthesize playButtonSize=_playButtonSize - In the implementation block
@property (assign,nonatomic) CGSize progressIndicatorSize;                                       //@synthesize progressIndicatorSize=_progressIndicatorSize - In the implementation block
@property (assign,nonatomic) CGSize assetExplorerReviewScreenProgressIndicatorSize;              //@synthesize assetExplorerReviewScreenProgressIndicatorSize=_assetExplorerReviewScreenProgressIndicatorSize - In the implementation block
@property (assign,nonatomic) CGSize bufferingIndicatorSize;                                      //@synthesize bufferingIndicatorSize=_bufferingIndicatorSize - In the implementation block
@property (assign,nonatomic) BOOL canDisplayLoadingIndicators;                                   //@synthesize canDisplayLoadingIndicators=_canDisplayLoadingIndicators - In the implementation block
@property (assign,nonatomic) BOOL useUserTransformTiles;                                         //@synthesize useUserTransformTiles=_useUserTransformTiles - In the implementation block
@property (assign,nonatomic) long long tileInitialContentMode;                                   //@synthesize tileInitialContentMode=_tileInitialContentMode - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                                //@synthesize traitCollection=_traitCollection - In the implementation block
@property (assign,nonatomic) CGSize displaySizeForInsetMatching;                                 //@synthesize displaySizeForInsetMatching=_displaySizeForInsetMatching - In the implementation block
@property (assign,nonatomic) BOOL shouldPinContentToTop;                                         //@synthesize shouldPinContentToTop=_shouldPinContentToTop - In the implementation block
@property (nonatomic,retain) PUParallaxComputer * parallaxComputer;                              //@synthesize parallaxComputer=_parallaxComputer - In the implementation block
@property (assign,nonatomic) BOOL shouldHideMainContent;                                         //@synthesize shouldHideMainContent=_shouldHideMainContent - In the implementation block
+(void)initialize;
+(id)centerTileKinds;
+(CGRect)untransformedRectForItemWithAspectRatio:(double)arg1 pageRect:(CGRect)arg2 safeInsets:(UIEdgeInsets)arg3 ;
-(id)init;
-(id<PUOneUpTilingLayoutDelegate>)delegate;
-(void)setDelegate:(id<PUOneUpTilingLayoutDelegate>)arg1 ;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(double)transitionProgress;
-(CGSize)_itemSize;
-(void)setVisibleRect:(CGRect)arg1 ;
-(CGSize)playButtonSize;
-(void)setPlayButtonSize:(CGSize)arg1 ;
-(UIEdgeInsets)contentGuideInsets;
-(void)setContentGuideInsets:(UIEdgeInsets)arg1 ;
-(CGSize)interpageSpacing;
-(void)setInterpageSpacing:(CGSize)arg1 ;
-(id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2 ;
-(id)preferredScrollInfo;
-(CGSize)estimatedSectionSize;
-(void)addLayoutInfosForTilesInRect:(CGRect)arg1 section:(long long)arg2 toSet:(id)arg3 ;
-(CGSize)sizeForSection:(long long)arg1 numberOfItems:(long long)arg2 ;
-(id)_createLayoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2 ;
-(CGRect)visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(long long)arg2 ;
-(CGRect)visibleRectForItemAtIndexPath:(id)arg1 transitionProgress:(double)arg2 ;
-(NSIndexPath *)indexPathOfCurrentItem;
-(void)invalidateBadgeSizeForItemAtIndexPath:(id)arg1 ;
-(void)invalidateModelTileTransformForItemAtIndexPath:(id)arg1 ;
-(void)invalidateAccessoryForItemAtIndexPath:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)invalidateContentOffsetForItemAtIndexPath:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)_invalidateContentRelatedTilesWithIndexPath:(id)arg1 inContext:(id)arg2 ;
-(void)invalidateVideoPlaceholderForItemAtIndexPath:(id)arg1 ;
-(void)invalidateLoadingIndicatorForItemAtIndexPath:(id)arg1 ;
-(void)invalidateProgressIndicatorForItemAtIndexPath:(id)arg1 ;
-(double)_minimumBottomContentInsetsForItemAtIndexPath:(id)arg1 ;
-(CGPoint)_contentOffsetForItemAtIndexPath:(id)arg1 ;
-(BOOL)_accessoryViewVisibilityForItemAtIndexPath:(id)arg1 ;
-(BOOL)_isVideoPlacholderVisibleForItemAtIndexPath:(id)arg1 ;
-(void)setContentSafeInsets:(UIEdgeInsets)arg1 ;
-(void)setUseSelectionIndicatorTiles:(BOOL)arg1 ;
-(void)setUseImportStatusIndicatorTiles:(BOOL)arg1 ;
-(void)setUseBadgeTiles:(BOOL)arg1 ;
-(void)setProgressIndicatorSize:(CGSize)arg1 ;
-(void)setAssetExplorerReviewScreenProgressIndicatorSize:(CGSize)arg1 ;
-(void)setUseAssetExplorerReviewScreenBadgeTiles:(BOOL)arg1 ;
-(void)setWindowInterfaceOrientation:(long long)arg1 ;
-(void)setBufferingIndicatorSize:(CGSize)arg1 ;
-(void)setCanDisplayLoadingIndicators:(BOOL)arg1 ;
-(void)setDisplaySizeForInsetMatching:(CGSize)arg1 ;
-(void)setTileInitialContentMode:(long long)arg1 ;
-(void)setShouldPinContentToTop:(BOOL)arg1 ;
-(void)setUseVerticalReviewScreenControlBarLayout:(BOOL)arg1 ;
-(void)setShouldHideMainContent:(BOOL)arg1 ;
-(CGRect)_pageRectForItemAtIndexPath:(id)arg1 ;
-(CGRect)_frameForTileWithSize:(CGSize)arg1 centeredOnItemAtIndexPath:(id)arg2 ;
-(CGRect)_untransformedRectForItemAtIndexPath:(id)arg1 ;
-(CGRect)_untransformedRectForItemAtIndexPath:(id)arg1 pageRect:(CGRect)arg2 ;
-(id)_displayTileTransformForItemAtIndexPath:(id)arg1 options:(unsigned long long)arg2 ;
-(id)_displayTileTransformForItemAtIndexPath:(id)arg1 pageSize:(CGSize)arg2 secondaryDisplayTransform:(id)arg3 options:(unsigned long long)arg4 ;
-(void)_getLayoutRect:(out CGRect*)arg1 transform:(out CGAffineTransform*)arg2 parallaxOffset:(out CGPoint*)arg3 forContentOfItemAtIndexPath:(id)arg4 options:(unsigned long long)arg5 ;
-(id)_indexPathOfItemClosestToAbscissa:(double)arg1 ;
-(double)_normalizedTransitionProgressFrom:(id)arg1 withAbscissa:(double)arg2 outNeighbor:(out id*)arg3 ;
-(UIEdgeInsets)contentSafeInsets;
-(BOOL)useBackgroundTile;
-(void)setUseBackgroundTile:(BOOL)arg1 ;
-(BOOL)useBadgeTiles;
-(BOOL)useAssetExplorerReviewScreenBadgeTiles;
-(BOOL)useSelectionIndicatorTiles;
-(BOOL)useImportStatusIndicatorTiles;
-(BOOL)useReviewScreenBars;
-(void)setUseReviewScreenBars:(BOOL)arg1 ;
-(long long)windowInterfaceOrientation;
-(BOOL)useVerticalReviewScreenControlBarLayout;
-(CGSize)progressIndicatorSize;
-(CGSize)assetExplorerReviewScreenProgressIndicatorSize;
-(CGSize)bufferingIndicatorSize;
-(BOOL)canDisplayLoadingIndicators;
-(BOOL)useUserTransformTiles;
-(void)setUseUserTransformTiles:(BOOL)arg1 ;
-(long long)tileInitialContentMode;
-(CGSize)displaySizeForInsetMatching;
-(BOOL)shouldPinContentToTop;
-(PUParallaxComputer *)parallaxComputer;
-(void)setParallaxComputer:(PUParallaxComputer *)arg1 ;
-(BOOL)shouldHideMainContent;
@end

