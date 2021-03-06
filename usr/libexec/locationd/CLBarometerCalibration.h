//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLBarometerCalibrationAggregatorClient-Protocol.h"
#import "CLBarometerCalibrationContextClient-Protocol.h"
#import "CLBarometerCalibrationProtocol-Protocol.h"

@class CLBarometerCalibrationSourceAggregator, NSMutableSet, NSString;

@interface CLBarometerCalibration : CLIntersiloService <CLBarometerCalibrationProtocol, CLBarometerCalibrationAggregatorClient, CLBarometerCalibrationContextClient>
{
    array_c179b914 fDataBuffers;	// 8 = 0x8
    struct array<CLBarometerCalibrationContextManager *, 5> _contextManagers;	// 200 = 0xc8
    CLBarometerCalibrationSourceAggregator *_sourceAggregator;	// 240 = 0xf0
    NSMutableSet *_clients;	// 248 = 0xf8
    NSMutableSet *_bufferClients;	// 256 = 0x100
}

+ (_Bool)isSupported;	// IMP=0x0000000100521194
+ (id)getSilo;	// IMP=0x00000001005210d8
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001005210b4
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100cdeebc
- (id).cxx_construct;	// IMP=0x0000000100522700
- (void).cxx_destruct;	// IMP=0x00000001005226c4
- (void)logBuffers;	// IMP=0x0000000100521f00
- (void)stopTrack:(id)arg1;	// IMP=0x0000000100521b40
- (void)startTrack:(id)arg1;	// IMP=0x0000000100521a00
- (void)stopBufferingForClient:(id)arg1;	// IMP=0x0000000100521878
- (void)startBufferingForClient:(id)arg1;	// IMP=0x0000000100521714
- (void)didUpdateDataBuffer:(unsigned long long)arg1;	// IMP=0x00000001005216bc
- (void)unregisterForUpdates:(byref id)arg1;	// IMP=0x0000000100521560
- (void)registerForUpdates:(byref id)arg1;	// IMP=0x00000001005213c0
- (void)releaseContextManagers;	// IMP=0x0000000100521358
- (void)endService;	// IMP=0x0000000100521304
- (void)beginService;	// IMP=0x0000000100521248
- (id)init;	// IMP=0x0000000100521150

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

