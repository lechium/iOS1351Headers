//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SecureBackup;
@protocol EscrowSecurityAlertDelegateProtocol, OS_dispatch_queue;

@interface EscrowSecurityAlert : NSObject
{
    id <EscrowSecurityAlertDelegateProtocol> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 16 = 0x10
    SecureBackup *_sb;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000067dc
@property(readonly, retain) SecureBackup *sb; // @synthesize sb=_sb;
@property(readonly, retain) NSObject<OS_dispatch_queue> *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
@property(retain) id <EscrowSecurityAlertDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void)handleNotification:(id)arg1;	// IMP=0x00000001000063e8
- (void)handleTimerEvent;	// IMP=0x0000000100005e88
- (id)init;	// IMP=0x0000000100005bcc
- (_Bool)inCircle;	// IMP=0x0000000100005b88

@end
