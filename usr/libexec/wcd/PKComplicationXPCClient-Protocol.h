//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSDictionary;

@protocol PKComplicationXPCClient
- (void)complicationPayloadReceived:(NSDictionary *)arg1;
- (void)complicationRegistrationSucceededWithDeviceToken:(NSData *)arg1;

@optional
- (void)complicationRegistrationFailed;
@end
