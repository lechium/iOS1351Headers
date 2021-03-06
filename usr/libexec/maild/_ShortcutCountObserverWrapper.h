//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EFCancelable-Protocol.h"
#import "EMMessageRepositoryCountQueryObserver_xpc-Protocol.h"

@class EDMessageCountQueryHandler, EFDebouncer, FavoriteItem, NSString;

@interface _ShortcutCountObserverWrapper : NSObject <EMMessageRepositoryCountQueryObserver_xpc, EFCancelable>
{
    FavoriteItem *_favoriteItem;	// 8 = 0x8
    EFDebouncer *_badgeCountDebouncer;	// 16 = 0x10
    EDMessageCountQueryHandler *_queryHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100063058
@property(retain, nonatomic) EDMessageCountQueryHandler *queryHandler; // @synthesize queryHandler=_queryHandler;
@property(retain, nonatomic) EFDebouncer *badgeCountDebouncer; // @synthesize badgeCountDebouncer=_badgeCountDebouncer;
@property(readonly, nonatomic) FavoriteItem *favoriteItem; // @synthesize favoriteItem=_favoriteItem;
- (void)cancel;	// IMP=0x0000000100062fd0
- (void)countDidChange:(long long)arg1 acknowledgementToken:(id)arg2;	// IMP=0x0000000100062eec
- (id)initWithFavoriteItem:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 countDidChange:(CDUnknownBlockType)arg4;	// IMP=0x0000000100062980

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

