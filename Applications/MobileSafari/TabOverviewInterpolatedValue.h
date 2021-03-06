//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface TabOverviewInterpolatedValue : NSObject
{
    NSHashTable *_dependants;	// 8 = 0x8
    NSHashTable *_dependencies;	// 16 = 0x10
    double _instantaneousTargetValue;	// 24 = 0x18
    double _lastRenderedValue;	// 32 = 0x20
    double _value;	// 40 = 0x28
    double _targetValue;	// 48 = 0x30
    double _epsilon;	// 56 = 0x38
    double _decelerationFactor;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100140144
@property(nonatomic) double decelerationFactor; // @synthesize decelerationFactor=_decelerationFactor;
@property(nonatomic) double epsilon; // @synthesize epsilon=_epsilon;
@property(nonatomic) double targetValue; // @synthesize targetValue=_targetValue;
@property(readonly, nonatomic) double value; // @synthesize value=_value;
- (_Bool)isSteadyAtTargetValue:(double)arg1;	// IMP=0x00000001001400d0
- (id)description;	// IMP=0x000000010013ffb8
- (void)addDependency:(id)arg1;	// IMP=0x000000010013ff14
- (void)_recursivelyRemoveDependency:(id)arg1;	// IMP=0x000000010013fdcc
- (void)_removeDependency:(id)arg1;	// IMP=0x000000010013fd78
- (void)_addDependant:(id)arg1;	// IMP=0x000000010013fd00
- (void)_removeFromDependants;	// IMP=0x000000010013fbcc
- (void)resetLastRenderedValue;	// IMP=0x000000010013fbc0
- (void)resetToValue:(double)arg1;	// IMP=0x000000010013fb70
- (_Bool)interpolateByTimeInterval:(double)arg1;	// IMP=0x000000010013fa3c
- (_Bool)_dependenciesAreInSteadyState;	// IMP=0x000000010013f914
@property(readonly, nonatomic, getter=isInSteadyState) _Bool inSteadyState;
- (id)initWithValue:(double)arg1 decelerationFactor:(double)arg2;	// IMP=0x000000010013f7d8

@end

