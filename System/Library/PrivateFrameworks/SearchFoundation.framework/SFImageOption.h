/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:54 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFImageOption.h>
@class NSString, NSDictionary, NSData;


@protocol SFImageOption <NSObject>
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * defaultValue; 
@property (nonatomic,copy) NSDictionary * options; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)name;
-(NSDictionary *)options;
-(void)setName:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(void)setOptions:(id)arg1;
-(NSString *)defaultValue;
-(void)setDefaultValue:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface SFImageOption : NSObject <SFImageOption, NSSecureCoding, NSCopying> {

	NSString* _name;
	NSString* _defaultValue;
	NSDictionary* _options;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * defaultValue;                                  //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                                   //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSString *)defaultValue;
-(void)setDefaultValue:(NSString *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
@end

