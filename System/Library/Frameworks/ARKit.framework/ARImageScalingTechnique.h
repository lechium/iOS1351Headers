/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>

@interface ARImageScalingTechnique : ARTechnique {

	OpaqueVTPixelTransferSessionRef _vtPixelTransferSession;
	CVPixelBufferPoolRef _scaledPixelBufferPool;
	BOOL _shouldUseScaleFactor;
	unsigned char _downscaleFactor;
	unsigned _conversionPixelFormatType;
	CGSize _scaledSize;

}

@property (nonatomic,readonly) CGSize scaledSize;                             //@synthesize scaledSize=_scaledSize - In the implementation block
@property (assign,nonatomic) unsigned conversionPixelFormatType;              //@synthesize conversionPixelFormatType=_conversionPixelFormatType - In the implementation block
@property (nonatomic,readonly) unsigned char downscaleFactor;                 //@synthesize downscaleFactor=_downscaleFactor - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(CGSize)scaledSize;
-(id)processData:(id)arg1 ;
-(unsigned long long)requiredSensorDataTypes;
-(id)initWithScaledSize:(CGSize)arg1 ;
-(void)setConversionPixelFormatType:(unsigned)arg1 ;
-(unsigned char)downscaleFactor;
-(id)initWithDownscaleFactor:(unsigned char)arg1 ;
-(unsigned)conversionPixelFormatType;
@end

