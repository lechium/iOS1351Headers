//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ClassIndex : NSObject
{
    NSMutableDictionary *classDict;	// 8 = 0x8
    NSMutableDictionary *codeDictionary;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x0000000100013c58
- (id)getAllLogCodes;	// IMP=0x0000000100013c48
- (void)status;	// IMP=0x0000000100013bbc
- (id)getSubscribers:(int)arg1;	// IMP=0x0000000100013b70
- (id)getClass:(id)arg1;	// IMP=0x0000000100013b60
- (id)init;	// IMP=0x0000000100013adc

@end
