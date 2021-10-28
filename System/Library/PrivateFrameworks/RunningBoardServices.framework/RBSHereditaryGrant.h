/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoardServices/RBSGrant.h>

@protocol OS_xpc_object;
@class NSString, NSObject, NSArray;

@interface RBSHereditaryGrant : RBSGrant {

	NSString* _endowmentNamespace;
	NSString* _sourceEnvironment;
	NSObject*<OS_xpc_object> _encodedEndowment;
	NSArray* _attributes;

}

@property (nonatomic,copy,readonly) NSString * endowmentNamespace;                     //@synthesize endowmentNamespace=_endowmentNamespace - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceEnvironment;                      //@synthesize sourceEnvironment=_sourceEnvironment - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> encodedEndowment;              //@synthesize encodedEndowment=_encodedEndowment - In the implementation block
@property (nonatomic,readonly) NSArray * attributes;                                   //@synthesize attributes=_attributes - In the implementation block
+(id)grantWithNamespace:(id)arg1 endowment:(id)arg2 attributes:(id)arg3 ;
+(id)grantWithNamespace:(id)arg1 sourceEnvironment:(id)arg2 attributes:(id)arg3 ;
+(id)grantWithNamespace:(id)arg1 sourceEnvironment:(id)arg2 endowment:(id)arg3 attributes:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSArray *)attributes;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(NSString *)endowmentNamespace;
-(NSObject*<OS_xpc_object>)encodedEndowment;
-(id)_initWithNamespace:(id)arg1 sourceEnvironment:(id)arg2 endowment:(id)arg3 attributes:(id)arg4 ;
-(NSString *)sourceEnvironment;
@end
