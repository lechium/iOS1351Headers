/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>

@interface ARImageDistortionCorrectionTechnique : ARTechnique {

	vector<float, std::__1::allocator<float> >* _mappingU;
	vector<float, std::__1::allocator<float> >* _mappingV;
	vImageMappingRef _mapping;
	CVPixelBufferPoolRef _undistortedImageBufferPool;
	CVPixelBufferPoolRef _rgbImagePool;
	CVPixelBufferPoolRef _rgbUndistortedImagePool;
	 _radialDistortion;
	CGSize _imageSize;
	SCD_Struct_AR24 _intrinsics;

}

@property (nonatomic,readonly) SCD_Struct_AR24 intrinsics;              //@synthesize intrinsics=_intrinsics - In the implementation block
@property (nonatomic,readonly)  radialDistortion;                       //@synthesize radialDistortion=_radialDistortion - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                          //@synthesize imageSize=_imageSize - In the implementation block
-(CGSize)imageSize;
-(void)setImageSize:(CGSize)arg1 ;
-(id)processData:(id)arg1 ;
-()radialDistortion;
-(id)initWithIntrinsics:(SCD_Struct_AR24)arg1 radialDistortion:(CGSize)arg2 ;
-(SCD_Struct_AR24)intrinsics;
-(void)undistortImage:(CVBufferRef)arg1 toTargetImage:(CVBufferRef)arg2 ;
@end

