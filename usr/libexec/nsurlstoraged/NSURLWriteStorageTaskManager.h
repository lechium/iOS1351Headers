//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSURLStorageTaskManager.h"

@class NSMutableArray;

@interface NSURLWriteStorageTaskManager : NSURLStorageTaskManager
{
    NSMutableArray *_cachedKeyAndDataToWrite;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100007ae0
@property(retain, nonatomic) NSMutableArray *cachedKeyAndDataToWrite; // @synthesize cachedKeyAndDataToWrite=_cachedKeyAndDataToWrite;
- (void)removeAllPendingWriteItems;	// IMP=0x0000000100007a54
- (id)initWithPersistentPath:(id)arg1 maxSize:(long long)arg2 sandboxExtension:(id)arg3 auditToken:(CDStruct_4c969caf)arg4;	// IMP=0x0000000100007920

@end
