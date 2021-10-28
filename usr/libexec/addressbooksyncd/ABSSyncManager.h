//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ABSSyncStateDiffable, ABSSyncStateMutable;

__attribute__((visibility("hidden")))
@interface ABSSyncManager : NSObject
{
    id <ABSSyncStateMutable> _oldDb;	// 8 = 0x8
    id <ABSSyncStateDiffable> _currentDb;	// 16 = 0x10
    Class _oldObjectClass;	// 24 = 0x18
    Class _currentObjectClass;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100036224
@property(readonly, nonatomic) Class currentObjectClass; // @synthesize currentObjectClass=_currentObjectClass;
@property(readonly, nonatomic) Class oldObjectClass; // @synthesize oldObjectClass=_oldObjectClass;
@property(readonly, nonatomic) id <ABSSyncStateDiffable> currentDb; // @synthesize currentDb=_currentDb;
@property(readonly, nonatomic) id <ABSSyncStateMutable> oldDb; // @synthesize oldDb=_oldDb;
- (void)deleteReality;	// IMP=0x0000000100036200
- (void)deleteShadow;	// IMP=0x00000001000361fc
- (void)_processChangeset:(id)arg1 into:(id)arg2;	// IMP=0x0000000100035f34
- (id)generateDiffs;	// IMP=0x00000001000357cc

@end
