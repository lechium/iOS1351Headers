/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray, NSMutableDictionary;

@interface AFPluginManager : NSObject {

	NSString* _path;
	NSArray* _domainKeys;
	/*^block*/id _factoryInitializationBlock;
	NSMutableDictionary* _domainKeyDictionary;
	BOOL _hasLoadedBundles;

}
+(id)pluginManagerForPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(/*^block*/id)arg3 ;
-(id)description;
-(id)initWithPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(/*^block*/id)arg3 ;
-(void)_loadBundlesIfNeeded;
-(void)_registerBundle:(id)arg1 ;
-(void)enumerateFactoryInstancesForDomainKey:(id)arg1 groupIdentifier:(id)arg2 classIdentifier:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)preloadBundles;
@end

