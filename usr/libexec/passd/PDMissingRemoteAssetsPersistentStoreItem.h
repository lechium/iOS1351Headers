//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDMissingRemoteAssetsPersistentStoreItem : NSObject
{
    NSString *_uniqueID;	// 8 = 0x8
    unsigned long long _downloadRetriesCount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000de244
@property(nonatomic) unsigned long long downloadRetriesCount; // @synthesize downloadRetriesCount=_downloadRetriesCount;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (id)description;	// IMP=0x00000001000de180

@end

