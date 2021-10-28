//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLConnectionEndpoint;
@protocol CLConnectionDataDelegate;

@interface CLConnectionHandlerInternal : NSObject
{
    id <CLConnectionDataDelegate> _msgHandler;	// 8 = 0x8
    CLConnectionEndpoint *_endpoint;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000064a8
@property(readonly, nonatomic) CLConnectionEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) id <CLConnectionDataDelegate> msgHandler; // @synthesize msgHandler=_msgHandler;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000063cc
- (void)invalidate;	// IMP=0x000000010000638c
- (id)initWithEndpoint:(id)arg1 messageHandler:(id)arg2;	// IMP=0x00000001000062e8

@end
