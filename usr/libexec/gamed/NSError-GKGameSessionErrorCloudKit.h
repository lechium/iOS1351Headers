//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (GKGameSessionErrorCloudKit)
+ (id)_gkGameSessionErrorForCloudKitError:(id)arg1;	// IMP=0x0000000100026764
+ (id)_gkUnauthenticatedError;	// IMP=0x0000000100092c08
+ (id)serverErrorForCode:(long long)arg1 withReason:(id)arg2;	// IMP=0x0000000100092b74
+ (id)serverErrorForCode:(long long)arg1 withUserInfo:(id)arg2;	// IMP=0x0000000100092b50
+ (id)userErrorForServerCode:(long long)arg1 reason:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000100092b10
+ (id)userErrorForServerCode:(long long)arg1 reason:(id)arg2;	// IMP=0x0000000100092ad8
+ (id)userErrorForServerError:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000100092970
+ (id)userErrorForServerError:(id)arg1;	// IMP=0x0000000100092938
+ (id)userErrorForCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0000000100092894
+ (id)userErrorForCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0000000100092678
+ (id)_gkUserErrorForTournamentErrorCode:(long long)arg1 reason:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000001000f3de4
+ (id)_gkUserErrorForGameSessionErrorCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0000000100137b64
+ (id)_gkErrorForDatabase:(struct sqlite3 *)arg1;	// IMP=0x000000010016e2f0
- (_Bool)_gkIsUnauthenticatedError;	// IMP=0x0000000100092c1c
@end
