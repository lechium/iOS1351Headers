//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, PRRemoteDevice, PRSessionStartNotification;

@protocol PRRangingClientProtocol <NSObject>
- (void)rangingServiceDidUpdateState:(unsigned long long)arg1;
- (void)didFailWithError:(NSError *)arg1;

@optional
- (void)didReceiveSessionStartNotification:(PRSessionStartNotification *)arg1;
- (void)remoteDevice:(PRRemoteDevice *)arg1 didChangeState:(long long)arg2;
- (void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;
- (void)didReceiveNewSolutions:(NSArray *)arg1;
@end

