/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableImageRequester.h>

@protocol PXUIImageProvider, PXDisplayAsset;
@class UIImage, PXImageRequest, NSString;

@interface PXImageRequester : PXObservable <PXMutableImageRequester> {

	SCD_Struct_PX80 _needsUpdateFlags;
	BOOL _hasFullQuality;
	BOOL _isInCloud;
	id<PXUIImageProvider> _mediaProvider;
	id<PXDisplayAsset> _asset;
	double _scale;
	UIImage* _image;
	UIImage* _opportunisticImage;
	double _loadingProgress;
	id<PXDisplayAsset> __currentImageSourceAsset;
	PXImageRequest* __currentRequest;
	CGSize _contentSize;
	CGSize _maximumRequestSize;
	CGSize _viewportSize;
	CGSize __targetSize;
	CGRect _desiredContentsRect;
	CGRect _cropRect;
	CGRect _contentsRect;

}

@property (setter=_setImage:,nonatomic,retain) UIImage * image;                                                            //@synthesize image=_image - In the implementation block
@property (setter=_setOpportunisticImage:,nonatomic,retain) UIImage * opportunisticImage;                                  //@synthesize opportunisticImage=_opportunisticImage - In the implementation block
@property (setter=_setCurrentImageSourceAsset:,nonatomic,retain) id<PXDisplayAsset> _currentImageSourceAsset;              //@synthesize _currentImageSourceAsset=__currentImageSourceAsset - In the implementation block
@property (assign,setter=_setHasFullQuality:,nonatomic) BOOL hasFullQuality;                                               //@synthesize hasFullQuality=_hasFullQuality - In the implementation block
@property (assign,setter=_setIsInCloud:,nonatomic) BOOL isInCloud;                                                         //@synthesize isInCloud=_isInCloud - In the implementation block
@property (setter=_setCurrentRequest:,nonatomic,retain) PXImageRequest * _currentRequest;                                  //@synthesize _currentRequest=__currentRequest - In the implementation block
@property (assign,setter=_setTargetSize:,nonatomic) CGSize _targetSize;                                                    //@synthesize _targetSize=__targetSize - In the implementation block
@property (assign,setter=_setLoadingProgress:,nonatomic) double loadingProgress;                                           //@synthesize loadingProgress=_loadingProgress - In the implementation block
@property (nonatomic,readonly) id<PXUIImageProvider> mediaProvider;                                                        //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> asset;                                                                   //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                                                                         //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) double scale;                                                                               //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGSize maximumRequestSize;                                                                  //@synthesize maximumRequestSize=_maximumRequestSize - In the implementation block
@property (nonatomic,readonly) CGRect desiredContentsRect;                                                                 //@synthesize desiredContentsRect=_desiredContentsRect - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;                                                                            //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,readonly) CGSize viewportSize;                                                                        //@synthesize viewportSize=_viewportSize - In the implementation block
@property (nonatomic,readonly) CGRect contentsRect;                                                                        //@synthesize contentsRect=_contentsRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultOptions;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(double)scale;
-(UIImage *)image;
-(CGSize)contentSize;
-(void)setScale:(double)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(id<PXDisplayAsset>)asset;
-(void)setAsset:(id<PXDisplayAsset>)arg1 ;
-(PXImageRequest *)_currentRequest;
-(void)setContentsRect:(CGRect)arg1 ;
-(void)_setImage:(id)arg1 ;
-(CGRect)contentsRect;
-(BOOL)_needsUpdate;
-(CGSize)_targetSize;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)isInCloud;
-(double)loadingProgress;
-(id)mutableChangeObject;
-(void)didPerformChanges;
-(void)_updateIfNeeded;
-(CGSize)viewportSize;
-(void)setViewportSize:(CGSize)arg1 ;
-(id<PXUIImageProvider>)mediaProvider;
-(CGRect)desiredContentsRect;
-(void)setDesiredContentsRect:(CGRect)arg1 ;
-(void)setMediaProvider:(id<PXUIImageProvider>)arg1 ;
-(void)handlePreloadedImage:(id)arg1 ;
-(void)handlePreloadedImageRequester:(id)arg1 ;
-(CGSize)maximumRequestSize;
-(void)setMaximumRequestSize:(CGSize)arg1 ;
-(id)initWithMediaProvider:(id)arg1 asset:(id)arg2 ;
-(void)_invalidateTargetSize;
-(void)_updateTargetSizeIfNeeded;
-(void)_invalidateImageRequest;
-(void)_updateImageRequestIfNeeded;
-(void)_handleProgressForImageRequest:(id)arg1 progress:(double)arg2 ;
-(void)_handleResultOfImageRequest:(id)arg1 image:(id)arg2 info:(id)arg3 ;
-(void)_invalidateIsInCloud;
-(void)_updateIsInCloudIfNeeded;
-(void)_setLoadingProgress:(double)arg1 ;
-(void)_setTargetSize:(CGSize)arg1 ;
-(void)_setOpportunisticImage:(id)arg1 ;
-(void)_setHasFullQuality:(BOOL)arg1 ;
-(void)_setIsInCloud:(BOOL)arg1 ;
-(void)_cancelRequests;
-(UIImage *)opportunisticImage;
-(BOOL)hasFullQuality;
-(id<PXDisplayAsset>)_currentImageSourceAsset;
-(void)_setCurrentImageSourceAsset:(id)arg1 ;
-(void)_setCurrentRequest:(id)arg1 ;
@end

