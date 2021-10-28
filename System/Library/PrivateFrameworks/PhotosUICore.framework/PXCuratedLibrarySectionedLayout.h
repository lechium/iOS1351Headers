/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGCompositeLayout.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXGSublayoutProvider.h>
#import <libobjc.A.dylib/PXGSublayoutFaultingDelegate.h>
#import <libobjc.A.dylib/PXMonthsSublayoutProvider.h>
#import <libobjc.A.dylib/PXCuratedLibraryViewModelPresenter.h>
#import <libobjc.A.dylib/PXCuratedLibraryBodyLayout.h>

@class PXCuratedLibraryLayoutSpec, PXAssetsDataSource, NSMutableIndexSet, NSIndexSet, PXCuratedLibraryViewModel, PXGSpriteReference, PXAssetsSectionLayout, NSString;

@interface PXCuratedLibrarySectionedLayout : PXGCompositeLayout <PXAssetsDataSourceManagerObserver, PXChangeObserver, PXGSublayoutProvider, PXGSublayoutFaultingDelegate, PXMonthsSublayoutProvider, PXCuratedLibraryViewModelPresenter, PXCuratedLibraryBodyLayout> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	PXAssetsDataSource* _currentDataSource;
	long long _currentZoomLevel;
	NSMutableIndexSet* _zoomLevelsPreferringDominantHeros;
	long long* _accumulatedSectionItems;
	long long _accumulatedSectionItemsCount;
	BOOL _isUpdatingSublayouts;
	unsigned long long _dataSourceIdentifierOfCachedSectionsWithSelectedItems;
	NSIndexSet* _cachedSectionsWithSelectedItems;
	BOOL _isInitialLoad;
	BOOL _performedInitialLoad;
	PXCuratedLibraryLayoutSpec* _spec;
	PXCuratedLibraryViewModel* _viewModel;
	double _lateralMargin;
	id _lastVisibleDominantObjectReference;
	PXGSpriteReference* _lastHitSpriteReference;
	double _defaultInterlayoutSpacing;
	long long _presentedZoomLevel;
	PXAssetsDataSource* _presentedDataSource;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) BOOL isInitialLoad;                                           //@synthesize isInitialLoad=_isInitialLoad - In the implementation block
@property (assign,nonatomic) BOOL performedInitialLoad;                                    //@synthesize performedInitialLoad=_performedInitialLoad - In the implementation block
@property (nonatomic,readonly) double defaultInterlayoutSpacing;                           //@synthesize defaultInterlayoutSpacing=_defaultInterlayoutSpacing - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets padding;                                       //@synthesize padding=_padding - In the implementation block
@property (nonatomic,readonly) long long presentedZoomLevel;                               //@synthesize presentedZoomLevel=_presentedZoomLevel - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSource * presentedDataSource;                   //@synthesize presentedDataSource=_presentedDataSource - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;                      //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic) double lateralMargin;                                         //@synthesize lateralMargin=_lateralMargin - In the implementation block
@property (nonatomic,readonly) PXAssetsSectionLayout * dominantSectionLayout; 
@property (nonatomic,retain) id dominantHeroPreferences; 
@property (nonatomic,retain) id lastVisibleDominantObjectReference;                        //@synthesize lastVisibleDominantObjectReference=_lastVisibleDominantObjectReference - In the implementation block
@property (nonatomic,retain) PXGSpriteReference * lastHitSpriteReference;                  //@synthesize lastHitSpriteReference=_lastHitSpriteReference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PXCuratedLibraryLayoutSpec * spec;                            //@synthesize spec=_spec - In the implementation block
-(id)init;
-(void)dealloc;
-(void)update;
-(UIEdgeInsets)padding;
-(void)setSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)setSpec:(PXCuratedLibraryLayoutSpec *)arg1 ;
-(PXCuratedLibraryLayoutSpec *)spec;
-(BOOL)isInitialLoad;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setIsInitialLoad:(BOOL)arg1 ;
-(PXCuratedLibraryViewModel *)viewModel;
-(void)setLateralMargin:(double)arg1 ;
-(double)lateralMargin;
-(void)didFaultInSublayout:(id)arg1 atIndex:(long long)arg2 fromEstimatedContentSize:(CGSize)arg3 ;
-(void)willFaultOutSublayout:(id)arg1 atIndex:(long long)arg2 ;
-(void)enumerateVisibleAnchoringLayoutsUsingBlock:(/*^block*/id)arg1 ;
-(long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(/*^block*/id)dateIntervalFutureForContentInRect:(CGRect)arg1 ;
-(id)viewModel:(id)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2 ;
-(void)enumerateSectionBoundariesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)clearLastVisibleAreaAnchoringInformation;
-(/*^block*/id)locationNamesFutureForContentInRect:(CGRect)arg1 ;
-(CGRect)sectionBoundariesForAssetCollectionReference:(id)arg1 ;
-(void)setLastHitSpriteReference:(PXGSpriteReference *)arg1 ;
-(void)setLastVisibleDominantObjectReference:(id)arg1 ;
-(long long)presentedZoomLevel;
-(PXGSpriteReference *)lastHitSpriteReference;
-(id)lastVisibleDominantObjectReference;
-(id)initWithViewModel:(id)arg1 spec:(id)arg2 ;
-(PXAssetsDataSource *)presentedDataSource;
-(CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(CGSize)arg3 ;
-(id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2 ;
-(void)enumerateHeroSpritesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)layout:(id)arg1 collectIndexesOfChapterHeaderSublayouts:(id)arg2 heroSublayouts:(id)arg3 inRange:(NSRange)arg4 ;
-(BOOL)layout:(id)arg1 shouldPreventFaultOutOfSublayout:(id)arg2 ;
-(void)_updateFaultOutsets;
-(void)setPerformedInitialLoad:(BOOL)arg1 ;
-(void)_updatePrefetchedSectionsForFaultedInSublayout:(id)arg1 ;
-(void)_updateSublayoutsDataSource;
-(void)_prepareAccumulatedSectionItemsBufferForSections:(long long)arg1 ;
-(void)_updateSublayoutsForSkimming;
-(void)_updatePreheating;
-(void)_anchorVisibleArea;
-(BOOL)prefersDominantHeroForZoomLevel:(long long)arg1 ;
-(void)setPrefersDominantHero:(BOOL)arg1 forZoomLevel:(long long)arg2 ;
-(id)dominantHeroPreferences;
-(void)setDominantHeroPreferences:(id)arg1 ;
-(void)_configureSectionLayout:(id)arg1 atIndex:(long long)arg2 ;
-(void)enumerateAssetsSectionSublayoutsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateAssetsSectionSublayoutsInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateScrollablePagesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(PXAssetsSectionLayout *)dominantSectionLayout;
-(id)_heroSectionLayoutClosestToSectionLayout:(id)arg1 zoomLevel:(long long)arg2 ;
-(id)_heroAssetCollectionReferenceClosestToAssetCollectionReference:(id)arg1 zoomLevel:(long long)arg2 ;
-(id)_targetAssetCollectionReferenceInZoomLevel:(long long)arg1 forTransitionFromAssetCollectionReference:(id)arg2 ;
-(BOOL)performedInitialLoad;
-(double)defaultInterlayoutSpacing;
@end
