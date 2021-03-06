//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EscrowSecurityAlertDelegateProtocol-Protocol.h"

@class NSString;

@interface ESADelegate : NSObject <EscrowSecurityAlertDelegateProtocol>
{
}

- (int)alertType;	// IMP=0x0000000100005258
- (_Bool)isNotificationDisabled;	// IMP=0x0000000100005244
- (_Bool)isNotificationSnoozed;	// IMP=0x00000001000051fc
- (void)cancelAlert;	// IMP=0x0000000100005058
- (void)prompt:(int)arg1;	// IMP=0x00000001000045f4
- (id)init;	// IMP=0x0000000100004580

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

