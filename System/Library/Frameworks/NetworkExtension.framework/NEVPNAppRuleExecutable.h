/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:54 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NEVPNAppRuleExecutable : NSObject <NSSecureCoding, NSCopying> {

	NSString* _matchSigningIdentifier;
	NSString* _matchDesignatedRequirement;
	NSString* _matchPath;

}

@property (readonly) NSString * matchSigningIdentifier;                  //@synthesize matchSigningIdentifier=_matchSigningIdentifier - In the implementation block
@property (readonly) NSString * matchDesignatedRequirement;              //@synthesize matchDesignatedRequirement=_matchDesignatedRequirement - In the implementation block
@property (copy) NSString * matchPath;                                   //@synthesize matchPath=_matchPath - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)matchSigningIdentifier;
-(NSString *)matchPath;
-(void)setMatchPath:(NSString *)arg1 ;
-(NSString *)matchDesignatedRequirement;
@end

