/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSectionedDataSourceManager.h>
#import <libobjc.A.dylib/PXMutableAssetsDataSourceManager.h>

@class PXAssetsDataSource, NSString;

@interface PXAssetsDataSourceManager : PXSectionedDataSourceManager <PXMutableAssetsDataSourceManager>

@property (nonatomic,readonly) PXAssetsDataSource * dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long backgroundFetchOriginSection; 
-(void)registerChangeObserver:(id)arg1 context:(void*)arg2 ;
-(id)mutableChangeObject;
-(void)unregisterChangeObserver:(id)arg1 context:(void*)arg2 ;
-(void)setCurationEnabled:(BOOL)arg1 forAssetCollection:(id)arg2 ;
-(BOOL)forceAccurateAllSectionsIfNeeded;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1 ;
-(BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2 ;
-(id)pauseChangeDeliveryWithTimeout:(double)arg1 ;
-(void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1 ;
-(void)startBackgroundFetchIfNeeded;
-(long long)backgroundFetchOriginSection;
-(void)setBackgroundFetchOriginSection:(long long)arg1 ;
@end
