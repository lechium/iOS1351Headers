//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLSessionTask.h>

@interface NSURLSessionTask (BLAdditions)
- (void)bl_setDataConsumer:(id)arg1;	// IMP=0x000000010003756c
- (id)bl_dataConsumer;	// IMP=0x0000000100037560
- (long long)bl_cancelReason;	// IMP=0x0000000100037514
- (id)bl_cancelError;	// IMP=0x0000000100037508
- (void)bl_cancelWithReason:(long long)arg1 error:(id)arg2;	// IMP=0x0000000100037454
@end

