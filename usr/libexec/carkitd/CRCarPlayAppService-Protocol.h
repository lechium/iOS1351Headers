//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary;

@protocol CRCarPlayAppService
- (void)requestCarCapabilitiesStatus:(NSDictionary *)arg1 withReply:(void (^)(CRCarPlayCapabilities *))arg2;
- (void)requestCarCapabilitiesUpdate;
- (void)requestBlacklistUpdate;
@end
