//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CBPeripheral;
@protocol DoAPServiceProtocol;

@interface DoAPDevice : NSObject
{
    unsigned char _state;	// 8 = 0x8
    unsigned short _streamID;	// 10 = 0xa
    id <DoAPServiceProtocol> _service;	// 16 = 0x10
    CBPeripheral *_peripheral;	// 24 = 0x18
}

+ (id)doapDeviceWithCodecs:(id)arg1 streamID:(unsigned short)arg2;	// IMP=0x0000000100045200
- (void).cxx_destruct;	// IMP=0x0000000100045fc4
@property(nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
@property(nonatomic) unsigned char state; // @synthesize state=_state;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(retain, nonatomic) id <DoAPServiceProtocol> service; // @synthesize service=_service;
- (void)doapStateSet:(unsigned char)arg1;	// IMP=0x0000000100045e28
- (id)allocQueue;	// IMP=0x0000000100045d78
- (void)setHighPriorityLink:(_Bool)arg1 burstTime:(id)arg2;	// IMP=0x0000000100045d04
- (int)eventIndicator:(unsigned char)arg1 eventValue:(unsigned char)arg2;	// IMP=0x0000000100045b30
- (int)stopStreaming:(unsigned char)arg1;	// IMP=0x0000000100045978
- (int)startStreaming;	// IMP=0x00000001000457b8
- (int)selectCodec:(unsigned char)arg1;	// IMP=0x000000010004567c
- (void)notifyDidStop;	// IMP=0x0000000100045590
- (void)notifyDidStart;	// IMP=0x000000010004548c
- (void)dealloc;	// IMP=0x0000000100045458
- (id)initWithCodecs:(id)arg1 streamID:(unsigned short)arg2;	// IMP=0x000000010004540c
- (id)init;	// IMP=0x0000000100045370
- (void)handleEventIndicator:(unsigned char)arg1 eventValue:(char *)arg2;	// IMP=0x0000000100045360
- (void)handleAudioData:(char *)arg1 dataLength:(long long)arg2;	// IMP=0x0000000100045350
- (void)handleStopStreaming:(unsigned char)arg1;	// IMP=0x0000000100045340
- (void)handleStartStreaming;	// IMP=0x0000000100045330
- (void)stop;	// IMP=0x00000001000452d4
- (void)start;	// IMP=0x0000000100045278

@end
