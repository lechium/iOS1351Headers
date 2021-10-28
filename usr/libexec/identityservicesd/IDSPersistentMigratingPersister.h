//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSPersistentMapPersister-Protocol.h"

@class NSString;
@protocol IDSPersistentMapPersister, IMUserDefaults;

@interface IDSPersistentMigratingPersister : NSObject <IDSPersistentMapPersister>
{
    _Bool _migrated;	// 8 = 0x8
    id <IDSPersistentMapPersister> _originPersister;	// 16 = 0x10
    id <IDSPersistentMapPersister> _destinationPersister;	// 24 = 0x18
    NSString *_migrationDefaultKey;	// 32 = 0x20
    id <IMUserDefaults> _userDefaults;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001004ce988
@property(retain, nonatomic) id <IMUserDefaults> userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) NSString *migrationDefaultKey; // @synthesize migrationDefaultKey=_migrationDefaultKey;
@property(nonatomic) _Bool migrated; // @synthesize migrated=_migrated;
@property(retain, nonatomic) id <IDSPersistentMapPersister> destinationPersister; // @synthesize destinationPersister=_destinationPersister;
@property(retain, nonatomic) id <IDSPersistentMapPersister> originPersister; // @synthesize originPersister=_originPersister;
- (void)purgeData;	// IMP=0x00000001004ce5e0
- (void)saveData:(id)arg1;	// IMP=0x00000001004ce4c8
- (id)data;	// IMP=0x00000001004ce420
@property(readonly, nonatomic) _Bool isAvailable;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, copy) NSString *description;
- (id)initWithOriginPersister:(id)arg1 destinationPersister:(id)arg2 userDefaults:(id)arg3;	// IMP=0x00000001004ce074
- (id)initWithOriginPersister:(id)arg1 destinationPersister:(id)arg2;	// IMP=0x00000001004cdf58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
