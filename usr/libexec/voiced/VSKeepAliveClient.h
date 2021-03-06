//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VSRemoteKeepAlive-Protocol.h"

@class NSString, VSServerKeepAliveManager;
@protocol OS_os_transaction;

@interface VSKeepAliveClient : NSObject <VSRemoteKeepAlive>
{
    VSServerKeepAliveManager *_manager;	// 8 = 0x8
    _Bool _isActive;	// 16 = 0x10
    long long _activity;	// 24 = 0x18
    _Bool _keepSessionActive;	// 32 = 0x20
    NSObject<OS_os_transaction> *_transaction;	// 40 = 0x28
    struct __CFRunLoopSource *_registryRunLoopSource;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000165ac
- (oneway void)cancel;	// IMP=0x000000010001651c
- (oneway void)maintainWithAudioType:(long long)arg1 keepAudioSessionActive:(_Bool)arg2;	// IMP=0x0000000100016444
- (_Bool)_shouldChangeAudioSession;	// IMP=0x0000000100016424
- (void)setManager:(id)arg1;	// IMP=0x0000000100016418
- (void)dealloc;	// IMP=0x000000010001639c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

