/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWFigVideoCaptureStreamDelegate, OS_dispatch_queue, BWFigVideoCaptureStreamStillImageCaptureDelegate, OS_dispatch_group, BWFaceDetector, BWObjectDetector;
#import <Celestial/Celestial-Structs.h>
@class NSString, NSDictionary, NSArray, NSData, BWSphereModeSelector, BWStillImageTimeMachine, BWStillImageCaptureSettings, BWStillImageCaptureStreamSettings, NSMutableArray, NSObject, NSSet, NSMutableDictionary;

@interface BWFigVideoCaptureStream : NSObject {

	OpaqueFigCaptureStreamRef _stream;
	BOOL _streaming;
	BOOL _suspended;
	BOOL _streamHasBeenSuspended;
	NSString* _portType;
	NSDictionary* _cachedVideoOutputConfigurations;
	NSDictionary* _cachedVideoOutputsEnabled;
	float _minimumFrameRate;
	float _maximumFrameRate;
	float _minimumSupportedFrameRate;
	float _maximumSupportedFrameRate;
	BOOL _rawBufferCompandingEnabled;
	NSDictionary* _supportedProperties;
	NSArray* _supportedFormats;
	long long _activeFormatIndex;
	NSDictionary* _moduleInfo;
	BOOL _hasFocus;
	NSDictionary* _sensorIDDictionary;
	id<BWFigVideoCaptureStreamDelegate> _delegate;
	float _baseZoomFactor;
	float _baseZoomFactorAfterGDC;
	NSDictionary* _opticalCenterOffset;
	float _pixelSize;
	float _pixelsPerMicron;
	float _focalLength;
	float _lensFNumber;
	float _gravityFactor;
	NSDictionary* _focusPositionToLensMakersPFLLinearFit;
	NSData* _cameraViewMatrix;
	NSData* _cameraPoseMatrix;
	NSString* _nonLocalizedName;
	NSData* _lscGains;
	BOOL _isSlave;
	os_unfair_lock_s _cameraAccessLock;
	BOOL _clientProcessHasAccessToCamera;
	int _clientPID;
	NSString* _applicationID;
	SCD_Struct_BW65 _clientAuditToken;
	os_unfair_lock_s _sphereLock;
	BOOL _sphereEnabled;
	BOOL _motionDataInvalid;
	BWSphereModeSelector* _sphereModeSelector;
	int _motionDataDeliveryEnabled;
	BOOL _isStationary;
	BOOL _timeMachineEnabled;
	int _timeMachineCapacity;
	BWStillImageTimeMachine* _timeMachine;
	os_unfair_lock_s _stillImageCaptureStateLock;
	BOOL _grabNextFrame;
	BWStillImageCaptureSettings* _activeResolvedStillImageCaptureSettings;
	BWStillImageCaptureStreamSettings* _activeResolvedStillImageCaptureStreamSettings;
	int _lastStillImageCaptureType;
	SCD_Struct_BW2 _lastStillImagePTS;
	BOOL _usesStillFusionReferenceFramePTSForDidCaptureCallback;
	BOOL _handlesHDRReferenceFrameReporting;
	NSMutableArray* _stillFusionBracketFramesMetadata;
	SCD_Struct_BW2 _HDRStillCaptureReferenceFramePTS;
	int _skippedFramesCountForAF;
	int _expectedImagesOrErrorsForCaptureStillImageNow;
	int _receivedImagesOrErrorsForCaptureStillImageNow;
	/*^block*/id _stillImageBufferTimeMachineHandler;
	BOOL _stillImageCaptureEnabled;
	NSObject*<OS_dispatch_queue> _streamNotificationDispatchQueue;
	id<BWFigVideoCaptureStreamStillImageCaptureDelegate> _stillImageCaptureDelegate;
	NSObject*<OS_dispatch_group> _stillImageCaptureDelegateDispatchGroup;
	BOOL _objectDetectionMetadataRequested;
	BOOL _defersObjectDetectionStartup;
	NSDictionary* _faceDetectionConfiguration;
	OpaqueFigSimpleMutexRef _objectDetectionConfigurationMutex;
	NSSet* _enabledDetectedObjectTypes;
	BOOL _faceDetectionEnabledSeparately;
	NSMutableDictionary* _currentObjectDetectionConfiguration;
	unsigned _maxObjects;
	BOOL _isSynchronizationMaster;
	BOOL _synchronizedStreamsEnabled;
	int _masterToSlaveFrameRateRatio;
	BOOL _streamingRequiredWhenConfiguredAsSlave;
	int _sensorToOutputFrameRateRatioWhenConfiguredAsSlave;
	BOOL _firmwareTimeMachineEnabledWhenConfiguredAsSlave;
	NSDictionary* _geometricDistortionCoefficients;
	NSData* _focalPlaneCharacterizationCoefficients;
	int _ltmCurve;
	BOOL _ltmLookUpTableMetadataEnabled;
	BOOL _lumaHistogramMetadataEnabled;
	NSMutableDictionary* _keypointDetectionConfiguration;
	BOOL _keypointDetectionConfigured;
	BOOL _keypointDetectionEnabled;
	BOOL _stillImageKeypointDetectionEnabled;
	BOOL _highlightRecoverySuspended;
	BOOL _highlightRecoveryEnabled;
	BOOL _highlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream;
	BOOL _highlightRecoveryEnabledWhenConfiguredAsSlave;
	int _highlightRecoveryEnabledOnStream;
	id<BWFaceDetector> _faceDetector;
	id<BWObjectDetector> _objectDetector;
	NSDictionary* _stillImageNoiseReductionAndSharpeningConfiguration;
	int _multiBandNoiseReductionMode;
	BOOL _unifiedBracketingEnabled;
	BOOL _aeStatisticsEnabled;
	BOOL _rawFocusScoresEnabled;
	BOOL _focusBlurMapEnabled;
	BOOL _zeroShutterLagEnabled;
	int _autoFocusPositionSensorMode;
	SCD_Struct_BW2 _maxExposureDurationClientOverride;
	SCD_Struct_BW2 _maxExposureDurationFrameworkOverride;
	BOOL _maxExposureDurationHasBeenSet;
	float _aeMaxGain;
	float _momentCaptureVideoRecordingAEMaxGain;
	BOOL _lowLightVideoEnabled;
	SCD_Struct_BW19 _sensorDimensions;
	BOOL _variableFrameRateVideoEnabled;

}

@property (readonly) OpaqueFigCaptureStreamRef stream; 
@property (assign,nonatomic) id<BWFigVideoCaptureStreamDelegate> delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * portType; 
@property (readonly) NSArray * supportedFormats; 
@property (readonly) NSDictionary * moduleInfo; 
@property (readonly) BOOL hasFocus; 
@property (readonly) NSString * sensorIDString; 
@property (readonly) NSDictionary * sensorIDDictionary; 
@property (readonly) NSDictionary * geometricDistortionCoefficients; 
@property (readonly) NSData * focalPlaneCharacterizationCoefficients; 
@property (readonly) BOOL synchronizedStreamsEnabled; 
@property (readonly) NSDictionary * opticalCenterOffset; 
@property (readonly) float pixelSize; 
@property (readonly) float pixelsPerMicron; 
@property (readonly) float focalLength;                                                                                   //@synthesize focalLength=_focalLength - In the implementation block
@property (readonly) float lensFNumber;                                                                                   //@synthesize lensFNumber=_lensFNumber - In the implementation block
@property (readonly) float gravityFactor; 
@property (readonly) NSDictionary * focusPositionToLensMakersPFLLinearFit; 
@property (readonly) NSData * cameraViewMatrix; 
@property (readonly) NSData * cameraPoseMatrix; 
@property (readonly) NSString * nonLocalizedName; 
@property (readonly) NSData * lscGains; 
@property (assign,nonatomic) float aeMaxGain;                                                                             //@synthesize aeMaxGain=_aeMaxGain - In the implementation block
@property (assign,nonatomic) float momentCaptureVideoRecordingAEMaxGain;                                                  //@synthesize momentCaptureVideoRecordingAEMaxGain=_momentCaptureVideoRecordingAEMaxGain - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 maxExposureDurationClientOverride;                                            //@synthesize maxExposureDurationClientOverride=_maxExposureDurationClientOverride - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 maxExposureDurationFrameworkOverride;                                         //@synthesize maxExposureDurationFrameworkOverride=_maxExposureDurationFrameworkOverride - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW2 maxExposureDuration; 
@property (assign,nonatomic) float minimumFrameRate; 
@property (assign,nonatomic) float maximumFrameRate; 
@property (assign,nonatomic) float maximumSupportedFrameRate; 
@property (assign,nonatomic) float minimumSupportedFrameRate; 
@property (nonatomic,readonly) BOOL rawBufferCompandingEnabled; 
@property (readonly) BOOL hasSphere; 
@property (assign,nonatomic) BOOL enablesSphereWhenAvailable; 
@property (readonly) BOOL sphereEnabled; 
@property (readonly) BOOL sphereVideoSupported; 
@property (assign,nonatomic) BOOL sphereVideoEnabled; 
@property (assign,nonatomic) BOOL avoidsSphereRecentering; 
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled; 
@property (assign,nonatomic) int sphereThermalLevel; 
@property (assign,nonatomic) BOOL isStationary; 
@property (nonatomic,readonly) CFStringRef currentSphereMode; 
@property (assign,nonatomic) BOOL motionDataDeliveryEnabled; 
@property (readonly) BOOL motionDataInvalid; 
@property (assign,nonatomic) BOOL defersObjectDetectionStartup; 
@property (nonatomic,readonly) BOOL suspendingSupported; 
@property (nonatomic,readonly) BOOL suspended;                                                                            //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,readonly) BOOL streaming;                                                                            //@synthesize streaming=_streaming - In the implementation block
@property (assign,nonatomic) BOOL stillImageCaptureEnabled; 
@property (assign,nonatomic) id<BWFigVideoCaptureStreamStillImageCaptureDelegate> stillImageCaptureDelegate;              //@synthesize stillImageCaptureDelegate=_stillImageCaptureDelegate - In the implementation block
@property (assign,nonatomic) BOOL usesStillFusionReferenceFramePTSForDidCaptureCallback;                                  //@synthesize usesStillFusionReferenceFramePTSForDidCaptureCallback=_usesStillFusionReferenceFramePTSForDidCaptureCallback - In the implementation block
@property (readonly) int timeMachineCapacity; 
@property (assign,nonatomic) BOOL timeMachineEnabled; 
@property (nonatomic,copy) id stillImageBufferTimeMachineHandler; 
@property (nonatomic,readonly) int activeStillImageCaptureType; 
@property (nonatomic,readonly) BOOL providesPreBracketedEV0; 
@property (nonatomic,readonly) int bracketedCaptureSequenceNumberForOISLongExposure; 
@property (nonatomic,readonly) int lastStillImageCaptureType;                                                             //@synthesize lastStillImageCaptureType=_lastStillImageCaptureType - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW2 lastStillImagePTS;                                                          //@synthesize lastStillImagePTS=_lastStillImagePTS - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW65 clientAuditToken;                                                          //@synthesize clientAuditToken=_clientAuditToken - In the implementation block
@property (getter=isSynchronizationMaster,nonatomic,readonly) BOOL synchronizationMaster;                                 //@synthesize isSynchronizationMaster=_isSynchronizationMaster - In the implementation block
@property (assign,nonatomic) int masterToSlaveFrameRateRatio; 
@property (assign,nonatomic) BOOL streamingRequiredWhenConfiguredAsSlave; 
@property (assign,nonatomic) int sensorToOutputFrameRateRatioWhenConfiguredAsSlave; 
@property (assign,nonatomic) BOOL firmwareTimeMachineEnabledWhenConfiguredAsSlave;                                        //@synthesize firmwareTimeMachineEnabledWhenConfiguredAsSlave=_firmwareTimeMachineEnabledWhenConfiguredAsSlave - In the implementation block
@property (readonly) NSDictionary * stillImageNoiseReductionAndSharpeningConfiguration; 
@property (assign,nonatomic) int ltmCurve; 
@property (assign,nonatomic) BOOL ltmLookUpTableMetadataEnabled; 
@property (assign,nonatomic) BOOL lumaHistogramMetadataEnabled; 
@property (assign,nonatomic) BOOL handlesHDRReferenceFrameReporting; 
@property (assign,nonatomic) BOOL keypointDetectionEnabled; 
@property (assign,nonatomic) BOOL stillImageKeypointDetectionEnabled; 
@property (assign,nonatomic) int multiBandNoiseReductionMode;                                                             //@synthesize multiBandNoiseReductionMode=_multiBandNoiseReductionMode - In the implementation block
@property (assign,nonatomic) BOOL highlightRecoverySuspended; 
@property (nonatomic,readonly) BOOL highlightRecoveryEnabled; 
@property (assign,nonatomic) BOOL highlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream; 
@property (assign,nonatomic) BOOL highlightRecoveryEnabledWhenConfiguredAsSlave; 
@property (assign,nonatomic) BOOL unifiedBracketingEnabled; 
@property (assign,nonatomic) BOOL aeStatisticsEnabled; 
@property (assign,nonatomic) BOOL rawFocusScoresEnabled; 
@property (assign,nonatomic) BOOL focusBlurMapEnabled; 
@property (assign,nonatomic) BOOL zeroShutterLagEnabled; 
@property (assign,nonatomic) BOOL overCaptureEnabled; 
@property (nonatomic,retain) id<BWFaceDetector> faceDetector;                                                             //@synthesize faceDetector=_faceDetector - In the implementation block
@property (nonatomic,retain) id<BWObjectDetector> objectDetector;                                                         //@synthesize objectDetector=_objectDetector - In the implementation block
@property (assign,nonatomic) BOOL lowLightVideoEnabled;                                                                   //@synthesize lowLightVideoEnabled=_lowLightVideoEnabled - In the implementation block
@property (assign,nonatomic) BOOL variableFrameRateVideoEnabled;                                                          //@synthesize variableFrameRateVideoEnabled=_variableFrameRateVideoEnabled - In the implementation block
@property (nonatomic,readonly) int autoFocusPositionSensorMode;                                                           //@synthesize autoFocusPositionSensorMode=_autoFocusPositionSensorMode - In the implementation block
@property (assign) float baseZoomFactor; 
@property (assign) float baseZoomFactorAfterGDC; 
+(void)initialize;
-(void)dealloc;
-(id)description;
-(id<BWFigVideoCaptureStreamDelegate>)delegate;
-(void)setDelegate:(id<BWFigVideoCaptureStreamDelegate>)arg1 ;
-(int)stop;
-(int)start;
-(int)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(id<BWFaceDetector>)faceDetector;
-(float)focalLength;
-(NSString *)portType;
-(OpaqueFigCaptureStreamRef)stream;
-(float)pixelSize;
-(BOOL)depthDataDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(NSData *)cameraPoseMatrix;
-(SCD_Struct_BW2)maxExposureDuration;
-(void)setMaxExposureDurationClientOverride:(SCD_Struct_BW2)arg1 ;
-(void)setFaceDetectionConfiguration:(id)arg1 ;
-(SCD_Struct_BW65)clientAuditToken;
-(BOOL)hasFocus;
-(void)setFaceDetector:(id<BWFaceDetector>)arg1 ;
-(NSArray *)supportedFormats;
-(BOOL)streamingRequiredWhenConfiguredAsSlave;
-(BOOL)firmwareTimeMachineEnabledWhenConfiguredAsSlave;
-(int)masterToSlaveFrameRateRatio;
-(int)sensorToOutputFrameRateRatioWhenConfiguredAsSlave;
-(BOOL)supportsProperty:(CFStringRef)arg1 ;
-(void)_resetStillImageCaptureState;
-(void)_updateSphereMode;
-(float)maximumFrameRate;
-(void)setMaximumFrameRate:(float)arg1 ;
-(BOOL)sphereVideoSupported;
-(BOOL)sphereVideoEnabled;
-(void)setSphereVideoEnabled:(BOOL)arg1 ;
-(BOOL)avoidsSphereRecentering;
-(void)setAvoidsSphereRecentering:(BOOL)arg1 ;
-(BOOL)enablesSphereWhenAvailable;
-(void)setEnablesSphereWhenAvailable:(BOOL)arg1 ;
-(BOOL)zeroShutterLagEnabled;
-(void)setZeroShutterLagEnabled:(BOOL)arg1 ;
-(BOOL)overCaptureEnabled;
-(void)setOverCaptureEnabled:(BOOL)arg1 ;
-(CFStringRef)currentSphereMode;
-(NSString *)sensorIDString;
-(NSDictionary *)sensorIDDictionary;
-(int)ltmCurve;
-(NSString *)nonLocalizedName;
-(void)setStillImageCaptureEnabled:(BOOL)arg1 ;
-(void)unregisterForObjectDetectionMetadata;
-(BOOL)isSynchronizationMaster;
-(void)setVisionDataSuspended:(BOOL)arg1 ;
-(SCD_Struct_BW2)maxExposureDurationClientOverride;
-(void)setMaxExposureDurationFrameworkOverride:(SCD_Struct_BW2)arg1 ;
-(float)baseZoomFactor;
-(BOOL)unifiedBracketingEnabled;
-(void)triggerVisionDataBurst;
-(float)lensFNumber;
-(BOOL)isStationary;
-(SCD_Struct_BW2)_updateMaxExposureDuration;
-(void)_setMaxExposureDuration:(SCD_Struct_BW2)arg1 ;
-(float)minimumFrameRate;
-(void)_setRequestedDetectedObjectTypes:(id)arg1 ;
-(void)_updateObjectDetectionEnabledOnStream;
-(int)_updateFaceDetectionConfigurationOnStream:(id)arg1 ;
-(BOOL)suspendingSupported;
-(void)setMotionDataDeliveryEnabled:(BOOL)arg1 ;
-(void)_updateAETables;
-(BOOL)sphereEnabled;
-(void)_updateMotionDataStatus:(opaqueCMSampleBufferRef)arg1 ;
-(void)_updateAutoFocusPositionSensorModeForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_serviceTimeMachineWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_addStillImageBracketFrameMetadataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleStillImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 withError:(int)arg2 fromTimeMachine:(BOOL)arg3 ;
-(void)_prepareForStillImageCaptureWithStillImageSettings:(id)arg1 fromCMTimeMachine:(BOOL)arg2 ;
-(int)bracketedCaptureSequenceNumberForOISLongExposure;
-(BOOL)_updateCaptureStateWithStillImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 orError:(int)arg2 ;
-(BOOL)providesPreBracketedEV0;
-(void)_updateMasterSlavePropertiesOnStream;
-(void)_updateSuspendStateForInfraredDepthStream;
-(void)_setLowPowerSphereModeEnabled:(BOOL)arg1 ;
-(void)_setHighlightRecoveryEnabled:(BOOL)arg1 ;
-(void)_configureKeypointDetection;
-(int)_setHighlightRecoveryEnabled:(BOOL)arg1 highlightRecoverySuspended:(BOOL)arg2 ;
-(id)_aeTables;
-(id)initWithFigCaptureStream:(OpaqueFigCaptureStreamRef)arg1 attributes:(id)arg2 sensorIDDictionary:(id)arg3 isSynchronizationMaster:(BOOL)arg4 synchronizedStreamsEnabled:(BOOL)arg5 cameraViewMatrix:(id)arg6 cameraPoseMatrix:(id)arg7 applicationID:(id)arg8 clientAuditToken:(SCD_Struct_BW65)arg9 baseZoomFactor:(float)arg10 error:(int*)arg11 ;
-(NSDictionary *)moduleInfo;
-(NSDictionary *)geometricDistortionCoefficients;
-(NSData *)focalPlaneCharacterizationCoefficients;
-(NSDictionary *)opticalCenterOffset;
-(float)pixelsPerMicron;
-(float)gravityFactor;
-(NSDictionary *)focusPositionToLensMakersPFLLinearFit;
-(NSData *)cameraViewMatrix;
-(NSData *)lscGains;
-(BOOL)synchronizedStreamsEnabled;
-(int)setActiveFormatIndex:(long long)arg1 ;
-(long long)activeFormatIndex;
-(void)setMinimumFrameRate:(float)arg1 ;
-(void)setMaximumSupportedFrameRate:(float)arg1 ;
-(float)maximumSupportedFrameRate;
-(void)setMinimumSupportedFrameRate:(float)arg1 ;
-(float)minimumSupportedFrameRate;
-(BOOL)rawBufferCompandingEnabled;
-(SCD_Struct_BW2)updateMaxExposureDurationClientOverride:(SCD_Struct_BW2)arg1 ;
-(BOOL)hasSphere;
-(BOOL)motionDataDeliveryEnabled;
-(void)setMotionDataInvalid:(BOOL)arg1 ;
-(BOOL)motionDataInvalid;
-(void)setSphereThermalLevel:(int)arg1 ;
-(int)sphereThermalLevel;
-(void)setIsStationary:(BOOL)arg1 ;
-(void)registerForObjectDetectionMetadata:(id)arg1 ;
-(void)enableFaceDetection;
-(void)setDefersObjectDetectionStartup:(BOOL)arg1 ;
-(BOOL)defersObjectDetectionStartup;
-(void)startupObjectDetectionIfNeeded;
-(void)sourceNodeWillStartStreaming;
-(void)sourceNodeDidStartStreaming;
-(void)sourceNodeFailedToStartStreaming;
-(void)sourceNodeWillStopStreaming;
-(void)sourceNodeDidStopStreaming;
-(void)sourceNodeWillEmitVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)sourceNodeWillEmitVideoPreviewSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)sourceNodeWillDiscardVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)sourceNodeWillEmitStillImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)sourceNodeWillEmitStillImageQuadraBufferProcessingError:(int)arg1 ;
-(void)sourceNodeWillEmitDetectedFacesSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)sourceNodeWillEmitDepthSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)sourceNodeWillEmitPointCloudSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)stillImageCaptureEnabled;
-(int)timeMachineCapacity;
-(void)setTimeMachineEnabled:(BOOL)arg1 ;
-(BOOL)timeMachineEnabled;
-(void)setStillImageBufferTimeMachineHandler:(id)arg1 ;
-(id)stillImageBufferTimeMachineHandler;
-(void)captureStillImageFromTimeMachineWithStillImageSettings:(id)arg1 ;
-(void)prepareForStillImageCaptureFromFirmwareWithStillImageSettings:(id)arg1 ;
-(void)willCaptureStillImageFromFirmware;
-(void)failedToCaptureStillImageFromFirmwareWithError:(int)arg1 ;
-(int)activeStillImageCaptureType;
-(void)setMasterToSlaveFrameRateRatio:(int)arg1 ;
-(void)setStreamingRequiredWhenConfiguredAsSlave:(BOOL)arg1 ;
-(void)setSensorToOutputFrameRateRatioWhenConfiguredAsSlave:(int)arg1 ;
-(void)willBecomeMasterStream;
-(void)didBecomeMasterStream;
-(void)willBecomeSlaveStream;
-(void)didBecomeSlaveStream;
-(NSDictionary *)stillImageNoiseReductionAndSharpeningConfiguration;
-(void)setLtmCurve:(int)arg1 ;
-(void)setLtmLookUpTableMetadataEnabled:(BOOL)arg1 ;
-(BOOL)ltmLookUpTableMetadataEnabled;
-(void)setLumaHistogramMetadataEnabled:(BOOL)arg1 ;
-(BOOL)lumaHistogramMetadataEnabled;
-(void)setHandlesHDRReferenceFrameReporting:(BOOL)arg1 ;
-(BOOL)handlesHDRReferenceFrameReporting;
-(void)setKeypointDetectionEnabled:(BOOL)arg1 ;
-(BOOL)keypointDetectionEnabled;
-(void)setStillImageKeypointDetectionEnabled:(BOOL)arg1 ;
-(BOOL)stillImageKeypointDetectionEnabled;
-(void)setMultiBandNoiseReductionMode:(int)arg1 ;
-(int)multiBandNoiseReductionEnabled;
-(void)setHighlightRecoverySuspended:(BOOL)arg1 ;
-(BOOL)highlightRecoverySuspended;
-(BOOL)highlightRecoveryEnabled;
-(void)setHighlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream:(BOOL)arg1 ;
-(BOOL)highlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream;
-(void)setHighlightRecoveryEnabledWhenConfiguredAsSlave:(BOOL)arg1 ;
-(BOOL)highlightRecoveryEnabledWhenConfiguredAsSlave;
-(void)setUnifiedBracketingEnabled:(BOOL)arg1 ;
-(void)setAeStatisticsEnabled:(BOOL)arg1 ;
-(BOOL)aeStatisticsEnabled;
-(void)setRawFocusScoresEnabled:(BOOL)arg1 ;
-(BOOL)rawFocusScoresEnabled;
-(void)setFocusBlurMapEnabled:(BOOL)arg1 ;
-(BOOL)focusBlurMapEnabled;
-(void)updateAETables;
-(void)setVisionDataKeypointDetectionThreshold:(float)arg1 ;
-(void)setBaseZoomFactor:(float)arg1 ;
-(void)setBaseZoomFactorAfterGDC:(float)arg1 ;
-(float)baseZoomFactorAfterGDC;
-(float)aeMaxGain;
-(void)setAeMaxGain:(float)arg1 ;
-(float)momentCaptureVideoRecordingAEMaxGain;
-(void)setMomentCaptureVideoRecordingAEMaxGain:(float)arg1 ;
-(SCD_Struct_BW2)maxExposureDurationFrameworkOverride;
-(BOOL)streaming;
-(id<BWFigVideoCaptureStreamStillImageCaptureDelegate>)stillImageCaptureDelegate;
-(void)setStillImageCaptureDelegate:(id<BWFigVideoCaptureStreamStillImageCaptureDelegate>)arg1 ;
-(BOOL)usesStillFusionReferenceFramePTSForDidCaptureCallback;
-(void)setUsesStillFusionReferenceFramePTSForDidCaptureCallback:(BOOL)arg1 ;
-(int)lastStillImageCaptureType;
-(SCD_Struct_BW2)lastStillImagePTS;
-(void)setFirmwareTimeMachineEnabledWhenConfiguredAsSlave:(BOOL)arg1 ;
-(BOOL)lowLightVideoEnabled;
-(void)setLowLightVideoEnabled:(BOOL)arg1 ;
-(BOOL)variableFrameRateVideoEnabled;
-(void)setVariableFrameRateVideoEnabled:(BOOL)arg1 ;
-(int)autoFocusPositionSensorMode;
-(int)multiBandNoiseReductionMode;
-(id<BWObjectDetector>)objectDetector;
-(void)setObjectDetector:(id<BWObjectDetector>)arg1 ;
@end

