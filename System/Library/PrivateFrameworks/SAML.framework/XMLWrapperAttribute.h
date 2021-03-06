/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SAML/SAML-Structs.h>
@class NSString, XMLWrapperNamespace;

@interface XMLWrapperAttribute : NSObject {

	xmlAttr* _attributeNode;
	int _type;
	NSString* _name;
	NSString* _value;
	XMLWrapperNamespace* _ns;

}

@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) XMLWrapperNamespace * ns;              //@synthesize ns=_ns - In the implementation block
@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
-(NSString *)name;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(XMLWrapperNamespace *)ns;
-(id)initWithNode:(xmlAttr*)arg1 error:(id*)arg2 ;
-(BOOL)xmlAttrNodeForNode:(xmlNode*)arg1 error:(id*)arg2 ;
-(void)setNs:(XMLWrapperNamespace *)arg1 ;
@end

