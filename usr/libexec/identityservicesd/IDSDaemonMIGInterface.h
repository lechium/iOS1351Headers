//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IDSDaemonMIGInterfaceDelegate, IDSXPCConnectionProtocol;

@interface IDSDaemonMIGInterface : NSObject
{
    id <IDSXPCConnectionProtocol> _server;	// 8 = 0x8
    int _notifyToken;	// 16 = 0x10
    id _delegate;	// 24 = 0x18
    _Bool _shuttingDown;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010019a47c
- (void).cxx_destruct;	// IMP=0x000000010019c14c
@property __weak id <IDSDaemonMIGInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)denyIncomingGrantRequests;	// IMP=0x000000010019c054
- (void)acceptIncomingGrantRequests;	// IMP=0x000000010019bf34
- (void)__setupServer;	// IMP=0x000000010019a644

@end
