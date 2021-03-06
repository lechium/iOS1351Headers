/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSRootController.h>

@class PSUIPrefsListController;

@interface PSUIPrefsRootController : PSRootController {

	PSUIPrefsListController* _rootListController;

}
-(void)dealloc;
-(void)loadView;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 ;
-(id)rootListController;
-(void)setupControllerForToolbar:(id)arg1 ;
@end

