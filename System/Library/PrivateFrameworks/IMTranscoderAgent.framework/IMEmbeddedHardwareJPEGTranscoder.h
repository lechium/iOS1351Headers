/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IMTranscoderAgent/IMTranscoderAgent-Structs.h>
@class NSData;

@interface IMEmbeddedHardwareJPEGTranscoder : NSObject {

	IOSurfaceRef _ioSurfaceRef;
	NSData* _imageData;
	CFDictionaryRef _imageProperties;
	BOOL _canHardwareScaleImage;
	BOOL _stripImageMetadata;
	double _targetJPEGCompressionValue;

}

@property (assign,nonatomic) double targetJPEGCompressionValue;              //@synthesize targetJPEGCompressionValue=_targetJPEGCompressionValue - In the implementation block
@property (assign,nonatomic) BOOL stripImageMetadata;                        //@synthesize stripImageMetadata=_stripImageMetadata - In the implementation block
-(void)dealloc;
-(id)initWithImageData:(id)arg1 imageSource:(CGImageSourceRef)arg2 ;
-(BOOL)_isJPEGImage:(CGImageSourceRef)arg1 ;
-(BOOL)_decodeImageToIOSurface;
-(double)targetJPEGCompressionValue;
-(BOOL)stripImageMetadata;
-(BOOL)scaleImageToFitLargestDimension:(id)arg1 outputData:(id*)arg2 ;
-(void)setTargetJPEGCompressionValue:(double)arg1 ;
-(void)setStripImageMetadata:(BOOL)arg1 ;
@end

