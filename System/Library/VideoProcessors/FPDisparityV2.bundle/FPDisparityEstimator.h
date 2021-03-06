/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/VideoProcessors/FPDisparityV2.bundle/FPDisparityV2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLCommandQueue, MTLComputePipelineState, MTLBuffer, MTLTexture;
#import <FPDisparityV2/FPDisparityV2-Structs.h>
@class FigMetalContext, TVL1_v3, HBFGPU, FPDisparityEstimator_Parameters, PyrGPU, NSArray;

@interface FPDisparityEstimator : NSObject {

	FigMetalContext* _mtlContext;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _costNCCPipelineState;
	id<MTLComputePipelineState> _filterVertPipelineState;
	id<MTLComputePipelineState> _filterHorzPipelineState;
	id<MTLComputePipelineState> _interpolateAndSetPipelineState;
	id<MTLComputePipelineState> _interpolateAndAccumPipelineState;
	id<MTLComputePipelineState> _proximityOperatorPipelineState;
	id<MTLComputePipelineState> _regularizationPipelineState;
	id<MTLBuffer> _costsBuffer;
	id<MTLBuffer> _bufTcLrc1;
	id<MTLBuffer> _bufTcLrc2;
	CVBufferRef _res_pxbuf;
	id<MTLTexture> _res_tex[32];
	CVBufferRef _Hes_pxbuf;
	id<MTLTexture> _Hes_tex[32];
	id<MTLTexture> _uv_tex_user_ref;
	TVL1_v3* _tvl1Instance;
	HBFGPU* _hbfgpuInstance;
	id<MTLTexture> _disparityCorrectionTex;
	float _correctionBasisCoefficients[11];
	id<MTLComputePipelineState> _correctionMapGenerationPipelineState;
	unsigned _imageAGC;
	FPDisparityEstimator_Parameters* _fpDisparityEstimatorParams;
	PyrGPU* _imagePyramid;
	NSArray* _GChannelPyramid;
	id<MTLTexture> _H0ImTexture;
	id<MTLTexture> _H1ImTexture;
	id<MTLTexture> _V0ImTexture;
	id<MTLTexture> _V1ImTexture;
	id<MTLTexture> _binaryLambdaTexture;
	id<MTLTexture> _segmentationTexture;
	id<MTLTexture> _segmentationConfidenceTexture;
	CGSize _outputDisparityResolution;
	SCD_Struct_FP9 _H0Metadata;
	SCD_Struct_FP9 _H1Metadata;
	SCD_Struct_FP9 _V0Metadata;
	SCD_Struct_FP9 _V1Metadata;

}

@property (assign,nonatomic) FPDisparityEstimator_Parameters * fpDisparityEstimatorParams;              //@synthesize fpDisparityEstimatorParams=_fpDisparityEstimatorParams - In the implementation block
@property (nonatomic,readonly) CGSize outputDisparityResolution;                                        //@synthesize outputDisparityResolution=_outputDisparityResolution - In the implementation block
@property (nonatomic,retain) PyrGPU * imagePyramid;                                                     //@synthesize imagePyramid=_imagePyramid - In the implementation block
@property (getter=ChannelPyramid,nonatomic,retain) NSArray * GChannelPyramid;                           //@synthesize GChannelPyramid=_GChannelPyramid - In the implementation block
@property (nonatomic,retain) id<MTLTexture> H0ImTexture;                                                //@synthesize H0ImTexture=_H0ImTexture - In the implementation block
@property (nonatomic,retain) id<MTLTexture> H1ImTexture;                                                //@synthesize H1ImTexture=_H1ImTexture - In the implementation block
@property (nonatomic,retain) id<MTLTexture> V0ImTexture;                                                //@synthesize V0ImTexture=_V0ImTexture - In the implementation block
@property (nonatomic,retain) id<MTLTexture> V1ImTexture;                                                //@synthesize V1ImTexture=_V1ImTexture - In the implementation block
@property (nonatomic,retain) id<MTLTexture> binaryLambdaTexture;                                        //@synthesize binaryLambdaTexture=_binaryLambdaTexture - In the implementation block
@property (assign,nonatomic) SCD_Struct_FP9 H0Metadata;                                                 //@synthesize H0Metadata=_H0Metadata - In the implementation block
@property (assign,nonatomic) SCD_Struct_FP9 H1Metadata;                                                 //@synthesize H1Metadata=_H1Metadata - In the implementation block
@property (assign,nonatomic) SCD_Struct_FP9 V0Metadata;                                                 //@synthesize V0Metadata=_V0Metadata - In the implementation block
@property (assign,nonatomic) SCD_Struct_FP9 V1Metadata;                                                 //@synthesize V1Metadata=_V1Metadata - In the implementation block
@property (nonatomic,retain) id<MTLTexture> segmentationTexture;                                        //@synthesize segmentationTexture=_segmentationTexture - In the implementation block
@property (nonatomic,retain) id<MTLTexture> segmentationConfidenceTexture;                              //@synthesize segmentationConfidenceTexture=_segmentationConfidenceTexture - In the implementation block
@property (assign,nonatomic) unsigned imageAGC;                                                         //@synthesize imageAGC=_imageAGC - In the implementation block
-(void)dealloc;
-(int)_setupBuffer;
-(int)allocateResources:(SCD_Struct_FP10*)arg1 ;
-(void)releaseResources;
-(id)initWithMetalContext:(id)arg1 ;
-(int)_setupTexture;
-(int)setOutputDisparity:(CVBufferRef)arg1 ;
-(CGSize)outputDisparityResolution;
-(void)setImagePyramid:(PyrGPU *)arg1 ;
-(void)setFpDisparityEstimatorParams:(FPDisparityEstimator_Parameters *)arg1 ;
-(void)setH0ImTexture:(id<MTLTexture>)arg1 ;
-(void)setH1ImTexture:(id<MTLTexture>)arg1 ;
-(void)setV0ImTexture:(id<MTLTexture>)arg1 ;
-(void)setV1ImTexture:(id<MTLTexture>)arg1 ;
-(void)setGChannelPyramid:(NSArray *)arg1 ;
-(void)setSegmentationTexture:(id<MTLTexture>)arg1 ;
-(void)setSegmentationConfidenceTexture:(id<MTLTexture>)arg1 ;
-(void)setBinaryLambdaTexture:(id<MTLTexture>)arg1 ;
-(FPDisparityEstimator_Parameters *)fpDisparityEstimatorParams;
-(void)setImageAGC:(unsigned)arg1 ;
-(int)estimateFocusPixelDisparityWithBox_cstr_range:(float)arg1 ;
-(void)setH0Metadata:(SCD_Struct_FP9)arg1 ;
-(void)setH1Metadata:(SCD_Struct_FP9)arg1 ;
-(void)setV0Metadata:(SCD_Struct_FP9)arg1 ;
-(void)setV1Metadata:(SCD_Struct_FP9)arg1 ;
-(int)_setupFPPipelines;
-(int)_allocateFPCostWorkBuffer:(SCD_Struct_FP10*)arg1 ;
-(int)_setCorrectionMapCoefficients:(float*)arg1 ;
-(int)_generateCorrectionMap;
-(unsigned long long)computeAlignedSize:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 ;
-(int)_doLocalRegularizationWithCommandBuffer:(id)arg1 in_tex:(id)arg2 level:(int)arg3 parameters:(id)arg4 ;
-(int)_computeCost:(id)arg1 texGreenPixels:(id)arg2 texOutputResU:(id)arg3 texOutputHesU:(id)arg4 level:(unsigned)arg5 resolutionScale:(float)arg6 ;
-(int)_computeFocusPixelDisparityFromResolution:(float)arg1 ;
-(id)CreateKernelWithConst:(id)arg1 constants:(id)arg2 ;
-(int)_costNCC:(id)arg1 dynCfg:(SCD_Struct_FP14*)arg2 texDisparityIn:(id)arg3 texGreenPixelsIn:(id)arg4 texFocusPixelsIn:(id)arg5 texTcLrcOut:(id)arg6 resolutionScale:(float)arg7 level:(unsigned)arg8 ;
-(int)_filterVert:(id)arg1 texTcLrcIn:(id)arg2 texTcLrcOut:(id)arg3 dynCfg:(SCD_Struct_FP14*)arg4 ;
-(int)_filterHorz:(id)arg1 texTcLrcIn:(id)arg2 texTcLrcOut:(id)arg3 dynCfg:(SCD_Struct_FP14*)arg4 ;
-(int)_interpolateAndAccumulate:(id)arg1 texTcLrcIn:(id)arg2 dynCfg:(SCD_Struct_FP14*)arg3 ;
-(int)_proximityOperator:(id)arg1 dynCfg:(SCD_Struct_FP14*)arg2 texDisparityIn:(id)arg3 texOutputResUOut:(id)arg4 texOutputHesUOut:(id)arg5 level:(unsigned)arg6 ;
-(int)computeFilterCurve:(float)arg1 p3:(float)arg2 array:(float*)arg3 ;
-(PyrGPU *)imagePyramid;
-(NSArray *)GChannelPyramid;
-(id<MTLTexture>)H0ImTexture;
-(id<MTLTexture>)H1ImTexture;
-(id<MTLTexture>)V0ImTexture;
-(id<MTLTexture>)V1ImTexture;
-(id<MTLTexture>)binaryLambdaTexture;
-(SCD_Struct_FP9)H0Metadata;
-(SCD_Struct_FP9)H1Metadata;
-(SCD_Struct_FP9)V0Metadata;
-(SCD_Struct_FP9)V1Metadata;
-(id<MTLTexture>)segmentationTexture;
-(id<MTLTexture>)segmentationConfidenceTexture;
-(unsigned)imageAGC;
@end

