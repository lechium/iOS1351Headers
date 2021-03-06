//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol CompletionProviderDelegate;

@interface CompletionProvider : NSObject
{
    NSMutableDictionary *_completionsByString;	// 8 = 0x8
    NSMutableArray *_completedStringsInPruneOrder;	// 16 = 0x10
    _Bool _failing;	// 24 = 0x18
    _Bool _inCompletionsForString;	// 25 = 0x19
    id <CompletionProviderDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010013d044
@property(readonly, nonatomic, getter=isFailing) _Bool failing; // @synthesize failing=_failing;
@property(nonatomic) __weak id <CompletionProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)maximumCachedCompletionCount;	// IMP=0x000000010013d010
- (void)fail;	// IMP=0x000000010013cfb8
- (void)setCompletions:(id)arg1 forString:(id)arg2;	// IMP=0x000000010013cdac
- (void)clearCachedCompletions;	// IMP=0x000000010013cd74
- (void)_pruneCachedCompletions;	// IMP=0x000000010013cca0
- (void)setQueryToComplete:(id)arg1;	// IMP=0x000000010013cc9c
- (id)completionsForQuery:(id)arg1;	// IMP=0x000000010013ca94
- (id)init;	// IMP=0x000000010013ca04

@end

