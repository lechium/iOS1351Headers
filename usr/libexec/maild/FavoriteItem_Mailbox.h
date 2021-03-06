//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FavoriteItem.h"

@class MFMailboxUid, MailAccount, NSString;

@interface FavoriteItem_Mailbox : FavoriteItem
{
    MFMailboxUid *_mailbox;	// 64 = 0x40
    MailAccount *_account;	// 72 = 0x48
    int _mailboxType;	// 80 = 0x50
    NSString *_accountRelativePath;	// 88 = 0x58
    NSString *_displayName;	// 96 = 0x60
    _Bool _originalPushState;	// 104 = 0x68
}

+ (_Bool)_defaultShouldSync;	// IMP=0x000000010001b308
- (void).cxx_destruct;	// IMP=0x000000010001c974
@property(retain) MFMailboxUid *mailbox; // @synthesize mailbox=_mailbox;
@property _Bool originalPushState; // @synthesize originalPushState=_originalPushState;
- (void)_postNotification;	// IMP=0x000000010001c800
- (void)wasChangedExternally;	// IMP=0x000000010001c7a0
- (void)wasRemovedFromCollecion:(id)arg1;	// IMP=0x000000010001c514
- (void)wasAddedToCollection:(id)arg1;	// IMP=0x000000010001c288
- (id)syncValue;	// IMP=0x000000010001c0b0
- (id)syncKey;	// IMP=0x000000010001c05c
- (_Bool)acceptsMessageTransfers;	// IMP=0x000000010001bfdc
- (id)representingMailbox;	// IMP=0x000000010001be04
- (id)account;	// IMP=0x000000010001bdf4
- (id)criterion;	// IMP=0x000000010001bd78
- (_Bool)isVisible;	// IMP=0x000000010001bd54
- (id)displayName;	// IMP=0x000000010001bd08
- (id)dictionaryRepresentation;	// IMP=0x000000010001b9b4
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000010001b748
- (unsigned long long)hash;	// IMP=0x000000010001b730
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001b4d0
- (id)initWithMailbox:(id)arg1;	// IMP=0x000000010001b310

@end

