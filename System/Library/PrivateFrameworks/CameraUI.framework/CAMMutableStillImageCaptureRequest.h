/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMStillImageCaptureRequest.h>
#import <libobjc.A.dylib/CAMMutableCaptureRequestPersistence.h>
#import <libobjc.A.dylib/CAMMutableCaptureRequestLocation.h>
#import <libobjc.A.dylib/CAMMutableCaptureRequestPower.h>
#import <libobjc.A.dylib/CAMMutableCaptureRequestOrigin.h>
#import <libobjc.A.dylib/CAMMutableCaptureRequestEncodingBehavior.h>

@class NSString, NSArray, NSURL, CLLocation, CLHeading;

@interface CAMMutableStillImageCaptureRequest : CAMStillImageCaptureRequest <CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestPower, CAMMutableCaptureRequestOrigin, CAMMutableCaptureRequestEncodingBehavior>

@property (nonatomic,copy) NSString * EV0PersistenceUUID; 
@property (nonatomic,copy) NSString * timelapseIdentifier; 
@property (assign,nonatomic) long long effectFilterType; 
@property (assign,nonatomic) long long lightingEffectType; 
@property (assign,nonatomic) long long aspectRatioCrop; 
@property (nonatomic,copy) NSString * burstIdentifier; 
@property (assign,nonatomic) unsigned long long maximumBurstLength; 
@property (assign,nonatomic) long long captureOrientation; 
@property (assign,nonatomic) long long captureDevice; 
@property (assign,nonatomic) long long captureMode; 
@property (assign,nonatomic) long long pressType; 
@property (assign,nonatomic) long long flashMode; 
@property (assign,nonatomic) long long hdrMode; 
@property (assign,nonatomic) long long irisMode; 
@property (assign,nonatomic) long long ctmCaptureType; 
@property (assign,nonatomic) BOOL wantsSpatialOverCapture; 
@property (assign,nonatomic) long long lowLightMode; 
@property (assign,nonatomic) BOOL wantsPortraitEffect; 
@property (nonatomic,retain) NSArray * adjustmentFilters; 
@property (nonatomic,retain) NSArray * originalFilters; 
@property (assign,nonatomic) long long photoQualityPrioritization; 
@property (assign,nonatomic) BOOL wantsAutoDualCameraFusion; 
@property (assign,nonatomic) BOOL wantsAudioForCapture; 
@property (assign,nonatomic) BOOL wantsSquareCrop; 
@property (assign,nonatomic) BOOL wantsHighResolutionStills; 
@property (assign,nonatomic) BOOL stillDuringVideo; 
@property (assign,nonatomic) CGSize desiredPreviewSize; 
@property (nonatomic,copy) NSString * irisIdentifier; 
@property (nonatomic,copy) NSURL * localVideoDestinationURL; 
@property (nonatomic,copy) NSURL * localCTMVideoDestinationURL; 
@property (nonatomic,copy) NSURL * localSpatialOverCaptureVideoDestinationURL; 
@property (nonatomic,copy) NSURL * localCTMSpatialOverCaptureVideoDestinationURL; 
@property (nonatomic,copy) NSString * videoPersistenceUUID; 
@property (nonatomic,copy) NSString * EV0IrisIdentifier; 
@property (nonatomic,copy) NSURL * EV0LocalVideoDestinationURL; 
@property (nonatomic,copy) NSURL * EV0LocalSpatialOverCaptureVideoDestinationURL; 
@property (nonatomic,copy) NSString * EV0VideoPersistenceUUID; 
@property (assign,nonatomic) unsigned short sessionIdentifier; 
@property (assign,nonatomic) unsigned long long userInitiationTime; 
@property (assign,nonatomic) double loggingVideoZoomFactor; 
@property (assign,nonatomic) long long loggingZoomInteractionType; 
@property (assign,nonatomic,__weak) id<CAMStillImageCaptureRequestDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long persistenceOptions; 
@property (assign,nonatomic) unsigned long long deferredPersistenceOptions; 
@property (assign,nonatomic) long long temporaryPersistenceOptions; 
@property (nonatomic,copy) NSURL * localDestinationURL; 
@property (nonatomic,copy) NSString * persistenceUUID; 
@property (assign,nonatomic) BOOL shouldExtractDiagnosticsFromMetadata; 
@property (assign,nonatomic) BOOL shouldPersistDiagnosticsToSidecar; 
@property (assign,nonatomic) BOOL shouldDelayRemotePersistence; 
@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,retain) CLHeading * heading; 
@property (assign,nonatomic) unsigned assertionIdentifier; 
@property (assign,nonatomic) long long origin; 
@property (assign,nonatomic) long long videoEncodingBehavior; 
@property (assign,nonatomic) long long photoEncodingBehavior; 
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setDelegate:(id<CAMStillImageCaptureRequestDelegate>)arg1 ;
-(void)setAspectRatio:(long long)arg1 ;
-(void)setHeading:(CLHeading *)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setOrigin:(long long)arg1 ;
-(void)setHdrMode:(long long)arg1 ;
-(void)setSessionIdentifier:(unsigned short)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(void)setPhotoQualityPrioritization:(long long)arg1 ;
-(void)setBurstIdentifier:(NSString *)arg1 ;
-(void)setCaptureDevice:(long long)arg1 ;
-(void)setCaptureMode:(long long)arg1 ;
-(void)setIrisMode:(long long)arg1 ;
-(void)setWantsPortraitEffect:(BOOL)arg1 ;
-(void)setLightingEffectType:(long long)arg1 ;
-(void)setAdjustmentFilters:(NSArray *)arg1 ;
-(void)setWantsAudioForCapture:(BOOL)arg1 ;
-(void)setPhotoEncodingBehavior:(long long)arg1 ;
-(void)setVideoEncodingBehavior:(long long)arg1 ;
-(void)setPersistenceOptions:(long long)arg1 ;
-(void)setTemporaryPersistenceOptions:(long long)arg1 ;
-(void)setLowLightMode:(long long)arg1 ;
-(void)setUserInitiationTime:(unsigned long long)arg1 ;
-(void)setCaptureOrientation:(long long)arg1 ;
-(void)setPressType:(long long)arg1 ;
-(void)setWantsSquareCrop:(BOOL)arg1 ;
-(void)setAspectRatioCrop:(long long)arg1 ;
-(void)setEffectFilterType:(long long)arg1 ;
-(void)setOriginalFilters:(NSArray *)arg1 ;
-(void)setWantsHighResolutionStills:(BOOL)arg1 ;
-(void)setStillDuringVideo:(BOOL)arg1 ;
-(void)setWantsAutoDualCameraFusion:(BOOL)arg1 ;
-(void)setCtmCaptureType:(long long)arg1 ;
-(void)setWantsSpatialOverCapture:(BOOL)arg1 ;
-(void)setMaximumBurstLength:(unsigned long long)arg1 ;
-(void)setPersistenceUUID:(NSString *)arg1 ;
-(void)setShouldDelayRemotePersistence:(BOOL)arg1 ;
-(void)setLoggingVideoZoomFactor:(double)arg1 ;
-(void)setLoggingZoomInteractionType:(long long)arg1 ;
-(void)setDesiredPreviewSize:(CGSize)arg1 ;
-(void)setDeferredPersistenceOptions:(unsigned long long)arg1 ;
-(void)setLocalDestinationURL:(NSURL *)arg1 ;
-(void)setShouldExtractDiagnosticsFromMetadata:(BOOL)arg1 ;
-(void)setShouldPersistDiagnosticsToSidecar:(BOOL)arg1 ;
-(void)setAssertionIdentifier:(unsigned)arg1 ;
-(void)setVideoPersistenceUUID:(NSString *)arg1 ;
-(void)setIrisIdentifier:(NSString *)arg1 ;
-(void)setLocalVideoDestinationURL:(NSURL *)arg1 ;
-(void)setEV0LocalVideoDestinationURL:(NSURL *)arg1 ;
-(void)setLocalSpatialOverCaptureVideoDestinationURL:(NSURL *)arg1 ;
-(void)setEV0LocalSpatialOverCaptureVideoDestinationURL:(NSURL *)arg1 ;
-(void)setLocalCTMVideoDestinationURL:(NSURL *)arg1 ;
-(void)setLocalCTMSpatialOverCaptureVideoDestinationURL:(NSURL *)arg1 ;
-(void)setTimelapseIdentifier:(NSString *)arg1 ;
-(void)setEV0IrisIdentifier:(NSString *)arg1 ;
-(void)setEV0VideoPersistenceUUID:(NSString *)arg1 ;
-(void)setEV0PersistenceUUID:(NSString *)arg1 ;
-(void)setCapturedFromPhotoBooth:(BOOL)arg1 ;
@end

