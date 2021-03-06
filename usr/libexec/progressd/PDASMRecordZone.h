//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDDatabaseEntity-Protocol.h"

@class NSData, NSString;
@protocol PDDatabaseValue;

@interface PDASMRecordZone : NSObject <PDDatabaseEntity>
{
    NSString *_zoneName;	// 8 = 0x8
    NSData *_serverChangeToken;	// 16 = 0x10
    long long _status;	// 24 = 0x18
}

+ (id)identityColumnName;	// IMP=0x000000010009b63c
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x000000010009b580
+ (id)entityName;	// IMP=0x000000010009b360
- (void).cxx_destruct;	// IMP=0x000000010009b784
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (id)dictionaryRepresentation;	// IMP=0x000000010009b650
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
- (void)bindTo:(id)arg1;	// IMP=0x000000010009b4d0
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x000000010009b3e8
- (id)initWithName:(id)arg1;	// IMP=0x000000010009b36c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

