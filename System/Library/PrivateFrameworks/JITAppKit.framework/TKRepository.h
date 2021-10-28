/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL;

@interface TKRepository : NSObject {

	NSString* _bundlePath;
	NSURL* _URL;
	NSString* _version;

}

@property (nonatomic,readonly) NSString * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                     //@synthesize URL=_URL - In the implementation block
+(void)reset;
+(id)bundlePathForURL:(id)arg1 ;
+(void)unpackBundleWithURL:(id)arg1 destinationPath:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)loadWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)version;
-(NSURL *)URL;
-(id)viewPathForName:(id)arg1 ;
-(id)initWithURL:(id)arg1 bundlePath:(id)arg2 ;
@end
