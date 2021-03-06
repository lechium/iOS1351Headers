//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSSet;

@interface SetChange : NSObject
{
    _Bool _empty;	// 8 = 0x8
    _Bool _singleDelete;	// 9 = 0x9
    _Bool _insertAll;	// 10 = 0xa
    _Bool _deleteAll;	// 11 = 0xb
    NSIndexSet *_insertedIndexes;	// 16 = 0x10
    NSIndexSet *_deletedIndexes;	// 24 = 0x18
    NSIndexSet *_modifiedIndexes;	// 32 = 0x20
    NSSet *_moves;	// 40 = 0x28
}

+ (id)emptyChange;	// IMP=0x0000000100150250
- (void).cxx_destruct;	// IMP=0x00000001001508dc
@property(readonly, nonatomic, getter=isDeleteAll) _Bool deleteAll; // @synthesize deleteAll=_deleteAll;
@property(readonly, nonatomic, getter=isInsertAll) _Bool insertAll; // @synthesize insertAll=_insertAll;
@property(readonly, nonatomic, getter=isSingleDelete) _Bool singleDelete; // @synthesize singleDelete=_singleDelete;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(readonly, nonatomic) NSSet *moves; // @synthesize moves=_moves;
@property(readonly, nonatomic) NSIndexSet *modifiedIndexes; // @synthesize modifiedIndexes=_modifiedIndexes;
@property(readonly, nonatomic) NSIndexSet *deletedIndexes; // @synthesize deletedIndexes=_deletedIndexes;
@property(readonly, nonatomic) NSIndexSet *insertedIndexes; // @synthesize insertedIndexes=_insertedIndexes;
- (void)_appendDescriptionForIndexSet:(id)arg1 named:(id)arg2 toDescription:(id)arg3;	// IMP=0x0000000100150710
- (id)description;	// IMP=0x000000010015055c
- (unsigned long long)hash;	// IMP=0x00000001001504f0
- (_Bool)isEqualToChange:(id)arg1;	// IMP=0x000000010015043c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001503bc
- (id)initWithInsertedIndexes:(id)arg1 deletedIndexes:(id)arg2 modifiedIndexes:(id)arg3 moves:(id)arg4;	// IMP=0x000000010015008c
- (id)initAsDeleteAllWithIndexes:(id)arg1;	// IMP=0x000000010014ff2c
- (id)initAsInsertAllWithIndexes:(id)arg1;	// IMP=0x000000010014fdec

@end

