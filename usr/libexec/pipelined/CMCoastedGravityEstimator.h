//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMCoastedGravityEstimator : NSObject
{
    struct CoastedGravityEstimator _impl;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000100025814
- (void).cxx_destruct;	// IMP=0x000000010002580c
- (_Bool)isConverged;	// IMP=0x0000000100025804
- (unsigned long long)numSamples;	// IMP=0x00000001000257fc
- (struct CMGravity)feedRotationRateAtTimestamp:(double)arg1 X:(float)arg2 Y:(float)arg3 Z:(float)arg4;	// IMP=0x00000001000257f4
- (struct CMGravity)feedAccelAtTimestamp:(double)arg1 X:(float)arg2 Y:(float)arg3 Z:(float)arg4;	// IMP=0x00000001000257ec
- (id)init;	// IMP=0x0000000100025794

@end

