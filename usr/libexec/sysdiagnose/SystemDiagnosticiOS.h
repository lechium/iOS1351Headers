//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SystemDiagnostic.h"

#import "FBSDisplayLayoutObserver-Protocol.h"

@class FBSDisplayLayoutMonitor, NSString;

__attribute__((visibility("hidden")))
@interface SystemDiagnosticiOS : SystemDiagnostic <FBSDisplayLayoutObserver>
{
    FBSDisplayLayoutMonitor *_layoutMonitor;	// 48 = 0x30
    id _deviceAssertion;	// 56 = 0x38
    _Bool _tailspinOnly;	// 64 = 0x40
    _Bool _vibrateStart;	// 65 = 0x41
    _Bool _wasLockedAtLaunch;	// 66 = 0x42
    int _idsCase;	// 68 = 0x44
    long long _maxHistory;	// 72 = 0x48
    long long _openIssueFiler;	// 80 = 0x50
    long long _statusBar;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000100054f7c
@property _Bool wasLockedAtLaunch; // @synthesize wasLockedAtLaunch=_wasLockedAtLaunch;
@property int idsCase; // @synthesize idsCase=_idsCase;
@property long long statusBar; // @synthesize statusBar=_statusBar;
@property long long openIssueFiler; // @synthesize openIssueFiler=_openIssueFiler;
@property long long maxHistory; // @synthesize maxHistory=_maxHistory;
@property _Bool vibrateStart; // @synthesize vibrateStart=_vibrateStart;
@property _Bool tailspinOnly; // @synthesize tailspinOnly=_tailspinOnly;
- (void)dealloc;	// IMP=0x0000000100054e28
- (void)startIDSConnection;	// IMP=0x0000000100054a00
- (void)run;	// IMP=0x0000000100052d48
- (id)parseSizeToString:(unsigned long long)arg1;	// IMP=0x0000000100052ce4
- (id)searchForTransfer:(id)arg1;	// IMP=0x0000000100052980
- (void)getSettings;	// IMP=0x000000010005293c
- (void)overrideSettings;	// IMP=0x00000001000527fc
- (void)getUserSettings;	// IMP=0x0000000100052478
- (void)configureDefaultSettings;	// IMP=0x000000010005225c
- (void)launchSettings_async;	// IMP=0x00000001000520d4
- (void)gatherDiagnostic;	// IMP=0x0000000100051e84
- (void)triggerRemoteSysdiagnoses;	// IMP=0x0000000100051bf0
- (void)triggerAirPodLogs:(_Bool)arg1;	// IMP=0x0000000100051b78
- (void)triggerFromBridge;	// IMP=0x0000000100051b74
- (_Bool)triggerCosysdiagnose;	// IMP=0x00000001000516fc
- (void)prompt;	// IMP=0x0000000100051468
- (void)dropCosysdiagnoseError:(id)arg1;	// IMP=0x0000000100051458
- (void)sendPathToArchive;	// IMP=0x0000000100051344
- (void)sendDefaultsInstructions;	// IMP=0x00000001000512c0
- (void)sendFailedInstructions;	// IMP=0x000000010005123c
- (void)sendUnableToCreateMsg;	// IMP=0x00000001000511b8
- (void)createFileAndTransfer:(id)arg1 atLocation:(id)arg2;	// IMP=0x00000001000510a4
- (_Bool)readCosysdiagnoseSetting;	// IMP=0x0000000100050fec
- (_Bool)makeOutputDirectory;	// IMP=0x0000000100050800
- (id)defaultBaseDirectory;	// IMP=0x00000001000507ec
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;	// IMP=0x00000001000505bc
- (id)init;	// IMP=0x00000001000504c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

