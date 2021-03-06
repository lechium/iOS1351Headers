//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@class NSString;

@interface MCNewWiFiPayloadHandler : MCNewPayloadHandler
{
    struct __WiFiManagerClient *_manager;	// 32 = 0x20
    NSString *_setAsideUUID;	// 40 = 0x28
}

+ (id)managedWiFiNetworkNames;	// IMP=0x000000010005c630
- (void).cxx_destruct;	// IMP=0x000000010005c92c
- (void)remove;	// IMP=0x000000010005c12c
- (void)unsetAside;	// IMP=0x000000010005bdb0
- (void)setAside;	// IMP=0x000000010005bba8
- (void)_removeNetworkWithUUID:(id)arg1;	// IMP=0x000000010005b8e0
- (void)_removeProxyCredential;	// IMP=0x000000010005b4c4
- (_Bool)_isWiFiDaemonAvailable;	// IMP=0x000000010005b470
- (_Bool)isInstalled;	// IMP=0x000000010005b318
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010005a528
- (_Bool)_configureNetworkServiceForWiFiNetwork:(struct __WiFiNetwork *)arg1 outError:(id *)arg2;	// IMP=0x0000000100058b28
- (_Bool)_applyProxyCredential:(id)arg1;	// IMP=0x0000000100058824
- (void)_updateWiFiCustomSetWithSetID:(id)arg1 forSSID:(id)arg2;	// IMP=0x0000000100058724
- (_Bool)_setEAPConfig:(id)arg1 onNetwork:(struct __WiFiNetwork *)arg2;	// IMP=0x00000001000581a8
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000100057f04
- (id)userInputFields;	// IMP=0x0000000100057eb0
- (void)dealloc;	// IMP=0x0000000100057e58
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x0000000100057d7c

@end

