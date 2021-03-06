//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAccelerometerDelegate-Protocol.h"

@class CMMotionManager, NSOperationQueue, NSString;

@interface IOSAbstractInertialSensor : NSObject <UIAccelerometerDelegate>
{
    struct unique_ptr<IOSInertialSensorBridge, std::__1::default_delete<IOSInertialSensorBridge>> _sensorBridge;	// 8 = 0x8
    CMMotionManager *_motionManager;	// 16 = 0x10
    NSOperationQueue *_motionEventProcessor;	// 24 = 0x18
    double _updateInterval;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000001002cfa38
- (void).cxx_destruct;	// IMP=0x00000001002cf9e4
@property(readonly, nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(readonly, retain, nonatomic) NSOperationQueue *motionEventProcessor; // @synthesize motionEventProcessor=_motionEventProcessor;
@property(readonly, retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (void)stop;	// IMP=0x00000001002cf8e0
- (void)start;	// IMP=0x00000001002cf7f4
- (_Bool)sensorPresent;	// IMP=0x00000001002cf704
- (struct Sensor *)getSensor;	// IMP=0x00000001002cf6fc
@property(readonly, nonatomic) struct IOSInertialSensorBridge *sensorBridge;
- (id)initWithMotionManager:(id)arg1 andHandler:(id)arg2 andType:(int)arg3 andRate:(double)arg4;	// IMP=0x00000001002cf53c
- (id)init;	// IMP=0x00000001002cf42c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

