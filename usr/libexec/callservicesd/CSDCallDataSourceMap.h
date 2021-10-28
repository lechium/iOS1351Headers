//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable;

@interface CSDCallDataSourceMap : NSObject
{
    NSMapTable *_dataSourceToIdentifierToCalls;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000e2228
@property(retain, nonatomic) NSMapTable *dataSourceToIdentifierToCalls; // @synthesize dataSourceToIdentifierToCalls=_dataSourceToIdentifierToCalls;
- (id)callsForDataSource:(id)arg1 identifier:(id)arg2;	// IMP=0x00000001000e2118
- (void)addCalls:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00000001000e1e60
@property(readonly, copy, nonatomic) NSArray *dataSources;
- (id)init;	// IMP=0x00000001000e1da0

@end
