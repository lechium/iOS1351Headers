//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC12SidecarRelay15ServiceProvider.h"

@class MISSING_TYPE;

@interface _TtC12SidecarRelay12TestProvider : _TtC12SidecarRelay15ServiceProvider
{
    MISSING_TYPE *testDevice;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010001b008
- (void)relaySessionOpen:(id)arg1 reconnect:(id)arg2 serviceIdentifier:(id)arg3 destination:(id)arg4 transport:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010001ae20
- (void)relayRegisterServiceProvider:(CDUnknownBlockType)arg1;	// IMP=0x000000010001adc0

@end

