/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/NTKCUpNextDataSourcesManagerIdentifiersDelegate.h>

@class NTKCUpNextDataSourcesManager, NSString;

@interface NTKCUpNextDataSourcesViewController : PSListController <NTKCUpNextDataSourcesManagerIdentifiersDelegate> {

	NTKCUpNextDataSourcesManager* _dataSourcesManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)specifiers;
-(void)_disabledDataSourcesDidChange;
-(void)dataSourcesSectionDidFinishLoading:(id)arg1 ;
-(void)manager:(id)arg1 didUpdateDataSourceEntries:(id)arg2 ;
-(void)dataSourcesSection:(id)arg1 didChangeDataSources:(id)arg2 forMode:(long long)arg3 ;
-(void)_setDataSourceEnabled:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_dataSourceEnabled:(id)arg1 ;
-(void)_setAndResizeIconImage:(id)arg1 forSpecifier:(id)arg2 ;
@end
