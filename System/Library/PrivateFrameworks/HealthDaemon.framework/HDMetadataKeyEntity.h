/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDMetadataKeyEntity : HDHealthEntity
+(long long)protectionClass;
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)_entityForKey:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)_insertEntityWithKey:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)entityForKey:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)insertEntityWithKey:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)_keyForPersistentID:(id)arg1 database:(id)arg2 ;
@end

