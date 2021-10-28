/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIAreaRedCentroid.h>

@class CIImage, NSNumber;

@interface CIAreaRedRadialCentroid : CIAreaRedCentroid {

	CIImage* inputCenter;
	NSNumber* inputRadius;
	NSNumber* inputRadialMode;
	NSNumber* inputMinWeight;

}

@property (nonatomic,retain) CIImage * inputCenter; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputRadialMode; 
@property (nonatomic,retain) NSNumber * inputMinWeight; 
+(id)customAttributes;
-(id)outputImage;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(CIImage *)inputCenter;
-(void)setInputCenter:(CIImage *)arg1 ;
-(id)_kernelCenter;
-(id)_kernelDisk;
-(id)_kernelGaussian;
-(NSNumber *)inputRadialMode;
-(void)setInputRadialMode:(NSNumber *)arg1 ;
-(NSNumber *)inputMinWeight;
-(void)setInputMinWeight:(NSNumber *)arg1 ;
@end
