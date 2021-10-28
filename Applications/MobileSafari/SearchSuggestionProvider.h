//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CompletionProvider.h"

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSMutableSet, NSObject, NSString, NSURLSession, UniversalSearchSession, WBSCompletionQuery;
@protocol LoadProgressObserver, OS_dispatch_queue;

@interface SearchSuggestionProvider : CompletionProvider <NSURLSessionDataDelegate>
{
    NSString *_currentSearchString;	// 8 = 0x8
    WBSCompletionQuery *_currentCompletionQuery;	// 16 = 0x10
    NSString *_userAgentString;	// 24 = 0x18
    NSURLSession *_session;	// 32 = 0x20
    id <LoadProgressObserver> _loadProgressObserver;	// 40 = 0x28
    UniversalSearchSession *_universalSearchSession;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 56 = 0x38
    NSMutableSet *_pendingTasks;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000b0ebc
@property(retain, nonatomic) NSMutableSet *pendingTasks; // @synthesize pendingTasks=_pendingTasks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(nonatomic) __weak UniversalSearchSession *universalSearchSession; // @synthesize universalSearchSession=_universalSearchSession;
@property(nonatomic) __weak id <LoadProgressObserver> loadProgressObserver; // @synthesize loadProgressObserver=_loadProgressObserver;
- (void)_didFinishSearchTask:(id)arg1;	// IMP=0x00000001000b0d08
- (void)_willStartSearchTask:(id)arg1;	// IMP=0x00000001000b0c34
- (unsigned long long)maximumCachedCompletionCount;	// IMP=0x00000001000b0c2c
- (id)suggestionStringsForData:(id)arg1;	// IMP=0x00000001000b0a10
- (void)dealloc;	// IMP=0x00000001000b09b8
- (void)stop;	// IMP=0x00000001000b07f0
- (void)setQueryToComplete:(id)arg1;	// IMP=0x00000001000afe70
- (id)init;	// IMP=0x00000001000afd34
- (id)completionsForQuery:(id)arg1;	// IMP=0x00000001000afcb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
