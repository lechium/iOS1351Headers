/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAction.h>

@class SBSApplicationShortcutItem, UIApplicationShortcutItem;

@interface UIHandleApplicationShortcutAction : BSAction

@property (nonatomic,copy,readonly) SBSApplicationShortcutItem * sbsShortcutItem; 
@property (nonatomic,copy,readonly) UIApplicationShortcutItem * uiShortcutItem; 
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(SBSApplicationShortcutItem *)sbsShortcutItem;
-(long long)UIActionType;
-(UIApplicationShortcutItem *)uiShortcutItem;
-(id)initWithSBSShortcutItem:(id)arg1 ;
@end

