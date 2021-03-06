//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_NFSession.h"

#import "NFPeerPaymentSessionInterface-Protocol.h"

@class NFSecureElementWrapper;

@interface _NFPeerPaymentSession : _NFSession <NFPeerPaymentSessionInterface>
{
    NFSecureElementWrapper *_secureElementWrapper;	// 8 = 0x8
}

+ (id)validateEntitlements:(id)arg1;	// IMP=0x00000001000bd024
@property(retain) NFSecureElementWrapper *secureElementWrapper; // @synthesize secureElementWrapper=_secureElementWrapper;
- (oneway void)performPeerPayment:(id)arg1 request:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x00000001000bd388
- (oneway void)deleteKey:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bd2cc
- (void)didStartSession:(id)arg1;	// IMP=0x00000001000bd260
- (unsigned long long)initialRoutingMode;	// IMP=0x00000001000bd258
- (void)dealloc;	// IMP=0x00000001000bd208

@end

