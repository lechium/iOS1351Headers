/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_DPMaintenance.h>

@interface _DPBlacklistManager : NSObject <_DPMaintenance>
+(BOOL)createRuntimeBlacklistDirectory:(id)arg1 ;
+(BOOL)removeAllFilesFromDirectory:(id)arg1 ;
+(BOOL)validateBlacklist:(id)arg1 ;
+(BOOL)saveBlacklist:(id)arg1 systemDirectory:(id)arg2 runtimeDirectory:(id)arg3 memoryLimit:(unsigned long long)arg4 ;
+(BOOL)removeBlacklistFileWithKey:(id)arg1 fromDirectory:(id)arg2 ;
+(id)keepLatestRuntimeBlacklistInDirectory:(id)arg1 compareToSystemBlacklistInDirectory:(id)arg2 ;
+(unsigned long long)memoryRequiredBySystemBlacklistInDirectory:(id)arg1 runtimeBlacklistInDirectory:(id)arg2 blacklist:(id)arg3 ;
+(BOOL)saveBlacklist:(id)arg1 knownVersionByKey:(id)arg2 systemDirectory:(id)arg3 runtimeDirectory:(id)arg4 ;
+(unsigned long long)memorySizeWithDirectory:(id)arg1 ;
+(BOOL)saveBlacklist:(id)arg1 forKey:(id)arg2 runtimeDirectory:(id)arg3 ;
+(void)processRuntimeBlacklist:(id)arg1 systemDirectory:(id)arg2 runtimeDirectory:(id)arg3 blacklistLengthLimit:(unsigned long long)arg4 ;
+(void)processRuntimeBlacklist;
-(void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2 ;
@end

