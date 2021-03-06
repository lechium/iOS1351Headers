//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDirectoryEnumerator;

__attribute__((visibility("hidden")))
@interface SDCacheEnumerator : NSObject
{
    NSDirectoryEnumerator *_internalEnumerator;	// 8 = 0x8
}

+ (id)validFileSubstrings;	// IMP=0x000000010001f9ac
+ (id)sysdiagnoseDirectory;	// IMP=0x000000010001f9a0
- (void).cxx_destruct;	// IMP=0x00000001000202d0
@property(copy, nonatomic) NSDirectoryEnumerator *internalEnumerator; // @synthesize internalEnumerator=_internalEnumerator;
- (id)nextValidURL;	// IMP=0x00000001000201c0
- (id)nextSysdiagnoseFile;	// IMP=0x000000010001ffd0
- (_Bool)isSysdiagnoseFile:(id)arg1;	// IMP=0x000000010001fe70
- (id)initCacheEnumerator;	// IMP=0x000000010001fe28
- (id)initCacheEnumeratorWithVolume:(id)arg1 WithFlags:(unsigned long long)arg2;	// IMP=0x000000010001fa68
- (id)initCacheEnumeratorWithVolume:(id)arg1;	// IMP=0x000000010001fa58

@end

