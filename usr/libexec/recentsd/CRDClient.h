//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection, _CRRecentsLibrary;

@interface CRDClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    _CRRecentsLibrary *_library;	// 16 = 0x10
}

@property(readonly, nonatomic) _CRRecentsLibrary *library; // @synthesize library=_library;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (_Bool)hasEntitlement:(id)arg1;	// IMP=0x0000000100012360
- (void)dealloc;	// IMP=0x0000000100012310
- (id)initWithConnection:(id)arg1 library:(id)arg2;	// IMP=0x00000001000122a0

@end

