//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MRApplicationActivity, MRDNowPlayingClient, MRDNowPlayingOriginClient, _MRDeviceInfoMessageProtobuf, _MRNowPlayingPlayerPathProtobuf;

@protocol MRDNowPlayingOriginClientDelegate <NSObject>

@optional
- (void)nowPlayingOriginClientPlaybackDidTimeout:(MRDNowPlayingOriginClient *)arg1;
- (void)nowPlayingOriginClient:(MRDNowPlayingOriginClient *)arg1 currentRouteVolumeDidChange:(float)arg2;
- (void)nowPlayingOriginClient:(MRDNowPlayingOriginClient *)arg1 currentRouteVolumeControlCapabilitiesDidChange:(unsigned int)arg2;
- (void)nowPlayingOriginClient:(MRDNowPlayingOriginClient *)arg1 clientDidUnregister:(MRDNowPlayingClient *)arg2;
- (void)nowPlayingOriginClient:(MRDNowPlayingOriginClient *)arg1 clientDidRegister:(MRDNowPlayingClient *)arg2;
- (void)nowPlayingOriginClient:(MRDNowPlayingOriginClient *)arg1 applicationActivityStatusDidChange:(MRApplicationActivity *)arg2;
- (void)nowPlayingOriginClient:(MRDNowPlayingOriginClient *)arg1 applicationActivityDidEnd:(MRApplicationActivity *)arg2;
- (void)nowPlayingOriginClient:(MRDNowPlayingOriginClient *)arg1 applicationActivityDidBegin:(MRApplicationActivity *)arg2;
- (void)nowPlayingOriginClient:(MRDNowPlayingOriginClient *)arg1 activePlayerPathDidChange:(_MRNowPlayingPlayerPathProtobuf *)arg2 withPlaybackState:(unsigned int)arg3;
- (void)nowPlayingOriginClient:(MRDNowPlayingOriginClient *)arg1 deviceInfoDidChange:(_MRDeviceInfoMessageProtobuf *)arg2 previousDeviceInfo:(_MRDeviceInfoMessageProtobuf *)arg3;
@end

