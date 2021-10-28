//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString;

@protocol AccessoryNowPlayingXPCServerProtocol <NSObject>
- (void)playbackQueueListInfoResponse:(NSString *)arg1 requestID:(NSString *)arg2 info:(NSDictionary *)arg3;
- (void)playbackQueueListChanged;
- (void)playbackAttributesHaveChanged:(NSDictionary *)arg1 withReply:(void (^)(_Bool))arg2;
- (void)mediaItemArtworkHasChanged:(NSData *)arg1 withReply:(void (^)(_Bool))arg2;
- (void)mediaItemAttributesHaveChanged:(NSDictionary *)arg1 withReply:(void (^)(_Bool))arg2;
- (void)initConnection:(void (^)(_Bool))arg1;
@end
