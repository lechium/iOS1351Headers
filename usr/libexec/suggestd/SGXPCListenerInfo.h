//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, Protocol;

@interface SGXPCListenerInfo : NSObject
{
    NSString *_entitlement;	// 8 = 0x8
    Protocol *_protocol;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100005fa4
@property(retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSString *entitlement; // @synthesize entitlement=_entitlement;

@end

