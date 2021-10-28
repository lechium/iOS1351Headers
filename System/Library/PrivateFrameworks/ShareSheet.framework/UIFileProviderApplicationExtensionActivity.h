/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:05 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/UIApplicationExtensionActivity.h>

@class LSPlugInKitProxy, NSArray;

@interface UIFileProviderApplicationExtensionActivity : UIApplicationExtensionActivity {

	LSPlugInKitProxy* _pluginProxy;
	NSArray* _groupContainerURLs;

}

@property (nonatomic,retain) LSPlugInKitProxy * pluginProxy;              //@synthesize pluginProxy=_pluginProxy - In the implementation block
@property (nonatomic,retain) NSArray * groupContainerURLs;                //@synthesize groupContainerURLs=_groupContainerURLs - In the implementation block
-(NSArray *)groupContainerURLs;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)initWithApplicationExtension:(id)arg1 ;
-(LSPlugInKitProxy *)pluginProxy;
-(BOOL)_sharesGroupContainerWithURL:(id)arg1 ;
-(void)setPluginProxy:(LSPlugInKitProxy *)arg1 ;
-(void)setGroupContainerURLs:(NSArray *)arg1 ;
@end
