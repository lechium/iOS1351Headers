//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class CBScalablePipe, NSString;
@protocol MessageManagerDelegate, OS_dispatch_source;

@interface MessageManager : NSObject <NSStreamDelegate>
{
    _Bool _invalidated;	// 8 = 0x8
    _Bool _writeSourceIsSuspended;	// 9 = 0x9
    _Bool _hasPendingOutgoingMessage;	// 10 = 0xa
    unsigned char _pendingOutgoingWristState;	// 11 = 0xb
    int _socket;	// 12 = 0xc
    id <MessageManagerDelegate> _delegate;	// 16 = 0x10
    CBScalablePipe *_pipe;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_readSource;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_writeSource;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010001042c
@property(nonatomic) unsigned char pendingOutgoingWristState; // @synthesize pendingOutgoingWristState=_pendingOutgoingWristState;
@property(nonatomic) _Bool hasPendingOutgoingMessage; // @synthesize hasPendingOutgoingMessage=_hasPendingOutgoingMessage;
@property(nonatomic) _Bool writeSourceIsSuspended; // @synthesize writeSourceIsSuspended=_writeSourceIsSuspended;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *writeSource; // @synthesize writeSource=_writeSource;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *readSource; // @synthesize readSource=_readSource;
@property(nonatomic) int socket; // @synthesize socket=_socket;
@property(retain, nonatomic) CBScalablePipe *pipe; // @synthesize pipe=_pipe;
@property(nonatomic) __weak id <MessageManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
- (void)writePendingMessages;	// IMP=0x0000000100010340
- (void)writeMessage:(unsigned char)arg1;	// IMP=0x0000000100010160
- (void)readIncomingMessages;	// IMP=0x000000010000ff10
- (void)setupReadWriteSources;	// IMP=0x000000010000fc00
- (void)invalidate;	// IMP=0x000000010000fac8
- (void)dealloc;	// IMP=0x000000010000fa70
- (id)initWithDelegate:(id)arg1 pipe:(id)arg2;	// IMP=0x000000010000f918

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

