/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/VNSequencedRequestSupporting.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VNImageBuffer, NSDictionary;

@interface VNImageSpecifier : NSObject <VNSequencedRequestSupporting, NSCopying> {

	VNImageBuffer* _imageBuffer;
	NSDictionary* _options;

}

@property (nonatomic,copy,readonly) NSDictionary * options; 
+(id)imageSpecifierWithCVPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
+(id)imageSpecifierWithCVPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 error:(id*)arg3 ;
+(id)imageSpecifierWithCVPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)imageSpecifierWithCGImage:(CGImageRef)arg1 error:(id*)arg2 ;
+(id)imageSpecifierWithCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 error:(id*)arg3 ;
+(id)imageSpecifierWithCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)imageSpecifierWithCIImage:(id)arg1 error:(id*)arg2 ;
+(id)imageSpecifierWithCIImage:(id)arg1 orientation:(unsigned)arg2 error:(id*)arg3 ;
+(id)imageSpecifierWithCIImage:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)imageSpecifierWithURL:(id)arg1 error:(id*)arg2 ;
+(id)imageSpecifierWithURL:(id)arg1 orientation:(unsigned)arg2 error:(id*)arg3 ;
+(id)imageSpecifierWithURL:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)imageSpecifierWithData:(id)arg1 error:(id*)arg2 ;
+(id)imageSpecifierWithData:(id)arg1 orientation:(unsigned)arg2 error:(id*)arg3 ;
+(id)imageSpecifierWithData:(id)arg1 orientation:(unsigned)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)imageSpecifierWithObject:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)options;
-(id)sequencedRequestPreviousObservationsKey;
-(id)imageBufferAndReturnError:(id*)arg1 ;
-(BOOL)wantsSequencedRequestObservationsRecording;
-(id)newImageBufferWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)initInternal;
@end

