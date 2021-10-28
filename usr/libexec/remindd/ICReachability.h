//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICReachability : NSObject
{
    _Bool _alwaysReturnLocalWiFiStatus;	// 8 = 0x8
    struct __SCNetworkReachability *_reachabilityRef;	// 16 = 0x10
}

+ (id)reachabilityForLocalWiFi;	// IMP=0x0000000100063834
+ (id)sharedReachabilityForInternetConnection;	// IMP=0x00000001000637e0
+ (id)reachabilityForInternetConnection;	// IMP=0x0000000100063784
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;	// IMP=0x0000000100063718
+ (id)reachabilityWithHostName:(id)arg1;	// IMP=0x0000000100063684
- (long long)currentReachabilityStatus;	// IMP=0x0000000100063abc
- (_Bool)connectionRequired;	// IMP=0x0000000100063a8c
- (long long)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x0000000100063a58
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;	// IMP=0x0000000100063a48
- (void)dealloc;	// IMP=0x00000001000639d4
- (void)stopNotifier;	// IMP=0x0000000100063990
- (_Bool)startNotifier;	// IMP=0x00000001000638a8

@end
