//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NDTSQFile;

@interface NDTSQSchema : NSObject
{
    NDTSQFile *_db;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000640c0
@property(retain, nonatomic) NDTSQFile *db; // @synthesize db=_db;
- (void)parseMultipleSql:(id)arg1 andRun:(CDUnknownBlockType)arg2;	// IMP=0x0000000100064024
- (void)parseSql:(id)arg1 andRun:(CDUnknownBlockType)arg2;	// IMP=0x0000000100063f9c
- (void)executeSql:(id)arg1;	// IMP=0x0000000100063f30
- (id)instanceName;	// IMP=0x0000000100063ef4
- (void)migrateFrom:(long long)arg1;	// IMP=0x0000000100063ef0
- (long long)currentVersion;	// IMP=0x0000000100063ee8
- (void)createTables;	// IMP=0x0000000100063eb8

@end
