//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLConnectionDataDelegate-Protocol.h"

@class CLConnectionEndpoint, NSData;

@protocol CLConnectionStreamConsumingDelegate <CLConnectionDataDelegate>
- (void)endpoint:(CLConnectionEndpoint *)arg1 didReceiveStreamedData:(NSData *)arg2;
@end
