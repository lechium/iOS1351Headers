//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TCCDSyncController, TCCDSyncRequestAccessAction;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface TCCDSyncSession : NSObject
{
    _Bool _didSendMessage;	// 8 = 0x8
    TCCDSyncController *_syncController;	// 16 = 0x10
    TCCDSyncRequestAccessAction *_syncRequestAccessAction;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_sentMessageSemaphore;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010000b6d4
@property(retain) NSObject<OS_dispatch_semaphore> *sentMessageSemaphore; // @synthesize sentMessageSemaphore=_sentMessageSemaphore;
@property _Bool didSendMessage; // @synthesize didSendMessage=_didSendMessage;
@property(retain) TCCDSyncRequestAccessAction *syncRequestAccessAction; // @synthesize syncRequestAccessAction=_syncRequestAccessAction;
@property __weak TCCDSyncController *syncController; // @synthesize syncController=_syncController;
- (unsigned long long)performRequestAccessAction:(id)arg1;	// IMP=0x000000010000b138
- (id)initWithSyncController:(id)arg1;	// IMP=0x000000010000b0cc

@end
