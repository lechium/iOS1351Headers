//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BuddyStoreAccount : NSObject
{
    NSString *_username;	// 8 = 0x8
    NSString *_altDSID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010008ff70
@property(retain) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain) NSString *username; // @synthesize username=_username;
- (unsigned long long)hash;	// IMP=0x000000010008febc
- (_Bool)isEqualToRestoreStoreAccount:(id)arg1;	// IMP=0x000000010008fd98
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010008fd18
- (id)description;	// IMP=0x000000010008fc2c
- (id)initWithUsername:(id)arg1 altDSID:(id)arg2;	// IMP=0x000000010008fb84

@end

