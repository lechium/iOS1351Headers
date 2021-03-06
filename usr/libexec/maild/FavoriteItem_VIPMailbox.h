//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FavoriteItem.h"

@class EMVIP, NSPredicate;

@interface FavoriteItem_VIPMailbox : FavoriteItem
{
    EMVIP *_VIP;	// 64 = 0x40
    NSPredicate *_additionalPredicate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010001f03c
@property(readonly) EMVIP *VIP; // @synthesize VIP=_VIP;
- (id)additionalPredicate;	// IMP=0x000000010001edac
- (id)serverCountMailboxScope;	// IMP=0x000000010001eda4
- (id)mailboxScope;	// IMP=0x000000010001ed88
- (id)countQueryPredicate;	// IMP=0x000000010001ebd0
- (id)displayName;	// IMP=0x000000010001eb64
- (id)persistentIDForMigration;	// IMP=0x000000010001eaa0
- (id)dictionaryRepresentation;	// IMP=0x000000010001e9ac
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000010001e7b4
- (unsigned long long)hash;	// IMP=0x000000010001e718
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001e5a8
- (id)initWithVIP:(id)arg1;	// IMP=0x000000010001e50c

@end

