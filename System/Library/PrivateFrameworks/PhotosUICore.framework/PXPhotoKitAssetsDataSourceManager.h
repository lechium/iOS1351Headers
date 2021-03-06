/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PXPhotosDataSourceChangeObserver.h>
#import <libobjc.A.dylib/PXMutableAssetsDataSourceManager.h>

@protocol PXPhotosDataSourceProvider;
@class PXPhotosDataSource, NSNumber, PXPhotoKitAssetsDataSource, NSString;

@interface PXPhotoKitAssetsDataSourceManager : PXAssetsDataSourceManager <PXPhotosDataSourceChangeObserver, PXMutableAssetsDataSourceManager> {

	PXPhotosDataSource* _photosDataSource;
	NSNumber* _backgroundFetchOriginSection;
	id<PXPhotosDataSourceProvider> _photosDataSourceProvider;

}

@property (nonatomic,retain) id<PXPhotosDataSourceProvider> photosDataSourceProvider;              //@synthesize photosDataSourceProvider=_photosDataSourceProvider - In the implementation block
@property (nonatomic,retain) PXPhotosDataSource * photosDataSource; 
@property (nonatomic,readonly) PXPhotoKitAssetsDataSource * dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long backgroundFetchOriginSection; 
+(id)dataSourceManagerWithAsset:(id)arg1 ;
+(id)dataSourceManagerForAssetCollection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)createInitialDataSource;
-(PXPhotosDataSource *)photosDataSource;
-(id)photosDataSourceInterestingAssetReferences:(id)arg1 ;
-(void)photosDataSource:(id)arg1 didChange:(id)arg2 ;
-(void)photosDataSourceDidFinishBackgroundFetching:(id)arg1 ;
-(void)setPhotosDataSource:(PXPhotosDataSource *)arg1 ;
-(void)setCurationEnabled:(BOOL)arg1 forAssetCollection:(id)arg2 ;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1 ;
-(BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2 ;
-(id)pauseChangeDeliveryWithTimeout:(double)arg1 ;
-(void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1 ;
-(void)startBackgroundFetchIfNeeded;
-(long long)backgroundFetchOriginSection;
-(void)setBackgroundFetchOriginSection:(long long)arg1 ;
-(id)initWithPhotosDataSource:(id)arg1 ;
-(id)initWithPhotosDataSourceProvider:(id)arg1 ;
-(void)_ensurePhotosDataSource;
-(id)_createAssetsDataSourceWithPhotosDataSource:(id)arg1 withChange:(id)arg2 ;
-(void)updateWithPhotosDataSource:(id)arg1 andDataSourceChange:(id)arg2 ;
-(void)setPhotosDataSource:(id)arg1 publishIntermediateEmptySnapshot:(BOOL)arg2 ;
-(id<PXPhotosDataSourceProvider>)photosDataSourceProvider;
-(void)setPhotosDataSourceProvider:(id<PXPhotosDataSourceProvider>)arg1 ;
@end

