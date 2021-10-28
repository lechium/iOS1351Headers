//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDSBaseMessage, NSArray, NSString;

@protocol IDSRegistrationCenterMessageDelivery <NSObject>
@property(readonly) NSArray *queuedMessages;
@property(readonly) IDSBaseMessage *currentMessage;
@property _Bool logToRegistration;
@property _Bool retryInAirplaneMode;
@property(copy) NSString *userAgent;
- (void)invalidate;
- (void)cancelMessage:(IDSBaseMessage *)arg1;
- (_Bool)sendMessage:(IDSBaseMessage *)arg1;
@end
