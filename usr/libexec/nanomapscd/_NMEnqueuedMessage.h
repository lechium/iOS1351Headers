//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NMMessage, NMReply, NSDictionary;

__attribute__((visibility("hidden")))
@interface _NMEnqueuedMessage : NSObject
{
    NMReply *_reply;	// 8 = 0x8
    NMMessage *_message;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
    CDUnknownBlockType _replyBlock;	// 32 = 0x20
    double _enqueuedTime;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010000e7fc
@property(nonatomic) double enqueuedTime; // @synthesize enqueuedTime=_enqueuedTime;
@property(copy, nonatomic) CDUnknownBlockType replyBlock; // @synthesize replyBlock=_replyBlock;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NMMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) NMReply *reply; // @synthesize reply=_reply;
- (void)dealloc;	// IMP=0x000000010000e758
- (id)init;	// IMP=0x000000010000e6fc

@end
