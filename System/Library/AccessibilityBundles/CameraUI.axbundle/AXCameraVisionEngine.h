/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/AccessibilityBundles/CameraUI.axbundle/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/AXMAVCaptureSessionNodeFrameDelegate.h>

@protocol OS_dispatch_queue;
@class AVCaptureSession, AXMAVCaptureSessionNode, UIView, NSObject, AXMVisionEngine, AXMVisionAnalysisOptions, NSMutableDictionary, NSArray, NSString, AXCameraLevelingMotionAnalyzer, CMDeviceMotion, AXMCameraFrameContext, AXCameraHapticEngine;

@interface AXCameraVisionEngine : NSObject <AXMAVCaptureSessionNodeFrameDelegate> {

	BOOL _appActive;
	BOOL __queue_appActive;
	BOOL _lastAnnouncementPartial;
	AVCaptureSession* _captureSession;
	AXMAVCaptureSessionNode* _captureSessionNode;
	UIView* _sceneObjectElementContainerView;
	NSObject*<OS_dispatch_queue> _axResultsQueue;
	AXMVisionEngine* _visionEngine;
	AXMVisionAnalysisOptions* _lastDesiredAnalysisOptions;
	unsigned long long _currentFrameCount;
	long long _interfaceOrientation;
	long long _cameraDevicePosition;
	long long _cameraMode;
	NSMutableDictionary* __mostRecentVisionFeatures;
	NSMutableDictionary* __mostRecentVisionFeaturesUpdateTimes;
	NSArray* __accessibilityElementCandidates;
	NSString* _lastAnnouncement;
	long long _lastAnnouncementType;
	double _lastAnnouncementTime;
	NSString* _inflightAnnouncement;
	NSString* _previousSceneAnnouncementCandidateWithoutLocation;
	double _previousSceneAnnouncementCandidateWithoutLocationChangedTime;
	NSString* _lastSceneAnnouncement;
	NSString* _lastSceneAnnouncementFull;
	NSString* _lastSceneAnnouncementWithoutLocation;
	long long _lastSceneAnnouncementLocation;
	double _lastSceneAnnouncementTime;
	double _lastSceneAnnouncementFullTime;
	long long _lastLevelZone;
	double _lastLevelZoneChangedTime;
	long long _lastLevelAnnouncementZone;
	double _lastLevelAnnouncementTime;
	AXCameraLevelingMotionAnalyzer* __levelingMotionAnalyzer;
	CMDeviceMotion* _lastDeviceMotion;
	AXMCameraFrameContext* _lastCameraFrameContext;
	AXCameraHapticEngine* _hapticEngine;
	CGSize __lastSampleBufferSize;

}

@property (nonatomic,retain) AXMVisionEngine * visionEngine;                                                   //@synthesize visionEngine=_visionEngine - In the implementation block
@property (nonatomic,retain) AXMVisionAnalysisOptions * lastDesiredAnalysisOptions;                            //@synthesize lastDesiredAnalysisOptions=_lastDesiredAnalysisOptions - In the implementation block
@property (assign,nonatomic) unsigned long long currentFrameCount;                                             //@synthesize currentFrameCount=_currentFrameCount - In the implementation block
@property (assign,nonatomic) BOOL _queue_appActive;                                                            //@synthesize _queue_appActive=__queue_appActive - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                                                   //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) long long cameraDevicePosition;                                                   //@synthesize cameraDevicePosition=_cameraDevicePosition - In the implementation block
@property (assign,nonatomic) long long cameraMode;                                                             //@synthesize cameraMode=_cameraMode - In the implementation block
@property (assign,nonatomic) CGSize _lastSampleBufferSize;                                                     //@synthesize _lastSampleBufferSize=__lastSampleBufferSize - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _mostRecentVisionFeatures;                                //@synthesize _mostRecentVisionFeatures=__mostRecentVisionFeatures - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _mostRecentVisionFeaturesUpdateTimes;                     //@synthesize _mostRecentVisionFeaturesUpdateTimes=__mostRecentVisionFeaturesUpdateTimes - In the implementation block
@property (nonatomic,retain) NSArray * _accessibilityElementCandidates;                                        //@synthesize _accessibilityElementCandidates=__accessibilityElementCandidates - In the implementation block
@property (nonatomic,readonly) BOOL useThirdsForLocation; 
@property (nonatomic,copy) NSString * lastAnnouncement;                                                        //@synthesize lastAnnouncement=_lastAnnouncement - In the implementation block
@property (assign,nonatomic) long long lastAnnouncementType;                                                   //@synthesize lastAnnouncementType=_lastAnnouncementType - In the implementation block
@property (assign,getter=isLastAnnouncementPartial,nonatomic) BOOL lastAnnouncementPartial;                    //@synthesize lastAnnouncementPartial=_lastAnnouncementPartial - In the implementation block
@property (assign,nonatomic) double lastAnnouncementTime;                                                      //@synthesize lastAnnouncementTime=_lastAnnouncementTime - In the implementation block
@property (nonatomic,copy) NSString * inflightAnnouncement;                                                    //@synthesize inflightAnnouncement=_inflightAnnouncement - In the implementation block
@property (nonatomic,copy) NSString * previousSceneAnnouncementCandidateWithoutLocation;                       //@synthesize previousSceneAnnouncementCandidateWithoutLocation=_previousSceneAnnouncementCandidateWithoutLocation - In the implementation block
@property (assign,nonatomic) double previousSceneAnnouncementCandidateWithoutLocationChangedTime;              //@synthesize previousSceneAnnouncementCandidateWithoutLocationChangedTime=_previousSceneAnnouncementCandidateWithoutLocationChangedTime - In the implementation block
@property (nonatomic,copy) NSString * lastSceneAnnouncement;                                                   //@synthesize lastSceneAnnouncement=_lastSceneAnnouncement - In the implementation block
@property (nonatomic,copy) NSString * lastSceneAnnouncementFull;                                               //@synthesize lastSceneAnnouncementFull=_lastSceneAnnouncementFull - In the implementation block
@property (nonatomic,copy) NSString * lastSceneAnnouncementWithoutLocation;                                    //@synthesize lastSceneAnnouncementWithoutLocation=_lastSceneAnnouncementWithoutLocation - In the implementation block
@property (assign,nonatomic) long long lastSceneAnnouncementLocation;                                          //@synthesize lastSceneAnnouncementLocation=_lastSceneAnnouncementLocation - In the implementation block
@property (assign,nonatomic) double lastSceneAnnouncementTime;                                                 //@synthesize lastSceneAnnouncementTime=_lastSceneAnnouncementTime - In the implementation block
@property (assign,nonatomic) double lastSceneAnnouncementFullTime;                                             //@synthesize lastSceneAnnouncementFullTime=_lastSceneAnnouncementFullTime - In the implementation block
@property (assign,nonatomic) long long lastLevelZone;                                                          //@synthesize lastLevelZone=_lastLevelZone - In the implementation block
@property (assign,nonatomic) double lastLevelZoneChangedTime;                                                  //@synthesize lastLevelZoneChangedTime=_lastLevelZoneChangedTime - In the implementation block
@property (assign,nonatomic) long long lastLevelAnnouncementZone;                                              //@synthesize lastLevelAnnouncementZone=_lastLevelAnnouncementZone - In the implementation block
@property (assign,nonatomic) double lastLevelAnnouncementTime;                                                 //@synthesize lastLevelAnnouncementTime=_lastLevelAnnouncementTime - In the implementation block
@property (nonatomic,readonly) AXCameraLevelingMotionAnalyzer * _levelingMotionAnalyzer;                       //@synthesize _levelingMotionAnalyzer=__levelingMotionAnalyzer - In the implementation block
@property (nonatomic,retain) CMDeviceMotion * lastDeviceMotion;                                                //@synthesize lastDeviceMotion=_lastDeviceMotion - In the implementation block
@property (nonatomic,retain) AXMCameraFrameContext * lastCameraFrameContext;                                   //@synthesize lastCameraFrameContext=_lastCameraFrameContext - In the implementation block
@property (nonatomic,readonly) AXCameraHapticEngine * hapticEngine;                                            //@synthesize hapticEngine=_hapticEngine - In the implementation block
@property (nonatomic,readonly) BOOL shouldEmitLevelFeedback; 
@property (assign,nonatomic,__weak) AVCaptureSession * captureSession;                                         //@synthesize captureSession=_captureSession - In the implementation block
@property (nonatomic,retain) AXMAVCaptureSessionNode * captureSessionNode;                                     //@synthesize captureSessionNode=_captureSessionNode - In the implementation block
@property (assign,nonatomic,__weak) UIView * sceneObjectElementContainerView;                                  //@synthesize sceneObjectElementContainerView=_sceneObjectElementContainerView - In the implementation block
@property (assign,getter=isAppActive,nonatomic) BOOL appActive;                                                //@synthesize appActive=_appActive - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> axResultsQueue;                                    //@synthesize axResultsQueue=_axResultsQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedEngine;
+(BOOL)_isContainedWithinScreenBoundsForNormalizedFrame:(CGRect)arg1 ;
+(CGAffineTransform)_scaleNormalizedCoordinatesToSceneCoordinates:(CGRect)arg1 ;
-(id)init;
-(void)dealloc;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(AXCameraHapticEngine *)hapticEngine;
-(BOOL)_isMirrored;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 forMetadataObjectTypes:(id)arg3 fromConnection:(id)arg4 ;
-(void)setCaptureSession:(AVCaptureSession *)arg1 ;
-(AVCaptureSession *)captureSession;
-(void)captureSessionNode:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(long long)cameraMode;
-(void)setCameraMode:(long long)arg1 ;
-(unsigned long long)currentFrameCount;
-(void)setCurrentFrameCount:(unsigned long long)arg1 ;
-(void)_setupEngine;
-(void)_setupHaptics;
-(void)_setupLeveling;
-(void)_resetAnnouncementState;
-(void)_handleAnnouncementDidFinish:(id)arg1 ;
-(void)set_queue_appActive:(BOOL)arg1 ;
-(void)_dispatchToResultsQueueWithBlock:(/*^block*/id)arg1 ;
-(void)_resetScheduling;
-(void)_clearCachedVisionResults;
-(void)_resetAccessiblityElements;
-(void)_setCaptureDevicePosition:(long long)arg1 mode:(long long)arg2 ;
-(void)set_lastSampleBufferSize:(CGSize)arg1 ;
-(long long)cameraDevicePosition;
-(void)setLastDesiredAnalysisOptions:(AXMVisionAnalysisOptions *)arg1 ;
-(NSMutableDictionary *)_mostRecentVisionFeatures;
-(void)set_accessibilityElementCandidates:(NSArray *)arg1 ;
-(UIView *)sceneObjectElementContainerView;
-(void)setLastAnnouncement:(NSString *)arg1 ;
-(void)setLastAnnouncementType:(long long)arg1 ;
-(void)setLastAnnouncementTime:(double)arg1 ;
-(void)setInflightAnnouncement:(NSString *)arg1 ;
-(void)setPreviousSceneAnnouncementCandidateWithoutLocation:(NSString *)arg1 ;
-(void)setLastSceneAnnouncement:(NSString *)arg1 ;
-(void)setLastSceneAnnouncementFull:(NSString *)arg1 ;
-(void)setLastSceneAnnouncementWithoutLocation:(NSString *)arg1 ;
-(void)setLastSceneAnnouncementLocation:(long long)arg1 ;
-(void)setLastSceneAnnouncementTime:(double)arg1 ;
-(void)setLastSceneAnnouncementFullTime:(double)arg1 ;
-(AXCameraLevelingMotionAnalyzer *)_levelingMotionAnalyzer;
-(void)setLastLevelZone:(long long)arg1 ;
-(void)setLastLevelZoneChangedTime:(double)arg1 ;
-(void)setLastLevelAnnouncementZone:(long long)arg1 ;
-(void)setLastLevelAnnouncementTime:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)axResultsQueue;
-(void)setCameraDevicePosition:(long long)arg1 ;
-(AXMVisionEngine *)visionEngine;
-(void)_setupCaptureSessionNode;
-(void)setCaptureSessionNode:(AXMAVCaptureSessionNode *)arg1 ;
-(AXMAVCaptureSessionNode *)captureSessionNode;
-(void)_handleVisionFeatures:(id)arg1 evaluatedFeatureTypes:(id)arg2 userContext:(id)arg3 ;
-(BOOL)_hasRealtimeFacesWithoutNames;
-(BOOL)_hasDetectedFaces;
-(AXMVisionAnalysisOptions *)lastDesiredAnalysisOptions;
-(NSArray *)_accessibilityElementCandidates;
-(AXMCameraFrameContext *)lastCameraFrameContext;
-(void)setLastCameraFrameContext:(AXMCameraFrameContext *)arg1 ;
-(void)_handleUpdatedVisionFeatures:(id)arg1 evaluatedFeatureTypes:(id)arg2 fromMotionUpdate:(BOOL)arg3 ;
-(NSMutableDictionary *)_mostRecentVisionFeaturesUpdateTimes;
-(void)_purgeExpiredVisionFeaturesUsingTime:(double)arg1 ;
-(void)_createAccessibilityElementCandidatesForVisionFeatures:(id)arg1 evaluatedFeatureTypes:(id)arg2 ;
-(void)_generateAnnouncementsForVisionFeatures:(id)arg1 ;
-(double)_expirationTimeForFeatureType:(unsigned long long)arg1 ;
-(CMDeviceMotion *)lastDeviceMotion;
-(void)_applyMotionCorrectionToElement:(id)arg1 updatedFrameContext:(id)arg2 ;
-(CGRect)_motionCorrectedNormalizedFrameForFeature:(id)arg1 ;
-(BOOL)_updateAccessibilityElements:(id)arg1 forIncomingFeature:(id)arg2 correctedFrame:(CGRect)arg3 evaluatedFeatureTypes:(id)arg4 ;
-(BOOL)_canCreateAccessibilityElementForFeature:(id)arg1 correctedFrame:(CGRect)arg2 allFeatures:(id)arg3 ;
-(BOOL)_shouldReuseExistingElement:(id)arg1 forFeature:(id)arg2 correctedFrame:(CGRect)arg3 ;
-(CGRect)_sceneObjectFrameForNormalizedFrame:(CGRect)arg1 inSceneFrame:(CGRect)arg2 ;
-(BOOL)useThirdsForLocation;
-(long long)lastSceneAnnouncementLocation;
-(id)_sceneDescriptionAnnouncementForVisionFeatures:(id)arg1 previousAnnouncementLocation:(long long)arg2 locationForAnnouncement:(out long long*)arg3 announcementType:(out long long*)arg4 ;
-(void)_attemptSceneDescriptionAnnouncement:(id)arg1 locationForAnnouncement:(long long)arg2 type:(long long)arg3 ;
-(void)_sortedAndFilteredAccessibilityElements:(id)arg1 faces:(out id*)arg2 persons:(out id*)arg3 prominentObjects:(out id*)arg4 objectClassifications:(out id*)arg5 ;
-(CGRect)_normalizedFrameForAccessibilityElements:(id)arg1 ;
-(void)_performScreenEdgeHaptic;
-(double)lastSceneAnnouncementTime;
-(double)lastSceneAnnouncementFullTime;
-(double)previousSceneAnnouncementCandidateWithoutLocationChangedTime;
-(NSString *)lastSceneAnnouncementWithoutLocation;
-(long long)lastAnnouncementType;
-(BOOL)_attemptAnnouncement:(id)arg1 type:(long long)arg2 isPartial:(BOOL)arg3 timestamp:(double)arg4 ;
-(BOOL)_canPostAnnouncement:(id)arg1 type:(long long)arg2 isPartial:(BOOL)arg3 timestamp:(double)arg4 ;
-(void)setLastAnnouncementPartial:(BOOL)arg1 ;
-(NSString *)inflightAnnouncement;
-(double)lastAnnouncementTime;
-(long long)_priorityForAnnouncementType:(long long)arg1 ;
-(BOOL)isLastAnnouncementPartial;
-(id)_filterElements:(id)arg1 usingRelativeAreaThreshold:(double)arg2 referenceElement:(id)arg3 ;
-(id)_filterElements:(id)arg1 usingRelativeWidthThreshold:(double)arg2 referenceElement:(id)arg3 ;
-(void)setPreviousSceneAnnouncementCandidateWithoutLocationChangedTime:(double)arg1 ;
-(CGRect)_motionCorrectedNormalizedFrame:(CGRect)arg1 frameContext:(id)arg2 targetAttitude:(id)arg3 ;
-(void)_updateLevelFeedbackForDeviceMotion:(id)arg1 ;
-(void)setLastDeviceMotion:(CMDeviceMotion *)arg1 ;
-(BOOL)_queue_appActive;
-(long long)lastLevelZone;
-(BOOL)shouldEmitLevelFeedback;
-(void)_performBecameLevelFeedback;
-(void)_performBecameUnlevelFeedback;
-(void)_attemptLevelingAnnouncementForZone:(long long)arg1 previousZone:(long long)arg2 ;
-(id)_announcementStringForFeedbackZone:(long long)arg1 ;
-(BOOL)_isLevelingNeededForZone:(long long)arg1 ;
-(long long)lastLevelAnnouncementZone;
-(double)lastLevelAnnouncementTime;
-(double)lastLevelZoneChangedTime;
-(void)_handleDeviceMotion:(id)arg1 ;
-(id)_analysisOptionsForIncomingFrame;
-(void)_handleCameraMetadataObjects:(id)arg1 fromConnection:(id)arg2 ;
-(CGSize)_lastSampleBufferSize;
-(void)setAppActive:(BOOL)arg1 ;
-(void)setCaptureDevicePosition:(long long)arg1 mode:(long long)arg2 ;
-(void)_performOnMainQueueWithBlock:(/*^block*/id)arg1 ;
-(void)motionManagerDidUpdateDeviceMotion:(id)arg1 captureOrientation:(long long)arg2 ;
-(void)setSceneObjectElementContainerView:(UIView *)arg1 ;
-(BOOL)isAppActive;
-(void)setVisionEngine:(AXMVisionEngine *)arg1 ;
-(NSString *)lastAnnouncement;
-(NSString *)previousSceneAnnouncementCandidateWithoutLocation;
-(NSString *)lastSceneAnnouncement;
-(NSString *)lastSceneAnnouncementFull;
@end

