//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DelayedBlockHandle : NSObject
{
    CDUnknownBlockType _cb;	// 8 = 0x8
}

+ (id)dispatch_after:(duration_673274cf)arg1 block:(CDUnknownBlockType)arg2 onQueue:(id)arg3;	// IMP=0x00000001001ef8e0
+ (id)dispatch_after:(duration_673274cf)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ef85c
- (void).cxx_destruct;	// IMP=0x00000001001efafc
@property(nonatomic) _Bool cancelled;
- (id)init:(CDUnknownBlockType)arg1;	// IMP=0x00000001001efa34

@end

