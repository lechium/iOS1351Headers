//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, RMProtocolStatusReport;

@interface RMStatusQueryResult : NSObject
{
    NSSet *_statusKeyPaths;	// 8 = 0x8
    NSDictionary *_statusByKeyPath;	// 16 = 0x10
    NSDictionary *_errorByKeyPath;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010005cd58
@property(readonly, copy, nonatomic) NSDictionary *errorByKeyPath; // @synthesize errorByKeyPath=_errorByKeyPath;
@property(readonly, copy, nonatomic) NSDictionary *statusByKeyPath; // @synthesize statusByKeyPath=_statusByKeyPath;
@property(readonly, copy, nonatomic) NSSet *statusKeyPaths; // @synthesize statusKeyPaths=_statusKeyPaths;
- (id)initWithStatusKeyPaths:(id)arg1 statusByKeyPath:(id)arg2 errorByKeyPath:(id)arg3;	// IMP=0x000000010005c2f0
- (id)init;	// IMP=0x000000010005c280
@property(readonly, nonatomic) RMProtocolStatusReport *protocolStatusReport;

@end

