/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <PhotosUICore/PXUIMediaProvider.h>

@class PUMediaProvider;

@interface AEWrappedMediaProvider : PXUIMediaProvider {

	PUMediaProvider* __internalMediaProvider;

}

@property (nonatomic,readonly) PUMediaProvider * _internalMediaProvider;              //@synthesize _internalMediaProvider=__internalMediaProvider - In the implementation block
-(long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)cancelImageRequest:(long long)arg1 ;
-(long long)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(long long)requestLivePhotoForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)initWithMediaProvider:(id)arg1 ;
-(PUMediaProvider *)_internalMediaProvider;
@end

