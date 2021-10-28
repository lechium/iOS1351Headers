//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class iAP2EASessionBasic;

@interface iAP2EAPacket : NSObject
{
    char *_internalPacketPayloadBuffer;	// 8 = 0x8
    _Bool _inUse;	// 16 = 0x10
    struct iAP2Packet_st *_eaPacket;	// 24 = 0x18
    iAP2EASessionBasic *_eaSession;	// 32 = 0x20
}

@property iAP2EASessionBasic *eaSession; // @synthesize eaSession=_eaSession;
@property(nonatomic) struct iAP2Packet_st *eaPacket; // @synthesize eaPacket=_eaPacket;
@property(readonly, nonatomic) _Bool inUse; // @synthesize inUse=_inUse;
- (_Bool)acquirePacketForUse;	// IMP=0x000000010006a950
- (void)deleteiAP2PacketWithoutUse;	// IMP=0x000000010006a914
- (void)resetiAP2Packet;	// IMP=0x000000010006a7d0
- (void)addEAPayloadLength:(unsigned short)arg1;	// IMP=0x000000010006a714
- (unsigned short)maxEaSessionDataBufferSize;	// IMP=0x000000010006a6d0
- (char *)eaSessionDataBuffer;	// IMP=0x000000010006a6bc
- (void)shutdownOnClose;	// IMP=0x000000010006a65c
- (void)dealloc;	// IMP=0x000000010006a610
- (id)initWithEASession:(id)arg1;	// IMP=0x000000010006a560

@end
