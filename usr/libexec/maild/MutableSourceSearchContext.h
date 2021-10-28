//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SourceSearchContext.h"

@class EFQuery, MFMessageCriterion, NSArray, NSDate, NSSet, NSString;
@protocol EDRemoteSearchDelegate;

@interface MutableSourceSearchContext : SourceSearchContext
{
}


// Remaining properties
@property(retain, nonatomic) MFMessageCriterion *criterion; // @dynamic criterion;
@property(copy, nonatomic) NSSet *currentMailboxes; // @dynamic currentMailboxes;
@property(nonatomic) __weak id <EDRemoteSearchDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) NSDate *offset; // @dynamic offset;
@property(copy, nonatomic) EFQuery *query; // @dynamic query;
@property(copy, nonatomic) NSArray *searchTerms; // @dynamic searchTerms;
@property(copy, nonatomic) NSString *searchText; // @dynamic searchText;
@property(nonatomic) _Bool shouldSearchAllMail; // @dynamic shouldSearchAllMail;
@property(nonatomic) _Bool shouldSkipLocalSearch; // @dynamic shouldSkipLocalSearch;
@property(nonatomic) _Bool shouldSkipRemoteSearch; // @dynamic shouldSkipRemoteSearch;
@property(copy, nonatomic) CDUnknownBlockType shouldStopSearching; // @dynamic shouldStopSearching;
@property(nonatomic) _Bool shouldSuppressErrors; // @dynamic shouldSuppressErrors;
@property(nonatomic) double timeoutDelay; // @dynamic timeoutDelay;
@end
