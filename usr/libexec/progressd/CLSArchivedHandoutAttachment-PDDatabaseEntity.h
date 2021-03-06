//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSArchivedHandoutAttachment.h>

#import "PDDatabaseEntity-Protocol.h"

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSArchivedHandoutAttachment (PDDatabaseEntity) <PDDatabaseEntity>
+ (long long)migrationOrder;	// IMP=0x000000010010d0cc
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x000000010010cfe8
+ (id)entityName;	// IMP=0x000000010010c68c
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x000000010010d0d4
- (void)bindTo:(id)arg1;	// IMP=0x000000010010cb14
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x000000010010c698

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end

