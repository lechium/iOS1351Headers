//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSArray, NSNumber, UWLMessageWireEnvelope;

__attribute__((visibility("hidden")))
@interface WLDPlayActivityReportOperation : WLKNetworkRequestOperation
{
    NSArray *_playEvents;	// 8 = 0x8
    NSArray *_livePlayEvents;	// 16 = 0x10
    UWLMessageWireEnvelope *_envelope;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000081ac
@property(retain, nonatomic) UWLMessageWireEnvelope *envelope; // @synthesize envelope=_envelope;
@property(copy, nonatomic) NSArray *livePlayEvents; // @synthesize livePlayEvents=_livePlayEvents;
@property(copy, nonatomic) NSArray *playEvents; // @synthesize playEvents=_playEvents;
- (id)_userAgentHeaderForRequest:(id)arg1;	// IMP=0x0000000100008078
- (id)_protoForURLRequest:(id)arg1;	// IMP=0x0000000100007b04
@property(readonly, nonatomic) NSNumber *nextExpectedReportMillis;
- (void)prepareURLRequest:(CDUnknownBlockType)arg1;	// IMP=0x00000001000076e0
- (id)initWithPlayEvents:(id)arg1;	// IMP=0x0000000100007650
- (id)initWithLivePlayEvents:(id)arg1;	// IMP=0x00000001000075c0
- (id)init;	// IMP=0x0000000100007588

@end
