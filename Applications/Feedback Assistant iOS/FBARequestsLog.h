//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSURL;
@protocol OS_dispatch_queue;

@interface FBARequestsLog : NSObject
{
    _Bool _isActive;	// 8 = 0x8
    NSMutableArray *_requests;	// 16 = 0x10
    NSURL *_requestDirectoryURL;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_requestSaveQueue;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000001000389e0
- (void).cxx_destruct;	// IMP=0x0000000100039020
@property(retain) NSObject<OS_dispatch_queue> *requestSaveQueue; // @synthesize requestSaveQueue=_requestSaveQueue;
@property(retain) NSURL *requestDirectoryURL; // @synthesize requestDirectoryURL=_requestDirectoryURL;
@property _Bool isActive; // @synthesize isActive=_isActive;
@property(retain) NSMutableArray *requests; // @synthesize requests=_requests;
- (void)replaceObjectInRequestsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x0000000100038f5c
- (void)removeObjectFromRequestsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100038f14
- (void)insertObject:(id)arg1 inRequestsAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100038ea0
- (void)addRequest:(id)arg1;	// IMP=0x0000000100038c88
- (id)mutableArrayValueForKey:(id)arg1;	// IMP=0x0000000100038c54
- (_Bool)active;	// IMP=0x0000000100038c4c
- (id)init;	// IMP=0x0000000100038898

@end

