/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUMediaProvider.h>

@class NSMapTable, NSMutableArray;

@interface PUJoiningMediaProvider : PUMediaProvider {

	NSMapTable* __mediaProviderByClass;
	NSMutableArray* __mediaProviderPredicateRecords;

}

@property (nonatomic,readonly) NSMapTable * _mediaProviderByClass;                           //@synthesize _mediaProviderByClass=__mediaProviderByClass - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _mediaProviderPredicateRecords;              //@synthesize _mediaProviderPredicateRecords=__mediaProviderPredicateRecords - In the implementation block
-(id)init;
-(int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)cancelImageRequest:(int)arg1 ;
-(int)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(int)requestLivePhotoForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)registerMediaProvider:(id)arg1 forAssetClass:(Class)arg2 ;
-(void)registerMediaProvider:(id)arg1 forAssetPassingTest:(/*^block*/id)arg2 ;
-(int)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)_mediaProviderForAsset:(id)arg1 requestType:(long long)arg2 ;
-(NSMapTable *)_mediaProviderByClass;
-(NSMutableArray *)_mediaProviderPredicateRecords;
@end

