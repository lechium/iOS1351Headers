/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXBrowserSummaryControllerDataSource.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXLibrarySummaryDataSource, PXLibrarySummaryOutputPresenter, PXDisplayAssetCollection;
@class PXBrowserSummaryController, NSString;

@interface PXCuratedLibrarySummaryHelper : NSObject <PXBrowserSummaryControllerDataSource, PXChangeObserver> {

	BOOL _isPerformingUpdates;
	BOOL _isPerformingChanges;
	SCD_Struct_PX66 _needsUpdateFlags;
	SCD_Struct_PX53 _dataSourceRespondsTo;
	SCD_Struct_PX90 _outputPresenterRespondsTo;
	BOOL _shouldUseAbbreviatedDates;
	id<PXLibrarySummaryDataSource> _dataSource;
	id<PXLibrarySummaryOutputPresenter> _outputPresenter;
	PXBrowserSummaryController* _summaryController;
	id<PXDisplayAssetCollection> _topmostAssetCollection;

}

@property (nonatomic,readonly) PXBrowserSummaryController * summaryController;                                                    //@synthesize summaryController=_summaryController - In the implementation block
@property (setter=_setTopmostAssetCollection:,nonatomic,retain) id<PXDisplayAssetCollection> topmostAssetCollection;              //@synthesize topmostAssetCollection=_topmostAssetCollection - In the implementation block
@property (assign,nonatomic,__weak) id<PXLibrarySummaryDataSource> dataSource;                                                    //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PXLibrarySummaryOutputPresenter> outputPresenter;                                          //@synthesize outputPresenter=_outputPresenter - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAbbreviatedDates;                                                                      //@synthesize shouldUseAbbreviatedDates=_shouldUseAbbreviatedDates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldShowImportDates; 
-(id)init;
-(id<PXLibrarySummaryDataSource>)dataSource;
-(void)setDataSource:(id<PXLibrarySummaryDataSource>)arg1 ;
-(void)_updateTitle;
-(BOOL)_needsUpdate;
-(void)_setNeedsUpdate;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_updateIfNeeded;
-(void)_updateSubtitle;
-(BOOL)shouldUseAbbreviatedDates;
-(void)setShouldUseAbbreviatedDates:(BOOL)arg1 ;
-(id<PXDisplayAssetCollection>)topmostAssetCollection;
-(id)visibleContentSnapshotForBrowserSummaryController:(id)arg1 ;
-(void)setOutputPresenter:(id<PXLibrarySummaryOutputPresenter>)arg1 ;
-(void)visibleContentDidChange;
-(void)_performChanges:(/*^block*/id)arg1 ;
-(void)_invalidateTitle;
-(void)_invalidateSubtitle;
-(void)_invalidateTopmostAssetCollection;
-(void)_updateTitleFromSummaryController;
-(void)_updateSubtitleFromSummaryController;
-(void)_updateTopmostAssetCollection;
-(void)_setTopmostAssetCollection:(id)arg1 ;
-(id<PXLibrarySummaryOutputPresenter>)outputPresenter;
-(PXBrowserSummaryController *)summaryController;
@end
