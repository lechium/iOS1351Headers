//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBPlugin-Protocol.h"

@class NSMutableArray;

@interface MBRegulatoryPlugin : NSObject <MBPlugin>
{
    NSMutableArray *applicationsToBackup;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010015d84c
- (id)endingBackupWithEngine:(id)arg1;	// IMP=0x000000010015d7e4
- (id)startingBackupWithEngine:(id)arg1;	// IMP=0x000000010015d77c
- (void)_logRegulatoryApplications:(id)arg1 start:(_Bool)arg2;	// IMP=0x000000010015d55c
- (void)_populateApplications:(id)arg1;	// IMP=0x000000010015d334

@end
