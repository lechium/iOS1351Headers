//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface Reachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;	// 8 = 0x8
}

+ (id)reachabilityForInternetConnection;	// IMP=0x00000001000682c8
+ (id)reachabilityWithAddress:(const struct sockaddr *)arg1;	// IMP=0x0000000100068270
+ (id)reachabilityWithHostName:(id)arg1;	// IMP=0x00000001000681f0
- (long long)currentReachabilityStatus;	// IMP=0x000000010006850c
- (_Bool)connectionRequired;	// IMP=0x00000001000684dc
- (long long)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x00000001000684a8
- (void)dealloc;	// IMP=0x0000000100068450
- (void)stopNotifier;	// IMP=0x000000010006840c
- (_Bool)startNotifier;	// IMP=0x0000000100068324

@end

