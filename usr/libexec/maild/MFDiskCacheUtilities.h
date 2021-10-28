//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFDiskCacheUtilities : NSObject
{
}

+ (void)deleteLocalMessages;	// IMP=0x00000001000790b4
+ (void)deleteLocalAttachments;	// IMP=0x000000010007901c
+ (void)_enumeratePurgeableFileInTemporaryDirectoryWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100078c78
+ (long long)deleteTemporaryDirectoryContent;	// IMP=0x0000000100078a88
+ (long long)deletePlaceholderAttachmentsWithCreationDateOver:(long long)arg1;	// IMP=0x000000010007875c
+ (long long)deletePlaceholderAttachments;	// IMP=0x000000010007874c
+ (long long)sizeForPurgeableTemporaryDirectoryContent;	// IMP=0x00000001000785d4
+ (id)mailSpaceWithError:(id *)arg1;	// IMP=0x0000000100078160
+ (id)systemSpaceWithError:(id *)arg1;	// IMP=0x0000000100077f7c
+ (void)_enumerateContentPathsAndAttributes:(CDUnknownBlockType)arg1;	// IMP=0x0000000100077c9c
+ (void)_enumeratePurgeableContentsWithType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100077bf8
+ (void)_enumerateContentsForAccounts:(id)arg1 withType:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000775b4
+ (id)_pathsForContentWithType:(unsigned long long)arg1;	// IMP=0x0000000100077520

@end
