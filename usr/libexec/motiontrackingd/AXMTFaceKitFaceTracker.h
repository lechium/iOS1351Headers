//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXMTFaceKitFaceTrackerFaceInfo, AXMTFaceKitResult, MISSING_TYPE;
@protocol AXMTFaceKitFaceTrackerDelegate;

@interface AXMTFaceKitFaceTracker : NSObject
{
    AXMTFaceKitResult *_lastResult;	// 8 = 0x8
    id <AXMTFaceKitFaceTrackerDelegate> _delegate;	// 16 = 0x10
    struct CVAFaceKit *__faceKitRef;	// 24 = 0x18
    AXMTFaceKitFaceTrackerFaceInfo *__initialFaceInfo;	// 32 = 0x20
}

+ (id)_faceKitCreationOptions;	// IMP=0x000000010001fe68
+ (id)_faceKitProcessOptionsForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 detectedFaceInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x000000010001f698
+ (CDStruct_d80e62f2)_intrinsicsMatrixFromFieldOfView:(float)arg1 andWidth:(unsigned long long)arg2 andHeight:(unsigned long long)arg3;	// IMP=0x000000010001f5f0
+ (id)_intrinsicsArrayFromMatrix:(CDStruct_d80e62f2)arg1;	// IMP=0x000000010001f344
+ (CDStruct_14d5dc5e)_poseRotationMatrixFromArray:(id)arg1;	// IMP=0x000000010001efc0
+ (MISSING_TYPE *)_poseTranslationMatrixFromArray:(id)arg1;	// IMP=0x000000010001eecc
- (void).cxx_destruct;	// IMP=0x0000000100020000
@property(retain, nonatomic) AXMTFaceKitFaceTrackerFaceInfo *_initialFaceInfo; // @synthesize _initialFaceInfo=__initialFaceInfo;
@property(nonatomic) struct CVAFaceKit *_faceKitRef; // @synthesize _faceKitRef=__faceKitRef;
@property(nonatomic) __weak id <AXMTFaceKitFaceTrackerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AXMTFaceKitResult *lastResult; // @synthesize lastResult=_lastResult;
- (id)_handleFaceBlendShapes:(id)arg1;	// IMP=0x000000010001ebc8
- (void)_updateFaceInfoIfNeededWithSampleBufferVisionKit:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000010001e4ac
- (void)processVideoFrame:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000010001da38
- (void)reset;	// IMP=0x000000010001d9fc
- (void)dealloc;	// IMP=0x000000010001d9ac
- (id)init;	// IMP=0x000000010001d820

@end
