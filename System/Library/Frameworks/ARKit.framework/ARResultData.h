/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ARResultData <ARData>
@optional
-(double)timestamp;
-(CVBufferRef)segmentationBuffer;
-(/*function pointer*/void**)cameraTransform;
-(id)worldTrackingState;
-(/*function pointer*/void**)worldAlignmentTransform;
-(unsigned long long)worldAlignmentModifiers;
-(id)lightEstimate;
-(id)featurePoints;
-(id)anchorsForCameraWithTransform:(/*function pointer*/void*)arg1 referenceOriginTransform:(/*function pointer*/void*)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;

@end
