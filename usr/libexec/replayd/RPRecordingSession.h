//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RPApplicationStateObserver-Protocol.h"
#import "RPCaptureManagerProtocol-Protocol.h"
#import "RPSystemStateObserver-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSExtension, NSMutableArray, NSString, NSURL, RPBroadcastConfiguration, RPBroadcastExtensionProxy, RPCaptureManager, RPMovieWriter, RPReportingAgent;
@protocol OS_dispatch_queue, RPClientProtocol, RPRecordingSessionDelegate;

@interface RPRecordingSession : NSObject <RPCaptureManagerProtocol, RPSystemStateObserver, RPApplicationStateObserver>
{
    _Bool _isValid;	// 8 = 0x8
    int _shouldStopLock;	// 12 = 0xc
    _Bool _shouldStop;	// 16 = 0x10
    long long _chipId;	// 24 = 0x18
    _Bool _microphoneEnabled;	// 32 = 0x20
    _Bool _cameraEnabled;	// 33 = 0x21
    _Bool _recording;	// 34 = 0x22
    _Bool _paused;	// 35 = 0x23
    _Bool _systemRecording;	// 36 = 0x24
    _Bool _isBroadcasting;	// 37 = 0x25
    _Bool _captureRecording;	// 38 = 0x26
    _Bool _hasUserConsentForCamera;	// 39 = 0x27
    _Bool _hasUserConsentForMicrophone;	// 40 = 0x28
    _Bool _daemonUserConsentForMicrophone;	// 41 = 0x29
    _Bool _sessionWasResumed;	// 42 = 0x2a
    int _frontmostPIDForAudioTap;	// 44 = 0x2c
    id <RPClientProtocol> _clientProxy;	// 48 = 0x30
    RPCaptureManager *_captureManager;	// 56 = 0x38
    NSString *_bundleID;	// 64 = 0x40
    NSArray *_contextIDs;	// 72 = 0x48
    id <RPRecordingSessionDelegate> _delegate;	// 80 = 0x50
    NSURL *_interruptedMovieURL;	// 88 = 0x58
    NSDictionary *_extensionInfo;	// 96 = 0x60
    NSExtension *_broadcastExtension;	// 104 = 0x68
    RPBroadcastConfiguration *_broadcastConfiguration;	// 112 = 0x70
    NSString *_broadcastURL;	// 120 = 0x78
    NSString *_bundleIDOfFirstForegroundApp;	// 128 = 0x80
    RPMovieWriter *_movieWriter;	// 136 = 0x88
    NSURL *_outputURL;	// 144 = 0x90
    long long _broadcastProcessMode;	// 152 = 0x98
    RPBroadcastExtensionProxy *_broadcastUploadExtensionProxy;	// 160 = 0xa0
    NSDictionary *_broadcastUserInfo;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_broadcastAggregatePayloadQueue;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_broadcastServiceInfoQueue;	// 184 = 0xb8
    NSMutableArray *_pendingBroadcastExtensionPayloads;	// 192 = 0xc0
    long long _broadcastFragmentIndex;	// 200 = 0xc8
    NSDate *_captureStartOrResumeDate;	// 208 = 0xd0
    RPReportingAgent *_reportingAgent;	// 216 = 0xd8
    struct CGSize _windowSize;	// 224 = 0xe0
    CDStruct_1b6d18a9 _firstSampleTimestamp;	// 240 = 0xf0
    CDStruct_1b6d18a9 _lastSampleTimestamp;	// 264 = 0x108
    CDStruct_1b6d18a9 _sampleTimeOffset;	// 288 = 0x120
    CDStruct_1b6d18a9 _broadcastFragmentStartTime;	// 312 = 0x138
}

+ (id)serviceNameString:(_Bool)arg1 isSystemRecording:(_Bool)arg2 isCapture:(_Bool)arg3;	// IMP=0x0000000100026424
- (void).cxx_destruct;	// IMP=0x00000001000273cc
@property(retain, nonatomic) RPReportingAgent *reportingAgent; // @synthesize reportingAgent=_reportingAgent;
@property(retain, nonatomic) NSDate *captureStartOrResumeDate; // @synthesize captureStartOrResumeDate=_captureStartOrResumeDate;
@property(nonatomic) long long broadcastFragmentIndex; // @synthesize broadcastFragmentIndex=_broadcastFragmentIndex;
@property(retain, nonatomic) NSMutableArray *pendingBroadcastExtensionPayloads; // @synthesize pendingBroadcastExtensionPayloads=_pendingBroadcastExtensionPayloads;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *broadcastServiceInfoQueue; // @synthesize broadcastServiceInfoQueue=_broadcastServiceInfoQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *broadcastAggregatePayloadQueue; // @synthesize broadcastAggregatePayloadQueue=_broadcastAggregatePayloadQueue;
@property(retain, nonatomic) NSDictionary *broadcastUserInfo; // @synthesize broadcastUserInfo=_broadcastUserInfo;
@property(retain, nonatomic) RPBroadcastExtensionProxy *broadcastUploadExtensionProxy; // @synthesize broadcastUploadExtensionProxy=_broadcastUploadExtensionProxy;
@property(nonatomic) CDStruct_1b6d18a9 broadcastFragmentStartTime; // @synthesize broadcastFragmentStartTime=_broadcastFragmentStartTime;
@property(nonatomic) long long broadcastProcessMode; // @synthesize broadcastProcessMode=_broadcastProcessMode;
@property(nonatomic) _Bool sessionWasResumed; // @synthesize sessionWasResumed=_sessionWasResumed;
@property(nonatomic) CDStruct_1b6d18a9 sampleTimeOffset; // @synthesize sampleTimeOffset=_sampleTimeOffset;
@property(nonatomic) CDStruct_1b6d18a9 lastSampleTimestamp; // @synthesize lastSampleTimestamp=_lastSampleTimestamp;
@property(nonatomic) CDStruct_1b6d18a9 firstSampleTimestamp; // @synthesize firstSampleTimestamp=_firstSampleTimestamp;
@property(retain, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(retain, nonatomic) RPMovieWriter *movieWriter; // @synthesize movieWriter=_movieWriter;
@property(retain, nonatomic) NSString *bundleIDOfFirstForegroundApp; // @synthesize bundleIDOfFirstForegroundApp=_bundleIDOfFirstForegroundApp;
@property(nonatomic) _Bool daemonUserConsentForMicrophone; // @synthesize daemonUserConsentForMicrophone=_daemonUserConsentForMicrophone;
@property(nonatomic) _Bool hasUserConsentForMicrophone; // @synthesize hasUserConsentForMicrophone=_hasUserConsentForMicrophone;
@property(nonatomic) _Bool hasUserConsentForCamera; // @synthesize hasUserConsentForCamera=_hasUserConsentForCamera;
@property(nonatomic, getter=isCapturing) _Bool captureRecording; // @synthesize captureRecording=_captureRecording;
@property(retain, nonatomic) NSString *broadcastURL; // @synthesize broadcastURL=_broadcastURL;
@property(retain, nonatomic) RPBroadcastConfiguration *broadcastConfiguration; // @synthesize broadcastConfiguration=_broadcastConfiguration;
@property(retain, nonatomic) NSExtension *broadcastExtension; // @synthesize broadcastExtension=_broadcastExtension;
@property(retain, nonatomic) NSDictionary *extensionInfo; // @synthesize extensionInfo=_extensionInfo;
@property(nonatomic) int frontmostPIDForAudioTap; // @synthesize frontmostPIDForAudioTap=_frontmostPIDForAudioTap;
@property(nonatomic, getter=isBroadcasting) _Bool isBroadcasting; // @synthesize isBroadcasting=_isBroadcasting;
@property(nonatomic, getter=isSystemRecording) _Bool systemRecording; // @synthesize systemRecording=_systemRecording;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
@property(retain, nonatomic) NSURL *interruptedMovieURL; // @synthesize interruptedMovieURL=_interruptedMovieURL;
@property(nonatomic) __weak id <RPRecordingSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *contextIDs; // @synthesize contextIDs=_contextIDs;
@property(nonatomic) _Bool cameraEnabled; // @synthesize cameraEnabled=_cameraEnabled;
@property(nonatomic) _Bool microphoneEnabled; // @synthesize microphoneEnabled=_microphoneEnabled;
@property(nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) RPCaptureManager *captureManager; // @synthesize captureManager=_captureManager;
@property(retain, nonatomic) id <RPClientProtocol> clientProxy; // @synthesize clientProxy=_clientProxy;
- (void)clientApplicationDidEnterForeground;	// IMP=0x000000010002702c
- (void)clientApplicationDidEnterBackground;	// IMP=0x0000000100026f68
- (id)getCurrentState;	// IMP=0x0000000100026c90
- (void)micAudioCaptureDidReceiveSample:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x0000000100026ba4
- (void)screenCaptureDidReceiveSample:(struct opaqueCMSampleBuffer *)arg1 withTransformFlags:(unsigned long long)arg2;	// IMP=0x0000000100026a24
- (void)appAudioCaptureDidReceiveSample:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000010002695c
- (void)screenCaptureDidFailWithError:(id)arg1;	// IMP=0x00000001000268f4
- (void)notifyRecordingResumed;	// IMP=0x00000001000268e4
- (void)notifyRecordingMayBeStopped;	// IMP=0x00000001000268d4
- (void)sessionReportCameraUsage:(long long)arg1;	// IMP=0x00000001000267d8
- (void)reportSummaryEvent:(long long)arg1;	// IMP=0x00000001000266a8
- (unsigned long long)getRecordedFileSize;	// IMP=0x0000000100026470
- (id)serviceNameForReporting;	// IMP=0x0000000100026400
- (struct CGAffineTransform)_CGAffineTransformFromFigTransformFlags:(unsigned long long)arg1;	// IMP=0x0000000100026240
- (struct CGSize)_maximumSizeWithSize:(struct CGSize)arg1;	// IMP=0x0000000100026070
- (long long)chipId;	// IMP=0x0000000100026038
- (void)_notifyExtensionOfFrontmostProcessBundleID:(id)arg1;	// IMP=0x0000000100025f00
- (void)_notifyExtensionOfAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;	// IMP=0x0000000100025d68
- (void)_notifyExtensionOfVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2 sampleOrientation:(unsigned int)arg3;	// IMP=0x0000000100025ab0
- (void)_notifyExtensionOfAction:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100025844
- (void)_notifyBroadcastExtensionOfCompletedMovieWithURL:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000100024d04
- (void)packageAudioSampleBufferForCapture:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;	// IMP=0x0000000100024ca8
- (void)packageVideoSampleBufferForCapture:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x0000000100024bcc
- (void)_processSampleBufferForStreaming:(struct opaqueCMSampleBuffer *)arg1 transformFlags:(unsigned long long)arg2;	// IMP=0x0000000100024bc0
- (void)_updateSampleBufferWithOffset:(struct opaqueCMSampleBuffer *)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100024aa8
- (unsigned int)orientationFromFigTransform:(unsigned long long)arg1;	// IMP=0x0000000100024a84
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 transformFlags:(unsigned long long)arg2;	// IMP=0x0000000100024630
- (void)updateDuartionWithSample:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x0000000100024598
- (void)disableBroadcast;	// IMP=0x000000010002450c
- (id)enableBroadcastWithExtension:(id)arg1 processMode:(long long)arg2 userInfo:(id)arg3 listenerEndpoint:(id)arg4;	// IMP=0x0000000100023f14
- (void)finishAndCleanupSessionFilesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100023e4c
- (void)stopRecordingWithNotification:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000100023d1c
- (void)stopAllCapture;	// IMP=0x0000000100023bec
- (void)finishSessionWithStartClipDuration:(double)arg1 endClipDuration:(double)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000237d8
- (void)finishSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000237c4
- (void)pauseSession;	// IMP=0x0000000100023710
- (void)updateProcessIDForAudioCaptureWithPID:(int)arg1;	// IMP=0x0000000100023580
- (void)frontmostApplicationDidChange:(id)arg1;	// IMP=0x0000000100023514
- (_Bool)shouldStartMicrophoneCapture;	// IMP=0x000000010002346c
- (void)startOrResumeCaptureSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000231b4
- (int)clientAppProcessIdentifier;	// IMP=0x0000000100023120
- (void)resumeSessionWithContextID:(id)arg1;	// IMP=0x0000000100022fc0
- (void)startSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100022a78
- (struct CGSize)adjustedWindowSize;	// IMP=0x0000000100022a00
- (_Bool)isNativeScreenOrientationPortrait;	// IMP=0x000000010002299c
- (id)trimmedOutputURL;	// IMP=0x00000001000228dc
- (id)outputPath;	// IMP=0x00000001000227cc
- (void)invalidate;	// IMP=0x00000001000227c4
- (id)initWithBundleID:(id)arg1;	// IMP=0x000000010002264c

@end
