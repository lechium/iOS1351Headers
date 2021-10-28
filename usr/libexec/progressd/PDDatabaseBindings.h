//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PDDatabaseBindings : NSObject
{
    NSMutableArray *_columnsArray;	// 8 = 0x8
    NSMutableArray *_bindingsArray;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010008e79c
@property(readonly, nonatomic) NSMutableArray *bindingsArray; // @synthesize bindingsArray=_bindingsArray;
@property(readonly, nonatomic) NSMutableArray *columnsArray; // @synthesize columnsArray=_columnsArray;
- (void)removeValuesForColumns:(id)arg1;	// IMP=0x000000010008e634
- (void)normalizeSearchableColumns:(id)arg1 tokenizingColumns:(id)arg2 toColumn:(id)arg3;	// IMP=0x000000010008e308
- (void)setValue:(id)arg1 forColumnNamed:(id)arg2;	// IMP=0x000000010008e264
- (id)initWithColumnsArray:(id)arg1 bindingsArray:(id)arg2;	// IMP=0x000000010008e1c0
- (id)init;	// IMP=0x000000010008e100

@end
