/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray, NSURL;

@interface SPApplication : NSObject <NSSecureCoding> {

	NSString* _longDisplayName;
	BOOL _isWebClip;
	NSString* _displayIdentifier;
	NSMutableArray* _keywords;
	NSURL* _URL;
	NSString* _shortVersion;
	NSString* _displayNameInternal;

}

@property (retain) NSString * displayNameInternal;                      //@synthesize displayNameInternal=_displayNameInternal - In the implementation block
@property (nonatomic,retain) NSString * displayIdentifier;              //@synthesize displayIdentifier=_displayIdentifier - In the implementation block
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * longDisplayName; 
@property (nonatomic,retain) NSMutableArray * keywords;                 //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,retain) NSURL * URL;                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSString * shortVersion;                   //@synthesize shortVersion=_shortVersion - In the implementation block
@property (assign,nonatomic) BOOL isWebClip;                            //@synthesize isWebClip=_isWebClip - In the implementation block
@property (nonatomic,readonly) BOOL displayNameLoaded; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSMutableArray *)keywords;
-(void)setKeywords:(NSMutableArray *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)displayIdentifier;
-(NSString *)shortVersion;
-(void)setShortVersion:(NSString *)arg1 ;
-(NSString *)displayNameInternal;
-(void)setDisplayNameInternal:(NSString *)arg1 ;
-(BOOL)displayNameLoaded;
-(void)setLongDisplayName:(NSString *)arg1 ;
-(NSString *)longDisplayName;
-(void)setDisplayIdentifier:(NSString *)arg1 ;
-(BOOL)isWebClip;
-(void)setIsWebClip:(BOOL)arg1 ;
-(void)copySearchFoundationResult:(id)arg1 ;
@end

