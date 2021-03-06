/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SiriPresentationOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _wakeScreen;
	BOOL _hideOtherWindowsDuringAppearance;

}

@property (assign,nonatomic) BOOL wakeScreen;                                    //@synthesize wakeScreen=_wakeScreen - In the implementation block
@property (assign,nonatomic) BOOL hideOtherWindowsDuringAppearance;              //@synthesize hideOtherWindowsDuringAppearance=_hideOtherWindowsDuringAppearance - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hideOtherWindowsDuringAppearance;
-(void)setHideOtherWindowsDuringAppearance:(BOOL)arg1 ;
-(BOOL)wakeScreen;
-(void)setWakeScreen:(BOOL)arg1 ;
@end

