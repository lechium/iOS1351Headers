//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, STXPCEventDispatcher;

@interface STXPCEventObserver : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
    STXPCEventDispatcher *_dispatcher;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100059284
@property(nonatomic) __weak STXPCEventDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSDictionary *configuration;
- (id)initWithIdentifier:(id)arg1 dispatcher:(id)arg2;	// IMP=0x0000000100058f08

@end

