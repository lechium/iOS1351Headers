//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@interface AsyncTask : Task
{
    _Bool _executing;	// 8 = 0x8
    _Bool _finished;	// 9 = 0x9
}

- (_Bool)isFinished;	// IMP=0x000000010029b480
- (_Bool)isExecuting;	// IMP=0x000000010029b46c
- (void)completeWithSuccess;	// IMP=0x000000010029b404
- (void)completeWithError:(id)arg1;	// IMP=0x000000010029b39c
- (void)start;	// IMP=0x000000010029b364
- (void)setFinished:(_Bool)arg1;	// IMP=0x000000010029b2ec
- (void)setExecuting:(_Bool)arg1;	// IMP=0x000000010029b274
- (_Bool)isAsynchronous;	// IMP=0x000000010029b26c

@end
