//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSFileManager, NSString, NSURL;

@protocol NSFileManagerDelegate <NSObject>

@optional
- (_Bool)fileManager:(NSFileManager *)arg1 shouldProceedAfterError:(NSError *)arg2 removingItemAtURL:(NSURL *)arg3;
- (_Bool)fileManager:(NSFileManager *)arg1 shouldProceedAfterError:(NSError *)arg2 removingItemAtPath:(NSString *)arg3;
- (_Bool)fileManager:(NSFileManager *)arg1 shouldRemoveItemAtURL:(NSURL *)arg2;
- (_Bool)fileManager:(NSFileManager *)arg1 shouldRemoveItemAtPath:(NSString *)arg2;
- (_Bool)fileManager:(NSFileManager *)arg1 shouldProceedAfterError:(NSError *)arg2 linkingItemAtURL:(NSURL *)arg3 toURL:(NSURL *)arg4;
- (_Bool)fileManager:(NSFileManager *)arg1 shouldProceedAfterError:(NSError *)arg2 linkingItemAtPath:(NSString *)arg3 toPath:(NSString *)arg4;
- (_Bool)fileManager:(NSFileManager *)arg1 shouldLinkItemAtURL:(NSURL *)arg2 toURL:(NSURL *)arg3;
- (_Bool)fileManager:(NSFileManager *)arg1 shouldLinkItemAtPath:(NSString *)arg2 toPath:(NSString *)arg3;
- (_Bool)fileManager:(NSFileManager *)arg1 shouldProceedAfterError:(NSError *)arg2 movingItemAtURL:(NSURL *)arg3 toURL:(NSURL *)arg4;
- (_Bool)fileManager:(NSFileManager *)arg1 shouldProceedAfterError:(NSError *)arg2 movingItemAtPath:(NSString *)arg3 toPath:(NSString *)arg4;
- (_Bool)fileManager:(NSFileManager *)arg1 shouldMoveItemAtURL:(NSURL *)arg2 toURL:(NSURL *)arg3;
- (_Bool)fileManager:(NSFileManager *)arg1 shouldMoveItemAtPath:(NSString *)arg2 toPath:(NSString *)arg3;
- (_Bool)fileManager:(NSFileManager *)arg1 shouldProceedAfterError:(NSError *)arg2 copyingItemAtURL:(NSURL *)arg3 toURL:(NSURL *)arg4;
- (_Bool)fileManager:(NSFileManager *)arg1 shouldProceedAfterError:(NSError *)arg2 copyingItemAtPath:(NSString *)arg3 toPath:(NSString *)arg4;
- (_Bool)fileManager:(NSFileManager *)arg1 shouldCopyItemAtURL:(NSURL *)arg2 toURL:(NSURL *)arg3;
- (_Bool)fileManager:(NSFileManager *)arg1 shouldCopyItemAtPath:(NSString *)arg2 toPath:(NSString *)arg3;
@end
