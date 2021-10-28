/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FusionPluginKit.framework/FusionPluginKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSMutableDictionary;

@interface FNPluginManager : NSObject {

	NSMutableSet* _pluginBundlePaths;
	NSMutableSet* _pluginBundles;
	NSMutableSet* _pluginInstances;
	NSMutableDictionary* _pluginMessage;

}

@property (nonatomic,retain) NSMutableSet * pluginBundlePaths;                 //@synthesize pluginBundlePaths=_pluginBundlePaths - In the implementation block
@property (nonatomic,retain) NSMutableSet * pluginBundles;                     //@synthesize pluginBundles=_pluginBundles - In the implementation block
@property (nonatomic,retain) NSMutableSet * pluginInstances;                   //@synthesize pluginInstances=_pluginInstances - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pluginMessage;              //@synthesize pluginMessage=_pluginMessage - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSMutableSet *)pluginBundles;
-(void)loadBundles;
-(id)getBundlePaths:(id)arg1 ;
-(unsigned long long)initPlugins;
-(id)getClient:(id)arg1 ;
-(unsigned long long)startPlugins;
-(unsigned long long)stopPlugins;
-(unsigned long long)removePlugins;
-(NSMutableSet *)pluginInstances;
-(NSMutableSet *)pluginBundlePaths;
-(void)setPluginBundlePaths:(NSMutableSet *)arg1 ;
-(void)setPluginBundles:(NSMutableSet *)arg1 ;
-(void)setPluginInstances:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)pluginMessage;
-(void)setPluginMessage:(NSMutableDictionary *)arg1 ;
@end
