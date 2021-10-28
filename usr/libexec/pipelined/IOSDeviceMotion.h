//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IOSAbstractInertialSensor.h"

@interface IOSDeviceMotion : IOSAbstractInertialSensor
{
    unsigned long long _referenceFrame;	// 8 = 0x8
}

- (id)description;	// IMP=0x00000001002ce9b0
- (void)stop;	// IMP=0x00000001002ce93c
- (void)start;	// IMP=0x00000001002cdc1c
- (_Bool)sensorPresent;	// IMP=0x00000001002cdba0
- (id)initWithMotionManager:(id)arg1 andHandler:(id)arg2 usingReferenceFrame:(unsigned long long)arg3;	// IMP=0x00000001002cdac4

@end
