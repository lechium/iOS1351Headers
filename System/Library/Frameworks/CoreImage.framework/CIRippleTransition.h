/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIRippleTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIImage* inputShadingImage;
	CIVector* inputCenter;
	CIVector* inputExtent;
	NSNumber* inputTime;
	NSNumber* inputWidth;
	NSNumber* inputScale;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CIRippleTransition;
@end

