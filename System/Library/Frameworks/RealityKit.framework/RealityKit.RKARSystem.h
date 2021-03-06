/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/RealityKit.framework/RealityKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface RealityKit.RKARSystem : NSObject {

	 engine;
	 delegate;
	 session;
	 cameraMode;
	 arView;
	 scene;
	 textureCache;
	 capturedFrame;
	 isFaceSession;
	 lightEntity;
	 useLowSampleAA;
	 updateCameraViewDescriptorSettings;
	 prevOrientation;
	 simpleForwardEmitter;
	 arEmitter;
	 suDepthFeatheringMaterial;
	 cameraPassthroughMaterial;
	 cameraSegmentationCompositeMaterial;
	 cameraCombinedPostProcessMaterials;
	 addedAnchors;
	 updatedAnchors;
	 removedAnchors;
	 anchorSemaphore;
	 occlusionEntitiesByAnchorIdentifier;
	 shadowReceiverEntitiesByAnchorIdentifier;
	 lastUpdateTime;
	 fallbackAmbientIntensity;
	 fallbackAmbientColor;
	 zNear;
	 zFar;
	 displayToCameraMatrix;
	 cameraNoiseRandomTranslation;
	 arProbePlacementManager;
	 arProbeRenderManager;
	 arProbeBackgroundManager;
	 __passthroughIntensityExponent;
	 __enableUpdateCameraWorldMatrixFromARFrame;
	 __enableUpdateCameraProjectionMatrixFromARFrame;
	 __autoFireStartTriggerOnPlacement;
	 collaborationStarted;
	 needInitialCollaborationData;
	 netSessionObserver;
	 connectedPeers;
	 debugOptions;
	 renderOptions;
	 groundingShadowMode;
	 $__lazy_storage_$_debugAxisEntity;
	 $__lazy_storage_$_debugAnchorPlaneMaterial;
	 $__lazy_storage_$_debugProbeMaterial;
	 worldOrigin;
	 debugAnchorsByAnchorIdentifier;
	 debugPlanesByAnchorIdentifier;
	 debugProbesByAnchorIdentifier;
	 debugFeaturePointUpdateRate;
	 timeSinceLastDebugFeaturePointUpdate;
	 debugFeaturePoints;
	 cachedGestureHitTestResults;
	 __renderQuality;
	 lastARFrameTimeStamp;
	 maxNumberOfAttemptsToGetARFrameInDuplicateCase;
	 sleepDurationInDuplicateARFrameCase;
	 shouldRenderCameraFeed;

}
-(id)init;
-(void)dealloc;
@end

