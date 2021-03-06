/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface VUIStoreAcquisitionProperties : NSObject <NSCopying> {

	BOOL _ignoresForcedPasswordRestriction;
	NSString* _buyParams;
	NSString* _urlBagKey;
	NSString* _userAgent;
	NSNumber* _dsid;
	NSString* _strongToken;

}

@property (nonatomic,copy) NSString * buyParams;                                 //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,copy) NSString * urlBagKey;                                 //@synthesize urlBagKey=_urlBagKey - In the implementation block
@property (nonatomic,copy) NSString * userAgent;                                 //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,copy) NSNumber * dsid;                                      //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy) NSString * strongToken;                               //@synthesize strongToken=_strongToken - In the implementation block
@property (assign,nonatomic) BOOL ignoresForcedPasswordRestriction;              //@synthesize ignoresForcedPasswordRestriction=_ignoresForcedPasswordRestriction - In the implementation block
+(id)metricsAugumentedBuyParamsWithBuyParams:(id)arg1 ;
+(id)acquisitionPropertiesWithBuyParams:(id)arg1 urlbagKey:(id)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)dsid;
-(void)setDsid:(NSNumber *)arg1 ;
-(NSString *)buyParams;
-(void)setBuyParams:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setIgnoresForcedPasswordRestriction:(BOOL)arg1 ;
-(BOOL)ignoresForcedPasswordRestriction;
-(NSString *)urlBagKey;
-(void)setUrlBagKey:(NSString *)arg1 ;
-(void)setStrongToken:(NSString *)arg1 ;
-(NSString *)strongToken;
@end

