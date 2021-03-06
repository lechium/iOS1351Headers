/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SBUIRemoteAlertIdleTimerSettings : NSObject <NSSecureCoding> {

	BOOL _disablesWarn;
	BOOL _usesLockScreenRules;
	double _autoLockTimeout;

}

@property (assign,nonatomic) double autoLockTimeout;                //@synthesize autoLockTimeout=_autoLockTimeout - In the implementation block
@property (assign,nonatomic) BOOL disablesWarn;                     //@synthesize disablesWarn=_disablesWarn - In the implementation block
@property (assign,nonatomic) BOOL usesLockScreenRules;              //@synthesize usesLockScreenRules=_usesLockScreenRules - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)autoLockTimeout;
-(void)setAutoLockTimeout:(double)arg1 ;
-(BOOL)disablesWarn;
-(void)setDisablesWarn:(BOOL)arg1 ;
-(BOOL)usesLockScreenRules;
-(void)setUsesLockScreenRules:(BOOL)arg1 ;
@end

