/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <Metal/Metal-Structs.h>
@class MTLCompiler, NSObject, MTLDeviceFeatureQueries, NSString, NSArray;

@interface _MTLDevice : NSObject {

	SCD_Struct_MT28 _limits;
	void* _supportedGPUFamilies;
	MTLCompiler* _compiler;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _pipelineSerializationQueue;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	BOOL _hasInitSerializationPaths;
	MTLDeviceFeatureQueries* _featureQueries;
	unsigned long long _globalTraceObjectID;
	int _commandQueueCount;
	MTLLibraryBuilder* _libraryBuilder;
	MTLPipelineLibraryBuilder* _pipelineLibraryBuilder;
	NSString* _pipelineDescriptorsOutputFile;
	NSString* _librariesOutputDirectory;
	BOOL _collectAllLibraries;
	BOOL _gpuAssertionsEnabled;
	BOOL _resourceIndirectionEnabled;
	BOOL _utilityBufferRequired;
	NSArray* _utilityBuffers;
	unsigned long long _currentUtilityBufferIndex;

}

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
@property (readonly) NSString * name; 
@property (readonly) const SCD_Struct_MT28* limits; 
@property (readonly) unsigned long long globalTraceObjectID;                                                       //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
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
@property (readonly) unsigned long long maxBufferLength; 
@property (readonly) NSObject*<OS_dispatch_queue> serialQueue;                                                     //@synthesize serialQueue=_serialQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> concurrentQueue;                                                 //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (readonly) unsigned acceleratorPort; 
@property (readonly) MTLCompiler * compiler;                                                                       //@synthesize compiler=_compiler - In the implementation block
@property (readonly) IndirectArgumentBufferCapabilities indirectArgumentBufferCapabilities; 
@property (readonly) unsigned long long readWriteTextureSupport; 
@property (readonly) unsigned long long argumentBuffersSupport; 
@property (getter=areRasterOrderGroupsSupported,readonly) BOOL rasterOrderGroupsSupported; 
@property (readonly) unsigned long long sparseTexturesSupport; 
@property (readonly) unsigned long long sparseTileSizeInBytes; 
@property (readonly) unsigned long long maxArgumentBufferSamplerCount; 
@property (setter=setGPUAssertionsEnabled:,getter=areGPUAssertionsEnabled) BOOL gpuAssertionsEnabled; 
@property (getter=isResourceIndirectionEnabled) BOOL resourceIndirectionEnabled; 
@property (getter=isUtilityBufferRequired) BOOL utilityBufferRequired; 
@property (nonatomic,readonly) NSArray * utilityBuffers; 
@property (assign) unsigned long long currentUtilityBufferIndex; 
@property (readonly) unsigned long long maxRasterizationRateLayerCount; 
@property (getter=isPlacementHeapSupported,readonly) BOOL placementHeapSupported; 
+(BOOL)featureProfile:(unsigned long long)arg1 supportsFeatureSet:(unsigned long long)arg2 ;
+(BOOL)useNewPrimitiveRestartBehavior;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)familyName;
-(id)vendorName;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2 ;
-(id)newCommandQueue;
-(id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(BOOL)supportsFeatureSet:(unsigned long long)arg1 ;
-(unsigned long long)maxTextureWidth2D;
-(unsigned long long)maxTextureHeight2D;
-(unsigned long long)maxComputeTextures;
-(unsigned long long)maxComputeSamplers;
-(unsigned long long)iosurfaceReadOnlyTextureAlignmentBytes;
-(unsigned long long)iosurfaceTextureAlignmentBytes;
-(id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT29*)arg2 error:(id*)arg3 ;
-(unsigned long long)readWriteTextureSupport;
-(id)newLibraryWithURL:(id)arg1 error:(id*)arg2 ;
-(id)newLibraryWithData:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1 ;
-(id)newDefaultLibrary;
-(id)newLibraryWithFile:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(id)productName;
-(unsigned long long)deviceLinearReadOnlyTextureAlignmentBytes;
-(unsigned long long)linearTextureAlignmentBytes;
-(unsigned long long)minConstantBufferAlignmentBytes;
-(id)newPipelineLibraryWithFilePath:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)maxFragmentTextures;
-(unsigned long long)maxFragmentSamplers;
-(unsigned long long)maxColorAttachments;
-(id)newArgumentEncoderWithArguments:(id)arg1 ;
-(unsigned long long)globalTraceObjectID;
-(float)maxPointSize;
-(id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT29*)arg2 error:(id*)arg3 ;
-(id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1 ;
-(id)newSharedTextureWithDescriptor:(id)arg1 ;
-(id)newSharedTextureWithHandle:(id)arg1 ;
-(void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)supportsFamily:(long long)arg1 ;
-(BOOL)supportsTextureSampleCount:(unsigned long long)arg1 ;
-(void)getDefaultSamplePositions:(SCD_Struct_MT15*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)supportsRasterizationRateMapWithLayerCount:(unsigned long long)arg1 ;
-(id)newRasterizationRateMapWithDescriptor:(id)arg1 ;
-(id)newEvent;
-(id)newSharedEvent;
-(id)newSharedEventWithHandle:(id)arg1 ;
-(unsigned long long)argumentBuffersSupport;
-(BOOL)areRasterOrderGroupsSupported;
-(unsigned long long)maxArgumentBufferSamplerCount;
-(BOOL)areProgrammableSamplePositionsSupported;
-(unsigned long long)sparseTileSizeInBytes;
-(void)convertSparsePixelRegions:(const SCD_Struct_MT30*)arg1 toTileRegions:(SCD_Struct_MT30*)arg2 withTileSize:(SCD_Struct_MT11)arg3 alignmentMode:(unsigned long long)arg4 numRegions:(unsigned long long)arg5 ;
-(void)convertSparseTileRegions:(const SCD_Struct_MT30*)arg1 toPixelRegions:(SCD_Struct_MT30*)arg2 withTileSize:(SCD_Struct_MT11)arg3 numRegions:(unsigned long long)arg4 ;
-(void)allowLibrariesFromOtherPlatforms;
-(void)compilerPropagatesThreadPriority:(BOOL)arg1 ;
-(void)_setDeviceWrapper:(id)arg1 ;
-(id)_deviceWrapper;
-(BOOL)deviceSupportsFeatureSet:(unsigned long long)arg1 ;
-(BOOL)deviceOrFeatureProfileSupportsFeatureSet:(unsigned long long)arg1 ;
-(unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1 ;
-(void)unloadShaderCaches;
-(SCD_Struct_MT31)libraryCacheStats;
-(SCD_Struct_MT31)pipelineCacheStats;
-(BOOL)copyShaderCacheToPath:(id)arg1 ;
-(id)newCommandQueueWithDescriptor:(id)arg1 ;
-(id)newArgumentEncoderWithLayout:(id)arg1 ;
-(id)newSharedEventWithMachPort:(unsigned)arg1 ;
-(unsigned long long)createNewUtilityBuffer;
-(id)utilityBufferForComputeCommandEncoder:(id)arg1 ;
-(id)utilityBufferForRenderCommandEncoder:(id)arg1 ;
-(BOOL)useDeviceResourceTableForType:(unsigned long long)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 atResourceIndex:(unsigned long long)arg3 ;
-(id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 atResourceIndex:(unsigned long long)arg4 ;
-(id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 atResourceIndex:(unsigned long long)arg4 deallocator:(/*^block*/id)arg5 ;
-(BOOL)requiresIndirectionForAllResourceTypes;
-(void)addBufferToGlobalResourceTable:(id)arg1 ;
-(void)addTextureToGlobalResourceTable:(id)arg1 ;
-(void)addSamplerStateToGlobalResourceTable:(id)arg1 ;
-(void)addComputePipelineStateToGlobalResourceTable:(id)arg1 ;
-(void)addRenderPipelineStateToGlobalResourceTable:(id)arg1 ;
-(void)addIndirectCommandBufferToGlobalResourceTable:(id)arg1 ;
-(void)removeResourceFromGlobalResourceTable:(unsigned long long)arg1 resourceType:(unsigned long long)arg2 ;
-(unsigned long long)indirectBufferAddressForResourceIndex:(unsigned long long)arg1 offset:(unsigned long long)arg2 ;
-(unsigned long long)resourceIndexFromIndirectBufferAddress:(unsigned long long)arg1 ;
-(unsigned long long)offsetFromIndirectBufferAddress:(unsigned long long)arg1 ;
-(BOOL)supportsQuadReduction;
-(BOOL)supportsBufferlessClientStorageTexture;
-(BOOL)supportsArgumentBuffersTier2;
-(BOOL)supportsReadWriteTextureArgumentsTier2;
-(BOOL)supportsProgrammableSamplePositions;
-(BOOL)supportsBCTextureCompression;
-(BOOL)supports3DBCTextures;
-(BOOL)supportsLargeFramebufferConfigs;
-(BOOL)supportsCustomBorderColor;
-(BOOL)supportsSamplerAddressModeClampToHalfBorder;
-(BOOL)supports32bpcMSAATextures;
-(BOOL)supportsVertexAmplification;
-(BOOL)supportsPlacementHeaps;
-(BOOL)supportsOpenCLTextureWriteSwizzles;
-(BOOL)supportsLimitedYUVFormats;
-(BOOL)supportsNonPrivateDepthStencilTextures;
-(BOOL)supportsNonPrivateMSAATextures;
-(BOOL)supportsLinearTextureFromSharedBuffer;
-(BOOL)supportsPipelineLibraries;
-(BOOL)supportsFragmentOnlyEncoders;
-(BOOL)supportsBufferWithIOSurface;
-(BOOL)supportsProgrammableBlending;
-(BOOL)supportsRenderToLinearTextures;
-(BOOL)supportsMemorylessRenderTargets;
-(BOOL)supportsFastMathInfNaNPropagation;
-(BOOL)supportsInvariantVertexPosition;
-(BOOL)supportsShaderLODAverage;
-(BOOL)supportsRelaxedTextureViewRequirements;
-(BOOL)supportsSeparateDepthStencil;
-(BOOL)supportsGPUStatistics;
-(BOOL)supportsASTCTextureCompression;
-(BOOL)supportsExtendedYUVFormats;
-(BOOL)supportsPublicXR10Formats;
-(BOOL)supportsSRGBwrites;
-(BOOL)supportsDepthClipMode;
-(BOOL)supportsPacked32TextureBufferWrites;
-(BOOL)supports3DASTCTextures;
-(BOOL)supportsExtendedXR10Formats;
-(BOOL)supportsFragmentBufferWrites;
-(BOOL)supportsCountingOcclusionQuery;
-(BOOL)supportsBaseVertexInstanceDrawing;
-(BOOL)supportsIndirectDrawAndDispatch;
-(BOOL)supportsTessellation;
-(BOOL)supportsReadWriteBufferArguments;
-(BOOL)supportsArrayOfTextures;
-(BOOL)supportsArrayOfSamplers;
-(BOOL)supportsCombinedMSAAStoreAndResolveAction;
-(BOOL)supportsMutableTier1ArgumentBuffers;
-(BOOL)supportsSamplerCompareFunction;
-(BOOL)supportsMSAADepthResolve;
-(BOOL)supportsMSAAStencilResolve;
-(BOOL)supportsMSAADepthResolveFilter;
-(BOOL)supportsGFXIndirectCommandBuffers;
-(BOOL)supportsCMPIndirectCommandBuffers;
-(BOOL)supportsIndirectStageInRegion;
-(BOOL)supportsIndirectTextures;
-(BOOL)supportsNorm16BCubicFiltering;
-(BOOL)supportsTextureOutOfBoundsReads;
-(BOOL)supportsTextureSwizzle;
-(BOOL)supportsAlphaYUVFormats;
-(BOOL)supportsMemoryOrderAtomics;
-(BOOL)supportsQuadGroup;
-(BOOL)supportsRenderTextureWrites;
-(BOOL)supportsImageBlocks;
-(BOOL)supportsTileShaders;
-(BOOL)supportsImageBlockSampleCoverageControl;
-(BOOL)supportsNativeHardwareFP16;
-(BOOL)supportsPostDepthCoverage;
-(BOOL)supportsMipLevelsSmallerThanBlockSize;
-(BOOL)supportsNonUniformThreadgroupSize;
-(BOOL)supportsReadWriteTextureArguments;
-(BOOL)supportsReadWriteTextureCubeArguments;
-(BOOL)supportsTextureCubeArray;
-(BOOL)supportsQuadShufflesAndBroadcast;
-(BOOL)supportsConcurrentComputeDispatch;
-(BOOL)supportsRenderPassWithoutRenderTarget;
-(BOOL)supportsRasterOrderGroups;
-(BOOL)supportsLinearTexture2DArray;
-(BOOL)supportsNonSquareTileShaders;
-(BOOL)supportsSeparateVisibilityAndShadingRate;
-(BOOL)supports2DLinearTexArraySPI;
-(BOOL)supportsLayeredRendering;
-(BOOL)supportsViewportAndScissorArray;
-(BOOL)supportsIndirectTessellation;
-(BOOL)supportsMSAAStencilResolveFilter;
-(BOOL)supportsStencilFeedback;
-(BOOL)supportsFP32TessFactors;
-(BOOL)supportsSIMDGroup;
-(BOOL)supportsShaderMinLODClamp;
-(BOOL)supportsSIMDShufflesAndBroadcast;
-(BOOL)supportsVariableRateRasterization;
-(BOOL)supportsYCBCRFormats;
-(BOOL)supportsYCBCRFormatsPQ;
-(BOOL)supportsYCBCRFormats12;
-(BOOL)supportsYCBCRFormatsXR;
-(BOOL)supportsASTCHDRTextureCompression;
-(BOOL)supportsSparseTextures;
-(BOOL)supportsBlackOrWhiteSamplerBorderColors;
-(BOOL)supportsMirrorClampToEdgeSamplerMode;
-(BOOL)supportsSIMDReduction;
-(BOOL)supportsDepthClipModeClampExtended;
-(BOOL)supportsTexture2DMultisampleArray;
-(BOOL)supportsForceSeamsOnCubemaps;
-(BOOL)supportsFloat16BCubicFiltering;
-(BOOL)areGPUAssertionsEnabled;
-(void)setGPUAssertionsEnabled:(BOOL)arg1 ;
-(const SCD_Struct_MT28*)limits;
-(unsigned long long)maxVertexAttributes;
-(unsigned long long)maxVertexBuffers;
-(unsigned long long)maxVertexTextures;
-(unsigned long long)maxVertexSamplers;
-(unsigned long long)maxVertexInlineDataSize;
-(unsigned long long)maxInterpolants;
-(unsigned long long)maxFragmentBuffers;
-(unsigned long long)maxFragmentInlineDataSize;
-(unsigned long long)maxComputeBuffers;
-(unsigned long long)maxComputeInlineDataSize;
-(unsigned long long)maxComputeLocalMemorySizes;
-(unsigned long long)maxTotalComputeThreadsPerThreadgroup;
-(unsigned long long)maxComputeThreadgroupMemory;
-(float)maxLineWidth;
-(unsigned long long)maxVisibilityQueryOffset;
-(unsigned long long)minBufferNoCopyAlignmentBytes;
-(unsigned long long)maxTextureWidth1D;
-(unsigned long long)maxTextureWidth3D;
-(unsigned long long)maxTextureHeight3D;
-(unsigned long long)maxTextureDepth3D;
-(unsigned long long)maxTextureDimensionCube;
-(unsigned long long)maxTextureLayers;
-(unsigned long long)deviceLinearTextureAlignmentBytes;
-(unsigned long long)maxFunctionConstantIndices;
-(unsigned long long)maxComputeThreadgroupMemoryAlignmentBytes;
-(unsigned long long)maxInterpolatedComponents;
-(unsigned long long)maxTessellationFactor;
-(unsigned long long)maxIndirectBuffers;
-(unsigned long long)maxIndirectTextures;
-(unsigned long long)maxIndirectSamplers;
-(unsigned long long)maxIndirectSamplersPerDevice;
-(unsigned long long)maxViewportCount;
-(unsigned long long)maxCustomSamplePositions;
-(unsigned long long)maxVertexAmplificationFactor;
-(unsigned long long)maxVertexAmplificationCount;
-(unsigned long long)maxTextureBufferWidth;
-(unsigned long long)maxComputeAttributes;
-(unsigned long long)maxFramebufferStorageBits;
-(unsigned long long)linearTextureArrayAlignmentBytes;
-(unsigned long long)linearTextureArrayAlignmentSlice;
-(unsigned long long)maxTileBuffers;
-(unsigned long long)maxTileTextures;
-(unsigned long long)maxTileSamplers;
-(unsigned long long)maxTileInlineDataSize;
-(unsigned long long)minTilePixels;
-(unsigned)acceleratorPort;
-(IndirectArgumentBufferCapabilities)indirectArgumentBufferCapabilities;
-(BOOL)isResourceIndirectionEnabled;
-(void)setResourceIndirectionEnabled:(BOOL)arg1 ;
-(BOOL)isUtilityBufferRequired;
-(NSArray *)utilityBuffers;
-(void)setUtilityBuffers:(NSArray *)arg1 ;
-(unsigned long long)currentUtilityBufferIndex;
-(void)setCurrentUtilityBufferIndex:(unsigned long long)arg1 ;
-(unsigned long long)maxRasterizationRateLayerCount;
-(BOOL)isPlacementHeapSupported;
-(void)reserveResourceIndicesForResourceType:(unsigned long long)arg1 indices:(unsigned long long*)arg2 indexCount:(unsigned long long)arg3 ;
-(id)newFunctionWithGLIR:(void*)arg1 functionType:(unsigned long long)arg2 ;
-(id)newFunctionWithGLIR:(void*)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3 ;
-(void*)getShaderCacheKeys;
-(id)newLibraryWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT29*)arg2 error:(id*)arg3 ;
-(void)startCollectingPipelineDescriptors;
-(void)startCollectingPipelineDescriptorsUsingPrefixForNames:(id)arg1 ;
-(id)endCollectingPipelineDescriptors;
-(id)serializeRenderPipelineDescriptor:(id)arg1 ;
-(id)serializeComputePipelineDescriptor:(id)arg1 ;
-(id)newRenderPipelineDescriptorWithSerializedData:(id)arg1 deserializationContext:(id)arg2 ;
-(id)newComputePipelineDescriptorWithSerializedData:(id)arg1 deserializationContext:(id)arg2 ;
-(id)serializeStructType:(id)arg1 ;
-(id)serializeStructType:(id)arg1 version:(unsigned)arg2 ;
-(BOOL)isQuadDataSharingSupported;
-(unsigned long long)sparseTexturesSupport;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)registerTileRenderPipelineDescriptor:(id)arg1 ;
-(void)initSerializationPaths;
-(void)initGPUFamilySupport;
-(Class)featureQueryClass;
-(MTLCompiler *)compiler;
-(BOOL)isCollectingLibraries;
-(BOOL)isCollectingPipelines;
-(void)dumpPipelineDescriptorsIfRequested;
-(void*)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 fragmentKeySize:(unsigned long long*)arg2 previousStateVariant:(id)arg3 ;
-(void*)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 vertexKeySize:(unsigned long long*)arg2 nextStageVariant:(id)arg3 ;
-(void*)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 keySize:(unsigned long long*)arg2 ;
-(id)computeVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2 ;
-(id)fragmentVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2 ;
-(id)vertexVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2 ;
-(id)newRenderPipelineWithDescriptor:(id)arg1 vertexVariant:(id)arg2 fragmentVariant:(id)arg3 ;
-(id)newComputePipelineWithDescriptor:(id)arg1 variant:(id)arg2 ;
-(void)_purgeDevice;
-(id)newArgumentEncoderWithArguments:(id)arg1 structType:(id*)arg2 ;
-(void)setUtilityBufferRequired:(BOOL)arg1 ;
-(id)newRasterizationRateMapWithScreenSize:(SCD_Struct_MT11)arg1 layerCount:(unsigned long long)arg2 layers:(const id*)arg3 ;
-(void)initFeatureQueries;
-(void)releaseCacheEntry:(MTLLibraryContainer*)arg1 ;
-(void)registerRenderPipelineDescriptor:(id)arg1 ;
-(void)registerComputePipelineDescriptor:(id)arg1 ;
-(void)startCollectingPipelineDescriptorsFromLibrary:(id)arg1 filePath:(id)arg2 ;
-(void)initLimits;
-(void)registerCompiler:(id)arg1 ;
-(void*)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 previousStateVariant:(id)arg3 fragmentKeySize:(unsigned long long*)arg4 ;
-(void*)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 nextStageVariant:(id)arg3 vertexKeySize:(unsigned long long*)arg4 ;
-(void)freeFragmentFunctionKey:(void*)arg1 fragmentKeySize:(unsigned long long)arg2 ;
-(void)freeVertexFunctionKey:(void*)arg1 vertexKeySize:(unsigned long long)arg2 ;
-(void*)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 keySize:(unsigned long long*)arg3 ;
-(void)freeComputeFunctionKey:(void*)arg1 keySize:(unsigned long long)arg2 ;
-(id)newComputeVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2 ;
-(id)newFragmentVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2 ;
-(id)newVertexVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2 ;
-(id)newRenderPipelineWithDescriptor:(id)arg1 vertexVariant:(id)arg2 fragmentVariant:(id)arg3 errorMessage:(id*)arg4 ;
-(id)newComputePipelineWithDescriptor:(id)arg1 variant:(id)arg2 errorMessage:(id*)arg3 ;
-(SCD_Struct_MT32)pipelineFlagsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2 ;
-(SCD_Struct_MT33)pipelineFlagsWithComputeVariant:(id)arg1 ;
-(id)pipelinePerformanceStatisticsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2 ;
-(id)pipelinePerformanceStatisticsWithComputeVariant:(id)arg1 ;
-(id)pipelinePerformanceStatisticsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2 vertexCompileTimeOutput:(id)arg3 fragmentCompileTimeOutput:(id)arg4 ;
-(id)pipelinePerformanceStatisticsWithComputeVariant:(id)arg1 compileTimeOutput:(id)arg2 ;
-(void)getConstantSamplersBitmasks:(unsigned long long*)arg1 uniqueIdentifiers:(unsigned long long*)arg2 constantSamplerCount:(unsigned long long*)arg3 forVertexVariant:(id)arg4 fragmentVariant:(id)arg5 ;
-(void)getConstantSamplersBitmasks:(unsigned long long*)arg1 uniqueIdentifiers:(unsigned long long*)arg2 constantSamplerCount:(unsigned long long*)arg3 forComputeVariant:(id)arg4 ;
-(void)_incrementCommandQueueCount;
-(void)_decrementCommandQueueCount;
@end

