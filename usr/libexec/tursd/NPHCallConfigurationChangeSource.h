//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NPHCallConfigurationChangeSource : NSObject
{
    long long _type;	// 8 = 0x8
    id _payload;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100006f6c
@property(retain, nonatomic) id payload; // @synthesize payload=_payload;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x0000000100006e60
- (id)initWithUTF8String:(const char *)arg1;	// IMP=0x0000000100006e00
- (id)initWithString:(id)arg1;	// IMP=0x0000000100006dec
- (id)initWithNotification:(id)arg1;	// IMP=0x0000000100006dd8
- (id)initWithType:(long long)arg1 payload:(id)arg2;	// IMP=0x0000000100006d58
- (id)init;	// IMP=0x0000000100006d44

@end

