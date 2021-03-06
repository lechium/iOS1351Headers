//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDataArchiver, NSDictionary, NSString, NSUUID;

@interface FMDProtectedContext : NSObject
{
    NSUUID *_contextUUID;	// 8 = 0x8
    long long _protectionClass;	// 16 = 0x10
    NSDictionary *_contextDictionary;	// 24 = 0x18
    NSString *_contextKey;	// 32 = 0x20
    FMDataArchiver *_dataArchiver;	// 40 = 0x28
}

+ (id)unittestRootURL;	// IMP=0x000000010002518c
+ (void)setUnittestRootURL:(id)arg1;	// IMP=0x000000010002517c
+ (_Bool)isUnittest;	// IMP=0x0000000100025170
+ (void)setIsUnittest:(_Bool)arg1;	// IMP=0x0000000100025164
+ (id)rootDirectoryURL;	// IMP=0x000000010002502c
+ (id)directoryURLForContextKey:(id)arg1;	// IMP=0x0000000100024f68
- (void).cxx_destruct;	// IMP=0x0000000100025728
@property(retain, nonatomic) FMDataArchiver *dataArchiver; // @synthesize dataArchiver=_dataArchiver;
@property(retain, nonatomic) NSString *contextKey; // @synthesize contextKey=_contextKey;
@property(retain, nonatomic) NSDictionary *contextDictionary; // @synthesize contextDictionary=_contextDictionary;
@property(nonatomic) long long protectionClass; // @synthesize protectionClass=_protectionClass;
@property(retain, nonatomic) NSUUID *contextUUID; // @synthesize contextUUID=_contextUUID;
- (long long)_fmDataProtectionClass;	// IMP=0x00000001000256c4
- (void)saveForContextKey:(id)arg1;	// IMP=0x00000001000255a0
- (id)contextForContextKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000252b0
- (id)fileURLForContextKey:(id)arg1;	// IMP=0x0000000100025198
- (id)context:(id *)arg1;	// IMP=0x0000000100024ef8
- (void)saveContext:(id)arg1;	// IMP=0x0000000100024ddc
- (void)setupDataArchiverWithURL:(id)arg1;	// IMP=0x0000000100024cec
- (id)initWithContextKey:(id)arg1 contextUUID:(id)arg2;	// IMP=0x0000000100024b24
- (id)initWithContextKey:(id)arg1;	// IMP=0x0000000100024b14

@end

