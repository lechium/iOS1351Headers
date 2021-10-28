//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CoreTelephonyClientDataDelegate-Protocol.h"

@class CoreTelephonyClient, NSString;

@interface ADNetworkController : NSObject <CoreTelephonyClientDataDelegate>
{
    struct __SCDynamicStore *_store;	// 8 = 0x8
    int _networkType;	// 16 = 0x10
    int _localLatencyCount;	// 20 = 0x14
    double _localLatency;	// 24 = 0x18
    double _localLatencyStddev;	// 32 = 0x20
    double _localBandwidth;	// 40 = 0x28
    double _localBandwidthStddev;	// 48 = 0x30
    double _localBandwidthBytes;	// 56 = 0x38
    double _downloadRate;	// 64 = 0x40
    CoreTelephonyClient *_coreTelophonyClient;	// 72 = 0x48
}

+ (id)sharedNetworkController;	// IMP=0x0000000100019350
- (void).cxx_destruct;	// IMP=0x000000010001a084
@property(retain) CoreTelephonyClient *coreTelophonyClient; // @synthesize coreTelophonyClient=_coreTelophonyClient;
@property(readonly, nonatomic) double downloadRate; // @synthesize downloadRate=_downloadRate;
@property(readonly, nonatomic) double localBandwidthBytes; // @synthesize localBandwidthBytes=_localBandwidthBytes;
@property(readonly, nonatomic) double localBandwidth; // @synthesize localBandwidth=_localBandwidth;
@property(readonly, nonatomic) int localLatencyCount; // @synthesize localLatencyCount=_localLatencyCount;
@property(readonly, nonatomic) double localLatency; // @synthesize localLatency=_localLatency;
- (void)_checkForNetworkAndNotify;	// IMP=0x0000000100019f70
- (void)_checkForNetwork;	// IMP=0x0000000100019960
- (void)_scheduleCheckForNetwork;	// IMP=0x0000000100019904
@property(readonly, nonatomic) double localBandwidthStddev; // @synthesize localBandwidthStddev=_localBandwidthStddev;
- (void)_recordBandwidth:(double)arg1 bytes:(double)arg2;	// IMP=0x0000000100019888
@property(readonly, nonatomic) double localLatencyStddev; // @synthesize localLatencyStddev=_localLatencyStddev;
- (void)_recordLatency:(double)arg1;	// IMP=0x000000010001980c
- (void)resetNetworkStatistics;	// IMP=0x00000001000197f8
@property(readonly, nonatomic) float unitSignalStrength;
- (int)networkType;	// IMP=0x0000000100019758
- (void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3;	// IMP=0x00000001000196f4
- (void)start;	// IMP=0x0000000100019438

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
