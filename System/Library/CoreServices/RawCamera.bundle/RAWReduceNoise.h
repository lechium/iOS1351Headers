/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RawCamera/RawCamera-Structs.h>
#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber, CIVector, NSDictionary, NSArray;

@interface RAWReduceNoise : RAWFilter {

	CIImage* inputImage;
	NSNumber* inputLNRAmount;
	NSNumber* inputCNRAmount;
	NSNumber* inputSharpenAmount;
	NSNumber* inputSharpenThreshold;
	NSNumber* inputContrastAmount;
	NSNumber* inputDetailAmount;
	NSNumber* inputMoireRadius;
	NSNumber* inputMoireAmount;
	NSNumber* inputOpponentColorEnabled;
	CIVector* inputNeutralFactors;
	NSNumber* inputRepresentativeNoise;
	NSNumber* inputScaleFactor;
	NSNumber* inputBoostMethod;
	CIVector* inputLumFactors;
	NSNumber* inputBaselineExposure;
	NSNumber* inputISO;
	NSNumber* inputSensorPattern;
	NSDictionary* inputISODictionary;
	NSDictionary* inputTrimParameters;
	NSArray* inputLowCurvatureThreshold;
	NSDictionary* inputDespeckleParameters;
	NSNumber* inputHighFrequencyFactor;
	NSNumber* inputShowHF;
	NSNumber* inputVersion;
	id inputColorSpace;

}
+(id)customAttributes;
+(id)smartNoiseStatistics:(id)arg1 ;
+(id)smartNoiseAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2 ;
-(id)customAttributes;
-(id)outputImage;
-(float)adjustedRNAmount;
-(void)computeScaleA:(float*)arg1 B:(float*)arg2 withSmoothingAmount:(float)arg3 ;
-(id)multiply:(id)arg1 byNeutralFactors:(id)arg2 ;
-(id)highFrequencyIntoAlpha:(id)arg1 threshold:(float)arg2 neutralFactors:(id)arg3 ;
-(id)powerBlurFSHF:(id)arg1 threshold:(float)arg2 moireAmount:(float)arg3 neutralFactors:(id)arg4 ;
-(id)extractHalfSizeRGBHF:(id)arg1 neutralFactors:(id)arg2 threshold:(float)arg3 ;
-(id)powerBlurHF:(id)arg1 threshold:(float)arg2 moireAmount:(float)arg3 scale:(float)arg4 ;
-(id)powerBlurDespeckleHF:(id)arg1 threshold:(float)arg2 moireAmount:(float)arg3 scale:(float)arg4 countThreshold:(int)arg5 luminanceThreshold:(float)arg6 diffAmount:(float)arg7 ;
-(id)powerBlurEarlyOutHF:(id)arg1 threshold:(float)arg2 moireAmount:(float)arg3 scale:(float)arg4 ;
-(id)powerBlurEarlyOut2HF:(id)arg1 threshold:(float)arg2 moireAmount:(float)arg3 scale:(float)arg4 neutralThreshold:(float)arg5 thresholdScale:(float)arg6 ;
-(id)perceptualToLinear:(id)arg1 ;
-(id)expandHalfSizeRGB:(id)arg1 ;
-(id)powerBlurFS:(id)arg1 threshold:(float)arg2 neutralFactors:(id)arg3 ;
-(id)extractHalfSizeRGB:(id)arg1 neutralFactors:(id)arg2 ;
-(id)powerBlur:(id)arg1 threshold:(float)arg2 scale:(float)arg3 ;
-(id)powerBlurDespeckle:(id)arg1 threshold:(float)arg2 scale:(float)arg3 countThreshold:(int)arg4 luminanceThreshold:(float)arg5 diffAmount:(float)arg6 ;
-(id)powerBlurEarlyOut:(id)arg1 threshold:(float)arg2 scale:(float)arg3 ;
-(id)powerBlurEarlyOut2:(id)arg1 threshold:(float)arg2 scale:(float)arg3 neutralThreshold:(float)arg4 thresholdScale:(float)arg5 ;
-(id)V8OutputImage;
-(id)outputUnboost:(id)arg1 ;
-(id)outputCNR:(id)arg1 extent:(CGRect)arg2 returningDebugProduct:(BOOL*)arg3 ;
-(id)viewRGB:(id)arg1 sushiFactors:(id)arg2 crop:(CGRect)arg3 ;
-(id)extractYOpponentColor:(id)arg1 neutralFactors:(id)arg2 luminanceFactors:(id)arg3 noiseVector:(id)arg4 ;
-(id)viewY:(id)arg1 sushiFactors:(id)arg2 crop:(CGRect)arg3 ;
-(id)extractY:(id)arg1 neutralFactors:(id)arg2 ;
-(void)computeLowThreshold:(float*)arg1 andFactor:(float*)arg2 withThreshold:(float)arg3 andSoftness:(float)arg4 ;
-(id)gaborFiltersToSmoothedLuminanceAndGradient:(id)arg1 smoothAmt:(float)arg2 tinyBlurFactor:(float)arg3 ;
-(id)viewTG:(id)arg1 lothresh:(float)arg2 factor:(float)arg3 crop:(CGRect)arg4 ;
-(id)reduce:(id)arg1 ;
-(id)blurGradient:(id)arg1 lothresh:(float)arg2 factor:(float)arg3 ;
-(id)viewG:(id)arg1 scale:(float)arg2 crop:(CGRect)arg3 ;
-(id)expandAndSharpenThroughGradientMaskGatherOpponentColor:(id)arg1 halfSizeY:(id)arg2 cnrRGB:(id)arg3 originalY:(id)arg4 sharpen:(float)arg5 floor:(float)arg6 sushiFactors:(id)arg7 crop:(CGRect)arg8 lumFactors:(id)arg9 ;
-(id)expandAndSharpenThroughGradientMaskGather:(id)arg1 halfSizeY:(id)arg2 cnrRGB:(id)arg3 sharpen:(float)arg4 floor:(float)arg5 sushiFactors:(id)arg6 crop:(CGRect)arg7 lumFactors:(id)arg8 ;
-(id)YAndRGBGatherOpponentColor:(id)arg1 cnrRGB:(id)arg2 originalY:(id)arg3 sushiFactors:(id)arg4 crop:(CGRect)arg5 lumFactors:(id)arg6 ;
-(id)YAndRGBGather:(id)arg1 cnrRGB:(id)arg2 sushiFactors:(id)arg3 crop:(CGRect)arg4 lumFactors:(id)arg5 ;
-(id)expandAndSharpenDetailsThroughGradientMaskGatherOpponentColor:(id)arg1 halfSizeY:(id)arg2 cnrRGB:(id)arg3 originalY:(id)arg4 sharpen:(float)arg5 soften:(float)arg6 floor:(float)arg7 sushiFactors:(id)arg8 crop:(CGRect)arg9 lumFactors:(id)arg10 ;
-(id)expandAndSharpenDetailsThroughGradientMaskGather:(id)arg1 halfSizeY:(id)arg2 cnrRGB:(id)arg3 sharpen:(float)arg4 soften:(float)arg5 floor:(float)arg6 sushiFactors:(id)arg7 crop:(CGRect)arg8 lumFactors:(id)arg9 ;
-(id)expandAndMakeDetails:(id)arg1 halfSize:(id)arg2 ;
-(id)viewD:(id)arg1 factor:(float)arg2 crop:(CGRect)arg3 ;
-(id)fineGrainNoise2:(id)arg1 tinyBlurFactor:(float)arg2 ;
-(id)fineGrainNoise:(id)arg1 ;
-(id)expandAndAddDetailsThroughGradientMask2:(id)arg1 halfSize:(id)arg2 fullSizeDetails:(id)arg3 soften:(float)arg4 sharpen:(float)arg5 ;
-(id)addNoise:(id)arg1 noise:(id)arg2 amount:(float)arg3 ;
-(id)expandAndAddDetailsWithOverdrive:(id)arg1 fullSize:(id)arg2 contrast:(float)arg3 ;
-(id)gaborFiltersToLuminanceAndVectorField:(id)arg1 thresh:(float)arg2 ;
-(id)viewVF:(id)arg1 crop:(CGRect)arg2 ;
-(id)gaborFiltersToVectorField:(id)arg1 ;
-(id)smoothVectorFieldAlongVectors:(id)arg1 ;
-(id)vectorFieldToDirectionsAndGradients:(id)arg1 ;
-(id)directionsToCurvature:(id)arg1 threshold:(float)arg2 ;
-(id)viewC:(id)arg1 crop:(CGRect)arg2 ;
-(id)viewDIR:(id)arg1 do360:(BOOL)arg2 crop:(CGRect)arg3 ;
-(id)viewTGDIR:(id)arg1 lothresh:(float)arg2 factor:(float)arg3 do360:(BOOL)arg4 crop:(CGRect)arg5 ;
-(id)blurGradientPlusCurvature:(id)arg1 lothresh:(float)arg2 factor:(float)arg3 cthresh:(float)arg4 cfactor:(float)arg5 ;
-(id)smoothDetailsAlongDirectionsAtScaleWithSharpenAntiBloom:(id)arg1 directions:(id)arg2 scale:(float)arg3 thresh:(float)arg4 smooth:(float)arg5 sharp:(float)arg6 pscale:(float)arg7 coringThreshold:(float)arg8 maxContrast:(float)arg9 ;
-(id)smoothDetailsAlongDirectionsAtScaleAntiBloom:(id)arg1 directions:(id)arg2 scale:(float)arg3 thresh:(float)arg4 smooth:(float)arg5 maxContrast:(float)arg6 ;
-(id)smoothDetailsAlongDirections:(id)arg1 directions:(id)arg2 amount:(float)arg3 ;
-(id)viewGDIR:(id)arg1 do360:(BOOL)arg2 crop:(CGRect)arg3 ;
-(id)powerBlurY:(id)arg1 threshold:(float)arg2 ;
-(id)compositeThroughGradientMask:(id)arg1 fullSize:(id)arg2 fullSizeMask:(id)arg3 ;
-(id)expandAndAddDetailsThroughGradientMask:(id)arg1 fullSize:(id)arg2 fullSizeDetails:(id)arg3 fullSizeMask:(id)arg4 amount:(float)arg5 contrastOverdrive:(float)arg6 interpolant:(float)arg7 ;
-(id)smoothDetailsAlongDirectionsAtScaleWithSharpen:(id)arg1 directions:(id)arg2 scale:(float)arg3 thresh:(float)arg4 smooth:(float)arg5 sharp:(float)arg6 pscale:(float)arg7 coringThreshold:(float)arg8 ;
-(id)smoothDetailsAlongDirectionsAtScale:(id)arg1 directions:(id)arg2 scale:(float)arg3 thresh:(float)arg4 smooth:(float)arg5 ;
-(id)mergeHalfSizeCurvature:(id)arg1 intoFullSizeCurvature:(id)arg2 ;
-(id)expandAndAddDetailsThroughGradientMask3:(id)arg1 fullSize:(id)arg2 fullSizeDetails:(id)arg3 fullSizeMask:(id)arg4 amount:(float)arg5 sharpen:(float)arg6 interpolant:(float)arg7 ;
-(id)outputBoost:(id)arg1 ;
-(BOOL)isBayerGreenAlignedforImage:(id)arg1 andPattern:(int)arg2 ;
-(id)image:(id)arg1 croppedTo:(CGRect)arg2 ;
-(id)outputCNR:(id)arg1 E0:(CGRect)arg2 E1:(CGRect)arg3 ;
-(id)samplerForImage:(id)arg1 ;
-(id)expandAndSharpenThroughGradientMask:(id)arg1 fullSizeY:(id)arg2 sharpen:(float)arg3 ;
-(id)viewBlend:(id)arg1 sushiFactors:(id)arg2 crop:(CGRect)arg3 ;
-(id)viewHue:(id)arg1 sushiFactors:(id)arg2 crop:(CGRect)arg3 ;
-(id)kernelWithName:(id)arg1 inArray:(id)arg2 ;
-(id)kernelArrayWithResourceName:(id)arg1 ;
@end
