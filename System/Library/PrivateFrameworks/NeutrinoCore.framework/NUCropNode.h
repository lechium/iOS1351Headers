/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUTransformNode.h>

@class NUImageTransformAffine;

@interface NUCropNode : NUTransformNode {

	BOOL _resetCleanAperture;
	NUImageTransformAffine* _transform;
	SCD_Struct_NU8 _cropRect;

}

@property (retain) NUImageTransformAffine * transform;              //@synthesize transform=_transform - In the implementation block
@property (assign) SCD_Struct_NU8 cropRect;                         //@synthesize cropRect=_cropRect - In the implementation block
@property (readonly) BOOL resetCleanAperture;                       //@synthesize resetCleanAperture=_resetCleanAperture - In the implementation block
-(NUImageTransformAffine *)transform;
-(id)debugQuickLookObject;
-(void)setTransform:(NUImageTransformAffine *)arg1 ;
-(SCD_Struct_NU8)cropRect;
-(void)setCropRect:(SCD_Struct_NU8)arg1 ;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)_evaluateVideoProperties:(out id*)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)_transformWithError:(out id*)arg1 ;
-(BOOL)canPropagateOriginalAuxiliaryData;
-(id)initWithRect:(SCD_Struct_NU8)arg1 input:(id)arg2 resetCleanAperture:(BOOL)arg3 settings:(id)arg4 ;
-(id)initWithRect:(SCD_Struct_NU8)arg1 input:(id)arg2 ;
-(id)transformAffine;
-(CGPoint)scaleCropOriginForOriginalVideoSize:(CGSize)arg1 originalCleanAperture:(CGRect)arg2 renderScale:(double)arg3 inputExtent:(SCD_Struct_NU8)arg4 ;
-(BOOL)scaledCropOrigin:(CGPoint*)arg1 error:(out id*)arg2 ;
-(BOOL)resetCleanAperture;
@end

