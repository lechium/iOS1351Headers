//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDSPhoneNumberValidationStateMachine, NSString;

@protocol IDSPhoneNumberValidationListener <NSObject>
- (void)validator:(IDSPhoneNumberValidationStateMachine *)arg1 failedIdentificationWithRegistrationError:(long long)arg2;
- (void)validator:(IDSPhoneNumberValidationStateMachine *)arg1 identifiedPhoneNumber:(NSString *)arg2 token:(NSString *)arg3 phoneBookNumber:(NSString *)arg4;
@end

