/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface DNDSClientDetailsProvider : NSObject {

	NSMutableDictionary* _detailsByIdentifier;

}
+(id)_defaultModuleDirectories;
-(id)init;
-(id)clientDetailsForIdentifier:(id)arg1 ;
-(void)_loadPreloadBundles;
-(id)clientDetailsForIdentifier:(id)arg1 applicationBundleURL:(id)arg2 ;
-(id)findClientDetailsForIdentifier:(id)arg1 ;
@end
