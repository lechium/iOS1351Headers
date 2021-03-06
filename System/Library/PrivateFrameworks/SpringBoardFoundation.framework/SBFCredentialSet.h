/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface SBFCredentialSet : NSObject <NSSecureCoding> {

	ACMHandleRef _acmContext;
	BOOL _ownsContext;
	NSData* _cachedCredentials;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSerializedCredentialSet:(id)arg1 ;
-(id)serializedCredentialSet;
@end

