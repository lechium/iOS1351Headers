//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSSet, NSURL;
@protocol PDTransactionReceiptFileManagerDelegate;

@interface PDTransactionReceiptFileManager : NSObject
{
    NSURL *_directoryURL;	// 8 = 0x8
    struct os_unfair_lock_s _fileAccessLock;	// 16 = 0x10
    id <PDTransactionReceiptFileManagerDelegate> _delegate;	// 24 = 0x18
    NSFileManager *_fileManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001001cd090
- (id)_transactionReceiptUniqueIDFromFileURL:(id)arg1;	// IMP=0x00000001001cd02c
- (_Bool)_isTransactionReceiptFileURL:(id)arg1;	// IMP=0x00000001001ccfa8
- (id)_fileURLForTransactionReceiptUniqueID:(id)arg1;	// IMP=0x00000001001ccf38
- (void)registerDatabaseTransactionReceipt:(id)arg1;	// IMP=0x00000001001cce70
- (_Bool)deleteTransactionReceiptWithUniqueID:(id)arg1;	// IMP=0x00000001001ccd8c
- (void)_downloadImageURLsForReceipt:(id)arg1 atURL:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001cc714
- (void)writeTransactionReceipt:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001cc418
- (id)transactionReceiptWithUniqueID:(id)arg1;	// IMP=0x00000001001cc34c
@property(readonly, nonatomic) NSSet *transactionReceipts;
@property(readonly, nonatomic) NSSet *uniqueIDs;
- (id)initWithDirectoryURL:(id)arg1 delegate:(id)arg2;	// IMP=0x00000001001cbea4

@end
