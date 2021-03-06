/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/_PXPhotoKitAdjustedUIMediaRequest.h>

@class _PXPhotoKitAdjustedUIImageRequest, _PXPhotoKitAdjustedVideoRequest, UIImage, AVPlayerItem, PHLivePhotoRequestOptions;

@interface _PXPhotoKitAdjustedPHLivePhotoRequest : _PXPhotoKitAdjustedUIMediaRequest {

	_PXPhotoKitAdjustedUIImageRequest* _imageRequest;
	_PXPhotoKitAdjustedVideoRequest* _videoRequest;
	UIImage* _image;
	AVPlayerItem* _playerItem;
	long long _contentMode;
	PHLivePhotoRequestOptions* _options;
	/*^block*/id _resultHandler;
	CGSize _targetSize;

}

@property (nonatomic,readonly) CGSize targetSize;                                //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) long long contentMode;                            //@synthesize contentMode=_contentMode - In the implementation block
@property (nonatomic,readonly) PHLivePhotoRequestOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;                            //@synthesize resultHandler=_resultHandler - In the implementation block
-(PHLivePhotoRequestOptions *)options;
-(void)cancel;
-(void)start;
-(long long)contentMode;
-(CGSize)targetSize;
-(id)resultHandler;
-(id)initWithRenderQueue:(id)arg1 asset:(id)arg2 targetSize:(CGSize)arg3 contentMode:(long long)arg4 imageManager:(id)arg5 options:(id)arg6 resultHandler:(/*^block*/id)arg7 ;
-(void)_handleImageRequestResult:(id)arg1 info:(id)arg2 ;
-(void)_handleVideoRequestResult:(id)arg1 info:(id)arg2 ;
-(void)_prepareLivePhotoIfPossible;
@end

