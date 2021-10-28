//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MIConnectionDelegate;

@interface MIConnection : NSObject
{
    id <MIConnectionDelegate> _delegate;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
}

+ (void)createConnectionWithXPCObject:(id)arg1 withSelector:(SEL)arg2 onTarget:(id)arg3;	// IMP=0x00000001000030a4
@property(readonly) unsigned long long type; // @synthesize type=_type;
@property id <MIConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendData:(id)arg1;	// IMP=0x000000010000320c
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x000000010000305c

@end
