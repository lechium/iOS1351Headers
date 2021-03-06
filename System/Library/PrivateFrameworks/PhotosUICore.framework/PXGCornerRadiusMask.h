/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLDevice, MTLTexture;
@interface PXGCornerRadiusMask : NSObject {

	id<MTLDevice> _device;
	long long _texturePixelSide;
	double _screenScale;
	double _maxCornerRadius;
	long long _numberOfSlices;
	long long _byteSize;
	id<MTLTexture> _atomicTexture;

}

@property (retain) id<MTLTexture> atomicTexture;                        //@synthesize atomicTexture=_atomicTexture - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> texture; 
@property (nonatomic,readonly) long long texturePixelSide;              //@synthesize texturePixelSide=_texturePixelSide - In the implementation block
@property (nonatomic,readonly) double screenScale;                      //@synthesize screenScale=_screenScale - In the implementation block
@property (nonatomic,readonly) double maxCornerRadius;                  //@synthesize maxCornerRadius=_maxCornerRadius - In the implementation block
@property (nonatomic,readonly) long long numberOfSlices;                //@synthesize numberOfSlices=_numberOfSlices - In the implementation block
@property (nonatomic,readonly) long long byteSize;                      //@synthesize byteSize=_byteSize - In the implementation block
+(id)_loadQueue;
+(id)cornerRadiusMaskForDevice:(id)arg1 maxCornerRadius:(double)arg2 screenScale:(double)arg3 ;
-(id)init;
-(id<MTLTexture>)texture;
-(double)screenScale;
-(long long)numberOfSlices;
-(id)initWithDevice:(id)arg1 maxCornerRadius:(double)arg2 screenScale:(double)arg3 ;
-(void)_loadCornerRadiusTexture;
-(long long)texturePixelSide;
-(double)maxCornerRadius;
-(long long)byteSize;
-(id<MTLTexture>)atomicTexture;
-(void)setAtomicTexture:(id<MTLTexture>)arg1 ;
@end

