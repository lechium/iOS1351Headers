//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRAVBufferedOutputStream.h>

@class APReceiverMediaRemoteCommunicationChannel;

@interface MRDAirPlayOutputStream : MRAVBufferedOutputStream
{
    APReceiverMediaRemoteCommunicationChannel *_communicationChannel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010004f614
@property(readonly, nonatomic) APReceiverMediaRemoteCommunicationChannel *communicationChannel; // @synthesize communicationChannel=_communicationChannel;
- (_Bool)hasSpaceAvailable;	// IMP=0x000000010004f5fc
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x000000010004f414
- (id)description;	// IMP=0x000000010004f388
- (id)initWithURL:(id)arg1 append:(_Bool)arg2;	// IMP=0x000000010004f2d4
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;	// IMP=0x000000010004f220
- (id)initToMemory;	// IMP=0x000000010004f16c
- (id)initWithCommunicationChannel:(id)arg1;	// IMP=0x000000010004f0ec

@end
