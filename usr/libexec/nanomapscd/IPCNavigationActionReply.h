//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IPCMessageObject.h"

__attribute__((visibility("hidden")))
@interface IPCNavigationActionReply : IPCMessageObject
{
    _Bool _success;	// 8 = 0x8
    unsigned long long _navigationActionError;	// 16 = 0x10
}

@property(nonatomic) unsigned long long navigationActionError; // @synthesize navigationActionError=_navigationActionError;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (id)description;	// IMP=0x000000010002c188
- (id)dictionaryValue;	// IMP=0x000000010002c040
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000010002bf3c

@end
