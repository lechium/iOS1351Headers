/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Celestial/Celestial-Structs.h>
@class BWPixelBufferPool, BWVideoFormat;

@interface FigCapturePixelConverter : NSObject {

	OpaqueVTPixelTransferSessionRef _transferSession;
	BOOL _alwaysUseHardwareForConversion;
	BWPixelBufferPool* _pool;
	BWVideoFormat* _outputFormat;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	int _poolCapacity;
	BOOL _prefetchPool;

}

@property (nonatomic,readonly) BWVideoFormat * outputFormat;              //@synthesize outputFormat=_outputFormat - In the implementation block
+(void)initialize;
-(id)init;
-(void)dealloc;
-(BWVideoFormat *)outputFormat;
-(void)_purgeResources;
-(id)initWithPrefetchPool:(BOOL)arg1 ;
-(int)updateOutputPixelFormat:(unsigned)arg1 dimensions:(SCD_Struct_BW19)arg2 poolCapacity:(int)arg3 colorSpaceProperties:(int)arg4 alwaysUseHardwareForConversion:(BOOL)arg5 ;
-(int)convertSampleBuffer:(opaqueCMSampleBufferRef)arg1 cropRect:(CGRect)arg2 outputSampleBuffer:(opaqueCMSampleBuffer*)arg3 ;
-(int)_buildBufferPool;
-(int)_buildTransferSession;
-(int)convertPixelBuffer:(CVBufferRef)arg1 cropRect:(CGRect)arg2 allocateOutputFromBufferPool:(BOOL)arg3 outputPixelBuffer:(_CVBuffer*)arg4 ;
@end

