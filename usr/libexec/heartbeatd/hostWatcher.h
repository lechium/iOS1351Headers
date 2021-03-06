//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface hostWatcher : NSObject
{
    _Bool _invalidated;	// 8 = 0x8
    _Bool _aboutToSleep;	// 9 = 0x9
    unsigned int _powerConn;	// 12 = 0xc
    unsigned int _powerNotifier;	// 16 = 0x10
    int _sock;	// 20 = 0x14
    NSObject<OS_os_transaction> *_transaction;	// 24 = 0x18
    NSString *_hostID;	// 32 = 0x20
    struct _lockdown_connection *_ldConn;	// 40 = 0x28
    NSMutableSet *_watchedServices;	// 48 = 0x30
    NSString *_descriptionOverride;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_pingQueue;	// 64 = 0x40
    struct IONotificationPort *_powerPort;	// 72 = 0x48
    struct SSLContext *_sslCtx;	// 80 = 0x50
}

+ (int)dumpConnectedHosts:(id *)arg1;	// IMP=0x000000010000220c
+ (void)invalidateServiceWithPID:(int)arg1 heartBeatRef:(unsigned long long)arg2;	// IMP=0x0000000100002078
+ (void)invalidateWatcherForHost:(struct __CFString *)arg1;	// IMP=0x0000000100001d00
+ (void)removeService:(id)arg1 forHostID:(struct __CFString *)arg2;	// IMP=0x0000000100001c28
+ (void)addService:(id)arg1 forHostID:(struct __CFString *)arg2;	// IMP=0x0000000100001b24
- (void).cxx_destruct;	// IMP=0x0000000100004ff0
@property(nonatomic) struct SSLContext *sslCtx; // @synthesize sslCtx=_sslCtx;
@property(nonatomic) int sock; // @synthesize sock=_sock;
@property(nonatomic) unsigned int powerNotifier; // @synthesize powerNotifier=_powerNotifier;
@property(nonatomic) unsigned int powerConn; // @synthesize powerConn=_powerConn;
@property(nonatomic) struct IONotificationPort *powerPort; // @synthesize powerPort=_powerPort;
@property(nonatomic) _Bool aboutToSleep; // @synthesize aboutToSleep=_aboutToSleep;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pingQueue; // @synthesize pingQueue=_pingQueue;
@property(retain, nonatomic) NSString *descriptionOverride; // @synthesize descriptionOverride=_descriptionOverride;
@property(retain, nonatomic) NSMutableSet *watchedServices; // @synthesize watchedServices=_watchedServices;
@property(nonatomic) struct _lockdown_connection *ldConn; // @synthesize ldConn=_ldConn;
@property(retain, nonatomic) NSString *hostID; // @synthesize hostID=_hostID;
@property(readonly, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
- (void)enumerateServices:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004e2c
- (void)removeService:(id)arg1;	// IMP=0x0000000100004dbc
- (void)addService:(id)arg1;	// IMP=0x0000000100004d4c
- (void)dealloc;	// IMP=0x0000000100004bd0
- (id)initWithCheckinGoop:(void *)arg1;	// IMP=0x0000000100004400
- (id)description;	// IMP=0x000000010000437c
- (void)handleSleepNotification:(unsigned int)arg1 service:(unsigned int)arg2 messageArgument:(void *)arg3;	// IMP=0x0000000100003ac8
- (void)runWatcher;	// IMP=0x000000010000312c
- (void)invalidate;	// IMP=0x0000000100002cc4
- (id)receiveMessage:(char **)arg1 size:(unsigned long long *)arg2;	// IMP=0x00000001000028e4
- (int)receivePacket:(char *)arg1 size:(unsigned long long)arg2;	// IMP=0x0000000100002868
- (int)sendPacket:(const char *)arg1 size:(unsigned long long)arg2;	// IMP=0x00000001000027f4
- (long long)_receivePartialPacket:(char *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000010000266c
- (long long)_sendPartialPacket:(const char *)arg1 size:(unsigned long long)arg2;	// IMP=0x00000001000024e4

@end

