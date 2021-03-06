/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface LKClassGroup : NSObject <NSSecureCoding> {

	NSString* _classGroupName;
	NSArray* _classes;

}

@property (nonatomic,copy,readonly) NSString * classGroupName;              //@synthesize classGroupName=_classGroupName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * classes;                      //@synthesize classes=_classes - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)classes;
-(BOOL)isEqualToLKClassGroup:(id)arg1 ;
-(NSString *)classGroupName;
-(id)initWithGroupName:(id)arg1 classes:(id)arg2 ;
-(id)initWithClassGroupDictionary:(id)arg1 classesDictionaryByClassID:(id)arg2 ;
@end

