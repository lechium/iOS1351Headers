/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFoundation/AVFoundation-Structs.h>
@class AVMomentCaptureMovieRecordingResolvedSettings, NSURL, NSArray, NSString;

@interface AVMomentCaptureMovie : NSObject {

	AVMomentCaptureMovieRecordingResolvedSettings* _resolvedSettings;
	NSURL* _outputFileURL;
	NSURL* _debugMetadataSidecarFileURL;
	CVBufferRef _previewPixelBuffer;
	SCD_Struct_AV7 _duration;
	NSArray* _movieMetadata;
	NSString* _overCaptureGroupIdentifier;
	BOOL _hasOverCapture;

}

@property (nonatomic,readonly) AVMomentCaptureMovieRecordingResolvedSettings * resolvedSettings;              //@synthesize resolvedSettings=_resolvedSettings - In the implementation block
@property (nonatomic,readonly) NSURL * outputFileURL;                                                         //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (nonatomic,readonly) NSURL * debugMetadataSidecarFileURL;                                           //@synthesize debugMetadataSidecarFileURL=_debugMetadataSidecarFileURL - In the implementation block
@property (nonatomic,readonly) CVBufferRef previewPixelBuffer;                                                //@synthesize previewPixelBuffer=_previewPixelBuffer - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AV7 duration;                                                       //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSArray * movieMetadata;                                                       //@synthesize movieMetadata=_movieMetadata - In the implementation block
+(id)movieWithResolvedSettings:(id)arg1 outputFileURL:(id)arg2 movieMetadata:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(SCD_Struct_AV7)duration;
-(void)_setDuration:(SCD_Struct_AV7)arg1 ;
-(AVMomentCaptureMovieRecordingResolvedSettings *)resolvedSettings;
-(NSURL *)outputFileURL;
-(NSArray *)movieMetadata;
-(void)_setDebugMetadataSidecarFileURL:(id)arg1 ;
-(void)_setPreviewPixelBuffer:(CVBufferRef)arg1 ;
-(id)_initWithResolvedSettings:(id)arg1 outputFileURL:(id)arg2 movieMetadata:(id)arg3 ;
-(NSURL *)debugMetadataSidecarFileURL;
-(CVBufferRef)previewPixelBuffer;
@end

