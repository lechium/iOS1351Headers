/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSArray, PHAsset, UIImage, NSString, NSDate;

@interface NPTOPhoto : NSObject {

	NSURL* _irisURL;
	BOOL _irisURLAlreadyRequested;
	BOOL _isPhotoIris;
	NSArray* _faceRegions;
	NSArray* _thumbnailFacesRegions;
	PHAsset* _asset;
	unsigned long long _contentsIndex;

}

@property (assign,nonatomic) unsigned long long contentsIndex;                 //@synthesize contentsIndex=_contentsIndex - In the implementation block
@property (nonatomic,retain) PHAsset * asset;                                  //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) UIImage * lazilyDecodedFullImage; 
@property (nonatomic,readonly) UIImage * eagerlyDecodedFullImage; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) NSArray * faceRegions;                          //@synthesize faceRegions=_faceRegions - In the implementation block
@property (nonatomic,readonly) NSArray * thumbnailFacesRegions;                //@synthesize thumbnailFacesRegions=_thumbnailFacesRegions - In the implementation block
@property (nonatomic,readonly) BOOL isPhotoIris;                               //@synthesize isPhotoIris=_isPhotoIris - In the implementation block
@property (nonatomic,readonly) BOOL isIrisVideoHidden; 
@property (nonatomic,readonly) NSURL * irisURL; 
@property (nonatomic,readonly) double irisStillDisplayTime; 
@property (nonatomic,readonly) double irisDuration; 
-(id)imageDataForWatch;
-(id)temporaryIrisURLForWatch;
-(NSString *)identifier;
-(NSDate *)modificationDate;
-(PHAsset *)asset;
-(void)setAsset:(PHAsset *)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(id)_imageWithSize:(long long)arg1 ;
-(BOOL)isPhotoIris;
-(NSArray *)faceRegions;
-(double)irisStillDisplayTime;
-(UIImage *)lazilyDecodedFullImage;
-(BOOL)isIrisVideoHidden;
-(NSURL *)irisURL;
-(double)irisDuration;
-(id)_fullImageData;
-(id)thumbnail:(long long)arg1 ;
-(UIImage *)eagerlyDecodedFullImage;
-(NSArray *)thumbnailFacesRegions;
-(unsigned long long)contentsIndex;
-(void)setContentsIndex:(unsigned long long)arg1 ;
@end

