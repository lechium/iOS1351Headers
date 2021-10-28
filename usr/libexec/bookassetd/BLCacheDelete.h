//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BLLibrary;

@interface BLCacheDelete : NSObject
{
    _Bool _multiUser;	// 8 = 0x8
    BLLibrary *_library;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000c224
@property(nonatomic, getter=isMultiUser) _Bool multiUser; // @synthesize multiUser=_multiUser;
@property(retain, nonatomic) BLLibrary *library; // @synthesize library=_library;
- (id)_duplicateStoreBooksInPlist:(id)arg1;	// IMP=0x000000010000bd54
- (id)_duplicatedPurchasedBooks;	// IMP=0x000000010000bcf4
- (id)_orphanedBookURLs:(id)arg1;	// IMP=0x000000010000b88c
- (id)_orphanedPurchasedBookURLs;	// IMP=0x000000010000b82c
- (id)_orphanedSharedBookURLs;	// IMP=0x000000010000b794
- (void)_deleteBooks:(id)arg1 fromPlist:(id)arg2;	// IMP=0x000000010000aa90
- (id)_scoreBooksInVolume:(id)arg1;	// IMP=0x000000010000a43c
- (void)cancelPurge;	// IMP=0x000000010000a3d0
- (long long)purgeableAmountForVolume:(id)arg1 urgency:(long long)arg2;	// IMP=0x0000000100009f00
- (long long)periodicPurgeVolume:(id)arg1 urgency:(long long)arg2 requested:(id)arg3;	// IMP=0x0000000100009e90
- (long long)purgeVolume:(id)arg1 urgency:(long long)arg2 requested:(id)arg3;	// IMP=0x000000010000956c
- (id)sharedPlist;	// IMP=0x0000000100009518
- (id)purchasedPlist;	// IMP=0x00000001000094c4
- (id)init;	// IMP=0x000000010000944c
- (id)_initWithLibrary:(id)arg1 multiUser:(_Bool)arg2;	// IMP=0x00000001000093cc

@end
