//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDDatabaseEntity-Protocol.h"

@class NSArray, NSString;
@protocol PDDatabaseValue;

@interface PDASMConfig : NSObject <PDDatabaseEntity>
{
    _Bool _rosterSearchAllowed;	// 8 = 0x8
    _Bool _eduMAID;	// 9 = 0x9
    _Bool _useServerForRosterSearch;	// 10 = 0xa
    NSString *_serviceID;	// 16 = 0x10
    NSString *_personLinkContext;	// 24 = 0x18
    NSArray *_zoneSubscriptions;	// 32 = 0x20
    NSArray *_defaultSyncZoneNames;	// 40 = 0x28
    long long _minimumSearchKeyLength;	// 48 = 0x30
    long long _syncFetchInterval;	// 56 = 0x38
    long long _searchCacheTTL;	// 64 = 0x40
}

+ (id)identityColumnName;	// IMP=0x00000001000a90c8
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00000001000a8d80
+ (long long)migrationOrder;	// IMP=0x00000001000a8d78
+ (id)entityName;	// IMP=0x00000001000a86d0
- (void).cxx_destruct;	// IMP=0x00000001000a93fc
@property(nonatomic) long long searchCacheTTL; // @synthesize searchCacheTTL=_searchCacheTTL;
@property(nonatomic) long long syncFetchInterval; // @synthesize syncFetchInterval=_syncFetchInterval;
@property(nonatomic) long long minimumSearchKeyLength; // @synthesize minimumSearchKeyLength=_minimumSearchKeyLength;
@property(nonatomic) _Bool useServerForRosterSearch; // @synthesize useServerForRosterSearch=_useServerForRosterSearch;
@property(nonatomic, getter=isEDUMAID) _Bool eduMAID; // @synthesize eduMAID=_eduMAID;
@property(nonatomic, getter=isRosterSearchAllowed) _Bool rosterSearchAllowed; // @synthesize rosterSearchAllowed=_rosterSearchAllowed;
@property(retain, nonatomic) NSArray *defaultSyncZoneNames; // @synthesize defaultSyncZoneNames=_defaultSyncZoneNames;
@property(retain, nonatomic) NSArray *zoneSubscriptions; // @synthesize zoneSubscriptions=_zoneSubscriptions;
@property(retain, nonatomic) NSString *personLinkContext; // @synthesize personLinkContext=_personLinkContext;
@property(retain, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
- (id)dictionaryRepresentation;	// IMP=0x00000001000a90e0
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
- (void)bindTo:(id)arg1;	// IMP=0x00000001000a89dc
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x00000001000a86dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
