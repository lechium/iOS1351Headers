//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC9libfssync19FPFSSQLBackupEngine : NSObject
{
    MISSING_TYPE *userURL;	// 4704857 = 0x47ca59
    MISSING_TYPE *outputUserURL;	// 0 = 0x0
    MISSING_TYPE *destinationDirectoryURL;	// 2 = 0x2
    MISSING_TYPE *backupManifestURL;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000001003e5b8c
- (id)init;	// IMP=0x00000001003e5c70
- (void)backUpWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001003e43b8
- (id)initWithUserURL:(id)arg1 outputUserURL:(id)arg2;	// IMP=0x00000001003e4308

@end
