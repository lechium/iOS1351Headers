//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class ACAccount, NSArray, NSDictionary;

@interface ContentRestoreTask : Task
{
    ACAccount *_account;	// 8 = 0x8
    NSArray *_restoreInstalls;	// 16 = 0x10
    NSArray *_successfulItems;	// 24 = 0x18
    NSDictionary *_failedItems;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100241134
@property(readonly) NSDictionary *failedItems; // @synthesize failedItems=_failedItems;
@property(readonly) NSArray *successfulItems; // @synthesize successfulItems=_successfulItems;
@property(copy) ACAccount *account; // @synthesize account=_account;
- (id)_newBodyDictionaryWithAccountID:(id)arg1;	// IMP=0x0000000100240760
- (void)main;	// IMP=0x000000010023fec8
- (id)initWithRestoreAppInstalls:(id)arg1 account:(id)arg2;	// IMP=0x000000010023fe14

@end

