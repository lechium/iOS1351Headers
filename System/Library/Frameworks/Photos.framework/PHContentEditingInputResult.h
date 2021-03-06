/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:05 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <Photos/PHCompositeMediaResult.h>

@class PHAdjustmentData, PHImageResult, PHCompositeMediaResult, NSMutableDictionary, NSNumber, NSURL;

@interface PHContentEditingInputResult : PHCompositeMediaResult {

	PHAdjustmentData* _adjustmentData;
	PHImageResult* _imageResult;
	PHCompositeMediaResult* _videoResult;
	NSMutableDictionary* _flipImageURLs;
	NSMutableDictionary* _flipVideoURLs;
	BOOL _canHandleAdjustmentData;
	NSNumber* _baseVersionNeeded;
	NSURL* _overCapturePhotoURL;
	NSURL* _overCaptureVideoURL;
	NSURL* _frontSwappingImageRenderURL;
	NSURL* _backSwappingImageRenderURL;
	NSURL* _frontSwappingVideoRenderURL;
	NSURL* _backSwappingVideoRenderURL;
	PHAdjustmentData* _originalAdjustmentData;

}

@property (assign,nonatomic) BOOL canHandleAdjustmentData;                           //@synthesize canHandleAdjustmentData=_canHandleAdjustmentData - In the implementation block
@property (nonatomic,retain) NSNumber * baseVersionNeeded;                           //@synthesize baseVersionNeeded=_baseVersionNeeded - In the implementation block
@property (nonatomic,retain) NSURL * overCapturePhotoURL;                            //@synthesize overCapturePhotoURL=_overCapturePhotoURL - In the implementation block
@property (nonatomic,retain) NSURL * overCaptureVideoURL;                            //@synthesize overCaptureVideoURL=_overCaptureVideoURL - In the implementation block
@property (nonatomic,copy) NSURL * frontSwappingImageRenderURL;                      //@synthesize frontSwappingImageRenderURL=_frontSwappingImageRenderURL - In the implementation block
@property (nonatomic,copy) NSURL * backSwappingImageRenderURL;                       //@synthesize backSwappingImageRenderURL=_backSwappingImageRenderURL - In the implementation block
@property (nonatomic,copy) NSURL * frontSwappingVideoRenderURL;                      //@synthesize frontSwappingVideoRenderURL=_frontSwappingVideoRenderURL - In the implementation block
@property (nonatomic,copy) NSURL * backSwappingVideoRenderURL;                       //@synthesize backSwappingVideoRenderURL=_backSwappingVideoRenderURL - In the implementation block
@property (nonatomic,retain) PHAdjustmentData * originalAdjustmentData;              //@synthesize originalAdjustmentData=_originalAdjustmentData - In the implementation block
-(id)description;
-(id)error;
-(BOOL)isCancelled;
-(void)setError:(id)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(CGImageRef)imageRef;
-(id)exifOrientation;
-(id)imageURL;
-(id)imageData;
-(id)adjustmentData;
-(id)videoURL;
-(BOOL)containsValidData;
-(id)imageUTI;
-(id)videoAdjustmentData;
-(BOOL)canHandleAdjustmentData;
-(NSNumber *)baseVersionNeeded;
-(id)imagePropertiesLoadIfNeeded:(BOOL)arg1 ;
-(void)setIsInCloud:(BOOL)arg1 ;
-(BOOL)isInCloud;
-(id)imageSandboxExtensionToken;
-(id)videoSandboxExtensionToken;
-(void)setCanHandleAdjustmentData:(BOOL)arg1 ;
-(NSURL *)overCapturePhotoURL;
-(void)setOverCapturePhotoURL:(NSURL *)arg1 ;
-(NSURL *)overCaptureVideoURL;
-(void)setOverCaptureVideoURL:(NSURL *)arg1 ;
-(NSURL *)frontSwappingImageRenderURL;
-(void)setFrontSwappingImageRenderURL:(NSURL *)arg1 ;
-(NSURL *)backSwappingImageRenderURL;
-(void)setBackSwappingImageRenderURL:(NSURL *)arg1 ;
-(NSURL *)frontSwappingVideoRenderURL;
-(void)setFrontSwappingVideoRenderURL:(NSURL *)arg1 ;
-(NSURL *)backSwappingVideoRenderURL;
-(void)setBackSwappingVideoRenderURL:(NSURL *)arg1 ;
-(PHAdjustmentData *)originalAdjustmentData;
-(void)setOriginalAdjustmentData:(PHAdjustmentData *)arg1 ;
-(void)addImageResult:(id)arg1 ;
-(void)addVideoResult:(id)arg1 ;
-(void)mergeInfoDictionaryFromResult:(id)arg1 ;
-(void)addAdjustmentDataResult:(id)arg1 ;
-(void)clearAdjustmentData;
-(id)flipImageURLs;
-(id)flipVideoURLs;
-(void)addFlipImageURL:(id)arg1 forAssetResourceType:(long long)arg2 ;
-(void)addFlipVideoURL:(id)arg1 forAssetResourceType:(long long)arg2 ;
-(void)setBaseVersionNeeded:(NSNumber *)arg1 ;
@end

