/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ICStoreDialogResponseHandlerConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allowsHandlingNonAuthenticationDialogs;
	BOOL _shouldRecordLastAuthenticationDialogResponseTime;

}

@property (assign,nonatomic) BOOL allowsHandlingNonAuthenticationDialogs;                        //@synthesize allowsHandlingNonAuthenticationDialogs=_allowsHandlingNonAuthenticationDialogs - In the implementation block
@property (assign,nonatomic) BOOL shouldRecordLastAuthenticationDialogResponseTime;              //@synthesize shouldRecordLastAuthenticationDialogResponseTime=_shouldRecordLastAuthenticationDialogResponseTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)allowsHandlingNonAuthenticationDialogs;
-(BOOL)shouldRecordLastAuthenticationDialogResponseTime;
-(void)setAllowsHandlingNonAuthenticationDialogs:(BOOL)arg1 ;
-(void)setShouldRecordLastAuthenticationDialogResponseTime:(BOOL)arg1 ;
@end

