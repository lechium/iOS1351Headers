//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MFNanoServerMessageUpdater : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000c638c
- (_Bool)_status:(unsigned long long)arg1 containsState:(unsigned long long)arg2;	// IMP=0x00000001000c6380
- (id)_libraryMessageForMessageId:(id)arg1;	// IMP=0x00000001000c6258
- (void)_addOperation:(id)arg1 withMessages:(id)arg2 toChangeManager:(id)arg3;	// IMP=0x00000001000c617c
- (void)updateMessages:(id)arg1;	// IMP=0x00000001000c531c
- (id)init;	// IMP=0x00000001000c5294

@end

