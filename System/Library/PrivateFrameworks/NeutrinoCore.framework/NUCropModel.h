/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NUCropModel : NSObject <NSCopying> {

	 _imageCenter;
	CGRect _cropRect;
	double _pitchRadians;
	double _yawRadians;
	double _rollRadians;
	double _fovRadians;
	BOOL _isAutoCrop;
	unsigned long long _hitVertexID;
	SCD_Struct_NU7 _aspectRatio;
	CGRect _masterImageRect;
	CGRect _stitchedImageRect;

}

@property (nonatomic,readonly) BOOL hasOvercapture; 
@property (assign,nonatomic) double pitchRadians; 
@property (assign,nonatomic) double yawRadians; 
@property (assign,nonatomic) double rollRadians; 
@property (nonatomic,readonly) CGSize masterImageSize; 
@property (nonatomic,readonly) CGRect masterImageRect;                //@synthesize masterImageRect=_masterImageRect - In the implementation block
@property (nonatomic,readonly) double fovRadians;                     //@synthesize fovRadians=_fovRadians - In the implementation block
@property (nonatomic,readonly) CGSize stitchedImageSize; 
@property (nonatomic,readonly) CGRect stitchedImageRect;              //@synthesize stitchedImageRect=_stitchedImageRect - In the implementation block
@property (assign) CGRect cropRect; 
@property (assign,nonatomic) SCD_Struct_NU7 aspectRatio;              //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (readonly) BOOL hasCrop; 
@property (readonly) BOOL cropNeedsOvercapture; 
@property (readonly) unsigned long long hitVertexID;                  //@synthesize hitVertexID=_hitVertexID - In the implementation block
@property (assign,nonatomic) BOOL isAutoCrop;                         //@synthesize isAutoCrop=_isAutoCrop - In the implementation block
@property (nonatomic,readonly) double pitchDegreeUI; 
@property (nonatomic,readonly) double yawDegreeUI; 
@property (nonatomic,readonly) double rollDegreeUI; 
+(SCD_Struct_NU27)_imageTransformFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 imageRect:(CGRect)arg4 ;
+(SCD_Struct_NU7)freeFormAspectRatio;
+(double)defaultFocalLength;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(SCD_Struct_NU7)aspectRatio;
-(void)setAspectRatio:(SCD_Struct_NU7)arg1 ;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(BOOL)hasCrop;
-(BOOL)_hasDefaultValues;
-(double)yawRadians;
-(double)rollRadians;
-(double)pitchRadians;
-(CGRect)stitchedImageRect;
-(CGSize)masterImageSize;
-(BOOL)cropNeedsOvercapture;
-(CGRect)integralCropRect:(CGRect)arg1 ;
-(void)setYawRadians:(double)arg1 ;
-(void)setPitchRadians:(double)arg1 ;
-(unsigned long long)setPitchAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 ;
-(unsigned long long)setYawAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 ;
-(unsigned long long)setRollAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 ;
-(void)makeCurrentAspectRatioFreeForm;
-(CGRect)masterImageRect;
-(BOOL)hasOvercapture;
-(id)initWithMasterImageSize:(CGSize)arg1 ;
-(id)initWithMasterImageRect:(CGRect)arg1 stitchedImageRect:(CGRect)arg2 ;
-(void)setRollRadians:(double)arg1 ;
-(void)makeCurrentFreeFormAspectFixed;
-(BOOL)imageContainsRect:(CGRect)arg1 withTol:(double)arg2 ;
-(SCD_Struct_NU27)_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 withExpansionTol:(double)arg4 ;
-(CGSize)stitchedImageSize;
-(unsigned long long)constrainedMoveCropRectBy:(CGVector)arg1 strict:(BOOL)arg2 startRect:(CGRect)arg3 ;
-(unsigned long long)setForZoomCropRect:(CGRect)arg1 newCropRect:(CGRect)arg2 ;
-(unsigned long long)setRollAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 startRect:(CGRect)arg3 startAngle:(double)arg4 ;
-(unsigned long long)setYawAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 startRect:(CGRect)arg3 startAngle:(double)arg4 ;
-(unsigned long long)setPitchAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 startRect:(CGRect)arg3 startAngle:(double)arg4 ;
-(id)initWithMasterImageRect:(CGRect)arg1 ;
-(id)initWithMasterImageSize:(CGSize)arg1 fovRadians:(double)arg2 ;
-(id)initWithMasterImageSize:(CGSize)arg1 stitchedImageSize:(CGSize)arg2 ;
-(id)copyWithMasterImageSize:(CGSize)arg1 fovRadians:(double)arg2 ;
-(BOOL)isEqualToCropModel:(id)arg1 ;
-(CGRect)_widestCropRect;
-(1)_defaultImageCenter;
-(CGRect)_defaultCropRect;
-(void)_setToDefaultValues;
-(Quad2dRef)_getBoundingQuad;
-(Quad2dRef)_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 ;
-(Quad2dRef)_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 imageRect:(CGRect)arg4 ;
-(SCD_Struct_NU27)_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 withExpansionTol:(double)arg4 imageRect:(CGRect)arg5 ;
-(CGRect)_integralCropRect:(CGRect)arg1 straightenAngle:(double)arg2 anchorPoint:(CGPoint)arg3 ;
-(void)_setCropRect:(CGRect)arg1 ;
-(void)_setCropRect:(CGRect)arg1 anchor:(CGPoint)arg2 ;
-(void)_setCropRectWithConstantSize:(CGRect)arg1 ;
-(unsigned long long)_hitMaskFromRect:(CGRect)arg1 ;
-(unsigned long long)_hitMaskFromRect:(CGRect)arg1 withTol:(double)arg2 ;
-(void)_debugPrintHitMask;
-(void)_debugPrintHitMask:(unsigned long long)arg1 ;
-(CGRect)_anchorAlignedRectFromCandidate:(CGRect)arg1 withAnchor:(CGPoint)arg2 ;
-(BOOL)canGrowCropRect:(CGRect)arg1 constrainWithAnchorPoint:(CGPoint)arg2 strict:(BOOL)arg3 withTol:(double)arg4 ;
-(unsigned long long)setCropRect:(CGRect)arg1 constrainWithAnchorPoint:(CGPoint)arg2 ;
-(unsigned long long)setCropRect:(CGRect)arg1 newCropRect:(CGRect)arg2 constrainWithAnchorPoint:(CGPoint)arg3 ;
-(unsigned long long)setCropRect:(CGRect)arg1 newCropRect:(CGRect)arg2 constrainWithAnchorPoint:(CGPoint)arg3 strict:(BOOL)arg4 ;
-(CGRect)_expandedCropRectForZoom:(CGRect)arg1 candidateRect:(CGRect)arg2 ;
-(CGRect)getCropRect:(CGRect)arg1 newCropRect:(CGRect)arg2 pitch:(double)arg3 yaw:(double)arg4 roll:(double)arg5 constrainWithAnchorPoint:(CGPoint)arg6 strict:(BOOL)arg7 aspectRatioIsFreeForm:(BOOL)arg8 hitVertexId:(unsigned long long*)arg9 ;
-(CGRect)getCropRectThatCompletelyContainsMasterImageForPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 ;
-(unsigned long long)constrainedMoveCropRectBy:(CGVector)arg1 ;
-(unsigned long long)constrainedMoveCropRectBy:(CGVector)arg1 strict:(BOOL)arg2 ;
-(unsigned long long)setAspectRatio:(SCD_Struct_NU7)arg1 constrainCropRect:(CGRect)arg2 withTargetArea:(double)arg3 ;
-(double)_currentAspectAsDouble:(CGRect)arg1 ;
-(SCD_Struct_NU7)_currentAspectRatio:(CGRect)arg1 ;
-(BOOL)aspectRatioIsOriginal;
-(BOOL)aspectRatioIsFreeForm;
-(SCD_Struct_NU7)originalAspectRatio;
-(double)pitchDegreeUI;
-(double)yawDegreeUI;
-(double)rollDegreeUI;
-(double)fovRadians;
-(unsigned long long)hitVertexID;
-(BOOL)isAutoCrop;
-(void)setIsAutoCrop:(BOOL)arg1 ;
@end

