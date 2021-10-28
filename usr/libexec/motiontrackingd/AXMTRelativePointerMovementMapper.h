//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AXMTPointerMovementMapper.h"

@class AXMTAccelerationCurve;

@interface AXMTRelativePointerMovementMapper : AXMTPointerMovementMapper
{
    double _normalizedMovementThreshold;	// 8 = 0x8
    double __lastTrackingPointTimestamp;	// 16 = 0x10
    AXMTAccelerationCurve *__accelerationCurve;	// 24 = 0x18
    double __trueMovementThresholdX;	// 32 = 0x20
    double __trueMovementThresholdY;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100005068
@property(nonatomic) double _trueMovementThresholdY; // @synthesize _trueMovementThresholdY=__trueMovementThresholdY;
@property(nonatomic) double _trueMovementThresholdX; // @synthesize _trueMovementThresholdX=__trueMovementThresholdX;
@property(retain, nonatomic) AXMTAccelerationCurve *_accelerationCurve; // @synthesize _accelerationCurve=__accelerationCurve;
@property(nonatomic) double _lastTrackingPointTimestamp; // @synthesize _lastTrackingPointTimestamp=__lastTrackingPointTimestamp;
@property(nonatomic) double normalizedMovementThreshold; // @synthesize normalizedMovementThreshold=_normalizedMovementThreshold;
- (id)_processPointInNormalizedTrackingSpace:(struct CGPoint)arg1 withTimestamp:(double)arg2;	// IMP=0x0000000100004de0
- (void)_updateAccelerationCurve;	// IMP=0x0000000100004cc4
- (void)setScreenBounds:(struct CGRect)arg1;	// IMP=0x0000000100004c74
- (id)processPointInNormalizedTrackingSpace:(struct CGPoint)arg1;	// IMP=0x0000000100004bb0
- (void)reset;	// IMP=0x0000000100004b5c
- (double)accelerationFactor;	// IMP=0x0000000100004b08
- (void)setAccelerationFactor:(double)arg1;	// IMP=0x0000000100004ab8
- (id)initWithScreenBounds:(struct CGRect)arg1;	// IMP=0x0000000100004a60

@end
