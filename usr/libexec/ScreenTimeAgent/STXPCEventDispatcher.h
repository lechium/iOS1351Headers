//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface STXPCEventDispatcher : NSObject
{
    NSString *_stream;	// 8 = 0x8
    NSMutableDictionary *_eventObserversByIdentifier;	// 16 = 0x10
}

+ (id)distnotedEventDispatcher;	// IMP=0x0000000100059418
+ (id)alarmEventDispatcher;	// IMP=0x0000000100059398
+ (id)notifydEventDispatcher;	// IMP=0x0000000100059318
+ (void)installEventHandlers;	// IMP=0x00000001000592bc
- (void).cxx_destruct;	// IMP=0x00000001000599e4
@property(readonly, nonatomic) NSMutableDictionary *eventObserversByIdentifier; // @synthesize eventObserversByIdentifier=_eventObserversByIdentifier;
@property(readonly, copy, nonatomic) NSString *stream; // @synthesize stream=_stream;
- (id)registerObserverWithIdentifier:(id)arg1;	// IMP=0x0000000100059834
- (void)_handleEventStream:(id)arg1;	// IMP=0x000000010005965c
- (id)initWithStream:(id)arg1;	// IMP=0x0000000100059498

@end

