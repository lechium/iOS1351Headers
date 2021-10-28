//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GKThreadsafeDictionary : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)dictionaryCopy;	// IMP=0x00000001000c8fbc
- (id)allKeys;	// IMP=0x00000001000c8eac
- (void)writeToDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c8e40
- (void)readFromDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c8dd4
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000001000c8dc8
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000001000c8dbc
- (void)removeAllObjects;	// IMP=0x00000001000c8d50
- (void)removeObjectsForKeys:(id)arg1;	// IMP=0x00000001000c8ce4
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000001000c8c78
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000c8c00
- (id)objectForKeyWillReplace:(id)arg1 objectProducerBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c8954
- (id)objectForKey:(id)arg1 objectProducerBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c87e8
- (id)objectForKey:(id)arg1;	// IMP=0x00000001000c86d8
- (id)allObjects;	// IMP=0x00000001000c85b0
- (id)description;	// IMP=0x00000001000c8544
- (void)dealloc;	// IMP=0x00000001000c84f4
- (id)initWithName:(id)arg1;	// IMP=0x00000001000c8478

@end
