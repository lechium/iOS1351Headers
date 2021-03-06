//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RDLaunchEventsDelegate-Protocol.h"
#import "SRSensorWriterDelegate-Protocol.h"

@class NSMutableArray, NSString, RDLaunchEvents, SRSensorWriter;
@protocol OS_dispatch_queue;

@interface ALSRecorder : NSObject <SRSensorWriterDelegate, RDLaunchEventsDelegate>
{
    SRSensorWriter *_sensorWriter;	// 8 = 0x8
    NSMutableArray *_alsSenders;	// 16 = 0x10
    struct __IOHIDEventSystemClient *_client;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    RDLaunchEvents *_launchEvents;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x0000000100003324
@property(retain, nonatomic) RDLaunchEvents *launchEvents; // @synthesize launchEvents=_launchEvents;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)launchEventRunActivity:(id)arg1;	// IMP=0x0000000100003d68
- (void)sensorWriterDidStopMonitoring:(id)arg1;	// IMP=0x0000000100003d5c
- (void)sensorWriterWillStartMonitoring:(id)arg1;	// IMP=0x0000000100003d50
- (Class)classForSensorIdentifier:(id)arg1;	// IMP=0x0000000100003d44
- (void)writeALSSample:(struct __IOHIDEvent *)arg1 fromSender:(struct __IOHIDServiceClient *)arg2;	// IMP=0x0000000100003908
- (void)stopRecording;	// IMP=0x000000010000389c
- (void)startRecording;	// IMP=0x0000000100003830
- (void)stopMonitorIOHIDEvent;	// IMP=0x00000001000037cc
- (void)startMonitorIOHIDEvent;	// IMP=0x000000010000359c
- (void)dealloc;	// IMP=0x0000000100003510
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000100003370

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

