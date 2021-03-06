/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface FPUIManager : NSObject
+(id)uiExtensionPluginForProviderDomain:(id)arg1 ;
+(id)actionsForProviderDomain:(id)arg1 ;
+(void)getUIExtensionPlugin:(id*)arg1 nonUIExtensionPlugin:(id*)arg2 forProviderDomain:(id)arg3 ;
+(id)extensionForPlugin:(id)arg1 ;
+(id)authenticationActionForProviderDomain:(id)arg1 ;
+(id)uiActionsForProviderDomain:(id)arg1 ;
+(BOOL)isAction:(id)arg1 eligibleForItems:(id)arg2 ;
@end

