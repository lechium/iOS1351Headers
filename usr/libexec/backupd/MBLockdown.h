//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MBLockdown : NSObject
{
    struct _lockdown_connection *_conn;	// 8 = 0x8
}

+ (id)buddySetupState;	// IMP=0x0000000100189948
+ (id)dateOfLastBackupFromLockdownPlist;	// IMP=0x00000001001897d8
+ (id)connect;	// IMP=0x0000000100188e68
- (_Bool)removeObjectWithDomain:(id)arg1 andKey:(id)arg2 withError:(id *)arg3;	// IMP=0x00000001001894a8
- (_Bool)setObject:(id)arg1 forDomain:(id)arg2 andKey:(id)arg3 withError:(id *)arg4;	// IMP=0x00000001001891fc
- (id)objectForDomain:(id)arg1 andKey:(id)arg2;	// IMP=0x00000001001890f0
- (void)disconnect;	// IMP=0x0000000100189060
- (_Bool)connect;	// IMP=0x0000000100188f88
- (void)dealloc;	// IMP=0x0000000100188f3c
- (id)init;	// IMP=0x0000000100188e84

@end

