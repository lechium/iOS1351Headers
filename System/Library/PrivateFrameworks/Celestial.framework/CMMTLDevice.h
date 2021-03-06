/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/MTLDeviceSPI.h>

@protocol MTLDeviceSPI;
@class NSArray, NSString;

@interface CMMTLDevice : NSObject <MTLDeviceSPI> {

	id<MTLDeviceSPI> _device;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long registryID; 
@property (readonly) SCD_Struct_CM48 maxThreadsPerThreadgroup; 
@property (getter=isLowPower,readonly) BOOL lowPower; 
@property (getter=isHeadless,readonly) BOOL headless; 
@property (getter=isRemovable,readonly) BOOL removable; 
@property (readonly) BOOL hasUnifiedMemory; 
@property (readonly) unsigned long long recommendedMaxWorkingSetSize; 
@property (getter=isDepth24Stencil8PixelFormatSupported,readonly) BOOL depth24Stencil8PixelFormatSupported; 
@property (readonly) unsigned long long readWriteTextureSupport; 
@property (readonly) unsigned long long argumentBuffersSupport; 
@property (getter=areRasterOrderGroupsSupported,readonly) BOOL rasterOrderGroupsSupported; 
@property (readonly) unsigned long long currentAllocatedSize; 
@property (readonly) unsigned long long maxThreadgroupMemoryLength; 
@property (readonly) unsigned long long maxArgumentBufferSamplerCount; 
@property (getter=areProgrammableSamplePositionsSupported,readonly) BOOL programmableSamplePositionsSupported; 
@property (readonly) unsigned long long sparseTileSizeInBytes; 
@property (readonly) unsigned long long maxBufferLength; 
@property (nonatomic,readonly) BOOL supportsQuadReduction; 
@property (nonatomic,readonly) BOOL supportsBufferlessClientStorageTexture; 
@property (nonatomic,readonly) BOOL supportsArgumentBuffersTier2; 
@property (nonatomic,readonly) BOOL supportsReadWriteTextureArgumentsTier2; 
@property (nonatomic,readonly) BOOL supportsProgrammableSamplePositions; 
@property (nonatomic,readonly) BOOL supportsBCTextureCompression; 
@property (nonatomic,readonly) BOOL supports3DBCTextures; 
@property (nonatomic,readonly) BOOL supportsLargeFramebufferConfigs; 
@property (nonatomic,readonly) BOOL supportsCustomBorderColor; 
@property (nonatomic,readonly) BOOL supportsSamplerAddressModeClampToHalfBorder; 
@property (nonatomic,readonly) BOOL supports32bpcMSAATextures; 
@property (nonatomic,readonly) BOOL supportsVertexAmplification; 
@property (nonatomic,readonly) BOOL supportsPlacementHeaps; 
@property (nonatomic,readonly) BOOL supportsOpenCLTextureWriteSwizzles; 
@property (nonatomic,readonly) BOOL supportsLimitedYUVFormats; 
@property (nonatomic,readonly) BOOL supportsNonPrivateDepthStencilTextures; 
@property (nonatomic,readonly) BOOL supportsNonPrivateMSAATextures; 
@property (nonatomic,readonly) BOOL supportsLinearTextureFromSharedBuffer; 
@property (nonatomic,readonly) BOOL supportsPipelineLibraries; 
@property (nonatomic,readonly) BOOL supportsFragmentOnlyEncoders; 
@property (nonatomic,readonly) BOOL supportsBufferWithIOSurface; 
@property (nonatomic,readonly) BOOL supportsProgrammableBlending; 
@property (nonatomic,readonly) BOOL supportsRenderToLinearTextures; 
@property (nonatomic,readonly) BOOL supportsMemorylessRenderTargets; 
@property (nonatomic,readonly) BOOL supportsFastMathInfNaNPropagation; 
@property (nonatomic,readonly) BOOL supportsInvariantVertexPosition; 
@property (nonatomic,readonly) BOOL supportsShaderLODAverage; 
@property (nonatomic,readonly) BOOL supportsRelaxedTextureViewRequirements; 
@property (nonatomic,readonly) BOOL supportsSeparateDepthStencil; 
@property (nonatomic,readonly) BOOL supportsGPUStatistics; 
@property (nonatomic,readonly) BOOL supportsASTCTextureCompression; 
@property (nonatomic,readonly) BOOL supportsExtendedYUVFormats; 
@property (nonatomic,readonly) BOOL supportsPublicXR10Formats; 
@property (nonatomic,readonly) BOOL supportsSRGBwrites; 
@property (nonatomic,readonly) BOOL supportsDepthClipMode; 
@property (nonatomic,readonly) BOOL supportsPacked32TextureBufferWrites; 
@property (nonatomic,readonly) BOOL supports3DASTCTextures; 
@property (nonatomic,readonly) BOOL supportsExtendedXR10Formats; 
@property (nonatomic,readonly) BOOL supportsFragmentBufferWrites; 
@property (nonatomic,readonly) BOOL supportsCountingOcclusionQuery; 
@property (nonatomic,readonly) BOOL supportsBaseVertexInstanceDrawing; 
@property (nonatomic,readonly) BOOL supportsIndirectDrawAndDispatch; 
@property (nonatomic,readonly) BOOL supportsTessellation; 
@property (nonatomic,readonly) BOOL supportsReadWriteBufferArguments; 
@property (nonatomic,readonly) BOOL supportsArrayOfTextures; 
@property (nonatomic,readonly) BOOL supportsArrayOfSamplers; 
@property (nonatomic,readonly) BOOL supportsCombinedMSAAStoreAndResolveAction; 
@property (nonatomic,readonly) BOOL supportsMutableTier1ArgumentBuffers; 
@property (nonatomic,readonly) BOOL supportsSamplerCompareFunction; 
@property (nonatomic,readonly) BOOL supportsMSAADepthResolve; 
@property (nonatomic,readonly) BOOL supportsMSAAStencilResolve; 
@property (nonatomic,readonly) BOOL supportsMSAADepthResolveFilter; 
@property (nonatomic,readonly) BOOL supportsGFXIndirectCommandBuffers; 
@property (nonatomic,readonly) BOOL supportsCMPIndirectCommandBuffers; 
@property (nonatomic,readonly) BOOL supportsIndirectStageInRegion; 
@property (nonatomic,readonly) BOOL supportsIndirectTextures; 
@property (nonatomic,readonly) BOOL supportsNorm16BCubicFiltering; 
@property (nonatomic,readonly) BOOL supportsTextureOutOfBoundsReads; 
@property (nonatomic,readonly) BOOL supportsTextureSwizzle; 
@property (nonatomic,readonly) BOOL supportsAlphaYUVFormats; 
@property (nonatomic,readonly) BOOL supportsMemoryOrderAtomics; 
@property (nonatomic,readonly) BOOL supportsQuadGroup; 
@property (nonatomic,readonly) BOOL supportsRenderTextureWrites; 
@property (nonatomic,readonly) BOOL supportsImageBlocks; 
@property (nonatomic,readonly) BOOL supportsTileShaders; 
@property (nonatomic,readonly) BOOL supportsImageBlockSampleCoverageControl; 
@property (nonatomic,readonly) BOOL supportsNativeHardwareFP16; 
@property (nonatomic,readonly) BOOL supportsPostDepthCoverage; 
@property (nonatomic,readonly) BOOL supportsMipLevelsSmallerThanBlockSize; 
@property (nonatomic,readonly) BOOL supportsNonUniformThreadgroupSize; 
@property (nonatomic,readonly) BOOL supportsReadWriteTextureArguments; 
@property (nonatomic,readonly) BOOL supportsReadWriteTextureCubeArguments; 
@property (nonatomic,readonly) BOOL supportsTextureCubeArray; 
@property (nonatomic,readonly) BOOL supportsQuadShufflesAndBroadcast; 
@property (nonatomic,readonly) BOOL supportsConcurrentComputeDispatch; 
@property (nonatomic,readonly) BOOL supportsRenderPassWithoutRenderTarget; 
@property (nonatomic,readonly) BOOL supportsRasterOrderGroups; 
@property (nonatomic,readonly) BOOL supportsLinearTexture2DArray; 
@property (nonatomic,readonly) BOOL supportsNonSquareTileShaders; 
@property (nonatomic,readonly) BOOL supportsSeparateVisibilityAndShadingRate; 
@property (nonatomic,readonly) BOOL supports2DLinearTexArraySPI; 
@property (nonatomic,readonly) BOOL supportsLayeredRendering; 
@property (nonatomic,readonly) BOOL supportsViewportAndScissorArray; 
@property (nonatomic,readonly) BOOL supportsIndirectTessellation; 
@property (nonatomic,readonly) BOOL supportsMSAAStencilResolveFilter; 
@property (nonatomic,readonly) BOOL supportsStencilFeedback; 
@property (nonatomic,readonly) BOOL supportsFP32TessFactors; 
@property (nonatomic,readonly) BOOL supportsSIMDGroup; 
@property (nonatomic,readonly) BOOL supportsShaderMinLODClamp; 
@property (nonatomic,readonly) BOOL supportsSIMDShufflesAndBroadcast; 
@property (nonatomic,readonly) BOOL supportsVariableRateRasterization; 
@property (nonatomic,readonly) BOOL supportsYCBCRFormats; 
@property (nonatomic,readonly) BOOL supportsYCBCRFormatsPQ; 
@property (nonatomic,readonly) BOOL supportsYCBCRFormats12; 
@property (nonatomic,readonly) BOOL supportsYCBCRFormatsXR; 
@property (nonatomic,readonly) BOOL supportsASTCHDRTextureCompression; 
@property (nonatomic,readonly) BOOL supportsSparseTextures; 
@property (nonatomic,readonly) BOOL supportsBlackOrWhiteSamplerBorderColors; 
@property (nonatomic,readonly) BOOL supportsMirrorClampToEdgeSamplerMode; 
@property (nonatomic,readonly) BOOL supportsSIMDReduction; 
@property (nonatomic,readonly) BOOL supportsDepthClipModeClampExtended; 
@property (nonatomic,readonly) BOOL supportsTexture2DMultisampleArray; 
@property (nonatomic,readonly) BOOL supportsForceSeamsOnCubemaps; 
@property (nonatomic,readonly) BOOL supportsFloat16BCubicFiltering; 
@property (setter=setGPUAssertionsEnabled:,getter=areGPUAssertionsEnabled) BOOL gpuAssertionsEnabled; 
@property (assign) BOOL shaderDebugInfoCaching; 
@property (readonly) const MTLTargetDeviceArch* targetDeviceInfo; 
@property (readonly) unsigned long long halfFPConfig; 
@property (readonly) unsigned long long singleFPConfig; 
@property (readonly) unsigned long long doubleFPConfig; 
@property (assign,nonatomic) BOOL metalAssertionsEnabled; 
@property (readonly) unsigned long long featureProfile; 
@property (readonly) const SCD_Struct_CM44* limits; 
@property (readonly) unsigned long long maxColorAttachments; 
@property (readonly) unsigned long long maxVertexAttributes; 
@property (readonly) unsigned long long maxVertexBuffers; 
@property (readonly) unsigned long long maxVertexTextures; 
@property (readonly) unsigned long long maxVertexSamplers; 
@property (readonly) unsigned long long maxVertexInlineDataSize; 
@property (readonly) unsigned long long maxInterpolants; 
@property (readonly) unsigned long long maxFragmentBuffers; 
@property (readonly) unsigned long long maxFragmentTextures; 
@property (readonly) unsigned long long maxFragmentSamplers; 
@property (readonly) unsigned long long maxFragmentInlineDataSize; 
@property (readonly) unsigned long long maxComputeBuffers; 
@property (readonly) unsigned long long maxComputeTextures; 
@property (readonly) unsigned long long maxComputeSamplers; 
@property (readonly) unsigned long long maxComputeInlineDataSize; 
@property (readonly) unsigned long long maxComputeLocalMemorySizes; 
@property (readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup; 
@property (readonly) unsigned long long maxComputeThreadgroupMemory; 
@property (readonly) float maxLineWidth; 
@property (readonly) float maxPointSize; 
@property (readonly) unsigned long long maxVisibilityQueryOffset; 
@property (readonly) unsigned long long minConstantBufferAlignmentBytes; 
@property (readonly) unsigned long long minBufferNoCopyAlignmentBytes; 
@property (readonly) unsigned long long maxTextureWidth1D; 
@property (readonly) unsigned long long maxTextureWidth2D; 
@property (readonly) unsigned long long maxTextureHeight2D; 
@property (readonly) unsigned long long maxTextureWidth3D; 
@property (readonly) unsigned long long maxTextureHeight3D; 
@property (readonly) unsigned long long maxTextureDepth3D; 
@property (readonly) unsigned long long maxTextureDimensionCube; 
@property (readonly) unsigned long long maxTextureLayers; 
@property (readonly) unsigned long long linearTextureAlignmentBytes; 
@property (readonly) unsigned long long iosurfaceTextureAlignmentBytes; 
@property (readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes; 
@property (readonly) unsigned long long deviceLinearTextureAlignmentBytes; 
@property (readonly) unsigned long long deviceLinearReadOnlyTextureAlignmentBytes; 
@property (readonly) unsigned long long maxFunctionConstantIndices; 
@property (readonly) unsigned long long maxComputeThreadgroupMemoryAlignmentBytes; 
@property (readonly) unsigned long long maxInterpolatedComponents; 
@property (readonly) unsigned long long maxTessellationFactor; 
@property (readonly) unsigned long long maxIndirectBuffers; 
@property (readonly) unsigned long long maxIndirectTextures; 
@property (readonly) unsigned long long maxIndirectSamplers; 
@property (readonly) unsigned long long maxIndirectSamplersPerDevice; 
@property (readonly) unsigned long long maxViewportCount; 
@property (readonly) unsigned long long maxCustomSamplePositions; 
@property (readonly) unsigned long long maxVertexAmplificationFactor; 
@property (readonly) unsigned long long maxVertexAmplificationCount; 
@property (readonly) unsigned long long maxTextureBufferWidth; 
@property (readonly) unsigned long long maxComputeAttributes; 
@property (readonly) unsigned long long maxFramebufferStorageBits; 
@property (readonly) unsigned long long linearTextureArrayAlignmentBytes; 
@property (readonly) unsigned long long linearTextureArrayAlignmentSlice; 
@property (readonly) unsigned long long maxTileBuffers; 
@property (readonly) unsigned long long maxTileTextures; 
@property (readonly) unsigned long long maxTileSamplers; 
@property (readonly) unsigned long long maxTileInlineDataSize; 
@property (readonly) unsigned long long minTilePixels; 
@property (readonly) unsigned acceleratorPort; 
@property (readonly) BOOL supportPriorityBand; 
@property (readonly) unsigned long long sharedMemorySize; 
@property (readonly) unsigned long long dedicatedMemorySize; 
@property (readonly) IndirectArgumentBufferCapabilities indirectArgumentBufferCapabilities; 
@property (getter=isQuadDataSharingSupported,readonly) BOOL quadDataSharingSupported; 
@property (readonly) unsigned long long sparseTexturesSupport; 
@property (assign,getter=isResourceIndirectionEnabled,nonatomic) BOOL resourceIndirectionEnabled; 
@property (getter=isUtilityBufferRequired,readonly) BOOL utilityBufferRequired; 
@property (nonatomic,retain) NSArray * utilityBuffers; 
@property (assign) unsigned long long currentUtilityBufferIndex; 
@property (readonly) unsigned long long maxRasterizationRateLayerCount; 
@property (getter=isPlacementHeapSupported,readonly) BOOL placementHeapSupported; 
-(id)init;
-(void)forwardInvocation:(id)arg1 ;
-(id)newTextureWithDescriptor:(id)arg1 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2 ;
-(id)newCommandQueue;
-(id)newTextureWithDescriptor:(id)arg1 iosurface:(IOSurfaceRef)arg2 plane:(unsigned long long)arg3 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_CM51*)arg2 error:(id*)arg3 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
@end

