//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, pNjRsniwrVEhiG7R;

__attribute__((visibility("hidden")))
@interface EvuyxgzfZZU4un3X : NSObject <NSXPCListenerDelegate>
{
    pNjRsniwrVEhiG7R *_engine;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100008b80
- (void).cxx_destruct;	// IMP=0x0000000100008d4c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100008bf0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
