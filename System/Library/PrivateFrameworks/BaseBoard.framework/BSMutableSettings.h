/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSSettings.h>

@interface BSMutableSettings : BSSettings
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFlag:(long long)arg1 forSetting:(unsigned long long)arg2 ;
-(void)setObject:(id)arg1 forSetting:(unsigned long long)arg2 ;
-(void)applySettings:(id)arg1 ;
-(void)removeAllSettings;
@end

