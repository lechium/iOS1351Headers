/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLDeviceSPI, MTLComputePipelineState;
@class MPSImageGaussianPyramid, NSString;

@interface CVAFilterMaskedVariableBlur : NSObject {

	id<MTLDeviceSPI> _device;
	MPSImageGaussianPyramid* _gaussianPyramid;
	id<MTLComputePipelineState> _maskedVariableBlurKernel;
	NSString* _label;

}

@property (readonly) NSString * label;              //@synthesize label=_label - In the implementation block
+(void)prewarmGaussianPyramid:(id)arg1 device:(id)arg2 commandBuffer:(id)arg3 ;
-(NSString *)label;
-(id)initWithDevice:(id)arg1 library:(id)arg2 commandQueue:(id)arg3 kernelSize:(int)arg4 error:(id*)arg5 ;
-(void)encodeBlurPyramidInPlaceToCommandBuffer:(id)arg1 inoutTexture:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 mask:(id)arg4 maxBlurRadius:(float)arg5 ;
@end

