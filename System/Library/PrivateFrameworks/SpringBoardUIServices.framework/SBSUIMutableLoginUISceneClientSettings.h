/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIMutableApplicationSceneClientSettings.h>
#import <libobjc.A.dylib/SBSUILoginUISceneClientSettings.h>

@class NSString;

@interface SBSUIMutableLoginUISceneClientSettings : UIMutableApplicationSceneClientSettings <SBSUILoginUISceneClientSettings>

@property (assign,nonatomic) long long idleTimerMode; 
@property (nonatomic,copy) NSString * statusBarUserNameOverride; 
@property (assign,nonatomic) long long rotationMode; 
@property (assign,nonatomic) unsigned long long wallpaperMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(long long)rotationMode;
-(void)setRotationMode:(long long)arg1 ;
-(unsigned long long)wallpaperMode;
-(void)setWallpaperMode:(unsigned long long)arg1 ;
-(long long)idleTimerMode;
-(NSString *)statusBarUserNameOverride;
-(void)setIdleTimerMode:(long long)arg1 ;
-(void)setStatusBarUserNameOverride:(NSString *)arg1 ;
@end
