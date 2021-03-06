//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

@interface CSSpringboardStartMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _isSpringBoardStarted;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x00000001000762d8
- (_Bool)_checkSpringBoardStarted;	// IMP=0x0000000100076788
- (_Bool)isSpringboardStarted;	// IMP=0x0000000100076778
- (void)_notifyObserver:(id)arg1 withStarted:(_Bool)arg2;	// IMP=0x0000000100076700
- (void)_didReceiveSpringboardStarted:(_Bool)arg1;	// IMP=0x0000000100076688
- (void)_didReceiveSpringboardStartedInQueue:(_Bool)arg1;	// IMP=0x0000000100076610
- (void)_stopMonitoring;	// IMP=0x0000000100076548
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0000000100076398
- (id)init;	// IMP=0x0000000100076344

@end

