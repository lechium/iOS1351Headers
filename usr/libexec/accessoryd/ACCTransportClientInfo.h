//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "XPCConnectionInfo.h"

@class NSMutableSet;

@interface ACCTransportClientInfo : XPCConnectionInfo
{
    NSMutableSet *_connectionUUIDs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000a53d4
@property(retain, nonatomic) NSMutableSet *connectionUUIDs; // @synthesize connectionUUIDs=_connectionUUIDs;
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00000001000a5344

@end

