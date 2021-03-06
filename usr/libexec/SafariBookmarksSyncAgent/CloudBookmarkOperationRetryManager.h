//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface CloudBookmarkOperationRetryManager : NSObject
{
    NSDate *_dateRetryWasFirstRequested;	// 8 = 0x8
    unsigned long long _numberOfRetries;	// 16 = 0x10
    double _timeout;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010001c90c
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (long long)scheduleRetryIfNeededForError:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c5b8
- (id)init;	// IMP=0x000000010001c554

@end

