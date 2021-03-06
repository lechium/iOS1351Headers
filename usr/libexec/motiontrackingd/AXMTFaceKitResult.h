//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSDictionary, NSError;

@interface AXMTFaceKitResult : NSObject
{
    NSError *_error;	// 8 = 0x8
    NSArray *_landmarkPointsInImageCoordinates;	// 16 = 0x10
    NSDictionary *_expressions;	// 24 = 0x18
    NSDictionary *_semanticsDictionary;	// 32 = 0x20
    struct CGSize _imageSize;	// 40 = 0x28
    MISSING_TYPE *_poseTranslation;	// 64 = 0x40
    struct CGRect _boundingBoxInImageCoordinates;	// 80 = 0x50
    CDStruct_14d5dc5e _poseRotation;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000100020a5c
@property(copy, nonatomic) NSDictionary *semanticsDictionary; // @synthesize semanticsDictionary=_semanticsDictionary;
@property(nonatomic) MISSING_TYPE *poseTranslation; // @synthesize poseTranslation=_poseTranslation;
@property(nonatomic) CDStruct_14d5dc5e poseRotation; // @synthesize poseRotation=_poseRotation;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(copy, nonatomic) NSDictionary *expressions; // @synthesize expressions=_expressions;
@property(copy, nonatomic) NSArray *landmarkPointsInImageCoordinates; // @synthesize landmarkPointsInImageCoordinates=_landmarkPointsInImageCoordinates;
@property(nonatomic) struct CGRect boundingBoxInImageCoordinates; // @synthesize boundingBoxInImageCoordinates=_boundingBoxInImageCoordinates;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool hasFace;
- (id)pointForLandmark:(id)arg1;	// IMP=0x0000000100020808
- (id)initWithError:(id)arg1;	// IMP=0x0000000100020754
- (id)initWithFaceKitTrackedFaceDictionary:(id)arg1 semanticsDictionary:(id)arg2 sampleBuffer:(struct opaqueCMSampleBuffer *)arg3 expressions:(id)arg4;	// IMP=0x00000001000201a4

@end

