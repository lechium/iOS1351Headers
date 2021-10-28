//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSMutableArray, NSMutableDictionary, NSString, PDDatabase, PDOperationsManager;

@interface PDOperation : NSOperation
{
    _Bool _finished;	// 8 = 0x8
    _Bool _aborted;	// 9 = 0x9
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    NSMutableArray *_onFinishBlocks;	// 16 = 0x10
    PDDatabase *_database;	// 24 = 0x18
    NSString *_operationID;	// 32 = 0x20
    NSError *_operationError;	// 40 = 0x28
    PDOperationsManager *_manager;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100101af8
@property __weak PDOperationsManager *manager; // @synthesize manager=_manager;
@property(readonly, nonatomic) NSError *operationError; // @synthesize operationError=_operationError;
@property(readonly, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
@property(readonly, nonatomic) __weak PDDatabase *database; // @synthesize database=_database;
@property(nonatomic, getter=isAborted) _Bool aborted; // @synthesize aborted=_aborted;
- (id)logSubsystem;	// IMP=0x0000000100101a64
- (void)flushCachedData;	// IMP=0x0000000100101a60
@property(readonly, nonatomic) NSMutableDictionary *statusReport;
- (void)addOnFinishBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100101768
- (void)setFinished:(_Bool)arg1;	// IMP=0x0000000100101540
- (_Bool)isFinished;	// IMP=0x00000001001014f0
- (void)finishWithError:(id)arg1;	// IMP=0x000000010010149c
- (void)abortWithError:(id)arg1;	// IMP=0x0000000100101448
- (void)markAsFinished;	// IMP=0x0000000100101274
- (id)stringForState;	// IMP=0x00000001001011b4
- (void)abort;	// IMP=0x0000000100101124
- (void)cancel;	// IMP=0x00000001001010d4
- (id)initWithDatabase:(id)arg1;	// IMP=0x0000000100100f78
- (id)init;	// IMP=0x0000000100100eb8

@end
