/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:54 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface NEDNSSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	BOOL _matchDomainsNoSearch;
	NSArray* _servers;
	NSArray* _searchDomains;
	NSString* _domainName;
	NSArray* _matchDomains;

}

@property (readonly) NSArray * servers;                    //@synthesize servers=_servers - In the implementation block
@property (copy) NSArray * searchDomains;                  //@synthesize searchDomains=_searchDomains - In the implementation block
@property (copy) NSString * domainName;                    //@synthesize domainName=_domainName - In the implementation block
@property (copy) NSArray * matchDomains;                   //@synthesize matchDomains=_matchDomains - In the implementation block
@property (assign) BOOL matchDomainsNoSearch;              //@synthesize matchDomainsNoSearch=_matchDomainsNoSearch - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)domainName;
-(void)setDomainName:(NSString *)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSArray *)matchDomains;
-(void)setMatchDomains:(NSArray *)arg1 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(NSArray *)servers;
-(NSArray *)searchDomains;
-(BOOL)matchDomainsNoSearch;
-(id)initWithServers:(id)arg1 ;
-(void)setSearchDomains:(NSArray *)arg1 ;
-(void)setMatchDomainsNoSearch:(BOOL)arg1 ;
@end
