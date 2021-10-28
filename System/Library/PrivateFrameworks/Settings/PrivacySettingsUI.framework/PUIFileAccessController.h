/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:09 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSListController.h>

@class FPAccessControlManager;

@interface PUIFileAccessController : PSListController {

	BOOL _isAccess;
	FPAccessControlManager* _accessManager;

}

@property (assign,nonatomic) BOOL isAccess;                                       //@synthesize isAccess=_isAccess - In the implementation block
@property (nonatomic,retain) FPAccessControlManager * accessManager;              //@synthesize accessManager=_accessManager - In the implementation block
-(id)init;
-(id)specifiers;
-(FPAccessControlManager *)accessManager;
-(id)applicationProxiesDictionary;
-(id)bundleIdentifiersAccessingFiles;
-(void)setAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)accesssForSpecifier:(id)arg1 ;
-(void)setCameraAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)cameraAccessForSpecifier:(id)arg1 ;
-(BOOL)isAccess;
-(void)setIsAccess:(BOOL)arg1 ;
-(void)setAccessManager:(FPAccessControlManager *)arg1 ;
@end
