/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFType.h>

@class NSBundle, NSString;

@interface WFObjectType : WFType {

	Class _objectClass;
	NSBundle* _bundle;
	NSString* _className;

}

@property (nonatomic,readonly) NSBundle * bundle;                   //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) NSString * className;                //@synthesize className=_className - In the implementation block
@property (nonatomic,readonly) Class objectClass;                   //@synthesize objectClass=_objectClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * string; 
+(BOOL)supportsSecureCoding;
+(id)typeWithClassName:(id)arg1 frameworkName:(id)arg2 location:(unsigned long long)arg3 ;
+(id)typeWithClass:(Class)arg1 ;
+(id)typesWithClasses:(id)arg1 ;
-(NSString *)string;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSBundle *)bundle;
-(BOOL)conformsToType:(id)arg1 ;
-(NSString *)className;
-(Class)objectClass;
-(BOOL)isEqualToClass:(Class)arg1 ;
-(id)initWithObjectClass:(Class)arg1 ;
-(BOOL)isEqualToType:(id)arg1 ;
-(BOOL)conformsToClass:(Class)arg1 ;
-(id)initWithClassName:(id)arg1 inBundle:(id)arg2 ;
@end
