//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol MBKeychainManagerInterface <NSObject>
+ (_Bool)removeKeybagSecretsWithError:(id *)arg1;
+ (_Bool)updateKeybagSecret:(NSData *)arg1 forUUID:(NSString *)arg2 error:(id *)arg3;
+ (_Bool)addKeybagSecret:(NSData *)arg1 forUUID:(NSString *)arg2 error:(id *)arg3;
+ (NSData *)fetchKeybagSecretForUUID:(NSString *)arg1 error:(id *)arg2;
+ (_Bool)removeLocalBackupPassword:(id *)arg1;
+ (_Bool)updateLocalBackupPassword:(NSString *)arg1 error:(id *)arg2;
+ (_Bool)addLocalBackupPassword:(NSString *)arg1 error:(id *)arg2;
+ (NSString *)fetchLocalBackupPassword:(id *)arg1;
@end
