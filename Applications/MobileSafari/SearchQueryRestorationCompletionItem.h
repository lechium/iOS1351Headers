//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CompletionItem-Protocol.h"

@class NSArray, NSString, SFSearchResult, WBSCompletionQuery, WBSQuerySuggestion;
@protocol CompletionItemActionHandler;

@interface SearchQueryRestorationCompletionItem : NSObject <CompletionItem>
{
    SFSearchResult *_sfSearchResultValue;	// 8 = 0x8
    long long _parsecQueryID;	// 16 = 0x10
    WBSCompletionQuery *_queryToRestore;	// 24 = 0x18
    NSArray *_completionGroupsToRestore;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000a410c
@property(copy, nonatomic) NSArray *completionGroupsToRestore; // @synthesize completionGroupsToRestore=_completionGroupsToRestore;
@property(retain, nonatomic) WBSCompletionQuery *queryToRestore; // @synthesize queryToRestore=_queryToRestore;
@property(nonatomic) long long parsecQueryID; // @synthesize parsecQueryID=_parsecQueryID;
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue; // @synthesize sfSearchResultValue=_sfSearchResultValue;
- (id)reflectedStringForUserTypedString:(id)arg1;	// IMP=0x00000001000a3ef0
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;	// IMP=0x00000001000a3ee0
- (void)acceptCompletionWithActionHandler:(id)arg1;	// IMP=0x00000001000a3ec8
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;	// IMP=0x00000001000a3dc4
- (id)completionTableViewCellForCompletionList:(id)arg1;	// IMP=0x00000001000a3d54
- (id)completionTableViewCellReuseIdentifier;	// IMP=0x00000001000a3d48
- (id)initWithQuery:(id)arg1;	// IMP=0x00000001000a3cac

// Remaining properties
@property(readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <CompletionItemActionHandler> handlerForActionItem;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property(readonly, nonatomic) _Bool restoresSearchState;
@property(retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool usesDefaultHeaderView;

@end
