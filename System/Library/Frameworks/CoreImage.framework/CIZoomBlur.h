/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIZoomBlur : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputAmount; 
+(id)customAttributes;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputAmount;
-(void)setInputAmount:(NSNumber *)arg1 ;
-(BOOL)_isIdentity;
-(CIVector *)inputCenter;
-(void)setInputCenter:(CIVector *)arg1 ;
-(id)_kernelNew;
-(id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3 ;
@end

