//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CARObserverHashTable;

@interface CARBuddyMonitor : NSObject
{
    _Bool _buddyFinished;	// 8 = 0x8
    CARObserverHashTable *_observers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100023a8c
@property(retain) CARObserverHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool buddyFinished; // @synthesize buddyFinished=_buddyFinished;
- (void)_updateBuddyFinished;	// IMP=0x0000000100023a40
- (void)removeObserver:(id)arg1;	// IMP=0x00000001000239d4
- (void)addObserver:(id)arg1;	// IMP=0x0000000100023968
- (void)dealloc;	// IMP=0x00000001000238b8
- (id)init;	// IMP=0x0000000100023788

@end

