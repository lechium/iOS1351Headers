/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
#import <libobjc.A.dylib/CVAVideoPipelinePropertiesSPI.h>

@class NSDictionary, NSArray, NSString;

@interface CVAVideoPipelineProperties_Impl : NSObject <CVAVideoPipelinePropertiesSPI> {

	BOOL _modulateFocalRatio;
	unsigned _colorPixelBufferPixelFormat;
	float _colorPixelBufferFocalLength_mm;
	float _colorPixelBufferPixelSize_um;
	float _colorPixelBufferFocalRatio;
	unsigned _alphaMattePixelBufferPixelFormat;
	unsigned _inputDisparityPixelBufferPixelFormat;
	unsigned _outputDisparityPixelBufferPixelFormat;
	int _depthPixelBufferXPadding;
	int _depthPixelBufferYPadding;
	int _depthPixelBufferXReplication;
	int _depthPixelBufferYReplication;
	float _depthPixelBufferScale;
	float _depthPixelBufferOffset;
	float _disparityStereoFocalLengthPixels;
	float _disparityStereoBaselineMeters;
	float _depthPixelBufferMaxLeftOcclusionDisparityChange;
	float _depthPixelBufferMaxRightOcclusionDisparityChange;
	float _backgroundDisparityUpdateRate;
	float _invalidDisparityRatioUpdateRate;
	int _backgroundDisparityStatsWindowSize;
	int _invalidDisparityRatioStatsWindowSize;
	float _minDeltaCanonicalDisparity;
	float _maxDeltaCanonicalDisparity;
	float _centerDeltaCanonicalDisparity;
	float _dsCanonicalLowThld;
	float _dsCanonicalLowScale;
	float _dsCanonicalHighThld;
	float _linearDeltaDepthMultiplier;
	float _linearDeltaDepthOffset;
	float _dsCanonicalHighScale;
	float _foregroundPercentile;
	float _closeDisparityPercentile;
	float _deltaDepth;
	float _mattingUpdateRate;
	float _mattingUpdateRateFast;
	float _guidedFilterUnconfidentWeight;
	float _guidedFilterMinDistToDeweight;
	float _referenceDisparity;
	float _deltaCanonicalDisparity;
	float _alphaCoeffFilterColorStd;
	float _alphaCoeffFilterColorStdFast;
	float _alphaMaxLaplacian;
	float _alphaContrastExponent;
	float _alphaGammaExponent;
	float _disparityFilterColorStd;
	float _disparityFilterUpdateRate;
	float _minimumConfidenceToKeepDisparity;
	float _maximumSimilarityToKeepDisparity;
	float _maxDisparityFillingInconsistency;
	float _maxDisparityFillingDistFromForeground;
	int _maxDistToPushDisparityEdgesFwd;
	int _maxDistToPushDisparityEdgesRev;
	int _disparityPushingBackgroundToForegroundDisparityDifference;
	float _renderingDisparityUpdateRate;
	float _renderingDisparityBlurRadius;
	float _offsetNoiseBitCalculation;
	float _gainMultiplierNoiseBitCalculation;
	float _luxMultiplierNoiseBitCalculation;
	float _renderingLensFocalLength;
	float _fNumberMultiplier;
	float _focusThresholdHardness;
	float _focusUpdateRateSlow;
	float _focusUpdateRateFast;
	int _maxFramesWithoutFace;
	float _faceSizeRatioInFocus;
	float _foregroundMaskDilationRadius;
	float _infConvolutionDownsampling;
	float _laplacianLimitingDownsampling;
	float _laplacianLimitingBlurSize;
	int _relightDisplayMode;
	float _relightEffectStrength;
	float _portraitStyleStrengthOverride;
	float _focusDistanceOverride;
	float _stageLightStateMachineIntensityIncrement;
	float _sdofStateMachineIntensityIncrement;
	float _stableBackgroundDisparitySumVariance;
	float _unstableBackgroundDisparitySumVariance;
	float _stableInvalidDisparityRatio;
	float _unstableInvalidDisparityRatio;
	float _backgroundSeparationLikelihoodHigh;
	float _backgroundSeparationLikelihoodLow;
	float _depthQualityMetricFocalPlaneOffsetMeters;
	int _segmentationBinarizationThreshold;
	int _depthErosionRadius;
	int _guidedFilterWidth;
	int _guidedFilterHeight;
	int _rawShiftInvalidThreshold;
	unsigned long long _colorPixelBufferWidth;
	unsigned long long _colorPixelBufferHeight;
	unsigned long long _alphaMattePixelBufferWidth;
	unsigned long long _alphaMattePixelBufferHeight;
	unsigned long long _inputDisparityPixelBufferWidth;
	unsigned long long _inputDisparityPixelBufferHeight;
	unsigned long long _outputDisparityPixelBufferWidth;
	unsigned long long _outputDisparityPixelBufferHeight;
	unsigned long long _inputToOutputDisparityPixelBufferRotation;
	NSArray* _supportedInputSegmentationPixelBufferPixelFormats;
	unsigned long long _videoPipelineDevice;
	NSDictionary* _faceKitProcessOutputOverride;
	double _stageLightStageMachineMaxOrientationDifference;
	double _sdofStateMachineMaxOrientationDifference;
	unsigned long long _focusStatisticsXTileCount;
	unsigned long long _focusStatisticsYTileCount;
	unsigned long long _proxyToFaceEffectLerpNumFrames;

}

@property (assign) unsigned long long colorPixelBufferWidth;                                   //@synthesize colorPixelBufferWidth=_colorPixelBufferWidth - In the implementation block
@property (assign) unsigned long long colorPixelBufferHeight;                                  //@synthesize colorPixelBufferHeight=_colorPixelBufferHeight - In the implementation block
@property (readonly) unsigned colorPixelBufferPixelFormat;                                     //@synthesize colorPixelBufferPixelFormat=_colorPixelBufferPixelFormat - In the implementation block
@property (assign) float colorPixelBufferFocalLength_mm;                                       //@synthesize colorPixelBufferFocalLength_mm=_colorPixelBufferFocalLength_mm - In the implementation block
@property (assign) float colorPixelBufferPixelSize_um;                                         //@synthesize colorPixelBufferPixelSize_um=_colorPixelBufferPixelSize_um - In the implementation block
@property (assign) float colorPixelBufferFocalRatio;                                           //@synthesize colorPixelBufferFocalRatio=_colorPixelBufferFocalRatio - In the implementation block
@property (assign) unsigned long long alphaMattePixelBufferWidth;                              //@synthesize alphaMattePixelBufferWidth=_alphaMattePixelBufferWidth - In the implementation block
@property (assign) unsigned long long alphaMattePixelBufferHeight;                             //@synthesize alphaMattePixelBufferHeight=_alphaMattePixelBufferHeight - In the implementation block
@property (readonly) unsigned alphaMattePixelBufferPixelFormat;                                //@synthesize alphaMattePixelBufferPixelFormat=_alphaMattePixelBufferPixelFormat - In the implementation block
@property (assign) unsigned long long inputDisparityPixelBufferWidth;                          //@synthesize inputDisparityPixelBufferWidth=_inputDisparityPixelBufferWidth - In the implementation block
@property (assign) unsigned long long inputDisparityPixelBufferHeight;                         //@synthesize inputDisparityPixelBufferHeight=_inputDisparityPixelBufferHeight - In the implementation block
@property (assign) unsigned long long outputDisparityPixelBufferWidth;                         //@synthesize outputDisparityPixelBufferWidth=_outputDisparityPixelBufferWidth - In the implementation block
@property (assign) unsigned long long outputDisparityPixelBufferHeight;                        //@synthesize outputDisparityPixelBufferHeight=_outputDisparityPixelBufferHeight - In the implementation block
@property (assign) unsigned long long inputToOutputDisparityPixelBufferRotation;               //@synthesize inputToOutputDisparityPixelBufferRotation=_inputToOutputDisparityPixelBufferRotation - In the implementation block
@property (readonly) unsigned inputDisparityPixelBufferPixelFormat;                            //@synthesize inputDisparityPixelBufferPixelFormat=_inputDisparityPixelBufferPixelFormat - In the implementation block
@property (readonly) unsigned outputDisparityPixelBufferPixelFormat;                           //@synthesize outputDisparityPixelBufferPixelFormat=_outputDisparityPixelBufferPixelFormat - In the implementation block
@property (readonly) NSArray * supportedInputSegmentationPixelBufferPixelFormats;              //@synthesize supportedInputSegmentationPixelBufferPixelFormats=_supportedInputSegmentationPixelBufferPixelFormats - In the implementation block
@property (readonly) unsigned long long videoPipelineDevice;                                   //@synthesize videoPipelineDevice=_videoPipelineDevice - In the implementation block
@property (assign) int depthPixelBufferXPadding;                                               //@synthesize depthPixelBufferXPadding=_depthPixelBufferXPadding - In the implementation block
@property (assign) int depthPixelBufferYPadding;                                               //@synthesize depthPixelBufferYPadding=_depthPixelBufferYPadding - In the implementation block
@property (assign) int depthPixelBufferXReplication;                                           //@synthesize depthPixelBufferXReplication=_depthPixelBufferXReplication - In the implementation block
@property (assign) int depthPixelBufferYReplication;                                           //@synthesize depthPixelBufferYReplication=_depthPixelBufferYReplication - In the implementation block
@property (assign) float depthPixelBufferScale;                                                //@synthesize depthPixelBufferScale=_depthPixelBufferScale - In the implementation block
@property (assign) float depthPixelBufferOffset;                                               //@synthesize depthPixelBufferOffset=_depthPixelBufferOffset - In the implementation block
@property (assign) float disparityStereoFocalLengthPixels;                                     //@synthesize disparityStereoFocalLengthPixels=_disparityStereoFocalLengthPixels - In the implementation block
@property (assign) float disparityStereoBaselineMeters;                                        //@synthesize disparityStereoBaselineMeters=_disparityStereoBaselineMeters - In the implementation block
@property (assign) float depthPixelBufferMaxLeftOcclusionDisparityChange;                      //@synthesize depthPixelBufferMaxLeftOcclusionDisparityChange=_depthPixelBufferMaxLeftOcclusionDisparityChange - In the implementation block
@property (assign) float depthPixelBufferMaxRightOcclusionDisparityChange;                     //@synthesize depthPixelBufferMaxRightOcclusionDisparityChange=_depthPixelBufferMaxRightOcclusionDisparityChange - In the implementation block
@property (assign) float backgroundDisparityUpdateRate;                                        //@synthesize backgroundDisparityUpdateRate=_backgroundDisparityUpdateRate - In the implementation block
@property (assign) float invalidDisparityRatioUpdateRate;                                      //@synthesize invalidDisparityRatioUpdateRate=_invalidDisparityRatioUpdateRate - In the implementation block
@property (assign) int backgroundDisparityStatsWindowSize;                                     //@synthesize backgroundDisparityStatsWindowSize=_backgroundDisparityStatsWindowSize - In the implementation block
@property (assign) int invalidDisparityRatioStatsWindowSize;                                   //@synthesize invalidDisparityRatioStatsWindowSize=_invalidDisparityRatioStatsWindowSize - In the implementation block
@property (assign) float minDeltaCanonicalDisparity;                                           //@synthesize minDeltaCanonicalDisparity=_minDeltaCanonicalDisparity - In the implementation block
@property (assign) float maxDeltaCanonicalDisparity;                                           //@synthesize maxDeltaCanonicalDisparity=_maxDeltaCanonicalDisparity - In the implementation block
@property (assign) float centerDeltaCanonicalDisparity;                                        //@synthesize centerDeltaCanonicalDisparity=_centerDeltaCanonicalDisparity - In the implementation block
@property (assign) float dsCanonicalLowThld;                                                   //@synthesize dsCanonicalLowThld=_dsCanonicalLowThld - In the implementation block
@property (assign) float dsCanonicalLowScale;                                                  //@synthesize dsCanonicalLowScale=_dsCanonicalLowScale - In the implementation block
@property (assign) float dsCanonicalHighThld;                                                  //@synthesize dsCanonicalHighThld=_dsCanonicalHighThld - In the implementation block
@property (assign) float linearDeltaDepthMultiplier;                                           //@synthesize linearDeltaDepthMultiplier=_linearDeltaDepthMultiplier - In the implementation block
@property (assign) float linearDeltaDepthOffset;                                               //@synthesize linearDeltaDepthOffset=_linearDeltaDepthOffset - In the implementation block
@property (assign) float dsCanonicalHighScale;                                                 //@synthesize dsCanonicalHighScale=_dsCanonicalHighScale - In the implementation block
@property (assign) float foregroundPercentile;                                                 //@synthesize foregroundPercentile=_foregroundPercentile - In the implementation block
@property (assign) float closeDisparityPercentile;                                             //@synthesize closeDisparityPercentile=_closeDisparityPercentile - In the implementation block
@property (assign) float deltaDepth;                                                           //@synthesize deltaDepth=_deltaDepth - In the implementation block
@property (assign) float mattingUpdateRate;                                                    //@synthesize mattingUpdateRate=_mattingUpdateRate - In the implementation block
@property (assign) float mattingUpdateRateFast;                                                //@synthesize mattingUpdateRateFast=_mattingUpdateRateFast - In the implementation block
@property (assign) float guidedFilterUnconfidentWeight;                                        //@synthesize guidedFilterUnconfidentWeight=_guidedFilterUnconfidentWeight - In the implementation block
@property (assign) float guidedFilterMinDistToDeweight;                                        //@synthesize guidedFilterMinDistToDeweight=_guidedFilterMinDistToDeweight - In the implementation block
@property (assign) float referenceDisparity;                                                   //@synthesize referenceDisparity=_referenceDisparity - In the implementation block
@property (assign) float deltaCanonicalDisparity;                                              //@synthesize deltaCanonicalDisparity=_deltaCanonicalDisparity - In the implementation block
@property (assign) float alphaCoeffFilterColorStd;                                             //@synthesize alphaCoeffFilterColorStd=_alphaCoeffFilterColorStd - In the implementation block
@property (assign) float alphaCoeffFilterColorStdFast;                                         //@synthesize alphaCoeffFilterColorStdFast=_alphaCoeffFilterColorStdFast - In the implementation block
@property (assign) float alphaMaxLaplacian;                                                    //@synthesize alphaMaxLaplacian=_alphaMaxLaplacian - In the implementation block
@property (assign) float alphaContrastExponent;                                                //@synthesize alphaContrastExponent=_alphaContrastExponent - In the implementation block
@property (assign) float alphaGammaExponent;                                                   //@synthesize alphaGammaExponent=_alphaGammaExponent - In the implementation block
@property (assign) float disparityFilterColorStd;                                              //@synthesize disparityFilterColorStd=_disparityFilterColorStd - In the implementation block
@property (assign) float disparityFilterUpdateRate;                                            //@synthesize disparityFilterUpdateRate=_disparityFilterUpdateRate - In the implementation block
@property (assign) float minimumConfidenceToKeepDisparity;                                     //@synthesize minimumConfidenceToKeepDisparity=_minimumConfidenceToKeepDisparity - In the implementation block
@property (assign) float maximumSimilarityToKeepDisparity;                                     //@synthesize maximumSimilarityToKeepDisparity=_maximumSimilarityToKeepDisparity - In the implementation block
@property (assign) float maxDisparityFillingInconsistency;                                     //@synthesize maxDisparityFillingInconsistency=_maxDisparityFillingInconsistency - In the implementation block
@property (assign) float maxDisparityFillingDistFromForeground;                                //@synthesize maxDisparityFillingDistFromForeground=_maxDisparityFillingDistFromForeground - In the implementation block
@property (assign) int maxDistToPushDisparityEdgesFwd;                                         //@synthesize maxDistToPushDisparityEdgesFwd=_maxDistToPushDisparityEdgesFwd - In the implementation block
@property (assign) int maxDistToPushDisparityEdgesRev;                                         //@synthesize maxDistToPushDisparityEdgesRev=_maxDistToPushDisparityEdgesRev - In the implementation block
@property (assign) int disparityPushingBackgroundToForegroundDisparityDifference;              //@synthesize disparityPushingBackgroundToForegroundDisparityDifference=_disparityPushingBackgroundToForegroundDisparityDifference - In the implementation block
@property (assign) float renderingDisparityUpdateRate;                                         //@synthesize renderingDisparityUpdateRate=_renderingDisparityUpdateRate - In the implementation block
@property (assign) float renderingDisparityBlurRadius;                                         //@synthesize renderingDisparityBlurRadius=_renderingDisparityBlurRadius - In the implementation block
@property (assign) float offsetNoiseBitCalculation;                                            //@synthesize offsetNoiseBitCalculation=_offsetNoiseBitCalculation - In the implementation block
@property (assign) float gainMultiplierNoiseBitCalculation;                                    //@synthesize gainMultiplierNoiseBitCalculation=_gainMultiplierNoiseBitCalculation - In the implementation block
@property (assign) float luxMultiplierNoiseBitCalculation;                                     //@synthesize luxMultiplierNoiseBitCalculation=_luxMultiplierNoiseBitCalculation - In the implementation block
@property (assign) float renderingLensFocalLength;                                             //@synthesize renderingLensFocalLength=_renderingLensFocalLength - In the implementation block
@property (assign) float fNumberMultiplier;                                                    //@synthesize fNumberMultiplier=_fNumberMultiplier - In the implementation block
@property (assign) float focusThresholdHardness;                                               //@synthesize focusThresholdHardness=_focusThresholdHardness - In the implementation block
@property (assign) float focusUpdateRateSlow;                                                  //@synthesize focusUpdateRateSlow=_focusUpdateRateSlow - In the implementation block
@property (assign) float focusUpdateRateFast;                                                  //@synthesize focusUpdateRateFast=_focusUpdateRateFast - In the implementation block
@property (assign) int maxFramesWithoutFace;                                                   //@synthesize maxFramesWithoutFace=_maxFramesWithoutFace - In the implementation block
@property (assign) float faceSizeRatioInFocus;                                                 //@synthesize faceSizeRatioInFocus=_faceSizeRatioInFocus - In the implementation block
@property (assign) float foregroundMaskDilationRadius;                                         //@synthesize foregroundMaskDilationRadius=_foregroundMaskDilationRadius - In the implementation block
@property (assign) float infConvolutionDownsampling;                                           //@synthesize infConvolutionDownsampling=_infConvolutionDownsampling - In the implementation block
@property (assign) float laplacianLimitingDownsampling;                                        //@synthesize laplacianLimitingDownsampling=_laplacianLimitingDownsampling - In the implementation block
@property (assign) float laplacianLimitingBlurSize;                                            //@synthesize laplacianLimitingBlurSize=_laplacianLimitingBlurSize - In the implementation block
@property (assign) int relightDisplayMode;                                                     //@synthesize relightDisplayMode=_relightDisplayMode - In the implementation block
@property (retain) NSDictionary * faceKitProcessOutputOverride;                                //@synthesize faceKitProcessOutputOverride=_faceKitProcessOutputOverride - In the implementation block
@property (assign) float relightEffectStrength;                                                //@synthesize relightEffectStrength=_relightEffectStrength - In the implementation block
@property (assign) float portraitStyleStrengthOverride;                                        //@synthesize portraitStyleStrengthOverride=_portraitStyleStrengthOverride - In the implementation block
@property (assign) float focusDistanceOverride;                                                //@synthesize focusDistanceOverride=_focusDistanceOverride - In the implementation block
@property (assign) float stageLightStateMachineIntensityIncrement;                             //@synthesize stageLightStateMachineIntensityIncrement=_stageLightStateMachineIntensityIncrement - In the implementation block
@property (assign) double stageLightStageMachineMaxOrientationDifference;                      //@synthesize stageLightStageMachineMaxOrientationDifference=_stageLightStageMachineMaxOrientationDifference - In the implementation block
@property (assign) float sdofStateMachineIntensityIncrement;                                   //@synthesize sdofStateMachineIntensityIncrement=_sdofStateMachineIntensityIncrement - In the implementation block
@property (assign) double sdofStateMachineMaxOrientationDifference;                            //@synthesize sdofStateMachineMaxOrientationDifference=_sdofStateMachineMaxOrientationDifference - In the implementation block
@property (assign) BOOL modulateFocalRatio;                                                    //@synthesize modulateFocalRatio=_modulateFocalRatio - In the implementation block
@property (assign) float stableBackgroundDisparitySumVariance;                                 //@synthesize stableBackgroundDisparitySumVariance=_stableBackgroundDisparitySumVariance - In the implementation block
@property (assign) float unstableBackgroundDisparitySumVariance;                               //@synthesize unstableBackgroundDisparitySumVariance=_unstableBackgroundDisparitySumVariance - In the implementation block
@property (assign) float stableInvalidDisparityRatio;                                          //@synthesize stableInvalidDisparityRatio=_stableInvalidDisparityRatio - In the implementation block
@property (assign) float unstableInvalidDisparityRatio;                                        //@synthesize unstableInvalidDisparityRatio=_unstableInvalidDisparityRatio - In the implementation block
@property (assign) float backgroundSeparationLikelihoodHigh;                                   //@synthesize backgroundSeparationLikelihoodHigh=_backgroundSeparationLikelihoodHigh - In the implementation block
@property (assign) float backgroundSeparationLikelihoodLow;                                    //@synthesize backgroundSeparationLikelihoodLow=_backgroundSeparationLikelihoodLow - In the implementation block
@property (assign) float depthQualityMetricFocalPlaneOffsetMeters;                             //@synthesize depthQualityMetricFocalPlaneOffsetMeters=_depthQualityMetricFocalPlaneOffsetMeters - In the implementation block
@property (assign) unsigned long long focusStatisticsXTileCount;                               //@synthesize focusStatisticsXTileCount=_focusStatisticsXTileCount - In the implementation block
@property (assign) unsigned long long focusStatisticsYTileCount;                               //@synthesize focusStatisticsYTileCount=_focusStatisticsYTileCount - In the implementation block
@property (assign) unsigned long long proxyToFaceEffectLerpNumFrames;                          //@synthesize proxyToFaceEffectLerpNumFrames=_proxyToFaceEffectLerpNumFrames - In the implementation block
@property (assign) int segmentationBinarizationThreshold;                                      //@synthesize segmentationBinarizationThreshold=_segmentationBinarizationThreshold - In the implementation block
@property (assign) int depthErosionRadius;                                                     //@synthesize depthErosionRadius=_depthErosionRadius - In the implementation block
@property (assign) int guidedFilterWidth;                                                      //@synthesize guidedFilterWidth=_guidedFilterWidth - In the implementation block
@property (assign) int guidedFilterHeight;                                                     //@synthesize guidedFilterHeight=_guidedFilterHeight - In the implementation block
@property (assign) int rawShiftInvalidThreshold;                                               //@synthesize rawShiftInvalidThreshold=_rawShiftInvalidThreshold - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)validateWithError:(id*)arg1 ;
-(unsigned long long)outputDisparityPixelBufferWidth;
-(unsigned long long)outputDisparityPixelBufferHeight;
-(void)setColorPixelBufferWidth:(unsigned long long)arg1 ;
-(void)setColorPixelBufferHeight:(unsigned long long)arg1 ;
-(void)setAlphaMattePixelBufferWidth:(unsigned long long)arg1 ;
-(void)setAlphaMattePixelBufferHeight:(unsigned long long)arg1 ;
-(void)setInputDisparityPixelBufferWidth:(unsigned long long)arg1 ;
-(void)setInputDisparityPixelBufferHeight:(unsigned long long)arg1 ;
-(void)setFocusStatisticsXTileCount:(unsigned long long)arg1 ;
-(void)setFocusStatisticsYTileCount:(unsigned long long)arg1 ;
-(void)setColorPixelBufferFocalLength_mm:(float)arg1 ;
-(void)setColorPixelBufferPixelSize_um:(float)arg1 ;
-(void)setColorPixelBufferFocalRatio:(float)arg1 ;
-(float)deltaCanonicalDisparity;
-(void)setRelightDisplayMode:(int)arg1 ;
-(float)portraitStyleStrengthOverride;
-(NSDictionary *)faceKitProcessOutputOverride;
-(unsigned long long)videoPipelineDevice;
-(int)relightDisplayMode;
-(int)rawShiftInvalidThreshold;
-(float)focusThresholdHardness;
-(float)renderingDisparityUpdateRate;
-(float)fNumberMultiplier;
-(BOOL)modulateFocalRatio;
-(float)unstableInvalidDisparityRatio;
-(float)stableInvalidDisparityRatio;
-(float)unstableBackgroundDisparitySumVariance;
-(float)stableBackgroundDisparitySumVariance;
-(float)luxMultiplierNoiseBitCalculation;
-(float)gainMultiplierNoiseBitCalculation;
-(float)offsetNoiseBitCalculation;
-(NSArray *)supportedInputSegmentationPixelBufferPixelFormats;
-(float)focusUpdateRateSlow;
-(int)maxFramesWithoutFace;
-(float)focusUpdateRateFast;
-(float)depthPixelBufferOffset;
-(float)depthPixelBufferScale;
-(float)focusDistanceOverride;
-(int)depthErosionRadius;
-(int)segmentationBinarizationThreshold;
-(float)disparityStereoBaselineMeters;
-(float)disparityStereoFocalLengthPixels;
-(unsigned)colorPixelBufferPixelFormat;
-(unsigned long long)colorPixelBufferHeight;
-(unsigned long long)colorPixelBufferWidth;
-(unsigned)alphaMattePixelBufferPixelFormat;
-(unsigned long long)alphaMattePixelBufferHeight;
-(unsigned long long)alphaMattePixelBufferWidth;
-(unsigned)outputDisparityPixelBufferPixelFormat;
-(unsigned)inputDisparityPixelBufferPixelFormat;
-(unsigned long long)inputDisparityPixelBufferHeight;
-(unsigned long long)inputDisparityPixelBufferWidth;
-(float)faceSizeRatioInFocus;
-(float)alphaGammaExponent;
-(float)alphaCoeffFilterColorStdFast;
-(float)alphaCoeffFilterColorStd;
-(float)mattingUpdateRateFast;
-(float)mattingUpdateRate;
-(float)infConvolutionDownsampling;
-(float)foregroundMaskDilationRadius;
-(int)disparityPushingBackgroundToForegroundDisparityDifference;
-(int)maxDistToPushDisparityEdgesRev;
-(int)maxDistToPushDisparityEdgesFwd;
-(float)maxDisparityFillingDistFromForeground;
-(float)maxDisparityFillingInconsistency;
-(float)maximumSimilarityToKeepDisparity;
-(float)minimumConfidenceToKeepDisparity;
-(float)disparityFilterUpdateRate;
-(float)disparityFilterColorStd;
-(float)alphaContrastExponent;
-(float)alphaMaxLaplacian;
-(float)referenceDisparity;
-(float)guidedFilterMinDistToDeweight;
-(float)guidedFilterUnconfidentWeight;
-(float)deltaDepth;
-(float)closeDisparityPercentile;
-(float)foregroundPercentile;
-(int)depthPixelBufferYPadding;
-(int)depthPixelBufferXPadding;
-(float)dsCanonicalHighScale;
-(float)dsCanonicalHighThld;
-(float)dsCanonicalLowScale;
-(float)dsCanonicalLowThld;
-(float)maxDeltaCanonicalDisparity;
-(float)minDeltaCanonicalDisparity;
-(int)backgroundDisparityStatsWindowSize;
-(float)backgroundDisparityUpdateRate;
-(void)setDepthPixelBufferXPadding:(int)arg1 ;
-(void)setDepthPixelBufferYPadding:(int)arg1 ;
-(int)depthPixelBufferXReplication;
-(void)setDepthPixelBufferXReplication:(int)arg1 ;
-(int)depthPixelBufferYReplication;
-(void)setDepthPixelBufferYReplication:(int)arg1 ;
-(void)setDepthPixelBufferScale:(float)arg1 ;
-(void)setDepthPixelBufferOffset:(float)arg1 ;
-(void)setDisparityStereoFocalLengthPixels:(float)arg1 ;
-(void)setDisparityStereoBaselineMeters:(float)arg1 ;
-(float)depthPixelBufferMaxLeftOcclusionDisparityChange;
-(void)setDepthPixelBufferMaxLeftOcclusionDisparityChange:(float)arg1 ;
-(float)depthPixelBufferMaxRightOcclusionDisparityChange;
-(void)setDepthPixelBufferMaxRightOcclusionDisparityChange:(float)arg1 ;
-(void)setBackgroundDisparityUpdateRate:(float)arg1 ;
-(float)invalidDisparityRatioUpdateRate;
-(void)setInvalidDisparityRatioUpdateRate:(float)arg1 ;
-(void)setBackgroundDisparityStatsWindowSize:(int)arg1 ;
-(int)invalidDisparityRatioStatsWindowSize;
-(void)setInvalidDisparityRatioStatsWindowSize:(int)arg1 ;
-(void)setMinDeltaCanonicalDisparity:(float)arg1 ;
-(void)setMaxDeltaCanonicalDisparity:(float)arg1 ;
-(float)centerDeltaCanonicalDisparity;
-(void)setCenterDeltaCanonicalDisparity:(float)arg1 ;
-(void)setDsCanonicalLowThld:(float)arg1 ;
-(void)setDsCanonicalLowScale:(float)arg1 ;
-(void)setDsCanonicalHighThld:(float)arg1 ;
-(float)linearDeltaDepthMultiplier;
-(void)setLinearDeltaDepthMultiplier:(float)arg1 ;
-(float)linearDeltaDepthOffset;
-(void)setLinearDeltaDepthOffset:(float)arg1 ;
-(void)setDsCanonicalHighScale:(float)arg1 ;
-(void)setForegroundPercentile:(float)arg1 ;
-(void)setCloseDisparityPercentile:(float)arg1 ;
-(void)setDeltaDepth:(float)arg1 ;
-(void)setMattingUpdateRate:(float)arg1 ;
-(void)setMattingUpdateRateFast:(float)arg1 ;
-(void)setGuidedFilterUnconfidentWeight:(float)arg1 ;
-(void)setGuidedFilterMinDistToDeweight:(float)arg1 ;
-(void)setReferenceDisparity:(float)arg1 ;
-(void)setDeltaCanonicalDisparity:(float)arg1 ;
-(void)setAlphaCoeffFilterColorStd:(float)arg1 ;
-(void)setAlphaCoeffFilterColorStdFast:(float)arg1 ;
-(void)setAlphaMaxLaplacian:(float)arg1 ;
-(void)setAlphaContrastExponent:(float)arg1 ;
-(void)setAlphaGammaExponent:(float)arg1 ;
-(void)setDisparityFilterColorStd:(float)arg1 ;
-(void)setDisparityFilterUpdateRate:(float)arg1 ;
-(void)setMinimumConfidenceToKeepDisparity:(float)arg1 ;
-(void)setMaximumSimilarityToKeepDisparity:(float)arg1 ;
-(void)setMaxDisparityFillingInconsistency:(float)arg1 ;
-(void)setMaxDisparityFillingDistFromForeground:(float)arg1 ;
-(void)setMaxDistToPushDisparityEdgesFwd:(int)arg1 ;
-(void)setMaxDistToPushDisparityEdgesRev:(int)arg1 ;
-(void)setDisparityPushingBackgroundToForegroundDisparityDifference:(int)arg1 ;
-(void)setRenderingDisparityUpdateRate:(float)arg1 ;
-(float)renderingDisparityBlurRadius;
-(void)setRenderingDisparityBlurRadius:(float)arg1 ;
-(void)setOffsetNoiseBitCalculation:(float)arg1 ;
-(void)setGainMultiplierNoiseBitCalculation:(float)arg1 ;
-(void)setLuxMultiplierNoiseBitCalculation:(float)arg1 ;
-(float)renderingLensFocalLength;
-(void)setRenderingLensFocalLength:(float)arg1 ;
-(void)setFNumberMultiplier:(float)arg1 ;
-(void)setFocusThresholdHardness:(float)arg1 ;
-(void)setFocusUpdateRateSlow:(float)arg1 ;
-(void)setFocusUpdateRateFast:(float)arg1 ;
-(void)setMaxFramesWithoutFace:(int)arg1 ;
-(void)setFaceSizeRatioInFocus:(float)arg1 ;
-(void)setForegroundMaskDilationRadius:(float)arg1 ;
-(void)setInfConvolutionDownsampling:(float)arg1 ;
-(float)laplacianLimitingDownsampling;
-(void)setLaplacianLimitingDownsampling:(float)arg1 ;
-(float)laplacianLimitingBlurSize;
-(void)setLaplacianLimitingBlurSize:(float)arg1 ;
-(void)setFaceKitProcessOutputOverride:(NSDictionary *)arg1 ;
-(float)relightEffectStrength;
-(void)setRelightEffectStrength:(float)arg1 ;
-(void)setPortraitStyleStrengthOverride:(float)arg1 ;
-(void)setFocusDistanceOverride:(float)arg1 ;
-(float)stageLightStateMachineIntensityIncrement;
-(void)setStageLightStateMachineIntensityIncrement:(float)arg1 ;
-(double)stageLightStageMachineMaxOrientationDifference;
-(void)setStageLightStageMachineMaxOrientationDifference:(double)arg1 ;
-(float)sdofStateMachineIntensityIncrement;
-(void)setSdofStateMachineIntensityIncrement:(float)arg1 ;
-(double)sdofStateMachineMaxOrientationDifference;
-(void)setSdofStateMachineMaxOrientationDifference:(double)arg1 ;
-(void)setModulateFocalRatio:(BOOL)arg1 ;
-(void)setStableBackgroundDisparitySumVariance:(float)arg1 ;
-(void)setUnstableBackgroundDisparitySumVariance:(float)arg1 ;
-(void)setStableInvalidDisparityRatio:(float)arg1 ;
-(void)setUnstableInvalidDisparityRatio:(float)arg1 ;
-(float)backgroundSeparationLikelihoodLow;
-(void)setBackgroundSeparationLikelihoodLow:(float)arg1 ;
-(float)backgroundSeparationLikelihoodHigh;
-(void)setBackgroundSeparationLikelihoodHigh:(float)arg1 ;
-(float)depthQualityMetricFocalPlaneOffsetMeters;
-(void)setDepthQualityMetricFocalPlaneOffsetMeters:(float)arg1 ;
-(int)guidedFilterWidth;
-(void)setGuidedFilterWidth:(int)arg1 ;
-(int)guidedFilterHeight;
-(void)setGuidedFilterHeight:(int)arg1 ;
-(unsigned long long)focusStatisticsXTileCount;
-(unsigned long long)focusStatisticsYTileCount;
-(unsigned long long)proxyToFaceEffectLerpNumFrames;
-(void)setProxyToFaceEffectLerpNumFrames:(unsigned long long)arg1 ;
-(void)setRawShiftInvalidThreshold:(int)arg1 ;
-(void)setSegmentationBinarizationThreshold:(int)arg1 ;
-(void)setDepthErosionRadius:(int)arg1 ;
-(float)colorPixelBufferFocalLength_mm;
-(float)colorPixelBufferPixelSize_um;
-(float)colorPixelBufferFocalRatio;
-(void)setOutputDisparityPixelBufferWidth:(unsigned long long)arg1 ;
-(void)setOutputDisparityPixelBufferHeight:(unsigned long long)arg1 ;
-(unsigned long long)inputToOutputDisparityPixelBufferRotation;
-(void)setInputToOutputDisparityPixelBufferRotation:(unsigned long long)arg1 ;
-(id)initForVideoPipelineDevice:(unsigned long long)arg1 ;
@end

