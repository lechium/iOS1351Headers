/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>

@class NSDictionary, NSString;

@interface DEDBugSessionOperation : NSObject <NSSecureCoding, DEDSecureArchiving> {

	long long _type;
	NSDictionary* _options;
	NSString* _identifier;

}

@property (assign) long long type;                                  //@synthesize type=_type - In the implementation block
@property (retain) NSDictionary * options;                          //@synthesize options=_options - In the implementation block
@property (retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
+(id)hashingKeyWithId:(id)arg1 type:(long long)arg2 ;
-(NSString *)description;
-(NSDictionary *)options;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)hashingKey;
@end
