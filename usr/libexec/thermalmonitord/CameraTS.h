//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "tGraphDataSource-Protocol.h"

@protocol OS_dispatch_queue;

@interface CameraTS : NSObject <tGraphDataSource>
{
    int _torchState;	// 8 = 0x8
    int _rearCameraSensorIdx;	// 12 = 0xc
    int _frontCameraSensorIdx;	// 16 = 0x10
    int _rearCameraTeleSensorIdx;	// 20 = 0x14
    int _rearCameraSuperWideSensorIdx;	// 24 = 0x18
    int _rearCameraJasperSensorIdx;	// 28 = 0x1c
    int _torchStateToken;	// 32 = 0x20
    int _rearCameraStateToken;	// 36 = 0x24
    int _rearCameraTemperatureToken;	// 40 = 0x28
    int _frontCameraStateToken;	// 44 = 0x2c
    int _frontCameraTemperatureToken;	// 48 = 0x30
    int _rearCameraTeleStateToken;	// 52 = 0x34
    int _rearCameraTeleTemperatureToken;	// 56 = 0x38
    int _rearCameraSuperWideStateToken;	// 60 = 0x3c
    int _rearCameraSuperWideTemperatureToken;	// 64 = 0x40
    int _rearCameraJasperTemperatureToken;	// 68 = 0x44
    NSObject<OS_dispatch_queue> *_cameraQueue;	// 72 = 0x48
}

@property(nonatomic) NSObject<OS_dispatch_queue> *cameraQueue; // @synthesize cameraQueue=_cameraQueue;
@property(nonatomic) int rearCameraJasperTemperatureToken; // @synthesize rearCameraJasperTemperatureToken=_rearCameraJasperTemperatureToken;
@property(nonatomic) int rearCameraSuperWideTemperatureToken; // @synthesize rearCameraSuperWideTemperatureToken=_rearCameraSuperWideTemperatureToken;
@property(nonatomic) int rearCameraSuperWideStateToken; // @synthesize rearCameraSuperWideStateToken=_rearCameraSuperWideStateToken;
@property(nonatomic) int rearCameraTeleTemperatureToken; // @synthesize rearCameraTeleTemperatureToken=_rearCameraTeleTemperatureToken;
@property(nonatomic) int rearCameraTeleStateToken; // @synthesize rearCameraTeleStateToken=_rearCameraTeleStateToken;
@property(nonatomic) int frontCameraTemperatureToken; // @synthesize frontCameraTemperatureToken=_frontCameraTemperatureToken;
@property(nonatomic) int frontCameraStateToken; // @synthesize frontCameraStateToken=_frontCameraStateToken;
@property(nonatomic) int rearCameraTemperatureToken; // @synthesize rearCameraTemperatureToken=_rearCameraTemperatureToken;
@property(nonatomic) int rearCameraStateToken; // @synthesize rearCameraStateToken=_rearCameraStateToken;
@property(nonatomic) int torchStateToken; // @synthesize torchStateToken=_torchStateToken;
@property(nonatomic) int rearCameraJasperSensorIdx; // @synthesize rearCameraJasperSensorIdx=_rearCameraJasperSensorIdx;
@property(nonatomic) int rearCameraSuperWideSensorIdx; // @synthesize rearCameraSuperWideSensorIdx=_rearCameraSuperWideSensorIdx;
@property(nonatomic) int rearCameraTeleSensorIdx; // @synthesize rearCameraTeleSensorIdx=_rearCameraTeleSensorIdx;
@property(nonatomic) int frontCameraSensorIdx; // @synthesize frontCameraSensorIdx=_frontCameraSensorIdx;
@property(nonatomic) int rearCameraSensorIdx; // @synthesize rearCameraSensorIdx=_rearCameraSensorIdx;
@property(nonatomic) int torchState; // @synthesize torchState=_torchState;
- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x000000010000528c
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x0000000100005278
- (int)numberOfFields;	// IMP=0x0000000100005270
- (void)handleTemperatureChangeNotification:(int)arg1 temperatureSensorIndex:(int)arg2;	// IMP=0x000000010000521c
- (void)handleStateChangeNotification:(int)arg1 temperatureSensorIndex:(int)arg2;	// IMP=0x00000001000051c0
- (void)updateSensor:(int)arg1 temperature:(unsigned long long)arg2;	// IMP=0x0000000100005154
- (void)dealloc;	// IMP=0x00000001000050dc
- (void)enableRearCameraJasperNotifications:(int)arg1;	// IMP=0x0000000100004fc0
- (void)enableRearCameraSuperWideNotifications:(int)arg1;	// IMP=0x0000000100004dec
- (void)enableRearCameraTeleNotifications:(int)arg1;	// IMP=0x0000000100004c18
- (id)initWithFrontCameraSensorIdx:(int)arg1 rearCameraSensorIdx:(int)arg2;	// IMP=0x0000000100004774

@end
