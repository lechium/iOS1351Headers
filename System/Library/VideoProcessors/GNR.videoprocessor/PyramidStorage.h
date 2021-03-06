/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLTexture;
#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
@interface PyramidStorage : NSObject {

	int levels;
	_CVBuffer* pixelBuffer[20];
	_CVBuffer* pixelBuffer2[20];
	id<MTLTexture> textureY[20];
	id<MTLTexture> textureUV[20];
	id<MTLTexture> textureY_RG[20];
	id<MTLTexture> textureUV_packed[20];
	BOOL isFP16[20];

}
+(int)pyramidMemorySize:(unsigned short)arg1 height:(unsigned short)arg2 overlapLevels:(BOOL)arg3 allocLevel0:(BOOL)arg4 levels:(unsigned char)arg5 lumaFormat:(unsigned long long)arg6 chromaFormat:(unsigned long long)arg7 outSize:(unsigned long long*)arg8 metal:(id)arg9 ;
+(int)allocatePyramidWithWidth:(unsigned short)arg1 height:(unsigned short)arg2 overlapLevels:(BOOL)arg3 allocLevel0:(BOOL)arg4 levels:(unsigned char)arg5 texUsage:(unsigned long long)arg6 scratchBuffer:(id)arg7 offset:(unsigned long long*)arg8 lumaFormat:(unsigned long long)arg9 chromaFormat:(unsigned long long)arg10 outPyramid:(id)arg11 metal:(id)arg12 ;
+(int)pyramidMemorySize:(unsigned short)arg1 height:(unsigned short)arg2 allocLevel0:(BOOL)arg3 levels:(unsigned char)arg4 lumaFormat:(unsigned long long)arg5 chromaFormat:(unsigned long long)arg6 outSize:(unsigned long long*)arg7 metal:(id)arg8 ;
+(int)overlappingLevelsMemorySize:(unsigned short)arg1 height:(unsigned short)arg2 allocLevel0:(BOOL)arg3 levels:(unsigned char)arg4 lumaFormat:(unsigned long long)arg5 chromaFormat:(unsigned long long)arg6 outSize:(unsigned long long*)arg7 metal:(id)arg8 ;
+(int)allocatePyramidWithWidth:(unsigned short)arg1 height:(unsigned short)arg2 allocLevel0:(BOOL)arg3 levels:(unsigned char)arg4 texUsage:(unsigned long long)arg5 scratchBuffer:(id)arg6 offset:(unsigned long long*)arg7 lumaFormat:(unsigned long long)arg8 chromaFormat:(unsigned long long)arg9 outPyramid:(id)arg10 metal:(id)arg11 ;
+(int)allocateOverlappingLevelsWithWidth:(unsigned short)arg1 height:(unsigned short)arg2 allocLevel0:(BOOL)arg3 levels:(unsigned char)arg4 texUsage:(unsigned long long)arg5 scratchBuffer:(id)arg6 offset:(unsigned long long*)arg7 lumaFormat:(unsigned long long)arg8 chromaFormat:(unsigned long long)arg9 outPyramid:(id)arg10 metal:(id)arg11 ;
+(id)createTextureAlias:(id)arg1 ;
-(void)dealloc;
-(void)releaseBuffers;
-(void)clearLevel:(int)arg1 ;
-(int)setPixelBuffer:(CVBufferRef)arg1 level:(int)arg2 metal:(id)arg3 ;
-(int)setPixelBufferFloat16:(CVBufferRef)arg1 chromaBuffer:(CVBufferRef)arg2 level:(int)arg3 metal:(id)arg4 ;
-(int)setPixelBuffer:(CVBufferRef)arg1 level:(int)arg2 texUsage:(unsigned long long)arg3 metal:(id)arg4 alignDims:(BOOL)arg5 ;
-(int)setPixelBuffer:(CVBufferRef)arg1 level:(int)arg2 texUsage:(unsigned long long)arg3 metal:(id)arg4 ;
-(int)setLumaTexture:(id)arg1 chromaTexture:(id)arg2 level:(int)arg3 metal:(id)arg4 ;
-(int)setPixelBufferForLuma:(CVBufferRef)arg1 optionalChroma:(CVBufferRef)arg2 level:(int)arg3 metal:(id)arg4 ;
@end

