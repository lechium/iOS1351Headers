/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NUImageProperties, NUVideoProperties;
@class NSDictionary, CIImage, NSMutableDictionary, AVComposition, AVVideoComposition, AVAudioMix, NUImageGeometry, NUGeometrySpaceMap, NSString;

@interface NURenderNode : NSObject {

	BOOL _cached;
	long long _evaluatedForMode;
	unsigned long long _hashValue;
	BOOL _isGeometryNode;
	NSDictionary* _inputs;
	NSDictionary* _settings;
	NSDictionary* _xforms;
	CIImage* _cached_outputImage;
	NSMutableDictionary* _cached_auxiliaryImages;
	AVComposition* _cached_outputVideo;
	AVVideoComposition* _cached_outputVideoComposition;
	AVAudioMix* _cached_outputAudioMix;
	NUImageGeometry* _cached_outputImageGeometry;
	id<NUImageProperties> _cached_imageProperties;
	id<NUVideoProperties> _cached_videoProperties;
	NUGeometrySpaceMap* _cached_geometrySpaceMap;
	NSString* _dominantInputKey;
	NSString* _spaceMapKey;

}

@property (retain) CIImage * cached_outputImage;                                    //@synthesize cached_outputImage=_cached_outputImage - In the implementation block
@property (retain) NSMutableDictionary * cached_auxiliaryImages;                    //@synthesize cached_auxiliaryImages=_cached_auxiliaryImages - In the implementation block
@property (retain) AVComposition * cached_outputVideo;                              //@synthesize cached_outputVideo=_cached_outputVideo - In the implementation block
@property (retain) AVVideoComposition * cached_outputVideoComposition;              //@synthesize cached_outputVideoComposition=_cached_outputVideoComposition - In the implementation block
@property (retain) AVAudioMix * cached_outputAudioMix;                              //@synthesize cached_outputAudioMix=_cached_outputAudioMix - In the implementation block
@property (retain) NUImageGeometry * cached_outputImageGeometry;                    //@synthesize cached_outputImageGeometry=_cached_outputImageGeometry - In the implementation block
@property (retain) id<NUImageProperties> cached_imageProperties;                    //@synthesize cached_imageProperties=_cached_imageProperties - In the implementation block
@property (retain) id<NUVideoProperties> cached_videoProperties;                    //@synthesize cached_videoProperties=_cached_videoProperties - In the implementation block
@property (retain) NUGeometrySpaceMap * cached_geometrySpaceMap;                    //@synthesize cached_geometrySpaceMap=_cached_geometrySpaceMap - In the implementation block
@property (nonatomic,readonly) BOOL isCached;                                       //@synthesize cached=_cached - In the implementation block
@property (assign,nonatomic) long long evaluatedForMode;                            //@synthesize evaluatedForMode=_evaluatedForMode - In the implementation block
@property (nonatomic,readonly) NSString * dominantInputKey;                         //@synthesize dominantInputKey=_dominantInputKey - In the implementation block
@property (nonatomic,readonly) NSString * spaceMapKey;                              //@synthesize spaceMapKey=_spaceMapKey - In the implementation block
@property (readonly) NSDictionary * inputs;                                         //@synthesize inputs=_inputs - In the implementation block
@property (readonly) NSDictionary * settings;                                       //@synthesize settings=_settings - In the implementation block
@property (readonly) NSDictionary * xforms;                                         //@synthesize xforms=_xforms - In the implementation block
@property (readonly) BOOL isGeometryNode;                                           //@synthesize isGeometryNode=_isGeometryNode - In the implementation block
@property (readonly) BOOL isPlaceholderNode; 
+(id)nodeFromCache:(id)arg1 cache:(id)arg2 ;
+(id)nodeFromCache:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(unsigned long long)_hash;
-(id)debugQuickLookObject;
-(id)outputImage:(out id*)arg1 ;
-(NSDictionary *)settings;
-(NSDictionary *)inputs;
-(BOOL)isCached;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(void)nu_updateDigest:(id)arg1 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(id)_evaluateVideo:(out id*)arg1 ;
-(BOOL)requiresVideoComposition;
-(BOOL)requiresAudioMix;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)_evaluateVideoProperties:(out id*)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(BOOL)isPlaceholderNode;
-(id)_evaluateVideoComposition:(out id*)arg1 ;
-(id)_evaluateAudioMix:(out id*)arg1 ;
-(BOOL)isEqualToRenderNode:(id)arg1 ;
-(BOOL)isGeometryNode;
-(id)_evaluateGeometrySpaceMap:(out id*)arg1 ;
-(id)_evaluateImageProperties:(out id*)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(id)_evaluateAuxiliaryImageForType:(long long)arg1 error:(out id*)arg2 ;
-(BOOL)canPropagateOriginalAuxiliaryData;
-(id)descriptionSubClassHook;
-(id)evaluateRenderDependenciesWithRequest:(id)arg1 error:(out id*)arg2 ;
-(id)_generateSpaceMapKey;
-(id)inputForKey:(id)arg1 ;
-(BOOL)hasCyclicalDependencyForInput:(id)arg1 ;
-(void)resetInput:(id)arg1 forKey:(id)arg2 ;
-(id)nodeByReplayingAgainstCache:(id)arg1 error:(out id*)arg2 ;
-(id)evaluateSettings:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(id)placeholderNodeWithCachedInputs:(id)arg1 ;
-(void)setEvaluatedForMode:(long long)arg1 ;
-(id)outputVideo:(out id*)arg1 ;
-(id)outputVideoComposition:(out id*)arg1 ;
-(id)outputAudioMix:(out id*)arg1 ;
-(id)originalAuxiliaryImageForType:(long long)arg1 error:(out id*)arg2 ;
-(id)outputGeometrySpaceMap:(out id*)arg1 ;
-(id)uniqueInputNode;
-(id)geometryNode;
-(id)outputImageGeometry:(out id*)arg1 ;
-(id)imageProperties:(out id*)arg1 ;
-(id)videoProperties:(out id*)arg1 ;
-(id)_dictionaryToSingleLineString:(id)arg1 ;
-(void)_appendInputsWithOffset:(long long)arg1 to:(id)arg2 ;
-(id)_descriptionWithOffset:(long long)arg1 showInputs:(BOOL)arg2 ;
-(BOOL)isEqualToSettingsAndInputs:(id)arg1 ;
-(unsigned long long)settingsAndInputsHash;
-(long long)evaluatedForMode;
-(NSDictionary *)xforms;
-(CIImage *)cached_outputImage;
-(void)setCached_outputImage:(CIImage *)arg1 ;
-(NSMutableDictionary *)cached_auxiliaryImages;
-(void)setCached_auxiliaryImages:(NSMutableDictionary *)arg1 ;
-(AVComposition *)cached_outputVideo;
-(void)setCached_outputVideo:(AVComposition *)arg1 ;
-(AVVideoComposition *)cached_outputVideoComposition;
-(void)setCached_outputVideoComposition:(AVVideoComposition *)arg1 ;
-(AVAudioMix *)cached_outputAudioMix;
-(void)setCached_outputAudioMix:(AVAudioMix *)arg1 ;
-(NUImageGeometry *)cached_outputImageGeometry;
-(void)setCached_outputImageGeometry:(NUImageGeometry *)arg1 ;
-(id<NUImageProperties>)cached_imageProperties;
-(void)setCached_imageProperties:(id<NUImageProperties>)arg1 ;
-(id<NUVideoProperties>)cached_videoProperties;
-(void)setCached_videoProperties:(id<NUVideoProperties>)arg1 ;
-(NUGeometrySpaceMap *)cached_geometrySpaceMap;
-(void)setCached_geometrySpaceMap:(NUGeometrySpaceMap *)arg1 ;
-(NSString *)dominantInputKey;
-(NSString *)spaceMapKey;
@end

