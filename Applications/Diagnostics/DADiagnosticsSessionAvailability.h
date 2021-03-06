//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DADiagnosticsSessionAvailabilityProtocol-Protocol.h"

@interface DADiagnosticsSessionAvailability : NSObject <DADiagnosticsSessionAvailabilityProtocol>
{
}

- (id)serialNumbers;	// IMP=0x0000000100008388
- (void)checkEnhancedLoggingStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008280
- (id)getSessionID;	// IMP=0x00000001000080a0
- (void)checkAvailabilityWithTicketNumber:(id)arg1 timeout:(double)arg2 exitWhenDone:(_Bool)arg3 response:(CDUnknownBlockType)arg4;	// IMP=0x0000000100007cbc
- (void)checkAvailabilityWithTicketNumber:(id)arg1 timeout:(double)arg2 response:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007c58
- (void)checkAvailabilityWithTicketNumber:(id)arg1 response:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007c04
- (void)checkAvailabilityWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007adc

@end

