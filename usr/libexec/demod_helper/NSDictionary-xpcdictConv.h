//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (xpcdictConv)
+ (id)dictionaryFromXPCDictionary:(id)arg1 withDataFromKey:(const char *)arg2;	// IMP=0x00000001000151fc
+ (id)dictionaryFromJsonData:(id)arg1;	// IMP=0x0000000100015084
+ (id)dictionaryWithXPCDictionary:(id)arg1;	// IMP=0x0000000100014b68
- (id)convertToNSData;	// IMP=0x0000000100015410
- (_Bool)saveAsDataInXPCDictionary:(id)arg1 forKey:(const char *)arg2;	// IMP=0x0000000100015354
- (id)createXPCDictionary;	// IMP=0x000000010001507c
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000100014bbc
@end

