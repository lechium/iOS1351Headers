/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TSPluginManager : NSObject {

	 pluginContainerController;
	 plugins;
	 pluginViewControllers;

}

@property (assign,__weak,nonatomic) UIViewController*<TSPluginContainerViewProviding> pluginContainerController; 
-(id)init;
-(void)removeAll;
-(void)addPlugin:(id)arg1 ;
-(UIViewController*<TSPluginContainerViewProviding>)pluginContainerController;
-(void)setPluginContainerController:(UIViewController*<TSPluginContainerViewProviding>)arg1 ;
-(void)removePlugin:(id)arg1 ;
-(BOOL)containsPluginForViewController:(id)arg1 ;
-(BOOL)stashViewController:(id)arg1 ;
@end

