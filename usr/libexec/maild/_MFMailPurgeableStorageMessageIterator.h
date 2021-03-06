//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFBufferedQueue.h>

#import "MFSearchResultHandler-Protocol.h"
#import "QueryProgressMonitor-Protocol.h"

@interface _MFMailPurgeableStorageMessageIterator : MFBufferedQueue <MFSearchResultHandler, QueryProgressMonitor>
{
    unsigned long long _position;	// 48 = 0x30
    CDUnknownBlockType _handler;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100096ae8
@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) unsigned long long position; // @synthesize position=_position;
- (_Bool)shouldCancel;	// IMP=0x0000000100096a5c
- (_Bool)handleMessage:(id)arg1;	// IMP=0x00000001000969e8
- (_Bool)handleItems:(id)arg1;	// IMP=0x00000001000968f0
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100096820

@end

