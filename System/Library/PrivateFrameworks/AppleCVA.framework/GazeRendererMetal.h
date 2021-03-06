/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleCVA.framework/AppleCVA
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleCVA/AppleCVA-Structs.h>
#import <AppleCVA/GazeRendererBase.h>

@protocol MTLDevice, MTLRenderPipelineState, MTLComputePipelineState, MTLDepthStencilState, MTLBuffer, MTLTexture;
@class GazeMesh, NSDictionary;

@interface GazeRendererMetal : GazeRendererBase {

	id<MTLDevice> _device;
	id<MTLRenderPipelineState> _gazePipelineState;
	id<MTLComputePipelineState> _gazeLandmarksState;
	id<MTLDepthStencilState> _gazeDepthStencilState;
	id<MTLDepthStencilState> _gazeWFDepthStencilState;
	id<MTLRenderPipelineState> _imagePipelineState;
	id<MTLBuffer> _triangleIndexBuffer;
	id<MTLBuffer> _vertexBuffer;
	id<MTLBuffer> _gazeUniformBuffer;
	id<MTLBuffer> _vertexWeightsEyesBuffer;
	id<MTLBuffer> _vertexWeightsFaceBuffer;
	id<MTLBuffer> _eyeOffsetsBuffer;
	id<MTLBuffer> _landmarkWeightsBuffer;
	id<MTLBuffer> _landmarkIdsBuffer;
	id<MTLBuffer> _landmarkPositionsBuffer;
	id<MTLBuffer> _imagePlaneVertexBuffer;
	id<MTLTexture> _depthTexture;
	id<MTLBuffer> _renderModeAuxBuffer;
	GazeMesh* _gazeMesh;
	BOOL _landmarkPositionOutputEnabled;
	float _toMMExtrinsicsMultiplier;
	long long _renderMode;
	NSDictionary* _landmarkPositions;
	unsigned long long _outputPixelFormat;

}

@property (assign) float toMMExtrinsicsMultiplier;                      //@synthesize toMMExtrinsicsMultiplier=_toMMExtrinsicsMultiplier - In the implementation block
@property (assign) BOOL landmarkPositionOutputEnabled;                  //@synthesize landmarkPositionOutputEnabled=_landmarkPositionOutputEnabled - In the implementation block
@property (assign,nonatomic) long long renderMode;                      //@synthesize renderMode=_renderMode - In the implementation block
@property (readonly) NSDictionary * landmarkPositions;                  //@synthesize landmarkPositions=_landmarkPositions - In the implementation block
@property (readonly) unsigned long long outputPixelFormat;              //@synthesize outputPixelFormat=_outputPixelFormat - In the implementation block
-(void)dealloc;
-(void)setRenderMode:(long long)arg1 ;
-(void)resetToDefaults;
-(long long)renderMode;
-(unsigned long long)outputPixelFormat;
-(BOOL)renderToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 faceKitData:(id)arg4 virtualCameraPosition:(BOOL)arg5 correctionEnabled:(id*)arg6 ;
-(id)initWithDevice:(id)arg1 PixelFormat:(unsigned long long)arg2 ;
-(void)resetToStored;
-(void)storeSettings;
-(void)initBuffers;
-(BOOL)updateFaceMeshWithfaceKitData:(id)arg1 screenProjectionMatrix:(SCD_Struct_Ga0)arg2 inputImageSize:(SCD_Struct_Ga1)arg3 outputImageSize:(SCD_Struct_Ga1)arg4 inputIntrinsics:(SCD_Struct_Ga2)arg5 outputIntrinsics:(SCD_Struct_Ga2)arg6 extrinsics:(SCD_Struct_Ga0)arg7 correctionEnabled:(BOOL)arg8 groundTruthMode:(BOOL)arg9 ;
-(BOOL)renderToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 faceKitData:(id)arg4 virtualCameraPosition:(BOOL)arg5 correctionEnabled:(SCD_Struct_Ga2)arg6 screenTransformationMatrix:(id*)arg7 ;
-(BOOL)renderGroundTruthToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 faceKitData:(id)arg4 outputIntrinsics:(SCD_Struct_Ga2)arg5 extrinsics:(SCD_Struct_Ga0)arg6 correctionEnabled:(BOOL)arg7 error:(id*)arg8 ;
-(void)updateDepthTexture:(SCD_Struct_Ga1)arg1 ;
-(BOOL)drawLandmarksWithCommandBuffer:(id)arg1 imageSize:(SCD_Struct_Ga1)arg2 ;
-(void)drawImageWithCommandEncoder:(id)arg1 sourceTexture:(id)arg2 transformation:(SCD_Struct_Ga2)arg3 ;
-(void)drawMeshWithCommandEncoder:(id)arg1 sourceTexture:(id)arg2 ;
-(float)toMMExtrinsicsMultiplier;
-(void)setToMMExtrinsicsMultiplier:(float)arg1 ;
-(BOOL)landmarkPositionOutputEnabled;
-(void)setLandmarkPositionOutputEnabled:(BOOL)arg1 ;
-(NSDictionary *)landmarkPositions;
@end

