//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCSChange.h"

@class MCSMessageOperation, NSSet;

@interface MailMessageChangeSet : MCSChange
{
    NSSet *_messagesSet;	// 40 = 0x28
    NSSet *_messagesMarkedRead;	// 48 = 0x30
    NSSet *_messagesMarkedUnread;	// 56 = 0x38
    NSSet *_messagesUnflagged;	// 64 = 0x40
    NSSet *_messagesFlagged;	// 72 = 0x48
    MCSMessageOperation *_operation;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001000414dc
@property(readonly) MCSMessageOperation *operation; // @synthesize operation=_operation;
- (id)_unreadCountAdjustmentByMailboxForCriterion:(id)arg1;	// IMP=0x0000000100040e50
- (unsigned long long)adjustUnreadCount:(unsigned long long)arg1 withCriterion:(id)arg2;	// IMP=0x0000000100040c44
- (id)URLStrings;	// IMP=0x0000000100040a38
- (id)accounts;	// IMP=0x0000000100040860
- (id)stores;	// IMP=0x00000001000406a8
- (id)copyChangeSetForFullPath:(id)arg1;	// IMP=0x0000000100040224
- (id)description;	// IMP=0x00000001000401bc
- (_Bool)isRevertible;	// IMP=0x0000000100040194
- (_Bool)revert;	// IMP=0x00000001000400ac
- (_Bool)commit;	// IMP=0x000000010003feec
- (id)applyPendingChangeToObjects:(id)arg1;	// IMP=0x000000010003fb18
- (id)messagesSet;	// IMP=0x000000010003fb08
- (void)_populateMessageSets;	// IMP=0x000000010003f604
- (long long)localizedChangeDescriptionPriority;	// IMP=0x000000010003f5bc
- (id)localizedChangeDescription;	// IMP=0x000000010003f5a4
- (id)localizedErrorTitle;	// IMP=0x000000010003f558
- (id)localizedErrorDescription;	// IMP=0x000000010003f50c
- (void)_setMessages:(id)arg1;	// IMP=0x000000010003f2c4
- (id)initWithMessages:(id)arg1 unreadMessages:(id)arg2 readMessages:(id)arg3 flaggedMessages:(id)arg4 unflaggedMessages:(id)arg5 operation:(id)arg6;	// IMP=0x000000010003f054
- (id)initWithMessages:(id)arg1 operation:(id)arg2;	// IMP=0x000000010003ef08

@end

