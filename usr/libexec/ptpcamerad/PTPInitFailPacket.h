//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PTPInitFailPacket : NSObject
{
    unsigned int _reason;	// 8 = 0x8
}

- (void)setReason:(unsigned int)arg1;	// IMP=0x0000000100012560
- (unsigned int)reason;	// IMP=0x0000000100012558
- (id)description;	// IMP=0x0000000100012508
- (id)contentForTCP;	// IMP=0x000000010001247c
- (id)initWithTCPBuffer:(void *)arg1;	// IMP=0x0000000100012418
- (id)initWithReason:(unsigned int)arg1;	// IMP=0x00000001000123d0

@end
