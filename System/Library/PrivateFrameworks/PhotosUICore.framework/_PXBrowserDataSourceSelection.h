/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXBrowserSelectionSnapshot.h>

@protocol PXDisplayAssetDataSource;
@class NSMutableArray, NSArray;

@interface _PXBrowserDataSourceSelection : PXBrowserSelectionSnapshot {

	NSMutableArray* _assets;
	NSArray* _indexPaths;
	id<PXDisplayAssetDataSource> _dataSource;

}

@property (nonatomic,readonly) NSArray * indexPaths;                                 //@synthesize indexPaths=_indexPaths - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAssetDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSArray * assets; 
-(long long)mediaType;
-(id<PXDisplayAssetDataSource>)dataSource;
-(NSArray *)indexPaths;
-(NSArray *)assets;
-(long long)assetCount;
-(long long)estimatedAssetCount;
-(id)modelObjects;
-(id)initWithIndexPaths:(id)arg1 dataSource:(id)arg2 ;
-(id)displayAssetAtIndex:(long long)arg1 ;
-(id)assetReferenceAtIndex:(long long)arg1 ;
-(long long)indexOfAssetReference:(id)arg1 ;
-(long long)estimatedModelObjectsCount;
@end
