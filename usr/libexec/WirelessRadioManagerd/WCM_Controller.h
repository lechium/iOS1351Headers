//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;
@protocol OS_xpc_object;

@interface WCM_Controller : NSObject
{
    NSObject<OS_xpc_object> *mConnection;	// 8 = 0x8
    int mProcessId;	// 16 = 0x10
    NSLock *mControllerLock;	// 24 = 0x18
}

+ (id)newTestControllerForProcessId:(int)arg1;	// IMP=0x000000010007b778
+ (id)newControllerForProcessId:(int)arg1;	// IMP=0x000000010007af70
- (void)sendMessage:(unsigned long long)arg1 withArgs:(id)arg2 withExtraKey:(const char *)arg3 andExtraValue:(id)arg4;	// IMP=0x000000010007a990
- (void)sendMessage:(unsigned long long)arg1 withArgs:(id)arg2;	// IMP=0x0000000100079f5c
- (void)handleDisconnection:(id)arg1;	// IMP=0x0000000100079a88
- (void)handleMessage:(id)arg1;	// IMP=0x00000001000795bc
- (void)handlePowerState:(_Bool)arg1;	// IMP=0x00000001000790f0
- (int)getProcessId;	// IMP=0x00000001000790d4
- (void)releaseConnection;	// IMP=0x0000000100078bf0
- (void)initWithConnection:(id)arg1 processId:(int)arg2;	// IMP=0x00000001000786e8
- (void)dealloc;	// IMP=0x0000000100078630
- (id)init;	// IMP=0x0000000100078574

@end

