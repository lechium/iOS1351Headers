//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PQLConnection;

@interface MBCKDomainOrdinalsCache : NSObject
{
    NSString *_path;	// 8 = 0x8
    PQLConnection *_database;	// 16 = 0x10
}

+ (id)defaultPath;	// IMP=0x0000000100007028
+ (id)sharedCache;	// IMP=0x0000000100006f60
- (void).cxx_destruct;	// IMP=0x0000000100008564
@property(retain, nonatomic) PQLConnection *database; // @synthesize database=_database;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void)dealloc;	// IMP=0x00000001000084ec
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x00000001000081c8
- (unsigned long long)ordinalForDomainName:(id)arg1;	// IMP=0x0000000100008048
- (id)domainNameForOrdinal:(unsigned long long)arg1;	// IMP=0x0000000100007ff0
- (id)_fetchObjectOfClass:(Class)arg1 withError:(id *)arg2 format:(id)arg3;	// IMP=0x0000000100007cec
- (void)_performOnDBQueue:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007c08
- (_Bool)_isNotFoundError:(id)arg1;	// IMP=0x0000000100007b74
- (id)_newConnection:(id)arg1;	// IMP=0x0000000100007834
- (_Bool)openWithError:(id *)arg1;	// IMP=0x00000001000072a0
- (id)initWithPath:(id)arg1;	// IMP=0x0000000100007044

@end
