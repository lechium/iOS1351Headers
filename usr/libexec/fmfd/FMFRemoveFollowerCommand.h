//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FMFBaseCmd.h"

@class NSArray, NSSet;

@interface FMFRemoveFollowerCommand : FMFBaseCmd
{
    NSArray *_packetsToInvalidate;	// 16 = 0x10
    NSSet *_handles;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100049a38
@property(copy, nonatomic) NSSet *handles; // @synthesize handles=_handles;
@property(retain, nonatomic) NSArray *packetsToInvalidate; // @synthesize packetsToInvalidate=_packetsToInvalidate;
- (id)dsIds;	// IMP=0x000000010004999c
- (id)serverIds;	// IMP=0x0000000100049940
- (id)handleIdentifiers;	// IMP=0x00000001000498e4
- (_Bool)isUserAction;	// IMP=0x00000001000498dc
- (id)jsonBodyDictionary;	// IMP=0x00000001000495b8
- (id)pathSuffix;	// IMP=0x00000001000495ac
- (id)initWithClientSession:(id)arg1 handles:(id)arg2 groupId:(id)arg3;	// IMP=0x00000001000494d4

@end

