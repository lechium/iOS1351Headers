/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:22 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/_HMDAccountIdentifier.h>

@class HMDAccountHandle;

@interface _HMDAccountHandleIdentifer : _HMDAccountIdentifier {

	HMDAccountHandle* _accountHandle;

}

@property (copy,readonly) HMDAccountHandle * accountHandle;              //@synthesize accountHandle=_accountHandle - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(HMDAccountHandle *)accountHandle;
-(id)initWithAccountHandle:(id)arg1 ;
@end

