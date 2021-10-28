//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSValue;
@protocol AXMTVelocityBasedPointMapperDelegate;

@interface AXMTVelocityBasedPointMapper : NSObject
{
    double _sensitivity;	// 8 = 0x8
    NSValue *_lastReportedPoint;	// 16 = 0x10
    id <AXMTVelocityBasedPointMapperDelegate> _delegate;	// 24 = 0x18
    NSValue *__lastReportedPointFromProcessing;	// 32 = 0x20
    NSValue *__lastProcessedPoint;	// 40 = 0x28
    NSDate *__lastReportedTimestamp;	// 48 = 0x30
    NSValue *__lastVelocitySize;	// 56 = 0x38
    NSValue *__nextInitialPoint;	// 64 = 0x40
    struct CGRect _bounds;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010001c1dc
@property(retain, nonatomic) NSValue *_nextInitialPoint; // @synthesize _nextInitialPoint=__nextInitialPoint;
@property(retain, nonatomic) NSValue *_lastVelocitySize; // @synthesize _lastVelocitySize=__lastVelocitySize;
@property(retain, nonatomic) NSDate *_lastReportedTimestamp; // @synthesize _lastReportedTimestamp=__lastReportedTimestamp;
@property(retain, nonatomic) NSValue *_lastProcessedPoint; // @synthesize _lastProcessedPoint=__lastProcessedPoint;
@property(retain, nonatomic) NSValue *_lastReportedPointFromProcessing; // @synthesize _lastReportedPointFromProcessing=__lastReportedPointFromProcessing;
@property(nonatomic) __weak id <AXMTVelocityBasedPointMapperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) NSValue *lastReportedPoint; // @synthesize lastReportedPoint=_lastReportedPoint;
@property(nonatomic) double sensitivity; // @synthesize sensitivity=_sensitivity;
- (double)_dampenMovementForNormalizedValue:(double)arg1 normalizedLastValue:(double)arg2 startingCutoff:(double)arg3 factorNumerator:(double)arg4;	// IMP=0x000000010001c0e4
- (double)_computeDistanceForTimeDifference:(double)arg1 currentNormalizedPoint:(double)arg2 lastNormalizedPoint:(double)arg3 sensitivityFactor:(double)arg4;	// IMP=0x000000010001c0b0
- (struct CGPoint)_normalizedPointForLocalCoordinate:(struct CGPoint)arg1 inBounds:(struct CGRect)arg2;	// IMP=0x000000010001c0a4
- (struct CGPoint)processPoint:(struct CGPoint)arg1;	// IMP=0x000000010001baf0
- (void)reset;	// IMP=0x000000010001ba64
- (void)resetToPoint:(struct CGPoint)arg1;	// IMP=0x000000010001b9b4
- (void)dealloc;	// IMP=0x000000010001b980
- (id)initWithBounds:(struct CGRect)arg1 sensitivity:(double)arg2;	// IMP=0x000000010001b910

@end
