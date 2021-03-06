//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SiriAudioRelayHub;
@protocol SiriAudioRelaySource;

@interface SiriAudioRelay : NSObject
{
    _Bool _isStreaming;	// 8 = 0x8
    unsigned char _codec;	// 9 = 0x9
    id <SiriAudioRelaySource> _delegate;	// 16 = 0x10
    SiriAudioRelayHub *_hub;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSDictionary *_properties;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010001348c
@property(readonly, nonatomic) unsigned char codec; // @synthesize codec=_codec;
@property(readonly, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool isStreaming; // @synthesize isStreaming=_isStreaming;
@property(readonly, nonatomic) __weak SiriAudioRelayHub *hub; // @synthesize hub=_hub;
@property(nonatomic) __weak id <SiriAudioRelaySource> delegate; // @synthesize delegate=_delegate;
- (void)sendMsg:(const char *)arg1 args:(id)arg2;	// IMP=0x000000010001330c
- (void)stopStream:(CDUnknownBlockType)arg1;	// IMP=0x0000000100013260
- (void)startStream:(CDUnknownBlockType)arg1;	// IMP=0x00000001000131b4
- (void)handleResetStream;	// IMP=0x0000000100013130
- (void)handleStopStream;	// IMP=0x0000000100012fac
- (void)handleStartStream;	// IMP=0x0000000100012e28
- (void)publish;	// IMP=0x0000000100012c60
- (void)cancelStream;	// IMP=0x0000000100012bdc
- (void)invalidate;	// IMP=0x0000000100012b58
- (void)sendAudioFrame:(id)arg1;	// IMP=0x0000000100012a68
- (id)initWithIdentifier:(id)arg1 properties:(id)arg2 codecType:(unsigned char)arg3 hub:(id)arg4;	// IMP=0x000000010001298c

@end

