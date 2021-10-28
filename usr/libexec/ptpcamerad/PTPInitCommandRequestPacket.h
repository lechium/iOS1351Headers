//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PTPInitCommandRequestPacket : NSObject
{
    unsigned char _initiatorGUID[16];	// 8 = 0x8
    NSString *_initiatorFriendlyName;	// 24 = 0x18
}

- (void)setInitiatorFriendlyName:(id)arg1;	// IMP=0x00000001000128cc
- (id)initiatorFriendlyName;	// IMP=0x00000001000128c4
- (void)setInitiatorGUID:(char *)arg1;	// IMP=0x00000001000128b8
- (const char *)initiatorGUID;	// IMP=0x00000001000128b0
- (id)description;	// IMP=0x00000001000127ac
- (id)contentForTCP;	// IMP=0x00000001000126dc
- (void)dealloc;	// IMP=0x0000000100012694
- (id)initWithTCPBuffer:(void *)arg1;	// IMP=0x0000000100012610
- (id)initWithInitiatorGUID:(char *)arg1 initiatorFriendlyName:(id)arg2;	// IMP=0x0000000100012568

@end
