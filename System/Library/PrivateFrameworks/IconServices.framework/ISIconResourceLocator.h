/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSDictionary;

@interface ISIconResourceLocator : NSObject <NSSecureCoding> {

	NSURL* _resourceDirectoryURL;
	NSString* _bundleIdentifier;
	NSDictionary* _iconsDictionary;
	NSString* _preferedResourceName;

}

@property (retain) NSURL * resourceDirectoryURL;               //@synthesize resourceDirectoryURL=_resourceDirectoryURL - In the implementation block
@property (copy) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy) NSDictionary * iconsDictionary;               //@synthesize iconsDictionary=_iconsDictionary - In the implementation block
@property (copy) NSString * preferedResourceName;              //@synthesize preferedResourceName=_preferedResourceName - In the implementation block
@property (readonly) BOOL allowLocalizedIcon; 
+(BOOL)supportsSecureCoding;
+(id)resourceLocatorWithLSIconResourceLocator:(id)arg1 ;
+(id)resourceLocatorWithType:(id)arg1 ;
+(id)genericIconrResourceLocator;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSDictionary *)iconsDictionary;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setIconsDictionary:(NSDictionary *)arg1 ;
-(BOOL)allowLocalizedIcon;
-(NSString *)preferedResourceName;
-(void)setPreferedResourceName:(NSString *)arg1 ;
-(void)setResourceDirectoryURL:(NSURL *)arg1 ;
-(NSURL *)resourceDirectoryURL;
@end
