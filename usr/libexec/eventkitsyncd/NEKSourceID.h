//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NEKSourceID : NSObject
{
    NSString *_persistentID;	// 8 = 0x8
    _Bool _isLocalStore;	// 16 = 0x10
}

+ (id)accountForStore:(id)arg1 identifier:(id)arg2;	// IMP=0x0000000100007238
+ (id)eventSourceForDatabase:(id)arg1 identifier:(id)arg2;	// IMP=0x0000000100027080
- (void).cxx_destruct;	// IMP=0x0000000100047ecc
- (id)description;	// IMP=0x0000000100047de8
- (_Bool)isLocalStore;	// IMP=0x0000000100047de0
- (id)persistentID;	// IMP=0x0000000100047dd8
- (id)initWithPersistentID:(id)arg1 isLocalStore:(_Bool)arg2;	// IMP=0x0000000100047d48
- (id)initWithAccount:(id)arg1;	// IMP=0x0000000100007088
- (id)initWithSource:(id)arg1;	// IMP=0x0000000100026f18

@end
