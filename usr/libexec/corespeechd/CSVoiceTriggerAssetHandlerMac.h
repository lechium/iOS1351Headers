//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSVoiceTriggerAssetHandler.h"

#import "CSFirstUnlockMonitorDelegate-Protocol.h"
#import "CSLanguageCodeUpdateMonitorDelegate-Protocol.h"
#import "CSVoiceTriggerAssetDownloadMonitorDelegate-Protocol.h"

@class CSAsset, NSString;

@interface CSVoiceTriggerAssetHandlerMac : CSVoiceTriggerAssetHandler <CSVoiceTriggerAssetDownloadMonitorDelegate, CSFirstUnlockMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate>
{
    CSAsset *_cachedAsset;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100019cc8
@property(retain) CSAsset *cachedAsset; // @synthesize cachedAsset=_cachedAsset;
- (void)CSFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(_Bool)arg2;	// IMP=0x0000000100019bdc
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;	// IMP=0x0000000100019ae8
- (void)CSVoiceTriggerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(_Bool)arg2;	// IMP=0x0000000100019a30
- (void)_checkNewAssetAvailablity;	// IMP=0x0000000100019730
- (void)_getVoiceTriggerAssetFromAssetManager:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019528
- (void)getVoiceTriggerAsset:(CDUnknownBlockType)arg1;	// IMP=0x000000010001938c
- (void)start;	// IMP=0x00000001000192cc
- (id)init;	// IMP=0x0000000100019260

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
