//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@class MCProfile;

@interface MCDNSProxyPayloadHandler : MCNewPayloadHandler
{
    MCProfile *_profile;	// 32 = 0x20
}

+ (id)internalError;	// IMP=0x000000010001475c
- (void).cxx_destruct;	// IMP=0x0000000100015190
- (void)remove;	// IMP=0x0000000100014fdc
- (void)unsetAside;	// IMP=0x0000000100014e70
- (void)setAside;	// IMP=0x0000000100014d04
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x00000001000147f4
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x00000001000146a4

@end
