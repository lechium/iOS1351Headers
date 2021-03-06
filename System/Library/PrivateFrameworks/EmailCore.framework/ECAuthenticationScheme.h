/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface ECAuthenticationScheme : NSObject

@property (nonatomic,readonly) BOOL hasEncryption; 
@property (nonatomic,readonly) BOOL requiresPassword; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * humanReadableName; 
+(void)initialize;
+(id)knownSchemes;
+(id)schemeWithName:(id)arg1 ;
+(id)authenticationSchemesForAccount:(id)arg1 connection:(id)arg2 ;
+(void)registerSchemeClass:(Class)arg1 ;
-(NSString *)name;
-(NSString *)humanReadableName;
-(BOOL)requiresPassword;
-(BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2 ;
-(Class)connectionClassForAccountClass:(Class)arg1 ;
-(BOOL)hasEncryption;
-(id)authenticatorForAccount:(id)arg1 connection:(id)arg2 ;
-(Class)authenticatorClass;
@end

