/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:29 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/LPMediaMetadata.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface LPVideoMetadata : NSObject <LPMediaMetadata, NSSecureCoding> {

	unsigned _version;
	NSURL* _URL;
	NSString* _type;
	NSString* _accessibilityText;
	CGSize _size;

}

@property (nonatomic,readonly) unsigned version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSURL * URL;                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * type;                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) CGSize size;                             //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) NSString * accessibilityText;              //@synthesize accessibilityText=_accessibilityText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)size;
-(unsigned)version;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)setSize:(CGSize)arg1 ;
-(id)_initWithDictionary:(id)arg1 ;
-(NSString *)accessibilityText;
-(void)setAccessibilityText:(NSString *)arg1 ;
@end

