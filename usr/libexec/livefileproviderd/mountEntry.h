//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition, NSError, NSString, NSXPCConnection, mountTable;
@protocol NSFileProviderLiveItemCore;

@interface mountEntry : NSObject
{
    NSString *realMountPath;	// 8 = 0x8
    NSObject<NSFileProviderLiveItemCore> *_fsObj;	// 16 = 0x10
    NSXPCConnection *_theConn;	// 24 = 0x18
    NSCondition *_theLock;	// 32 = 0x20
    _Bool _connecting;	// 40 = 0x28
    _Bool _waiters;	// 41 = 0x29
    NSError *lastConnectError;	// 48 = 0x30
    unsigned long long _currentState;	// 56 = 0x38
    _Bool _is_connected;	// 64 = 0x40
    _Bool _is_inet;	// 65 = 0x41
    unsigned int _midx;	// 68 = 0x44
    NSString *_volumeName;	// 72 = 0x48
    NSString *_displayName;	// 80 = 0x50
    NSString *_storageName;	// 88 = 0x58
    NSString *_providerName;	// 96 = 0x60
    NSString *_mntOn;	// 104 = 0x68
    mountTable *_mntTable;	// 112 = 0x70
    NSString *_rootLIFileHandle;	// 120 = 0x78
    NSError *_domainError;	// 128 = 0x80
}

+ (id)newWithObject:(id)arg1 path:(id)arg2 mntTable:(id)arg3;	// IMP=0x000000010001a914
+ (id)newWithName:(id)arg1 displayName:(id)arg2 storageName:(id)arg3 provider:(id)arg4 path:(id)arg5 mountID:(unsigned int)arg6 mntTable:(id)arg7;	// IMP=0x000000010001a810
- (void).cxx_destruct;	// IMP=0x000000010001cedc
@property(retain) NSError *domainError; // @synthesize domainError=_domainError;
@property(readonly) NSString *rootLIFileHandle; // @synthesize rootLIFileHandle=_rootLIFileHandle;
@property(readonly) __weak mountTable *mntTable; // @synthesize mntTable=_mntTable;
@property(readonly) NSString *mntOn; // @synthesize mntOn=_mntOn;
@property(readonly) NSString *providerName; // @synthesize providerName=_providerName;
@property(readonly) NSString *storageName; // @synthesize storageName=_storageName;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSString *volumeName; // @synthesize volumeName=_volumeName;
@property(readonly) unsigned int midx; // @synthesize midx=_midx;
@property _Bool is_inet; // @synthesize is_inet=_is_inet;
@property _Bool is_connected; // @synthesize is_connected=_is_connected;
- (id)unmount:(int)arg1;	// IMP=0x000000010001c9a8
- (int)isMountAtPath:(id)arg1 err:(id *)arg2;	// IMP=0x000000010001c888
- (id)mount:(int)arg1;	// IMP=0x000000010001bddc
- (void)copyDisconnectedRootAttrs:(struct _LIFileAttributes *)arg1;	// IMP=0x000000010001bd54
- (_Bool)ensureConnected:(int)arg1 status:(int *)arg2;	// IMP=0x000000010001bc60
- (void)handleConnectionInterrupted;	// IMP=0x000000010001bb68
- (void)handleConnectionInvalidated;	// IMP=0x000000010001bb08
- (unsigned int)encryptedIdx;	// IMP=0x000000010001baf4
- (id)connect;	// IMP=0x000000010001b720
- (id)doConnect;	// IMP=0x000000010001ae60
- (void)getLiveFilesConnectionForPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001abb0
@property(nonatomic) unsigned long long currentState;
- (void)doWakeAndUnlock;	// IMP=0x000000010001aadc
- (void)doWait;	// IMP=0x000000010001aac4
- (id)fsSynchObjWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001aa88
- (id)fsObjWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001aa4c
- (void)refreshPath:(id)arg1 displayName:(id)arg2 storageName:(id)arg3;	// IMP=0x000000010001a9a4
- (id)initWithObject:(id)arg1 path:(id)arg2 mntTable:(id)arg3;	// IMP=0x000000010001a5f8
- (id)initWithName:(id)arg1 displayName:(id)arg2 storageName:(id)arg3 provider:(id)arg4 path:(id)arg5 mountID:(unsigned int)arg6 mntTable:(id)arg7;	// IMP=0x000000010001a41c

@end

