//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MSDiOSApp : NSObject
{
    NSString *_path;	// 8 = 0x8
    NSDictionary *_info;	// 16 = 0x10
}

+ (id)appWithPath:(id)arg1;	// IMP=0x0000000100069ef0
- (void).cxx_destruct;	// IMP=0x000000010006aaac
@property(retain) NSDictionary *info; // @synthesize info=_info;
@property(retain) NSString *path; // @synthesize path=_path;
- (id)versionInfo;	// IMP=0x000000010006a84c
- (id)uniqueIdentifier;	// IMP=0x000000010006a284
- (void)dealloc;	// IMP=0x000000010006a220
- (id)initWithPath:(id)arg1;	// IMP=0x0000000100069f44

@end

