/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface NUSchemaRegistry : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _schemas;
	NSMutableDictionary* _versions;

}
+(id)sharedRegistry;
-(id)init;
-(void)_registerBuiltInSchemas;
-(BOOL)registerSchema:(id)arg1 error:(out id*)arg2 ;
-(BOOL)_registerSchema:(id)arg1 error:(out id*)arg2 ;
-(BOOL)_registerVersion:(id)arg1 withOriginalIdentifier:(id)arg2 error:(out id*)arg3 ;
-(BOOL)registerSchemas:(id)arg1 error:(out id*)arg2 ;
-(id)schemaWithIdentifier:(id)arg1 ;
-(id)_schemaWithIdentifier:(id)arg1 ;
-(id)latestVersionWithNameSpace:(id)arg1 name:(id)arg2 ;
-(id)_latestVersionWithOriginalIdentifier:(id)arg1 ;
-(id)versionsCompatibleWithIdentifier:(id)arg1 ;
-(id)_allVersionsWithOriginalIdentifier:(id)arg1 upToVersion:(id)arg2 ;
@end
