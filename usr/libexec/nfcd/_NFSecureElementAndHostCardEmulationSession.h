//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_NFHCESession.h"

#import "NFSecureElementAndHostCardEmulationSessionInterface-Protocol.h"

@class NFSecureElementWrapper;

@interface _NFSecureElementAndHostCardEmulationSession : _NFHCESession <NFSecureElementAndHostCardEmulationSessionInterface>
{
    NFSecureElementWrapper *_currentSecureElementWrapper;	// 8 = 0x8
    NFSecureElementWrapper *_embeddedSecureElementWrapper;	// 16 = 0x10
    NFSecureElementWrapper *_icefallSecureElementWrapper;	// 24 = 0x18
}

+ (id)validateEntitlements:(id)arg1;	// IMP=0x00000001000bbc80
@property(retain) NFSecureElementWrapper *icefallSecureElementWrapper; // @synthesize icefallSecureElementWrapper=_icefallSecureElementWrapper;
@property(retain) NFSecureElementWrapper *embeddedSecureElementWrapper; // @synthesize embeddedSecureElementWrapper=_embeddedSecureElementWrapper;
@property(retain) NFSecureElementWrapper *currentSecureElementWrapper; // @synthesize currentSecureElementWrapper=_currentSecureElementWrapper;
- (oneway void)transceive:(id)arg1 forSEID:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x00000001000bcdd0
- (oneway void)stopEmulation:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bca2c
- (oneway void)startEmulation:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bc57c
- (_Bool)_activateSecureElementWrapper:(id)arg1;	// IMP=0x00000001000bc0c4
- (id)_getSecureElementWrapperForSEID:(id)arg1;	// IMP=0x00000001000bbf04
- (unsigned long long)initialRoutingMode;	// IMP=0x00000001000bbefc
- (void)dealloc;	// IMP=0x00000001000bbe8c

@end
