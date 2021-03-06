/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIVector, NSNumber, CIColor;

@interface CIRadialGradient : CIFilter {

	CIVector* inputCenter;
	NSNumber* inputRadius0;
	NSNumber* inputRadius1;
	CIColor* inputColor0;
	CIColor* inputColor1;

}

@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputRadius0; 
@property (nonatomic,retain) NSNumber * inputRadius1; 
@property (nonatomic,retain) CIColor * inputColor0; 
@property (nonatomic,retain) CIColor * inputColor1; 
+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;
-(CIVector *)inputCenter;
-(void)setInputCenter:(CIVector *)arg1 ;
-(CIColor *)inputColor0;
-(void)setInputColor0:(CIColor *)arg1 ;
-(CIColor *)inputColor1;
-(void)setInputColor1:(CIColor *)arg1 ;
-(NSNumber *)inputRadius0;
-(void)setInputRadius0:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius1;
-(void)setInputRadius1:(NSNumber *)arg1 ;
@end

