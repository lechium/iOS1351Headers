/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIEdgePreserveUpsampleFilter : CIFilter {

	CIImage* inputImage;
	CIImage* inputSmallImage;
	NSNumber* inputSpatialSigma;
	NSNumber* inputLumaSigma;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputSmallImage; 
@property (nonatomic,retain) NSNumber * inputSpatialSigma; 
@property (nonatomic,retain) NSNumber * inputLumaSigma; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_kernelGuideMono;
-(id)_kernelGuideCombine;
-(id)_kernelJointUpsamp;
-(id)_kernelJointUpsampRG;
-(id)_kernelGuideCombine4;
-(CIImage *)inputSmallImage;
-(void)setInputSmallImage:(CIImage *)arg1 ;
-(NSNumber *)inputSpatialSigma;
-(void)setInputSpatialSigma:(NSNumber *)arg1 ;
-(NSNumber *)inputLumaSigma;
-(void)setInputLumaSigma:(NSNumber *)arg1 ;
@end

