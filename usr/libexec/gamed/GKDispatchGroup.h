//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKActivity, GKThreadsafeDictionary, NSError, NSString;
@protocol OS_dispatch_group;

@interface GKDispatchGroup : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_group;	// 16 = 0x10
    GKThreadsafeDictionary *_values;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    id result;	// 40 = 0x28
    int _sequence;	// 48 = 0x30
    _Bool _loggingEnabled;	// 52 = 0x34
    id _result;	// 56 = 0x38
    GKActivity *_activity;	// 64 = 0x40
}

+ (id)mainQueue;	// IMP=0x0000000100125e10
+ (id)backgroundConcurrentQueue;	// IMP=0x0000000100125e04
+ (id)defaultConcurrentQueue;	// IMP=0x0000000100125df8
+ (id)dispatchGroup;	// IMP=0x0000000100124368
+ (id)dispatchGroupWithName:(id)arg1;	// IMP=0x0000000100124338
+ (void)waitUntilDone:(CDUnknownBlockType)arg1;	// IMP=0x0000000100124040
@property(retain) GKActivity *activity; // @synthesize activity=_activity;
@property(nonatomic, getter=isLoggingEnabled) _Bool loggingEnabled; // @synthesize loggingEnabled=_loggingEnabled;
@property(retain) id result; // @synthesize result=_result;
@property(retain) NSError *error; // @synthesize error=_error;
- (id)allValues;	// IMP=0x0000000100125f2c
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000100125f1c
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x0000000100125ec4
- (id)_values;	// IMP=0x0000000100125e1c
- (void)join:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000100125b60
- (long long)_waitWithDispatchTimeout:(unsigned long long)arg1;	// IMP=0x00000001001254f8
- (long long)waitWithTimeout:(double)arg1;	// IMP=0x00000001001254b4
- (void)wait;	// IMP=0x0000000100125440
- (void)notifyOnMainQueueWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100125428
- (void)notifyOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100124cf8
- (void)leave;	// IMP=0x0000000100124cf0
- (void)enter;	// IMP=0x0000000100124ce8
- (void)perform:(CDUnknownBlockType)arg1;	// IMP=0x0000000100124594
- (id)description;	// IMP=0x0000000100124510
- (void)dealloc;	// IMP=0x00000001001242c4
- (id)initWithName:(id)arg1;	// IMP=0x0000000100124238
- (id)init;	// IMP=0x0000000100124090

@end

