//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MRDNowPlayingClient, MRDNowPlayingPlayerClient, _MRNowPlayingClientProtobuf;

@protocol MRDNowPlayingClientDelegate <NSObject>

@optional
- (void)nowPlayingClient:(MRDNowPlayingClient *)arg1 applicationDidForeground:(_Bool)arg2;
- (void)nowPlayingClient:(MRDNowPlayingClient *)arg1 playerDidUnregister:(MRDNowPlayingPlayerClient *)arg2;
- (void)nowPlayingClient:(MRDNowPlayingClient *)arg1 playerDidRegister:(MRDNowPlayingPlayerClient *)arg2;
- (void)nowPlayingClient:(MRDNowPlayingClient *)arg1 clientStateDidChange:(_MRNowPlayingClientProtobuf *)arg2;
- (void)nowPlayingClient:(MRDNowPlayingClient *)arg1 activePlayerDidChangeFromPlayerClient:(MRDNowPlayingPlayerClient *)arg2 toPlayerClient:(MRDNowPlayingPlayerClient *)arg3;
@end

