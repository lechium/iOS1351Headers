//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MRDAVSystemEndpointController, MRDNowPlayingOriginClient, NSString;

@protocol MRDAVSystemEndpointControllerDelegate <NSObject>
- (void)systemEndpointController:(MRDAVSystemEndpointController *)arg1 activeOutputDeviceUIDDidChange:(NSString *)arg2 type:(long long)arg3 change:(long long)arg4 originClient:(MRDNowPlayingOriginClient *)arg5 reason:(NSString *)arg6;
@end

