//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CBSProxyServer;

@interface CBUserSettings : NSObject
{
    _Bool _checkedInWiFiSettings;	// 8 = 0x8
    _Bool _wifiPowerStateOn;	// 9 = 0x9
    CBSProxyServer *_proxyServer;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100002168
- (void).cxx_destruct;	// IMP=0x0000000100002490
@property(retain, nonatomic) CBSProxyServer *proxyServer; // @synthesize proxyServer=_proxyServer;
@property(nonatomic) _Bool wifiPowerStateOn; // @synthesize wifiPowerStateOn=_wifiPowerStateOn;
@property(nonatomic) _Bool checkedInWiFiSettings; // @synthesize checkedInWiFiSettings=_checkedInWiFiSettings;
- (void)assignProxyServer:(id)arg1;	// IMP=0x00000001000023b8
- (void)checkInWiFiSettings:(_Bool)arg1;	// IMP=0x000000010000227c
- (id)init;	// IMP=0x00000001000021d4

@end
