//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDConversationPersistenceController : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *storage;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001a7488
- (id)init;	// IMP=0x00000001001a74c0
- (void)enumerateActiveConversations:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a7238
- (void)removeAllConversations;	// IMP=0x00000001001a5e64
- (void)removeConversation:(id)arg1;	// IMP=0x00000001001a5a70
- (void)updateConversation:(id)arg1;	// IMP=0x00000001001a515c
- (id)initWithQueue:(id)arg1;	// IMP=0x00000001001a4808

@end

