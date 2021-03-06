/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUGridRenderedStripDataSource.h>
#import <libobjc.A.dylib/PUPhotosSectionHeaderViewDelegate.h>
#import <libobjc.A.dylib/PUSectionedGridLayoutDelegate.h>

@class PUGridRenderedStrip, PHCachingImageManager, PUSectionedGridLayout, PUMomentsZoomLevelManager, PUZoomableGridViewController, PHAssetResourceQualityClass, NSString;

@interface PUGridZoomLevelInfo : NSObject <PUGridRenderedStripDataSource, PUPhotosSectionHeaderViewDelegate, PUSectionedGridLayoutDelegate> {

	PUGridRenderedStrip* _currentRenderedStrip;
	BOOL _useFloatingHeaderGroupName;
	BOOL _summarizeSections;
	PHCachingImageManager* _cachingImageManager;
	PUSectionedGridLayout* _collectionViewLayout;
	unsigned long long _zoomLevel;
	PUMomentsZoomLevelManager* _zoomLevelManager;
	PUGridZoomLevelInfo* _baseZoomLevelInfo;
	PUZoomableGridViewController* _zoomableGridViewController;
	double _pendingContentWidth;
	PHAssetResourceQualityClass* _qualityClass;
	long long _maxRowsPerSection;
	CGSize _thumbnailImageSize;
	CGSize _lastItemPixelSize;

}

@property (assign,nonatomic) PUZoomableGridViewController * zoomableGridViewController; 
@property (nonatomic,readonly) NSString * renderedStripsElementKind; 
@property (nonatomic,readonly) NSString * sectionHeaderElementKind; 
@property (nonatomic,readonly) CGSize thumbnailImageSize; 
@property (nonatomic,readonly) double itemContentScale; 
@property (nonatomic,readonly) CFStringRef aggregateLevelKey; 
@property (assign,nonatomic) BOOL useFloatingHeaderGroupName; 
@property (nonatomic,readonly) CGSize thumbnailImageSize;                                              //@synthesize thumbnailImageSize=_thumbnailImageSize - In the implementation block
@property (nonatomic,readonly) unsigned long long zoomLevel;                                           //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) PUMomentsZoomLevelManager * zoomLevelManager;                           //@synthesize zoomLevelManager=_zoomLevelManager - In the implementation block
@property (nonatomic,readonly) PUGridZoomLevelInfo * baseZoomLevelInfo;                                //@synthesize baseZoomLevelInfo=_baseZoomLevelInfo - In the implementation block
@property (nonatomic,readonly) PUZoomableGridViewController * zoomableGridViewController;              //@synthesize zoomableGridViewController=_zoomableGridViewController - In the implementation block
@property (nonatomic,readonly) PUSectionedGridLayout * collectionViewLayout;                           //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (assign,nonatomic) double pendingContentWidth;                                               //@synthesize pendingContentWidth=_pendingContentWidth - In the implementation block
@property (nonatomic,readonly) PHCachingImageManager * cachingImageManager;                            //@synthesize cachingImageManager=_cachingImageManager - In the implementation block
@property (nonatomic,retain) PHAssetResourceQualityClass * qualityClass;                               //@synthesize qualityClass=_qualityClass - In the implementation block
@property (assign,nonatomic) CGSize lastItemPixelSize;                                                 //@synthesize lastItemPixelSize=_lastItemPixelSize - In the implementation block
@property (nonatomic,readonly) long long maxRowsPerSection;                                            //@synthesize maxRowsPerSection=_maxRowsPerSection - In the implementation block
@property (assign,nonatomic) BOOL summarizeSections;                                                   //@synthesize summarizeSections=_summarizeSections - In the implementation block
@property (nonatomic,readonly) double zoomInDuration; 
@property (nonatomic,readonly) double zoomOutDuration; 
@property (nonatomic,readonly) unsigned long long dateRangeFormatterPreset; 
@property (nonatomic,readonly) CGSize imageRequestItemSize; 
@property (nonatomic,readonly) long long cellFillMode; 
@property (nonatomic,readonly) BOOL supportsCollectionViewDragSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PUSectionedGridLayout *)collectionViewLayout;
-(unsigned long long)zoomLevel;
-(PHCachingImageManager *)cachingImageManager;
-(void)didTapHeaderView:(id)arg1 ;
-(void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(BOOL)arg2 ;
-(void)sectionedGridLayout:(id)arg1 didFinalizePrepareTransitionIsAppearing:(BOOL)arg2 ;
-(long long)sectionedGridLayout:(id)arg1 maximumRowsForVisualSection:(long long)arg2 ;
-(id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1 ;
-(CGPoint)sectionedGridLayout:(id)arg1 targetContentOffsetForProposedUpdatesContentOffset:(CGPoint)arg2 ;
-(BOOL)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg1 ;
-(void)sectionedGridLayout:(id)arg1 didInvalidateWithContext:(id)arg2 ;
-(BOOL)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 ;
-(id)initWithZoomLevel:(unsigned long long)arg1 zoomLevelManager:(id)arg2 baseZoomLevelInfo:(id)arg3 ;
-(CFStringRef)aggregateLevelKey;
-(id)newCollectionViewLayout;
-(NSString *)renderedStripsElementKind;
-(NSString *)sectionHeaderElementKind;
-(long long)maxRowsPerSection;
-(CGSize)thumbnailImageSize;
-(void)updateLayoutMetricsForWidth:(double)arg1 safeAreaInsets:(UIEdgeInsets)arg2 ;
-(CGSize)imageRequestItemSize;
-(long long)cellFillMode;
-(void)configureSectionHeaderView:(id)arg1 forVisualSection:(long long)arg2 ;
-(void)getPhotosDataSource:(id*)arg1 displayTitleInfo:(id*)arg2 forDetailsForVisualSection:(long long)arg3 ;
-(id)assetsToDisplayInMapForVisualSection:(long long)arg1 ;
-(id)diagnosticsProviderForVisualSection:(long long)arg1 ;
-(long long)imageDeliveryMode;
-(double)cellAspectRatioHint;
-(BOOL)supportsIncrementalChangeNotifications;
-(void)modelDidChange:(id)arg1 ;
-(PUMomentsZoomLevelManager *)zoomLevelManager;
-(PUZoomableGridViewController *)zoomableGridViewController;
-(double)itemContentScale;
-(BOOL)shouldUseDynamicLayout;
-(void)headerView:(id)arg1 actionButtonPressed:(id)arg2 ;
-(BOOL)configureGridCell:(id)arg1 forIndexPath:(id)arg2 ;
-(BOOL)wantsMagnifierNavigation;
-(BOOL)wantsAssetCountsVisible;
-(BOOL)wantsCloudStatusVisible;
-(BOOL)wantsAutomaticContentOffsetAdjustment;
-(BOOL)supportsEditMode;
-(void)prepareForTransitionToZoomLevelInfo:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(void)prepareForTransitionFromZoomLevelInfo:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(void)didFinishZoomLevelTransition;
-(void)renderedStrip:(id)arg1 enumerateAssetsForVisualSection:(long long)arg2 inVisualItemRange:(NSRange)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)renderedStrip:(id)arg1 imageDataForAsset:(id)arg2 imageWidth:(int*)arg3 imageHeight:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 ;
-(void)updateForSizeChangeIfNecessary;
-(double)zoomInDuration;
-(double)zoomOutDuration;
-(void)setSummarizeSections:(BOOL)arg1 ;
-(unsigned long long)dateRangeFormatterPreset;
-(void)willAnimateSizeTransition;
-(void)registerReusableViewClassesForCollectionView:(id)arg1 ;
-(void)_updateBackdropGroupNameForHeaderView:(id)arg1 ;
-(void)willShowMagnifiedViewController:(id)arg1 ;
-(BOOL)supportsCollectionViewDragSource;
-(PUGridZoomLevelInfo *)baseZoomLevelInfo;
-(double)pendingContentWidth;
-(void)setPendingContentWidth:(double)arg1 ;
-(PHAssetResourceQualityClass *)qualityClass;
-(void)setQualityClass:(PHAssetResourceQualityClass *)arg1 ;
-(CGSize)lastItemPixelSize;
-(void)setLastItemPixelSize:(CGSize)arg1 ;
-(BOOL)summarizeSections;
-(void)pushPhotosDetailsViewForVisualSection:(long long)arg1 animated:(BOOL)arg2 ;
-(id)imageDataForAsset:(id)arg1 itemContentScale:(double)arg2 imageWidth:(int*)arg3 imageHeight:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 ;
-(BOOL)useFloatingHeaderGroupName;
-(unsigned long long)_detailViewSourceOriginWithZoomLevel:(unsigned long long)arg1 ;
-(void)setUseFloatingHeaderGroupName:(BOOL)arg1 ;
-(void)setZoomableGridViewController:(PUZoomableGridViewController *)arg1 ;
@end

