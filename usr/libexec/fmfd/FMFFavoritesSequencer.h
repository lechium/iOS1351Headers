//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMFFavoritesManager, FMFSaveFavoritesOperations, NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface FMFFavoritesSequencer : NSObject
{
    FMFFavoritesManager *_favoritesManager;	// 8 = 0x8
    FMFSaveFavoritesOperations *_currentOperation;	// 16 = 0x10
    NSMutableArray *_saveFavoritesOperation;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_saveFavoritesOperationUpdateQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_saveFavoritesOperationExecutionQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100034f58
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *saveFavoritesOperationExecutionQueue; // @synthesize saveFavoritesOperationExecutionQueue=_saveFavoritesOperationExecutionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *saveFavoritesOperationUpdateQueue; // @synthesize saveFavoritesOperationUpdateQueue=_saveFavoritesOperationUpdateQueue;
@property(retain, nonatomic) NSMutableArray *saveFavoritesOperation; // @synthesize saveFavoritesOperation=_saveFavoritesOperation;
@property(retain, nonatomic) FMFSaveFavoritesOperations *currentOperation; // @synthesize currentOperation=_currentOperation;
@property(retain, nonatomic) FMFFavoritesManager *favoritesManager; // @synthesize favoritesManager=_favoritesManager;
@property(readonly, nonatomic) NSArray *favorites;
- (void)updateWithCachedHandles:(id)arg1;	// IMP=0x0000000100034e34
- (void)updateHandlesWithFavorites:(id)arg1;	// IMP=0x0000000100034dc8
- (void)updateHandles:(id)arg1 withFavoriteArray:(id)arg2;	// IMP=0x0000000100034be8
- (void)executeNextOperation;	// IMP=0x000000010003463c
- (void)removeFavorite:(id)arg1 clientSession:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003438c
- (void)addFavorite:(id)arg1 clientSession:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100034098
- (void)reset;	// IMP=0x0000000100033fa8
- (id)init;	// IMP=0x0000000100033e9c

@end

