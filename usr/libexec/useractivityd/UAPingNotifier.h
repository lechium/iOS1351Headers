//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UAActivityNotifier.h"

@class NSMutableSet;

@interface UAPingNotifier : UAActivityNotifier
{
    NSMutableSet *_pongItems;	// 8 = 0x8
    long long _pongCount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000065e8
@property long long pongCount; // @synthesize pongCount=_pongCount;
@property(readonly, copy) NSMutableSet *pongItems; // @synthesize pongItems=_pongItems;
- (id)statusString;	// IMP=0x00000001000064fc
- (void)setItems:(id)arg1;	// IMP=0x0000000100005e98
- (id)items;	// IMP=0x0000000100005e90
- (_Bool)active;	// IMP=0x0000000100005e88
- (id)initWithManager:(id)arg1;	// IMP=0x0000000100005e04

@end

