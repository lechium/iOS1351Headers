/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Vision/Vision-Structs.h>
@class MetalInterface, CCCharBoxContext, NSString;

@interface CCTextDetector : NSObject {

	int _getFilter_callCount;
	MetalInterface* _metalInterface;
	unsigned long long _requestRevision;
	BOOL _computeZCVectorHighProbability;
	unsigned char _ii;
	unsigned char _profileNormal;
	BOOL _debugMatlab;
	BOOL _debugOut;
	int _midRow;
	unsigned _minHeight;
	unsigned _maxHeight;
	unsigned _startMaxFind;
	unsigned _stopMaxFind;
	float _mmHeightCard;
	float _mmWidthCard;
	unsigned _pixelHeightCard;
	unsigned _pixelWidthCard;
	unsigned _minBoxWidth;
	unsigned _maxBoxWidth;
	unsigned _startNormal;
	unsigned _stopNormal;
	unsigned _startSensitized;
	unsigned _stopSensitized;
	CCCharBoxContext* _charBoxContext;
	NSString* _debugFilename;

}

@property (assign) BOOL computeZCVectorHighProbability;              //@synthesize computeZCVectorHighProbability=_computeZCVectorHighProbability - In the implementation block
@property (assign) int midRow;                                       //@synthesize midRow=_midRow - In the implementation block
@property (assign) unsigned minHeight;                               //@synthesize minHeight=_minHeight - In the implementation block
@property (assign) unsigned maxHeight;                               //@synthesize maxHeight=_maxHeight - In the implementation block
@property (assign) unsigned startMaxFind;                            //@synthesize startMaxFind=_startMaxFind - In the implementation block
@property (assign) unsigned stopMaxFind;                             //@synthesize stopMaxFind=_stopMaxFind - In the implementation block
@property (assign) float mmHeightCard;                               //@synthesize mmHeightCard=_mmHeightCard - In the implementation block
@property (assign) float mmWidthCard;                                //@synthesize mmWidthCard=_mmWidthCard - In the implementation block
@property (assign) unsigned pixelHeightCard;                         //@synthesize pixelHeightCard=_pixelHeightCard - In the implementation block
@property (assign) unsigned pixelWidthCard;                          //@synthesize pixelWidthCard=_pixelWidthCard - In the implementation block
@property (assign) unsigned minBoxWidth;                             //@synthesize minBoxWidth=_minBoxWidth - In the implementation block
@property (assign) unsigned maxBoxWidth;                             //@synthesize maxBoxWidth=_maxBoxWidth - In the implementation block
@property (assign) unsigned startNormal;                             //@synthesize startNormal=_startNormal - In the implementation block
@property (assign) unsigned stopNormal;                              //@synthesize stopNormal=_stopNormal - In the implementation block
@property (assign) unsigned startSensitized;                         //@synthesize startSensitized=_startSensitized - In the implementation block
@property (assign) unsigned stopSensitized;                          //@synthesize stopSensitized=_stopSensitized - In the implementation block
@property (retain) CCCharBoxContext * charBoxContext;                //@synthesize charBoxContext=_charBoxContext - In the implementation block
@property (assign) unsigned char ii;                                 //@synthesize ii=_ii - In the implementation block
@property (assign) unsigned char profileNormal;                      //@synthesize profileNormal=_profileNormal - In the implementation block
@property (assign) BOOL debugMatlab;                                 //@synthesize debugMatlab=_debugMatlab - In the implementation block
@property (assign) BOOL debugOut;                                    //@synthesize debugOut=_debugOut - In the implementation block
@property (copy) NSString * debugFilename;                           //@synthesize debugFilename=_debugFilename - In the implementation block
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(unsigned)minHeight;
-(void)setMinHeight:(unsigned)arg1 ;
-(unsigned)maxHeight;
-(void)setMaxHeight:(unsigned)arg1 ;
-(void)initializeForImage:(vImage_Buffer*)arg1 ;
-(int)_allocateVImageWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 rowBytes:(unsigned long long)arg3 imageOut:(vImage_Buffer*)arg4 ;
-(void)_freeVImage:(vImage_Buffer*)arg1 ;
-(int)_generateVotingImage:(vImage_Buffer*)arg1 votingImage:(vImage_Buffer*)arg2 useLowLightEnhancement:(char*)arg3 ;
-(void)examinePulseWindow:(unsigned short)arg1 prodBoostNormalized:(float*)arg2 pwContext:(_CCPulseWindowContext*)arg3 minHeight:(unsigned char)arg4 maxHeight:(unsigned char)arg5 thresholdSet:(ThresholdSet_t)arg6 ;
-(int)generatePulses:(unsigned short)arg1 minHeight:(unsigned char)arg2 maxHeight:(unsigned char)arg3 thresholdSet:(ThresholdSet_t)arg4 prodBoostNormalized:(float*)arg5 pulseVectorFlag:(unsigned long long)arg6 ;
-(void)_computeColumnSumsOverRange:(_CCRange*)arg1 sampleImageAddress:(char*)arg2 rowSumOut:(int*)arg3 rowDerivOut:(int*)arg4 ;
-(int)_allocateSumDerivVectors:(_CCSumDerivVectors*)arg1 size:(int)arg2 ;
-(void)_freeSumDerivVectors:(_CCSumDerivVectors*)arg1 ;
-(void)_computeProdBoostNormalizedResult:(_CCSumDerivVectors*)arg1 size:(int)arg2 binOverride:(unsigned char)arg3 ;
-(int)_getFilterResultOutBothSumDeriv:(unsigned char)arg1 floatVectorResult:(float*)arg2 bufferHeight:(unsigned short)arg3 minHeight:(unsigned char)arg4 maxHeight:(unsigned char)arg5 config:(_CCFilterSumDerivConfig*)arg6 bytesPerRow:(unsigned short)arg7 thresholdSet:(ThresholdSet_t)arg8 sampleImageAddressRef:(char*)arg9 ;
-(int)_getFilterResultOut:(float*)arg1 defaultRows:(unsigned short)arg2 bufferHeight:(unsigned short)arg3 minHeight:(unsigned char)arg4 maxHeight:(unsigned char)arg5 startRange:(unsigned short)arg6 stopRange:(unsigned short)arg7 startMaxFind:(unsigned)arg8 stopMaxFind:(unsigned)arg9 bytesPerRow:(unsigned short)arg10 thresholdSet:(ThresholdSet_t)arg11 sampleImageAddressRef:(char*)arg12 sampleImageFloatAddressRef:(float*)arg13 pulseVectorFlag:(unsigned long long)arg14 ;
-(void)_generatePulseAggregate:(unsigned long long)arg1 pulseVectorMain:(unsigned long long)arg2 pulseVectorResult:(unsigned long long)arg3 metricSelection:(unsigned char)arg4 bufferHeight:(unsigned short)arg5 bufferWidth:(unsigned short)arg6 ;
-(void)_generatePulseAggregateSmallStubs:(unsigned long long)arg1 pulseVectorResult:(unsigned long long)arg2 bufferHeight:(unsigned short)arg3 bufferWidth:(unsigned short)arg4 ;
-(void)generateDominantPulse:(unsigned long long)arg1 rowLocationsRef:(unsigned short*)arg2 debugOut:(unsigned char)arg3 bufferHeight:(unsigned short)arg4 bufferWidth:(unsigned short)arg5 ;
-(int)generateHistogramBounds:(_rgbaColor*)arg1 rgbVector2Ref:(_rgbaColor*)arg2 numPixels1:(unsigned)arg3 numPixels2:(unsigned)arg4 minMaxRGB:(_rgbMinMaxU8*)arg5 lowHighRGB:(_rgbMinMaxFloat*)arg6 ;
-(unsigned)_generateBinarizationForImage:(vImage_Buffer*)arg1 textOut:(vImage_Buffer*)arg2 firstOrSecondPassIndicator:(unsigned char)arg3 minMaxRGB:(_rgbMinMaxFloat*)arg4 ;
-(float)createLumaImage:(vImage_Buffer*)arg1 lumaImage:(vImage_Buffer*)arg2 numCropRows:(unsigned short)arg3 rowStartLocation:(unsigned short)arg4 ;
-(float)createLumaImageAlternative:(vImage_Buffer*)arg1 lumaImageAlternative:(vImage_Buffer*)arg2 numCropRows:(unsigned short)arg3 rowStartLocation:(unsigned short)arg4 ;
-(void)getVotingHistogram:(vImage_Buffer*)arg1 colorProfileContext:(_CCColorProfileContext*)arg2 startCC:(unsigned short)arg3 rowStartLocation:(unsigned short)arg4 ;
-(void)getLumaHistogram:(vImage_Buffer*)arg1 startCC:(unsigned short)arg2 colorProfileContext:(_CCColorProfileContext*)arg3 ;
-(unsigned short)computeNumCropCols:(float*)arg1 width:(unsigned long long)arg2 start:(unsigned short*)arg3 ;
-(int)computeMainStub:(vImage_Buffer*)arg1 numCropRows:(unsigned short)arg2 numCropColsOut:(unsigned short*)arg3 maxY:(float)arg4 start:(unsigned short*)arg5 ;
-(void)determineColorProfileType:(_CCColorProfileContext*)arg1 ;
-(int)allocateColorProfileContext:(_CCColorProfileContext*)arg1 width:(unsigned short)arg2 height:(unsigned short)arg3 rowBytes:(unsigned long long)arg4 ;
-(void)freeColorProfileContext:(_CCColorProfileContext*)arg1 ;
-(int)_generateAndApplyColorProfileForImage:(vImage_Buffer*)arg1 votingImage:(vImage_Buffer*)arg2 textOut:(vImage_Buffer*)arg3 minMaxRGB:(_rgbMinMaxU8*)arg4 lowHighRGB:(_rgbMinMaxFloat*)arg5 numCropRows:(unsigned short)arg6 rowStartLocation:(unsigned short)arg7 rowStopLocation:(unsigned short)arg8 sumTextOutFirstPass:(unsigned*)arg9 useLowLightEnhancement:(unsigned char)arg10 ;
-(int)_generateAdaptiveBinarization:(vImage_Buffer*)arg1 adaptImage:(vImage_Buffer*)arg2 useLowLightEnhancement:(unsigned char)arg3 ;
-(int)_generateSmoothedImage:(vImage_Buffer*)arg1 uImage:(vImage_Buffer*)arg2 ;
-(int)_generateBoxes:(id)arg1 pulseVector:(unsigned long long)arg2 uImage:(vImage_Buffer*)arg3 countBigBoxOut:(unsigned long long*)arg4 bigBoxes:(_CCBigBox*)arg5 bigBoxesA:(_CCBigBox*)arg6 useLowLightEnhancement:(unsigned char)arg7 ;
-(void)_generateCC:(id)arg1 ccBigBoxes:(_CCBigBox*)arg2 textOut:(vImage_Buffer*)arg3 countBigBox:(unsigned char)arg4 bufferHeight:(unsigned short)arg5 ;
-(void)groupEndpoints:(_CCBox*)arg1 finalCharBoxCoordCount:(unsigned long long*)arg2 ;
-(void)computeIndependentTopAndBottomComponents:(_CCBox*)arg1 finalCharBoxCoordCount:(unsigned long long*)arg2 ;
-(int)computeDependentTopAndBottomComponents:(_CCBox*)arg1 finalCharBoxCoordCount:(unsigned long long*)arg2 ;
-(int)_generateCRCharBoxInformation_TrackBox:(_CCBox*)arg1 finalCharBoxCoordCount:(unsigned long long*)arg2 ;
-(int)computePulseVectorSum:(char*)arg1 start:(unsigned short)arg2 stop:(unsigned short)arg3 imageHeight:(unsigned long long)arg4 imageWidth:(unsigned long long)arg5 bottomHeight:(unsigned short)arg6 topHeight:(unsigned short)arg7 ;
-(_CCRange)tightenBox:(vImage_Buffer*)arg1 startTop:(unsigned short)arg2 startBottom:(unsigned short)arg3 startPosition:(unsigned short)arg4 stopPosition:(unsigned short)arg5 imageHeight:(unsigned long long)arg6 halfWalk:(unsigned short)arg7 ;
-(void)_generateCRCharBoxInformation_spaceBoxRemovalTightenBox:(vImage_Buffer*)arg1 singleVotingImageAddressRef:(char*)arg2 adaptOut:(vImage_Buffer*)arg3 textOut:(vImage_Buffer*)arg4 zcStartLeft:(unsigned short)arg5 zcStopRight:(unsigned short)arg6 finalCoordinatesForStub:(_CCBox*)arg7 finalCoordinatesForStubRevised:(_CCBox*)arg8 finalCharBoxCoordCount:(unsigned long long*)arg9 useLowLightEnhancement:(unsigned char)arg10 ;
-(void)_generateCRCharBoxInformation_spaceBoxRemovalTruthFilter:(float*)arg1 magicThresh:(float*)arg2 zcStartLeft:(unsigned short)arg3 zcStopRight:(unsigned short)arg4 isSpaceBoxAccepted:(BOOL*)arg5 histCompliancePercent:(float*)arg6 useLowLightEnhancement:(unsigned char)arg7 ;
-(void)_generateCRCharBoxInformation_spaceBoxRemovalHistogram:(vImage_Buffer*)arg1 zcStartLeft:(unsigned short)arg2 zcStopRight:(unsigned short)arg3 rowStartLocation2:(unsigned short)arg4 lowHighRGB:(_rgbMinMaxFloat*)arg5 histCompliancePercent:(float*)arg6 varSpaceBox:(float*)arg7 ;
-(int)_generateCRCharBoxInformation_spaceBoxRemovalMagicThresh:(vImage_Buffer*)arg1 magicMinHeight:(float)arg2 magicMaxHeight:(float)arg3 rowStartLocation2:(unsigned short)arg4 magicThresh:(float*)arg5 magicThreshPrev:(float*)arg6 useLowLightEnhancement:(unsigned char)arg7 ;
-(unsigned)_extractCharBoxCuts:(_CCBigBox*)arg1 heightConstraint:(unsigned char)arg2 medianHeightTopVector:(unsigned short*)arg3 medianHeightBottomVector:(unsigned short*)arg4 isAdaptive:(BOOL)arg5 ;
-(void)_generateFilteredPulseVector:(unsigned long long)arg1 target:(unsigned long long)arg2 height:(unsigned long long)arg3 ;
-(void)_generateZeroCrossingVector:(unsigned long long)arg1 zcVectorFlag:(unsigned long long)arg2 width:(unsigned long long)arg3 ;
-(void)calculateSumProd:(vImage_Buffer*)arg1 prodROIRef:(float*)arg2 prodROIRotateRef:(float*)arg3 rowStartLocation2:(unsigned short)arg4 height:(unsigned short)arg5 ;
-(void)calculateSumProdAlternative:(vImage_Buffer*)arg1 prodROIRef:(float*)arg2 prodROIRotateRef:(float*)arg3 rowStartLocation2:(unsigned short)arg4 height:(unsigned short)arg5 ;
-(void)extractCharBoxHeightInfo:(_CCCharBox*)arg1 ccCharBoxesFiltered:(_CCCharBox*)arg2 ccYTopLocationsForSort:(unsigned short*)arg3 ccYBottomLocationsForSort:(unsigned short*)arg4 aggregateGreenBoxesForStubCount:(unsigned short)arg5 imageWidth:(unsigned short)arg6 ;
-(unsigned short)charBoxesFromTextBoxes:(_CCCharBox*)arg1 bigBoxes:(_CCBigBox*)arg2 ccYTopLocationsForSort:(unsigned short*)arg3 ccYBottomLocationsForSort:(unsigned short*)arg4 ;
-(int)extractBoxesForStub:(_CCBigBox*)arg1 bigBoxesAdapt:(_CCBigBox*)arg2 countBigBox:(unsigned char)arg3 rowStartLocation2:(unsigned short)arg4 rowStopLocation2:(unsigned short)arg5 heightConstraint:(unsigned char)arg6 imageWidth:(unsigned short)arg7 height:(unsigned short)arg8 ccCharBoxesAggr:(_CCCharBox*)arg9 ccCharBoxesFiltered:(_CCCharBox*)arg10 useLowLightEnhancement:(unsigned char)arg11 ;
-(int)_generateCRCharBoxInformation_zcFinalVectorOriginate:(vImage_Buffer*)arg1 textOut:(vImage_Buffer*)arg2 adaptOut:(vImage_Buffer*)arg3 bigBoxes:(_CCBigBox*)arg4 bigBoxesAdapt:(_CCBigBox*)arg5 ccCharBoxesAggr:(_CCCharBox*)arg6 ccCharBoxesFiltered:(_CCCharBox*)arg7 height:(unsigned short)arg8 rowStartLocation2:(unsigned short)arg9 rowStopLocation2:(unsigned short)arg10 singleVotingImageAddressRef:(char*)arg11 countBigBox:(unsigned char)arg12 filterWalkUpDownCount:(unsigned short*)arg13 useLowLightEnhancement:(unsigned char)arg14 ;
-(int)_generateCRCharBoxInformation_zcFinalVectorHighProbability:(vImage_Buffer*)arg1 zcFinalRange:(unsigned short)arg2 ;
-(void)fillInOneVector:(vImage_Buffer*)arg1 checkFlag:(unsigned long long)arg2 checkHeight:(BOOL)arg3 ;
-(void)_generateCRCharBoxInformation_zcFinalVectorFillIn:(vImage_Buffer*)arg1 ;
-(int)_allocateCRCharBoxContext:(unsigned long long)arg1 ;
-(void)_freeCRCharBoxContext;
-(int)_generateCRCharBoxInformation_extendTextBoxes:(_CCBigBox*)arg1 countBigBox:(unsigned char)arg2 rowStartLocation2:(unsigned short)arg3 finalCharBoxCoordCount:(unsigned long long)arg4 finalCoordinatesForStubRevised:(_CCBox*)arg5 width:(unsigned long long)arg6 height:(unsigned short)arg7 bigBoxIndicator:(char*)arg8 ;
-(int)_generateCRCharBoxInformation:(id)arg1 inputImage:(vImage_Buffer*)arg2 singleVotingImageAddressRef:(char*)arg3 bigBoxes:(_CCBigBox*)arg4 bigBoxesAdapt:(_CCBigBox*)arg5 textOut:(vImage_Buffer*)arg6 adaptOut:(vImage_Buffer*)arg7 lowHighRGB:(_rgbMinMaxFloat*)arg8 countBigBox:(unsigned char)arg9 useLowLightEnhancement:(unsigned char)arg10 ;
-(int)_generatePulseVectorOutputs:(vImage_Buffer*)arg1 votingImage:(vImage_Buffer*)arg2 rowLocationsRef:(unsigned short*)arg3 ;
-(id)textBoxesForBuffer:(vImage_Buffer*)arg1 error:(id*)arg2 ;
-(id)textBoxesForImage:(id)arg1 error:(id*)arg2 ;
-(CCCharBoxContext *)charBoxContext;
-(void)setCharBoxContext:(CCCharBoxContext *)arg1 ;
-(BOOL)computeZCVectorHighProbability;
-(void)setComputeZCVectorHighProbability:(BOOL)arg1 ;
-(int)midRow;
-(void)setMidRow:(int)arg1 ;
-(unsigned)startMaxFind;
-(void)setStartMaxFind:(unsigned)arg1 ;
-(unsigned)stopMaxFind;
-(void)setStopMaxFind:(unsigned)arg1 ;
-(float)mmHeightCard;
-(void)setMmHeightCard:(float)arg1 ;
-(float)mmWidthCard;
-(void)setMmWidthCard:(float)arg1 ;
-(unsigned)pixelHeightCard;
-(void)setPixelHeightCard:(unsigned)arg1 ;
-(unsigned)pixelWidthCard;
-(void)setPixelWidthCard:(unsigned)arg1 ;
-(unsigned)minBoxWidth;
-(void)setMinBoxWidth:(unsigned)arg1 ;
-(unsigned)maxBoxWidth;
-(void)setMaxBoxWidth:(unsigned)arg1 ;
-(unsigned)startNormal;
-(void)setStartNormal:(unsigned)arg1 ;
-(unsigned)stopNormal;
-(void)setStopNormal:(unsigned)arg1 ;
-(unsigned)startSensitized;
-(void)setStartSensitized:(unsigned)arg1 ;
-(unsigned)stopSensitized;
-(void)setStopSensitized:(unsigned)arg1 ;
-(unsigned char)ii;
-(void)setIi:(unsigned char)arg1 ;
-(unsigned char)profileNormal;
-(void)setProfileNormal:(unsigned char)arg1 ;
-(BOOL)debugMatlab;
-(void)setDebugMatlab:(BOOL)arg1 ;
-(BOOL)debugOut;
-(void)setDebugOut:(BOOL)arg1 ;
-(NSString *)debugFilename;
-(void)setDebugFilename:(NSString *)arg1 ;
@end
