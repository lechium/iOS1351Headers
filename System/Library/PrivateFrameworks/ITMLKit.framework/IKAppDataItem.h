/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:47 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, IKAppPrototypeIdentifier, NSDictionary;

@interface IKAppDataItem : NSObject <NSCopying> {

	NSString* _type;
	NSString* _identifier;
	IKAppPrototypeIdentifier* _prototypeIdentifier;
	NSDictionary* _dataDictionary;

}

@property (nonatomic,readonly) NSString * type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) IKAppPrototypeIdentifier * prototypeIdentifier;              //@synthesize prototypeIdentifier=_prototypeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dataDictionary;                          //@synthesize dataDictionary=_dataDictionary - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(NSString *)identifier;
-(IKAppPrototypeIdentifier *)prototypeIdentifier;
-(NSDictionary *)dataDictionary;
-(id)initWithType:(id)arg1 identifier:(id)arg2 prototypeIdentifier:(id)arg3 dataDictionary:(id)arg4 ;
-(id)valueForPropertyPath:(id)arg1 ;
@end

