//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BCCloudSyncVersions-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSPersistentHistoryToken, NSString;

@interface BCMutableCloudSyncVersions : NSObject <BCCloudSyncVersions, NSSecureCoding>
{
    NSString *_dataType;	// 8 = 0x8
    long long _cloudVersion;	// 16 = 0x10
    long long _localVersion;	// 24 = 0x18
    long long _syncVersion;	// 32 = 0x20
    NSPersistentHistoryToken *_historyToken;	// 40 = 0x28
    long long _historyTokenOffset;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100024044
- (void).cxx_destruct;	// IMP=0x00000001000243bc
@property(nonatomic) long long historyTokenOffset; // @synthesize historyTokenOffset=_historyTokenOffset;
@property(copy, nonatomic) NSPersistentHistoryToken *historyToken; // @synthesize historyToken=_historyToken;
@property(nonatomic) long long syncVersion; // @synthesize syncVersion=_syncVersion;
@property(nonatomic) long long localVersion; // @synthesize localVersion=_localVersion;
@property(nonatomic) long long cloudVersion; // @synthesize cloudVersion=_cloudVersion;
@property(copy, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000241b4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010002404c
- (id)description;	// IMP=0x0000000100023f3c
- (id)initWithCloudSyncVersions:(id)arg1;	// IMP=0x0000000100023e04

@end

