/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RawCamera/RAWFilter.h>

@class CIImage, CIVector, NSNumber;

@interface RAWRadialLensCorrectionRB : RAWFilter {

	CIImage* inputImage;
	CIVector* inputScalesR;
	CIVector* inputScalesB;
	id inputColorSpace;
	NSNumber* inputDraftMode;
	NSNumber* inputLDCExecuteFlags;
	NSNumber* inputVersion;
	CIImage* mapImg;

}
+(id)customAttributes;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)outputImage;
-(BOOL)makeMapImages;
@end
