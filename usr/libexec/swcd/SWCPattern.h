//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SWCRedactedDescription-Protocol.h"

@interface SWCPattern : NSObject <SWCRedactedDescription>
{
    _Bool _freeWhenDone;	// 8 = 0x8
    const struct SWCPatternStorage *_storage;	// 16 = 0x10
}

+ (id)_log;	// IMP=0x0000000100018a10
+ (id)new;	// IMP=0x0000000100018a04
+ (id)_debug:(_Bool)arg1 descriptionOfStorage:(const struct SWCPatternStorage *)arg2 forObject:(id)arg3 redacted:(_Bool)arg4;	// IMP=0x000000010001ae5c
+ (id)_normalizedURLPath:(id)arg1;	// IMP=0x000000010001aaa8
@property(nonatomic) const struct SWCPatternStorage *storage; // @synthesize storage=_storage;
- (id)redactedDescription;	// IMP=0x0000000100012c9c
- (id)debugDescription;	// IMP=0x0000000100012c50
- (id)description;	// IMP=0x0000000100012c04
- (unsigned long long)hash;	// IMP=0x0000000100012bc0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100012ab0
- (id)_initWithPatternStorageNoCopy:(const struct SWCPatternStorage *)arg1 freeWhenDone:(_Bool)arg2;	// IMP=0x0000000100012a60
- (unsigned long long)evaluateWithURLComponents:(id)arg1 substitutionVariables:(id)arg2;	// IMP=0x0000000100012958
@property(readonly, getter=isCaseSensitive) _Bool caseSensitive;
@property(readonly, getter=isBlocking) _Bool blocking;
- (void)dealloc;	// IMP=0x00000001000128b4
- (id)initWithPathPattern:(id)arg1;	// IMP=0x0000000100012688
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000010001218c
- (id)init;	// IMP=0x000000010001215c

@end

