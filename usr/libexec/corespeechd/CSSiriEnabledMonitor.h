//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

@interface CSSiriEnabledMonitor : CSEventMonitor
{
    _Bool _isSiriEnabled;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010004e7ac
- (_Bool)fetchIsEnabled;	// IMP=0x000000010004ec58
- (_Bool)isEnabled;	// IMP=0x000000010004ec48
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;	// IMP=0x000000010004ebd0
- (void)_didReceiveSiriSettingChanged:(_Bool)arg1;	// IMP=0x000000010004eb4c
- (void)_stopMonitoring;	// IMP=0x000000010004ea88
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x000000010004e85c
- (id)init;	// IMP=0x000000010004e818

@end
