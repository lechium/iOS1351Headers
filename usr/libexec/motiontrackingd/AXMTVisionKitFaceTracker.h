//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXMTUtilitiesOrientationListener-Protocol.h"

@class NSArray, NSError, NSMutableArray, NSString, VNDetectFaceRectanglesRequest, VNSequenceRequestHandler, _AXMTTrackingTrackedFaceMetadata;
@protocol AXMTVisionKitFaceTrackerDelegate;

@interface AXMTVisionKitFaceTracker : NSObject <AXMTUtilitiesOrientationListener>
{
    _Bool __smiling;	// 8 = 0x8
    _Bool __lockedOnToFace;	// 9 = 0x9
    id <AXMTVisionKitFaceTrackerDelegate> _delegate;	// 16 = 0x10
    VNDetectFaceRectanglesRequest *__faceRectanglesRequest;	// 24 = 0x18
    NSError *__faceRectanglesRequestError;	// 32 = 0x20
    NSArray *__detectedFaceRectangleObservations;	// 40 = 0x28
    NSError *__error;	// 48 = 0x30
    VNSequenceRequestHandler *__sequenceRequestHandler;	// 56 = 0x38
    NSMutableArray *__trackedFacesMetadata;	// 64 = 0x40
    _AXMTTrackingTrackedFaceMetadata *__lockedOnFaceMetadata;	// 72 = 0x48
}

+ (unsigned int)_exifOrientation;	// IMP=0x00000001000167ac
- (void).cxx_destruct;	// IMP=0x00000001000168e0
@property(retain, nonatomic) _AXMTTrackingTrackedFaceMetadata *_lockedOnFaceMetadata; // @synthesize _lockedOnFaceMetadata=__lockedOnFaceMetadata;
@property(retain, nonatomic) NSMutableArray *_trackedFacesMetadata; // @synthesize _trackedFacesMetadata=__trackedFacesMetadata;
@property(readonly, nonatomic) VNSequenceRequestHandler *_sequenceRequestHandler; // @synthesize _sequenceRequestHandler=__sequenceRequestHandler;
@property(retain, nonatomic) NSError *_error; // @synthesize _error=__error;
@property(nonatomic) _Bool _lockedOnToFace; // @synthesize _lockedOnToFace=__lockedOnToFace;
@property(nonatomic) _Bool _smiling; // @synthesize _smiling=__smiling;
@property(copy, nonatomic) NSArray *_detectedFaceRectangleObservations; // @synthesize _detectedFaceRectangleObservations=__detectedFaceRectangleObservations;
@property(retain, nonatomic) NSError *_faceRectanglesRequestError; // @synthesize _faceRectanglesRequestError=__faceRectanglesRequestError;
@property(retain, nonatomic) VNDetectFaceRectanglesRequest *_faceRectanglesRequest; // @synthesize _faceRectanglesRequest=__faceRectanglesRequest;
@property(nonatomic) __weak id <AXMTVisionKitFaceTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)axmtUtilities_interfaceOrientationChanged:(long long)arg1;	// IMP=0x00000001000167a8
- (void)dealloc;	// IMP=0x0000000100016730
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x00000001000152cc
- (id)init;	// IMP=0x00000001000150e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

