/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSSettings.h>

@class NSMutableDictionary;

@interface BSKeyedSettings : BSSettings {

	NSMutableDictionary* _keyMap;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(id)_init;
-(BOOL)boolForKey:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)_settingForKey:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)_keyForSetting:(unsigned long long)arg1 ;
-(void)_removeAllSettings;
-(id)_valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 multilinePrefix:(id)arg4 ;
-(id)initWithKeyedSettings:(id)arg1 ;
-(BOOL)isKeyedSettings;
-(long long)flagForKey:(id)arg1 ;
-(void)enumerateKeyedFlagsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateKeyedObjectsWithBlock:(/*^block*/id)arg1 ;
-(id)_keyDescriptionForSetting:(unsigned long long)arg1 ;
-(void)_removeSettingForKey:(id)arg1 ;
@end

