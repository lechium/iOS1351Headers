/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CICMYKHalftone : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputWidth;
	NSNumber* inputAngle;
	NSNumber* inputSharpness;
	NSNumber* inputGCR;
	NSNumber* inputUCR;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CICMYK_convert;
-(id)_CIWhite;
-(id)_CICMYK_cyan;
-(id)_CICMYK_magenta;
-(id)_CICMYK_yellow;
-(id)_CICMYK_black;
@end
