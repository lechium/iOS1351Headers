//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSFastEnumeration;

@interface _CollectingInvocationTrampoline : NSObject
{
    id _first;	// 8 = 0x8
    id <NSFastEnumeration> _collection;	// 16 = 0x10
    _Bool _allMustMatch;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100049b68
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000001000499a4
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000100049944
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000001000498dc
- (id)initWithCollection:(id)arg1 allMustMatch:(_Bool)arg2;	// IMP=0x000000010004979c

@end

