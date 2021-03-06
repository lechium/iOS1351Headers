//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;

@interface CDMSetupXPCListener : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;	// 8 = 0x8
    CDUnknownBlockType _callback;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001f5e8
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010001f3fc
- (void)cleanup;	// IMP=0x000000010001f328
- (void)setupWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000010001f1bc
- (void)dealloc;	// IMP=0x000000010001f170

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

