/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MFUserDefaultMigrator : NSObject
+(id)log;
+(void)migrateDefaults:(id)arg1 ;
+(id)oldKeysToNewKeysMap;
+(void)migrateDefaultsFromOldKeysToNewKeys:(id)arg1 ;
+(id)_keysToMigrateToSharedAppGroup;
+(void)_migrateExtPropertiesPlist;
+(id)currentDeviceIdentifer;
+(void)migratePropertyForOldKey:(id)arg1 newKey:(id)arg2 ;
+(id)mobileMailDefaultForKey:(id)arg1 ;
+(void)removeMobileMailDefaultForKey:(id)arg1 ;
+(BOOL)migratePreferencesToSharedAppGroup;
@end

