/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/AVOfflineVideoStabilizerDataProvider.h>
#import <libobjc.A.dylib/CAMTimelapseMovieWriterProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSArray, NSObject, NSDate, CLLocation, NSString, AVOfflineVideoStabilizer, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSMutableSet;

@interface CAMTimelapseStabilizationMovieWriter : NSObject <AVOfflineVideoStabilizerDataProvider, CAMTimelapseMovieWriterProtocol> {

	BOOL _suspended;
	BOOL __preferHEVC;
	NSArray* __frameFilePaths;
	NSArray* __visMetadataFilePaths;
	NSObject*<OS_dispatch_queue> __movieWritingQueue;
	NSObject*<OS_dispatch_queue> __syncQueue;
	NSObject*<OS_dispatch_queue> __readingQueue;
	NSObject*<OS_dispatch_queue> __decodeQueue;
	NSObject*<OS_dispatch_queue> __pixelTransferQueue;
	NSObject*<OS_dispatch_semaphore> __semFrameGetter;
	NSObject*<OS_dispatch_semaphore> __semFileReader;
	CFArrayRef __frameList;
	NSDate* __movieCreationDate;
	CLLocation* __movieCreationLocation;
	NSString* __movieOutputPath;
	long long __movieFramesPerSecond;
	AVOfflineVideoStabilizer* __stabilizer;
	AVAssetWriter* __writer;
	AVAssetWriterInput* __videoInput;
	AVAssetWriterInputPixelBufferAdaptor* __pixelBufferAdaptor;
	long long __frameCountWrittenToMovie;
	long long __nextSourceFrameIndex;
	long long __nextMetadataFrameIndex;
	long long __firstFrameIndex;
	CVBufferRef __stashedSourceFrame;
	NSMutableSet* __badFrameSet;
	NSMutableSet* __badMetadataSet;
	long long __badMetadataErrorThreshold;
	OpaqueVTPixelTransferSessionRef __pixelTransferSession;
	unsigned long long __frameLoadMode;
	/*^block*/id __completion;
	void* __powerAssertion;
	CGAffineTransform __movieTransform;

}

@property (nonatomic,readonly) NSArray * _frameFilePaths;                                               //@synthesize _frameFilePaths=__frameFilePaths - In the implementation block
@property (nonatomic,readonly) NSArray * _visMetadataFilePaths;                                         //@synthesize _visMetadataFilePaths=__visMetadataFilePaths - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _movieWritingQueue;                         //@synthesize _movieWritingQueue=__movieWritingQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _syncQueue;                                 //@synthesize _syncQueue=__syncQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _readingQueue;                              //@synthesize _readingQueue=__readingQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _decodeQueue;                               //@synthesize _decodeQueue=__decodeQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _pixelTransferQueue;                        //@synthesize _pixelTransferQueue=__pixelTransferQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> _semFrameGetter;                        //@synthesize _semFrameGetter=__semFrameGetter - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> _semFileReader;                         //@synthesize _semFileReader=__semFileReader - In the implementation block
@property (nonatomic,readonly) CFArrayRef _frameList;                                                   //@synthesize _frameList=__frameList - In the implementation block
@property (nonatomic,readonly) NSDate * _movieCreationDate;                                             //@synthesize _movieCreationDate=__movieCreationDate - In the implementation block
@property (nonatomic,readonly) CLLocation * _movieCreationLocation;                                     //@synthesize _movieCreationLocation=__movieCreationLocation - In the implementation block
@property (nonatomic,readonly) NSString * _movieOutputPath;                                             //@synthesize _movieOutputPath=__movieOutputPath - In the implementation block
@property (nonatomic,readonly) CGAffineTransform _movieTransform;                                       //@synthesize _movieTransform=__movieTransform - In the implementation block
@property (nonatomic,readonly) long long _movieFramesPerSecond;                                         //@synthesize _movieFramesPerSecond=__movieFramesPerSecond - In the implementation block
@property (nonatomic,readonly) BOOL _preferHEVC;                                                        //@synthesize _preferHEVC=__preferHEVC - In the implementation block
@property (nonatomic,readonly) AVOfflineVideoStabilizer * _stabilizer;                                  //@synthesize _stabilizer=__stabilizer - In the implementation block
@property (nonatomic,readonly) AVAssetWriter * _writer;                                                 //@synthesize _writer=__writer - In the implementation block
@property (nonatomic,readonly) AVAssetWriterInput * _videoInput;                                        //@synthesize _videoInput=__videoInput - In the implementation block
@property (nonatomic,readonly) AVAssetWriterInputPixelBufferAdaptor * _pixelBufferAdaptor;              //@synthesize _pixelBufferAdaptor=__pixelBufferAdaptor - In the implementation block
@property (nonatomic,readonly) long long _frameCountWrittenToMovie;                                     //@synthesize _frameCountWrittenToMovie=__frameCountWrittenToMovie - In the implementation block
@property (nonatomic,readonly) long long _nextSourceFrameIndex;                                         //@synthesize _nextSourceFrameIndex=__nextSourceFrameIndex - In the implementation block
@property (nonatomic,readonly) long long _nextMetadataFrameIndex;                                       //@synthesize _nextMetadataFrameIndex=__nextMetadataFrameIndex - In the implementation block
@property (nonatomic,readonly) long long _firstFrameIndex;                                              //@synthesize _firstFrameIndex=__firstFrameIndex - In the implementation block
@property (nonatomic,readonly) CVBufferRef _stashedSourceFrame;                                         //@synthesize _stashedSourceFrame=__stashedSourceFrame - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _badFrameSet;                                             //@synthesize _badFrameSet=__badFrameSet - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _badMetadataSet;                                          //@synthesize _badMetadataSet=__badMetadataSet - In the implementation block
@property (nonatomic,readonly) long long _badMetadataErrorThreshold;                                    //@synthesize _badMetadataErrorThreshold=__badMetadataErrorThreshold - In the implementation block
@property (nonatomic,readonly) OpaqueVTPixelTransferSessionRef _pixelTransferSession;                   //@synthesize _pixelTransferSession=__pixelTransferSession - In the implementation block
@property (nonatomic,readonly) unsigned long long _frameLoadMode;                                       //@synthesize _frameLoadMode=__frameLoadMode - In the implementation block
@property (nonatomic,copy,readonly) id _completion;                                                     //@synthesize _completion=__completion - In the implementation block
@property (nonatomic,readonly) void* _powerAssertion;                                                   //@synthesize _powerAssertion=__powerAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                                         //@synthesize suspended=_suspended - In the implementation block
+(CGSize)_desiredOutputSizeForSourcePixelBuffer:(CVBufferRef)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)isSuspended;
-(void)_reset;
-(id)_completion;
-(NSObject*<OS_dispatch_queue>)_syncQueue;
-(void)_cleanup;
-(void*)_powerAssertion;
-(AVAssetWriter *)_writer;
-(id)copySourceStabilizationMetadataForFrameNumber:(long long)arg1 outputSampleTime:(SCD_Struct_CA7*)arg2 stabilizer:(id)arg3 ;
-(CVBufferRef)copySourcePixelBufferForFrameNumber:(long long)arg1 outputSampleTime:(SCD_Struct_CA7*)arg2 stabilizer:(id)arg3 ;
-(OpaqueVTPixelTransferSessionRef)_pixelTransferSession;
-(NSObject*<OS_dispatch_queue>)_decodeQueue;
-(AVAssetWriterInput *)_videoInput;
-(BOOL)_preferHEVC;
-(void)writeMovieFromImageFiles:(id)arg1 visMetadataFiles:(id)arg2 startDate:(id)arg3 location:(id)arg4 outputPath:(id)arg5 transform:(CGAffineTransform)arg6 framesPerSecond:(long long)arg7 preferHEVC:(BOOL)arg8 completionHandler:(/*^block*/id)arg9 ;
-(unsigned long long)_frameLoadMode;
-(void)_startAsyncDecoding;
-(int)_copySourcePixelBufferForNextFrame:(_CVBuffer*)arg1 skipBadFrames:(BOOL)arg2 ;
-(int)_startWritingWithOutputPath:(id)arg1 width:(long long)arg2 height:(long long)arg3 videoFormatDescription:(opaqueCMFormatDescriptionRef)arg4 transform:(CGAffineTransform)arg5 framesPerSecond:(long long)arg6 frameCount:(long long)arg7 preferHEVC:(BOOL)arg8 visMetadataCount:(long long)arg9 videoMetadata:(id)arg10 ;
-(void)_writeMovieAsynchronously;
-(CVBufferRef)_decodeFirstFrameAgain;
-(CVBufferRef)_cropPixelBufferIfNeeded:(CVBufferRef)arg1 ;
-(int)_copyNextSampleBufferFromStabilizer:(opaqueCMSampleBuffer*)arg1 ;
-(BOOL)_appendPixelBufferToMovie:(CVBufferRef)arg1 ;
-(void)_finishMovieWithRestartUnstabilized;
-(void)_finishMovieWithFailure;
-(void)_requestNextFrameReadDecode;
-(void)_finishMovieWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setMetadataOnVideoTrackAssetWriterInput:(id)arg1 ;
-(void)_restartUnstabilized;
-(NSArray *)_frameFilePaths;
-(NSArray *)_visMetadataFilePaths;
-(NSObject*<OS_dispatch_queue>)_movieWritingQueue;
-(NSObject*<OS_dispatch_queue>)_readingQueue;
-(NSObject*<OS_dispatch_queue>)_pixelTransferQueue;
-(NSObject*<OS_dispatch_semaphore>)_semFrameGetter;
-(NSObject*<OS_dispatch_semaphore>)_semFileReader;
-(CFArrayRef)_frameList;
-(NSDate *)_movieCreationDate;
-(CLLocation *)_movieCreationLocation;
-(NSString *)_movieOutputPath;
-(CGAffineTransform)_movieTransform;
-(long long)_movieFramesPerSecond;
-(AVOfflineVideoStabilizer *)_stabilizer;
-(AVAssetWriterInputPixelBufferAdaptor *)_pixelBufferAdaptor;
-(long long)_frameCountWrittenToMovie;
-(long long)_nextSourceFrameIndex;
-(long long)_nextMetadataFrameIndex;
-(long long)_firstFrameIndex;
-(CVBufferRef)_stashedSourceFrame;
-(NSMutableSet *)_badFrameSet;
-(NSMutableSet *)_badMetadataSet;
-(long long)_badMetadataErrorThreshold;
@end

