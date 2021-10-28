//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ACCExternalAccessorySession.h"

@class NSMutableArray, NSObject, NSRecursiveLock;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface ACCExternalAccessorySessionBasic : ACCExternalAccessorySession
{
    unsigned short _maxPayloadSize;	// 48 = 0x30
    char *_transferBuffer;	// 56 = 0x38
    unsigned short _maxPayloadBufferSize;	// 64 = 0x40
    char *_payloadBuffer;	// 72 = 0x48
    NSMutableArray *_eaPacketPool;	// 80 = 0x50
    NSRecursiveLock *_packetPoolLock;	// 88 = 0x58
    _Bool _continueRunningSession;	// 96 = 0x60
    _Bool _startSessionTransmitted;	// 97 = 0x61
    NSObject<OS_dispatch_queue> *_continueRunningQueue;	// 104 = 0x68
    NSObject<OS_dispatch_semaphore> *_continueRunningSemaphore;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_msgSerialQueue;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_listenSource;	// 128 = 0x80
    NSObject<OS_dispatch_source> *_readSource;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000100005678
- (void)startIncomingDataNotifications;	// IMP=0x00000001000054c0
- (void)stopIncomingDataNotifications;	// IMP=0x000000010000541c
- (struct __CFData *)returnEASessionDataFromApp:(unsigned int)arg1;	// IMP=0x0000000100005044
- (unsigned int)readEASessionDataFromApp:(id)arg1 maxReadSize:(unsigned int)arg2;	// IMP=0x0000000100004d38
- (void)sendEABufferDataToApp:(char *)arg1 withLength:(unsigned int)arg2;	// IMP=0x0000000100004d14
- (void)sendEABufferDataToApp:(id)arg1;	// IMP=0x0000000100004bf0
- (_Bool)closeDataPipes;	// IMP=0x0000000100004ba8
- (void)_openPipeFromApp;	// IMP=0x0000000100004630
- (void)_openPipeToApp;	// IMP=0x0000000100004570
- (void)dealloc;	// IMP=0x0000000100004410
- (void)shuttingDownSession;	// IMP=0x00000001000042d4
- (id)initWithEASessionUUID:(id)arg1 protocolID:(unsigned char)arg2 legacyConnectionID:(unsigned long long)arg3 sessionID:(unsigned short)arg4;	// IMP=0x0000000100003f54

@end
