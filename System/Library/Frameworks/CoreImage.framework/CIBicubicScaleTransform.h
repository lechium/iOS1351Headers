/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIBicubicScaleTransform : CIFilter {

	CIImage* inputImage;
	NSNumber* inputScale;
	NSNumber* inputAspectRatio;
	NSNumber* inputB;
	NSNumber* inputC;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) NSNumber * inputAspectRatio; 
@property (nonatomic,retain) NSNumber * inputB; 
@property (nonatomic,retain) NSNumber * inputC; 
+(id)customAttributes;
-(vec2)_scale;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(BOOL)_isIdentity;
-(NSNumber *)inputAspectRatio;
-(void)setInputAspectRatio:(NSNumber *)arg1 ;
-(NSNumber *)inputB;
-(void)setInputB:(NSNumber *)arg1 ;
-(NSNumber *)inputC;
-(void)setInputC:(NSNumber *)arg1 ;
@end

