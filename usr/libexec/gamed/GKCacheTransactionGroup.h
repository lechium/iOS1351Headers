//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKDispatchGroup.h"

@class GKClientProxy, GKResourceManager, NSManagedObjectContext;

@interface GKCacheTransactionGroup : GKDispatchGroup
{
    GKClientProxy *_client;	// 64 = 0x40
    NSManagedObjectContext *_context;	// 72 = 0x48
    GKResourceManager *_weakResourceManager;	// 80 = 0x50
}

+ (id)transactionGroupWithContext:(id)arg1 resourceManager:(id)arg2 client:(id)arg3;	// IMP=0x00000001000fef6c
+ (id)dispatchGroupWithName:(id)arg1;	// IMP=0x00000001000fee94
+ (id)dispatchGroup;	// IMP=0x00000001000fedbc
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) GKClientProxy *client; // @synthesize client=_client;
@property(nonatomic) GKResourceManager *resourceManager; // @synthesize resourceManager=_weakResourceManager;
- (void)readResources:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000100100138
- (void)writeResources:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ffea0
- (void)performAndJoinForResources:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ffd00
- (void)performOnManagedObjectContext:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ffa3c
- (void)dealloc;	// IMP=0x00000001000ff704
- (id)initWithName:(id)arg1 context:(id)arg2 resourceManager:(id)arg3 client:(id)arg4;	// IMP=0x00000001000ff464
- (id)initWithName:(id)arg1;	// IMP=0x00000001000ff38c
- (id)transactionGroup;	// IMP=0x00000001000ff208

@end
