/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, _LSOpenConfiguration, NSXPCConnection, NSDictionary;

@interface _LSAppLinkOpenState : NSObject <NSCopying, NSSecureCoding> {

	NSURL* _URL;
	NSString* _bundleIdentifier;
	_LSOpenConfiguration* _openConfiguration;
	NSXPCConnection* _XPCConnection;
	NSDictionary* _browserState;

}

@property (copy) NSURL * URL;                                             //@synthesize URL=_URL - In the implementation block
@property (copy) NSString * bundleIdentifier;                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (retain) _LSOpenConfiguration * openConfiguration;              //@synthesize openConfiguration=_openConfiguration - In the implementation block
@property (readonly) const SCD_Struct_LS11* auditToken; 
@property (retain) NSXPCConnection * XPCConnection;                       //@synthesize XPCConnection=_XPCConnection - In the implementation block
@property (copy) NSDictionary * browserState;                             //@synthesize browserState=_browserState - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const SCD_Struct_LS11*)auditToken;
-(NSString *)bundleIdentifier;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)setOpenConfiguration:(_LSOpenConfiguration *)arg1 ;
-(void)setBrowserState:(NSDictionary *)arg1 ;
-(NSXPCConnection *)XPCConnection;
-(NSDictionary *)browserState;
-(_LSOpenConfiguration *)openConfiguration;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setXPCConnection:(NSXPCConnection *)arg1 ;
@end

