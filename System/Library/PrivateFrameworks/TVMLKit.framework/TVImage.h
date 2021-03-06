/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVMLKit/TVMLKit-Structs.h>
@class NSURL, NSData, NSString;

@interface TVImage : NSObject {

	CGImageRef _image;
	CGImageSourceRef _imageSource;
	double _imageWidth;
	double _imageHeight;
	int _imageOrientation;
	BOOL _enableCache;
	BOOL _cacheImmediately;
	NSURL* _imageURL;
	NSData* _imageData;
	NSString* _imageType;
	BOOL _imageBufferInMemory;
	BOOL _rotationEnabled;

}

@property (nonatomic,readonly) int orientation;                 //@synthesize imageOrientation=_imageOrientation - In the implementation block
@property (assign,nonatomic) BOOL rotationEnabled;              //@synthesize rotationEnabled=_rotationEnabled - In the implementation block
+(id)imageWithData:(id)arg1 ;
+(id)imageWithURL:(id)arg1 ;
+(id)imageWithPath:(id)arg1 ;
+(id)imageWithCGImageRef:(CGImageRef)arg1 preserveAlpha:(BOOL)arg2 ;
+(id)imageWithURL:(id)arg1 cacheImmediately:(BOOL)arg2 ;
+(id)imageWithPath:(id)arg1 cacheImmediately:(BOOL)arg2 ;
+(id)imageWithCGImageRef:(CGImageRef)arg1 imageOrientation:(long long)arg2 preserveAlpha:(BOOL)arg3 ;
+(id)imageWithRotationFromURL:(id)arg1 ;
+(int)exifOrientationForImageOrientation:(long long)arg1 ;
+(long long)imageOrientationForExifOrientation:(int)arg1 ;
+(id)imageWithRotationFromPath:(id)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)orientation;
-(CGImageRef)image;
-(float)aspectRatio;
-(id)imageType;
-(void)setRotationEnabled:(BOOL)arg1 ;
-(BOOL)hasAlpha;
-(id)uiImage;
-(void)drawImageInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(BOOL)isPowerOfTwo;
-(BOOL)rotationEnabled;
-(CGSize)pixelBounds;
-(id)initWithCGImageRef:(CGImageRef)arg1 preserveAlpha:(BOOL)arg2 ;
-(id)initWithCGImageRef:(CGImageRef)arg1 imageOrientation:(long long)arg2 preserveAlpha:(BOOL)arg3 ;
-(id)initWithURL:(id)arg1 cacheImmediately:(BOOL)arg2 ;
-(id)_initWithCGImageSourceRotationEnabled:(CGImageSourceRef)arg1 ;
-(long long)_uiImageOrientation;
-(void)_initializeCGImageWithRotation;
-(CGRect)largestSquareRect;
-(BOOL)sourceRequiresRotation;
-(void)setEnableCache:(BOOL)arg1 ;
-(BOOL)enableCache;
-(id)squareImageFromNearSquareImageWithAspectRatioLimit:(float)arg1 ;
-(BOOL)isImageBufferInMemory;
@end

