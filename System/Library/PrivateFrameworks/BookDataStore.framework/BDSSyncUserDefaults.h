/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <BookDataStore/BookDataStore-Structs.h>
@interface BDSSyncUserDefaults : NSObject
+(BOOL)isGlobalICloudDriveSyncOptedIn;
+(BOOL)_isBundleIdentifierInArray:(CFArrayRef)arg1 ;
+(BOOL)isSignedIntoICloud;
+(BOOL)isCloudKitSyncOptedIn;
+(id)iCloudIdentity;
+(BOOL)_isServiceEnabledAlternative:(CFStringRef)arg1 ;
+(BOOL)_isServiceDisabledAlternative:(CFStringRef)arg1 ;
+(void)_setService:(CFStringRef)arg1 enabled:(BOOL)arg2 ;
@end
