/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIModifyBlurmap : CIFilter {

	CIImage* inputImage;
	CIImage* inputPersonAlpha;
	CIImage* inputHairAlpha;
	CIImage* inputFaceMaskDeltaImage;
	NSNumber* inputScale;
	NSNumber* inputDistanceAdd;
	NSNumber* inputSmoothstepMin;
	NSNumber* inputSmoothstepMax;
	NSNumber* inputMaxBlur;
	NSNumber* inputApertureScaling;
	NSNumber* inputRelativeApertureScalingStrength;
	NSNumber* inputPersonDistance;
	NSNumber* inputPersonThreshold;
	CIVector* inputPersonAdditive;
	CIVector* inputPersonSubtractive;
	NSNumber* inputPersonMaxBlur;
	NSNumber* inputHairDistance;
	NSNumber* inputHairThreshold;
	CIVector* inputHairAdditive;
	CIVector* inputHairSubtractive;
	NSNumber* inputHairMaxBlur;
	NSNumber* inputProtectBodyStrength;
	CIVector* inputLeftEyeX;
	CIVector* inputLeftEyeY;
	CIVector* inputRightEyeX;
	CIVector* inputRightEyeY;
	CIVector* inputFaceMidPointX;
	CIVector* inputFaceMidPointY;
	NSNumber* inputEyeProtectionMaxFaces;
	NSNumber* inputEyeProtectionFaceWeightsSmoothStepMin;
	NSNumber* inputEyeProtectionFaceWeightsSmoothStepMax;
	NSNumber* inputEyeProtectionOvalDimsDistanceScale;
	NSNumber* inputEyeProtectionOvalDimsDistanceOffset;
	NSNumber* inputEyeProtectionOvalDimsRadiusHorizontal;
	NSNumber* inputEyeProtectionOvalDimsRadiusVertical;
	NSNumber* inputEyeProtectionOvalFallOffSmoothStepMin;
	NSNumber* inputEyeProtectionOvalFallOffSmoothStepMax;
	NSNumber* inputEyeProtectionPersonMaskSmoothStepMin;
	NSNumber* inputEyeProtectionPersonMaskSmoothStepMax;
	NSNumber* inputEyeProtectionPreventStrength;
	NSNumber* inputEyeProtectionSubtractiveMaxBlur;
	NSNumber* inputEyeProtectionSubtractiveApertureScaling;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputPersonAlpha; 
@property (retain) CIImage * inputHairAlpha; 
@property (retain) CIImage * inputFaceMaskDeltaImage; 
@property (retain) NSNumber * inputScale; 
@property (retain) NSNumber * inputDistanceAdd; 
@property (retain) NSNumber * inputApertureScaling; 
@property (retain) NSNumber * inputRelativeApertureScalingStrength; 
@property (retain) NSNumber * inputSmoothstepMin; 
@property (retain) NSNumber * inputSmoothstepMax; 
@property (retain) NSNumber * inputMaxBlur; 
@property (retain) NSNumber * inputPersonDistance; 
@property (retain) NSNumber * inputPersonThreshold; 
@property (retain) CIVector * inputPersonAdditive; 
@property (retain) CIVector * inputPersonSubtractive; 
@property (retain) NSNumber * inputPersonMaxBlur; 
@property (retain) NSNumber * inputHairDistance; 
@property (retain) NSNumber * inputHairThreshold; 
@property (retain) CIVector * inputHairAdditive; 
@property (retain) CIVector * inputHairSubtractive; 
@property (retain) NSNumber * inputHairMaxBlur; 
@property (retain) NSNumber * inputProtectBodyStrength; 
@property (retain) CIVector * inputLeftEyeX; 
@property (retain) CIVector * inputLeftEyeY; 
@property (retain) CIVector * inputRightEyeX; 
@property (retain) CIVector * inputRightEyeY; 
@property (retain) CIVector * inputFaceMidPointX; 
@property (retain) CIVector * inputFaceMidPointY; 
@property (retain) NSNumber * inputEyeProtectionMaxFaces; 
@property (retain) NSNumber * inputEyeProtectionFaceWeightsSmoothStepMin; 
@property (retain) NSNumber * inputEyeProtectionFaceWeightsSmoothStepMax; 
@property (retain) NSNumber * inputEyeProtectionOvalDimsDistanceScale; 
@property (retain) NSNumber * inputEyeProtectionOvalDimsDistanceOffset; 
@property (retain) NSNumber * inputEyeProtectionOvalDimsRadiusHorizontal; 
@property (retain) NSNumber * inputEyeProtectionOvalDimsRadiusVertical; 
@property (retain) NSNumber * inputEyeProtectionOvalFallOffSmoothStepMin; 
@property (retain) NSNumber * inputEyeProtectionOvalFallOffSmoothStepMax; 
@property (retain) NSNumber * inputEyeProtectionPersonMaskSmoothStepMin; 
@property (retain) NSNumber * inputEyeProtectionPersonMaskSmoothStepMax; 
@property (retain) NSNumber * inputEyeProtectionPreventStrength; 
@property (retain) NSNumber * inputEyeProtectionSubtractiveMaxBlur; 
@property (retain) NSNumber * inputEyeProtectionSubtractiveApertureScaling; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(NSNumber *)inputApertureScaling;
-(NSNumber *)inputMaxBlur;
-(void)setInputApertureScaling:(NSNumber *)arg1 ;
-(void)setInputMaxBlur:(NSNumber *)arg1 ;
-(NSNumber *)inputDistanceAdd;
-(void)setInputDistanceAdd:(NSNumber *)arg1 ;
-(CIImage *)inputPersonAlpha;
-(void)setInputPersonAlpha:(CIImage *)arg1 ;
-(CIImage *)inputHairAlpha;
-(void)setInputHairAlpha:(CIImage *)arg1 ;
-(CIImage *)inputFaceMaskDeltaImage;
-(void)setInputFaceMaskDeltaImage:(CIImage *)arg1 ;
-(NSNumber *)inputSmoothstepMin;
-(void)setInputSmoothstepMin:(NSNumber *)arg1 ;
-(NSNumber *)inputSmoothstepMax;
-(void)setInputSmoothstepMax:(NSNumber *)arg1 ;
-(NSNumber *)inputRelativeApertureScalingStrength;
-(void)setInputRelativeApertureScalingStrength:(NSNumber *)arg1 ;
-(NSNumber *)inputPersonDistance;
-(void)setInputPersonDistance:(NSNumber *)arg1 ;
-(NSNumber *)inputPersonThreshold;
-(void)setInputPersonThreshold:(NSNumber *)arg1 ;
-(CIVector *)inputPersonAdditive;
-(void)setInputPersonAdditive:(CIVector *)arg1 ;
-(CIVector *)inputPersonSubtractive;
-(void)setInputPersonSubtractive:(CIVector *)arg1 ;
-(NSNumber *)inputPersonMaxBlur;
-(void)setInputPersonMaxBlur:(NSNumber *)arg1 ;
-(NSNumber *)inputHairDistance;
-(void)setInputHairDistance:(NSNumber *)arg1 ;
-(NSNumber *)inputHairThreshold;
-(void)setInputHairThreshold:(NSNumber *)arg1 ;
-(CIVector *)inputHairAdditive;
-(void)setInputHairAdditive:(CIVector *)arg1 ;
-(CIVector *)inputHairSubtractive;
-(void)setInputHairSubtractive:(CIVector *)arg1 ;
-(NSNumber *)inputHairMaxBlur;
-(void)setInputHairMaxBlur:(NSNumber *)arg1 ;
-(NSNumber *)inputProtectBodyStrength;
-(void)setInputProtectBodyStrength:(NSNumber *)arg1 ;
-(CIVector *)inputLeftEyeX;
-(void)setInputLeftEyeX:(CIVector *)arg1 ;
-(CIVector *)inputLeftEyeY;
-(void)setInputLeftEyeY:(CIVector *)arg1 ;
-(CIVector *)inputRightEyeX;
-(void)setInputRightEyeX:(CIVector *)arg1 ;
-(CIVector *)inputRightEyeY;
-(void)setInputRightEyeY:(CIVector *)arg1 ;
-(CIVector *)inputFaceMidPointX;
-(void)setInputFaceMidPointX:(CIVector *)arg1 ;
-(CIVector *)inputFaceMidPointY;
-(void)setInputFaceMidPointY:(CIVector *)arg1 ;
-(NSNumber *)inputEyeProtectionMaxFaces;
-(void)setInputEyeProtectionMaxFaces:(NSNumber *)arg1 ;
-(NSNumber *)inputEyeProtectionFaceWeightsSmoothStepMin;
-(void)setInputEyeProtectionFaceWeightsSmoothStepMin:(NSNumber *)arg1 ;
-(NSNumber *)inputEyeProtectionFaceWeightsSmoothStepMax;
-(void)setInputEyeProtectionFaceWeightsSmoothStepMax:(NSNumber *)arg1 ;
-(NSNumber *)inputEyeProtectionOvalDimsDistanceScale;
-(void)setInputEyeProtectionOvalDimsDistanceScale:(NSNumber *)arg1 ;
-(NSNumber *)inputEyeProtectionOvalDimsDistanceOffset;
-(void)setInputEyeProtectionOvalDimsDistanceOffset:(NSNumber *)arg1 ;
-(NSNumber *)inputEyeProtectionOvalDimsRadiusHorizontal;
-(void)setInputEyeProtectionOvalDimsRadiusHorizontal:(NSNumber *)arg1 ;
-(NSNumber *)inputEyeProtectionOvalDimsRadiusVertical;
-(void)setInputEyeProtectionOvalDimsRadiusVertical:(NSNumber *)arg1 ;
-(NSNumber *)inputEyeProtectionOvalFallOffSmoothStepMin;
-(void)setInputEyeProtectionOvalFallOffSmoothStepMin:(NSNumber *)arg1 ;
-(NSNumber *)inputEyeProtectionOvalFallOffSmoothStepMax;
-(void)setInputEyeProtectionOvalFallOffSmoothStepMax:(NSNumber *)arg1 ;
-(NSNumber *)inputEyeProtectionPersonMaskSmoothStepMin;
-(void)setInputEyeProtectionPersonMaskSmoothStepMin:(NSNumber *)arg1 ;
-(NSNumber *)inputEyeProtectionPersonMaskSmoothStepMax;
-(void)setInputEyeProtectionPersonMaskSmoothStepMax:(NSNumber *)arg1 ;
-(NSNumber *)inputEyeProtectionPreventStrength;
-(void)setInputEyeProtectionPreventStrength:(NSNumber *)arg1 ;
-(NSNumber *)inputEyeProtectionSubtractiveMaxBlur;
-(void)setInputEyeProtectionSubtractiveMaxBlur:(NSNumber *)arg1 ;
-(NSNumber *)inputEyeProtectionSubtractiveApertureScaling;
-(void)setInputEyeProtectionSubtractiveApertureScaling:(NSNumber *)arg1 ;
@end

