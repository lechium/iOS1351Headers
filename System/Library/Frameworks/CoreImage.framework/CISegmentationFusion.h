/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, NSDictionary;

@interface CISegmentationFusion : CIFilter {

	CIImage* inputImage;
	CIImage* inputMatteImage;
	CIVector* inputAddBlur;
	CIVector* inputRemoveBlur;
	NSNumber* inputApertureScaling;
	NSDictionary* inputTuningParameters;

}
+(id)customAttributes;
-(id)outputImage;
-(BOOL)_isIdentity;
-(id)kernel;
@end

