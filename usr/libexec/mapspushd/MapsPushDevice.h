//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSDevice, NSData, NSString;

__attribute__((visibility("hidden")))
@interface MapsPushDevice : NSObject
{
    IDSDevice *_device;	// 8 = 0x8
    NSData *pushToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100007a44
@property(readonly, nonatomic) IDSDevice *device; // @synthesize device=_device;
@property(readonly, getter=isFake) _Bool fake;
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSString *enclosureColorName;
@property(readonly, copy) NSString *colorName;
@property(readonly, copy) NSString *model;
- (id)initWithIDSDevice:(id)arg1;	// IMP=0x0000000100007960

@end
