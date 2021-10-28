//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface GCDTimer : NSObject
{
    NSObject<OS_dispatch_source> *_source;	// 8 = 0x8
    NSDate *_fireDate;	// 16 = 0x10
}

+ (id)scheduledTimerWithTimeInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000010001fbd4
- (void).cxx_destruct;	// IMP=0x000000010001fca8
@property(readonly, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
- (void)invalidate;	// IMP=0x000000010001fc64
- (void)dealloc;	// IMP=0x000000010001fb88
- (id)initWithTimeInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000010001f99c

@end
