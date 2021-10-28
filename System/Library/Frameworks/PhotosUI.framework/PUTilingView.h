/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@protocol PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewScrollDelegate, PUTilingViewTileUseDelegate, PUTilingCoordinateSystem;
@class PUTilingLayout, PUTileAnimator, PUReuseQueue, PUTileTree, NSMutableDictionary, NSMutableSet, PUTileTransitionCoordinator, NSMutableArray;

@interface PUTilingView : UIScrollView {

	struct {
		BOOL respondsToDataSourceConverterForTransitionFromLayoutToLayout;
		BOOL respondsToTileTransitionCoordinatorForTransitionFromLayoutWithContext;
		BOOL respondsToTileTransitionCoordinatorForUpdateWithItems;
		BOOL respondsToTileTransitionCoordinatorForChangeFromFrame;
		BOOL respondsToTileTransitionCoordinatorForReattachedTileControllers;
		BOOL respondsToTileTransitionCoordinatorForLayoutInvalidationContext;
		BOOL respondsToCanBypass20069585Check;
	}  _tileTransitionDelegateFlags;
	SCD_Struct_PU13 _scrollDelegateFlags;
	SCD_Struct_PU28 _tileUseDelegateFlags;
	BOOL __needsUpdateLayoutVisibleRect;
	BOOL __needsUpdateTileControllersVisibleRect;
	BOOL __needsUpdateLayoutCoordinateSystem;
	BOOL __needsUpdateLayout;
	BOOL __needsUpdateScrollViewProperties;
	BOOL __needsUpdateTileControllers;
	BOOL __needsUpdateReferencedDataSources;
	BOOL __needsUpdateReferencedCoordinateSystems;
	BOOL __performingBatchUpdates;
	id<PUTilingViewTileSource> _tileSource;
	PUTilingLayout* _layout;
	PUTileAnimator* _tileAnimator;
	id<PUTilingViewTileTransitionDelegate> _tileTransitionDelegate;
	id<PUTilingViewScrollDelegate> _scrollDelegate;
	id<PUTilingViewTileUseDelegate> _tileUseDelegate;
	id<PUTilingCoordinateSystem> _contentCoordinateSystem;
	id<PUTilingCoordinateSystem> _fixedCoordinateSystem;
	PUTilingLayout* __pendingLayout;
	PUReuseQueue* __tileControllerReuseQueue;
	PUTileTree* __activeTileControllers;
	PUTileTree* __inactiveTileControllers;
	PUTileTree* __detachedTileControllers;
	NSMutableDictionary* __referencedDataSourcesByIdentifiers;
	NSMutableSet* __referencedCoordinateSystems;
	PUTileTransitionCoordinator* __tileTransitionCoordinatorForNextLayout;
	long long __reasonForNextLayoutCoordinateSystemUpdate;
	NSMutableArray* __pendingUpdateItems;
	double __pagingSpringPullAdjustment;
	double __pagingFrictionAdjustment;
	NSMutableDictionary* __postLayoutBlocks;
	/*^block*/id _onNextTileControllersUpdateBlock;
	UIEdgeInsets _loadingInsets;

}

@property (setter=_setLayout:,nonatomic,retain) PUTilingLayout * layout;                                                                                            //@synthesize layout=_layout - In the implementation block
@property (setter=_setPendingLayout:,nonatomic,retain) PUTilingLayout * _pendingLayout;                                                                             //@synthesize _pendingLayout=__pendingLayout - In the implementation block
@property (nonatomic,readonly) PUReuseQueue * _tileControllerReuseQueue;                                                                                            //@synthesize _tileControllerReuseQueue=__tileControllerReuseQueue - In the implementation block
@property (nonatomic,readonly) PUTileTree * _activeTileControllers;                                                                                                 //@synthesize _activeTileControllers=__activeTileControllers - In the implementation block
@property (nonatomic,readonly) PUTileTree * _inactiveTileControllers;                                                                                               //@synthesize _inactiveTileControllers=__inactiveTileControllers - In the implementation block
@property (nonatomic,readonly) PUTileTree * _detachedTileControllers;                                                                                               //@synthesize _detachedTileControllers=__detachedTileControllers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _referencedDataSourcesByIdentifiers;                                                                           //@synthesize _referencedDataSourcesByIdentifiers=__referencedDataSourcesByIdentifiers - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _referencedCoordinateSystems;                                                                                         //@synthesize _referencedCoordinateSystems=__referencedCoordinateSystems - In the implementation block
@property (assign,setter=_setNeedsUpdateLayoutVisibleRect:,nonatomic) BOOL _needsUpdateLayoutVisibleRect;                                                           //@synthesize _needsUpdateLayoutVisibleRect=__needsUpdateLayoutVisibleRect - In the implementation block
@property (assign,setter=_setNeedsUpdateTileControllersVisibleRect:,nonatomic) BOOL _needsUpdateTileControllersVisibleRect;                                         //@synthesize _needsUpdateTileControllersVisibleRect=__needsUpdateTileControllersVisibleRect - In the implementation block
@property (assign,setter=_setNeedsUpdateLayoutCoordinateSystem:,nonatomic) BOOL _needsUpdateLayoutCoordinateSystem;                                                 //@synthesize _needsUpdateLayoutCoordinateSystem=__needsUpdateLayoutCoordinateSystem - In the implementation block
@property (assign,setter=_setNeedsUpdateLayout:,nonatomic) BOOL _needsUpdateLayout;                                                                                 //@synthesize _needsUpdateLayout=__needsUpdateLayout - In the implementation block
@property (assign,setter=_setNeedsUpdateScrollViewProperties:,nonatomic) BOOL _needsUpdateScrollViewProperties;                                                     //@synthesize _needsUpdateScrollViewProperties=__needsUpdateScrollViewProperties - In the implementation block
@property (assign,setter=_setNeedsUpdateTileControllers:,nonatomic) BOOL _needsUpdateTileControllers;                                                               //@synthesize _needsUpdateTileControllers=__needsUpdateTileControllers - In the implementation block
@property (assign,setter=_setNeedsUpdateReferencedDataSources:,nonatomic) BOOL _needsUpdateReferencedDataSources;                                                   //@synthesize _needsUpdateReferencedDataSources=__needsUpdateReferencedDataSources - In the implementation block
@property (assign,setter=_setNeedsUpdateReferencedCoordinateSystems:,nonatomic) BOOL _needsUpdateReferencedCoordinateSystems;                                       //@synthesize _needsUpdateReferencedCoordinateSystems=__needsUpdateReferencedCoordinateSystems - In the implementation block
@property (setter=_setTileTransitionCoordinatorForNextLayout:,nonatomic,retain) PUTileTransitionCoordinator * _tileTransitionCoordinatorForNextLayout;              //@synthesize _tileTransitionCoordinatorForNextLayout=__tileTransitionCoordinatorForNextLayout - In the implementation block
@property (assign,setter=_setReasonForNextLayoutCoordinateSystemUpdate:,nonatomic) long long _reasonForNextLayoutCoordinateSystemUpdate;                            //@synthesize _reasonForNextLayoutCoordinateSystemUpdate=__reasonForNextLayoutCoordinateSystemUpdate - In the implementation block
@property (assign,setter=_setPerformingBatchUpdates:,getter=_isPerformingBatchUpdates,nonatomic) BOOL _performingBatchUpdates;                                      //@synthesize _performingBatchUpdates=__performingBatchUpdates - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _pendingUpdateItems;                                                                                                //@synthesize _pendingUpdateItems=__pendingUpdateItems - In the implementation block
@property (assign,setter=_setPagingSpringPullAdjustment:,nonatomic) double _pagingSpringPullAdjustment;                                                             //@synthesize _pagingSpringPullAdjustment=__pagingSpringPullAdjustment - In the implementation block
@property (assign,setter=_setPagingFrictionAdjustment:,nonatomic) double _pagingFrictionAdjustment;                                                                 //@synthesize _pagingFrictionAdjustment=__pagingFrictionAdjustment - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _postLayoutBlocks;                                                                                             //@synthesize _postLayoutBlocks=__postLayoutBlocks - In the implementation block
@property (nonatomic,copy) id onNextTileControllersUpdateBlock;                                                                                                     //@synthesize onNextTileControllersUpdateBlock=_onNextTileControllersUpdateBlock - In the implementation block
@property (assign,nonatomic,__weak) id<PUTilingViewTileSource> tileSource;                                                                                          //@synthesize tileSource=_tileSource - In the implementation block
@property (assign,nonatomic) UIEdgeInsets loadingInsets;                                                                                                            //@synthesize loadingInsets=_loadingInsets - In the implementation block
@property (assign,nonatomic,__weak) PUTileAnimator * tileAnimator;                                                                                                  //@synthesize tileAnimator=_tileAnimator - In the implementation block
@property (assign,nonatomic,__weak) id<PUTilingViewTileTransitionDelegate> tileTransitionDelegate;                                                                  //@synthesize tileTransitionDelegate=_tileTransitionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PUTilingViewScrollDelegate> scrollDelegate;                                                                                  //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PUTilingViewTileUseDelegate> tileUseDelegate;                                                                                //@synthesize tileUseDelegate=_tileUseDelegate - In the implementation block
@property (nonatomic,readonly) id<PUTilingCoordinateSystem> contentCoordinateSystem;                                                                                //@synthesize contentCoordinateSystem=_contentCoordinateSystem - In the implementation block
@property (nonatomic,readonly) id<PUTilingCoordinateSystem> fixedCoordinateSystem;                                                                                  //@synthesize fixedCoordinateSystem=_fixedCoordinateSystem - In the implementation block
@property (nonatomic,readonly) BOOL isAnyTileControllerAnimating; 
+(unsigned long long)_defaultEdgesScrollingContentIntoSafeArea;
-(id)initWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(PUTilingLayout *)layout;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(id<PUTilingViewScrollDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id<PUTilingViewScrollDelegate>)arg1 ;
-(void)_invalidateLayout;
-(BOOL)_needsUpdateLayout;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(void)_setNeedsUpdate;
-(void)_updateIfNeeded;
-(id)initWithFrame:(CGRect)arg1 layout:(id)arg2 ;
-(void)_updateLayoutIfNeeded;
-(void)transitionToLayout:(id)arg1 ;
-(void)_invalidateLayoutVisibleRect;
-(void)_updateLayoutVisibleRectIfNeeded;
-(id<PUTilingViewTileSource>)tileSource;
-(void)setTileSource:(id<PUTilingViewTileSource>)arg1 ;
-(PUTileAnimator *)tileAnimator;
-(void)setTileAnimator:(PUTileAnimator *)arg1 ;
-(void)registerPostLayoutBlock:(/*^block*/id)arg1 forIdentifier:(id)arg2 ;
-(id<PUTilingCoordinateSystem>)fixedCoordinateSystem;
-(id)dequeueTileControllerWithReuseIdentifier:(id)arg1 ;
-(void)registerTileControllerClass:(Class)arg1 forReuseIdentifier:(id)arg2 ;
-(void)enumerateAllTileControllersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumeratePresentedTileControllersInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_setNeedsUpdateLayout:(BOOL)arg1 ;
-(void)setLoadingInsets:(UIEdgeInsets)arg1 ;
-(void)setTileTransitionDelegate:(id<PUTilingViewTileTransitionDelegate>)arg1 ;
-(void)reattachTileControllers:(id)arg1 withContext:(id)arg2 ;
-(void)detachTileControllers:(id)arg1 ;
-(void)transitionToLayout:(id)arg1 withContext:(id)arg2 animationSetupCompletionHandler:(/*^block*/id)arg3 ;
-(void)setTileUseDelegate:(id<PUTilingViewTileUseDelegate>)arg1 ;
-(id<PUTilingViewTileUseDelegate>)tileUseDelegate;
-(BOOL)isAnyTileControllerAnimating;
-(id<PUTilingViewTileTransitionDelegate>)tileTransitionDelegate;
-(double)_pagingSpringPullAdjustment;
-(double)_pagingFrictionAdjustment;
-(id)presentedTileControllerWithIndexPath:(id)arg1 kind:(id)arg2 dataSourceIdentifier:(id)arg3 ;
-(id<PUTilingCoordinateSystem>)contentCoordinateSystem;
-(id)freezeTileController:(id)arg1 ;
-(void)enqueueTileControllerForReuse:(id)arg1 ;
-(void)tileControllerDidEndAnimating:(id)arg1 ;
-(void)invalidateLayout:(id)arg1 withContext:(id)arg2 ;
-(void)_setPagingSpringPullAdjustment:(double)arg1 ;
-(void)_setPagingFrictionAdjustment:(double)arg1 ;
-(void)_handleChangeFromBounds:(CGRect)arg1 fromFrame:(CGRect)arg2 ;
-(void)_adjustScrollViewPagingDeceleration;
-(void)insertItemAtIndexPath:(id)arg1 dataSource:(id)arg2 ;
-(void)deleteItemAtIndexPath:(id)arg1 dataSource:(id)arg2 ;
-(void)moveItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2 dataSource:(id)arg3 ;
-(void)reloadItemAtIndexPath:(id)arg1 dataSource:(id)arg2 ;
-(void)_applyPendingUpdates;
-(id)tileControllerWithIndexPath:(id)arg1 kind:(id)arg2 dataSourceIdentifier:(id)arg3 ;
-(void)_enumerateAllTileControllersUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateActiveTileControllersUsingBlock:(/*^block*/id)arg1 ;
-(id)_createTileControllerWithIndexPath:(id)arg1 kind:(id)arg2 dataSource:(id)arg3 tileSource:(id)arg4 ;
-(void)_invalidateTileControllersVisibleRect;
-(void)_invalidateLayoutCoordinateSystemWithReason:(long long)arg1 ;
-(void)_invalidateScrollViewProperties;
-(void)_invalidateReferencedDataSources;
-(void)_invalidateReferencedCoordinateSystems;
-(void)_invalidateTileControllers;
-(void)_invalidateTileControllersWithTileTransitionCoordinator:(id)arg1 ;
-(void)_updateLayoutCoordinateSystemIfNeeded;
-(void)_updateTileControllersVisibleRectIfNeeded;
-(void)_updateScrollViewPropertiesIfNeeded;
-(void)_updateScrollViewPropertiesWithLayout:(id)arg1 ;
-(void)_updateTileControllersIfNeeded;
-(void)_updateTileControllersWithLayout:(id)arg1 tileTransitionCoordinator:(id)arg2 ;
-(void)_updateTileControllersWithLayout:(id)arg1 reactivatability:(/*^block*/id)arg2 appearanceHandler:(/*^block*/id)arg3 updateHandler:(/*^block*/id)arg4 disappearanceHandler:(/*^block*/id)arg5 heartBeatHandler:(/*^block*/id)arg6 ;
-(void)_updateReferencedDataSourcesIfNeeded;
-(void)_updateReferencedCoordinateSystemsIfNeeded;
-(void)_runPostLayoutBlocks;
-(void)_registerDataSource:(id)arg1 ;
-(id)_dataSourceWithIdentifier:(id)arg1 ;
-(void)_transferTileControllersToDataSource:(id)arg1 usingDataSourceConverter:(id)arg2 ;
-(UIEdgeInsets)loadingInsets;
-(void)_setLayout:(id)arg1 ;
-(PUTilingLayout *)_pendingLayout;
-(void)_setPendingLayout:(id)arg1 ;
-(PUReuseQueue *)_tileControllerReuseQueue;
-(PUTileTree *)_activeTileControllers;
-(PUTileTree *)_inactiveTileControllers;
-(PUTileTree *)_detachedTileControllers;
-(NSMutableDictionary *)_referencedDataSourcesByIdentifiers;
-(NSMutableSet *)_referencedCoordinateSystems;
-(BOOL)_needsUpdateLayoutVisibleRect;
-(void)_setNeedsUpdateLayoutVisibleRect:(BOOL)arg1 ;
-(BOOL)_needsUpdateTileControllersVisibleRect;
-(void)_setNeedsUpdateTileControllersVisibleRect:(BOOL)arg1 ;
-(BOOL)_needsUpdateLayoutCoordinateSystem;
-(void)_setNeedsUpdateLayoutCoordinateSystem:(BOOL)arg1 ;
-(BOOL)_needsUpdateScrollViewProperties;
-(void)_setNeedsUpdateScrollViewProperties:(BOOL)arg1 ;
-(BOOL)_needsUpdateTileControllers;
-(void)_setNeedsUpdateTileControllers:(BOOL)arg1 ;
-(BOOL)_needsUpdateReferencedDataSources;
-(void)_setNeedsUpdateReferencedDataSources:(BOOL)arg1 ;
-(BOOL)_needsUpdateReferencedCoordinateSystems;
-(void)_setNeedsUpdateReferencedCoordinateSystems:(BOOL)arg1 ;
-(PUTileTransitionCoordinator *)_tileTransitionCoordinatorForNextLayout;
-(void)_setTileTransitionCoordinatorForNextLayout:(id)arg1 ;
-(long long)_reasonForNextLayoutCoordinateSystemUpdate;
-(void)_setReasonForNextLayoutCoordinateSystemUpdate:(long long)arg1 ;
-(BOOL)_isPerformingBatchUpdates;
-(void)_setPerformingBatchUpdates:(BOOL)arg1 ;
-(NSMutableArray *)_pendingUpdateItems;
-(NSMutableDictionary *)_postLayoutBlocks;
-(id)onNextTileControllersUpdateBlock;
-(void)setOnNextTileControllersUpdateBlock:(id)arg1 ;
@end
