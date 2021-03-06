//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MailAccount.h>

@interface MailAccount (NanoMail)
+ (id)nano_bridgeSettingsInboxesFromAccounts:(id)arg1;	// IMP=0x000000010002eaa0
+ (id)nano_activeMailAccounts;	// IMP=0x000000010002e88c
+ (id)accountImageForAccounts:(id)arg1;	// IMP=0x0000000100033c98
- (id)nano_account;	// IMP=0x000000010002e634
- (id)allMailboxUidsSortedWithSpecialsAtTopIncludingLocals:(_Bool)arg1 client:(id)arg2;	// IMP=0x0000000100035278
- (id)treeOfAllGenericMailboxes;	// IMP=0x0000000100035180
- (id)treeOfAllMailboxUidsSortedWithSpecialsAtTopIncludingLocals:(_Bool)arg1 client:(id)arg2 outbox:(id)arg3;	// IMP=0x000000010003501c
- (void)_loadOutbox:(id)arg1;	// IMP=0x0000000100034dd0
- (id)_allMailboxesIncludingLocals:(_Bool)arg1 withOutbox:(id)arg2 hideInbox:(_Bool)arg3 hideNotes:(_Bool)arg4;	// IMP=0x00000001000349c0
- (id)_treeOfAllMailboxesIncludingLocals:(_Bool)arg1 withOutbox:(id)arg2 hideInbox:(_Bool)arg3 hideNotes:(_Bool)arg4;	// IMP=0x0000000100034540
- (void)_addSpecialMailbox:(id)arg1 toTree:(id)arg2;	// IMP=0x000000010003442c
- (void)addSpecialMailbox:(id)arg1 toArray:(id)arg2;	// IMP=0x0000000100034378
- (void)_addGenericChildrenToMailboxTree:(id)arg1 forNode:(id)arg2 hideNotes:(_Bool)arg3;	// IMP=0x0000000100034110
- (void)_putMailboxesRootedAt:(id)arg1 intoArray:(id)arg2 hideNotes:(_Bool)arg3;	// IMP=0x0000000100033f10
- (id)mailboxesToBeObservedWithFavoritesPersistence:(id)arg1;	// IMP=0x000000010009c1f0
@end

