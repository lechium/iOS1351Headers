//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMSession.h"

@class NSMutableArray, NWInterface;

@interface NESMIKEv2VPNFallbackSession : NESMSession
{
    _Bool _fallbackIsActive;	// 8 = 0x8
    int _sleepAckCount;	// 12 = 0xc
    NSMutableArray *_childSessions;	// 16 = 0x10
    unsigned long long _predicatedInterfaceIndex;	// 24 = 0x18
    unsigned long long _advisoryInterfaceIndex;	// 32 = 0x20
    NWInterface *_primaryCellularInterface;	// 40 = 0x28
    unsigned long long _cellularIfFlags;	// 48 = 0x30
    long long _installState;	// 56 = 0x38
    NSMutableArray *_configurationOperationArray;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000779bc
@property(retain) NSMutableArray *configurationOperationArray; // @synthesize configurationOperationArray=_configurationOperationArray;
@property _Bool fallbackIsActive; // @synthesize fallbackIsActive=_fallbackIsActive;
@property int sleepAckCount; // @synthesize sleepAckCount=_sleepAckCount;
@property long long installState; // @synthesize installState=_installState;
@property unsigned long long cellularIfFlags; // @synthesize cellularIfFlags=_cellularIfFlags;
@property(retain) NWInterface *primaryCellularInterface; // @synthesize primaryCellularInterface=_primaryCellularInterface;
@property unsigned long long advisoryInterfaceIndex; // @synthesize advisoryInterfaceIndex=_advisoryInterfaceIndex;
@property unsigned long long predicatedInterfaceIndex; // @synthesize predicatedInterfaceIndex=_predicatedInterfaceIndex;
@property(retain) NSMutableArray *childSessions; // @synthesize childSessions=_childSessions;
- (void)startFallbackSession;	// IMP=0x0000000100077384
- (void)resetFallbackInterfaceOnServer;	// IMP=0x0000000100076d28
- (void)handleClearConfigurationResult:(id)arg1;	// IMP=0x0000000100076a5c
- (void)handleSetConfigurationResult:(id)arg1 tunnelInterfaceName:(id)arg2;	// IMP=0x00000001000767f8
- (_Bool)shouldDisableInitialContactForSession:(id)arg1;	// IMP=0x00000001000765ac
- (void)handleNetworkConfigurationChange:(long long)arg1;	// IMP=0x00000001000762b8
- (void)uninstall;	// IMP=0x0000000100075e2c
- (void)requestUninstall:(id)arg1;	// IMP=0x0000000100075b18
- (void)requestUninstall;	// IMP=0x00000001000754ec
- (void)installPended;	// IMP=0x0000000100075070
- (void)install;	// IMP=0x000000010007491c
- (void)registerSession:(id)arg1 fromClient:(id)arg2 fromSession:(id)arg3;	// IMP=0x00000001000743b4
- (void)requestInstallForSession:(id)arg1 exclusive:(_Bool)arg2;	// IMP=0x0000000100074084
- (void)requestInstall;	// IMP=0x000000010007395c
- (void)setLastDisconnectErrorFromSession:(id)arg1 lastDisconnectError:(id)arg2;	// IMP=0x0000000100073748
- (void)setLastStopReasonFromSession:(id)arg1 lastStopReason:(int)arg2;	// IMP=0x000000010007355c
- (void)setStatusFromSession:(id)arg1 andStatus:(int)arg2;	// IMP=0x0000000100073148
- (void)setStatus:(int)arg1;	// IMP=0x0000000100072ee0
- (int)parentStatus:(int)arg1 secondStatus:(int)arg2;	// IMP=0x0000000100072928
- (void)prepareNetwork:(id)arg1;	// IMP=0x0000000100072380
- (void)handleNetworkDetectionNotification:(int)arg1;	// IMP=0x0000000100072084
- (void)handleChangeEventForInterface:(id)arg1 newFlags:(unsigned long long)arg2 previousFlags:(unsigned long long)arg3;	// IMP=0x0000000100071e78
- (id)copyExtendedStatus;	// IMP=0x0000000100071794
- (id)copyStatistics;	// IMP=0x0000000100071140
- (void)handleGetInfoMessage:(id)arg1 withType:(int)arg2;	// IMP=0x0000000100071070
- (_Bool)handleUpdateConfiguration:(id)arg1;	// IMP=0x0000000100070628
- (void)ackSleep:(id)arg1;	// IMP=0x0000000100070510
- (void)handleUserSwitch;	// IMP=0x0000000100070238
- (void)handleUserLogout;	// IMP=0x000000010006ff60
- (void)handleSleepTime:(double)arg1;	// IMP=0x000000010006fc6c
- (_Bool)handleSleep;	// IMP=0x000000010006f948
- (void)handleWakeup;	// IMP=0x000000010006f670
- (void)handleStopMessageWithReason:(int)arg1;	// IMP=0x000000010006f354
- (void)handleStartMessage:(id)arg1;	// IMP=0x000000010006f10c
- (void)handleInitializeState;	// IMP=0x000000010006ee14
- (id)tunnelInstallState2String:(long long)arg1;	// IMP=0x000000010006edb4
- (id)tunnelSessionType2String:(id)arg1;	// IMP=0x000000010006ec74
- (int)type;	// IMP=0x000000010006ec6c
- (void)dealloc;	// IMP=0x000000010006ebf4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010006e490
- (_Bool)startMonitoringPrimaryCellularInterface;	// IMP=0x000000010006e2d4
- (void)handleChangeEventForFallback:(_Bool)arg1;	// IMP=0x000000010006e10c
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2 andProtocol:(id)arg3 andSessionType:(int)arg4;	// IMP=0x000000010006dcc4

@end
