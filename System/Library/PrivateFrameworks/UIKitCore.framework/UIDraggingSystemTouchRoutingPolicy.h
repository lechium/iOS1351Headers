/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface UIDraggingSystemTouchRoutingPolicy : NSObject <NSSecureCoding> {

	BOOL _hitTestingDisabled;
	NSArray* _contextIDsToAlwaysSendTouches;
	NSArray* _contextIDsToExcludeFromHitTesting;

}

@property (nonatomic,copy) NSArray * contextIDsToAlwaysSendTouches;                            //@synthesize contextIDsToAlwaysSendTouches=_contextIDsToAlwaysSendTouches - In the implementation block
@property (nonatomic,copy) NSArray * contextIDsToExcludeFromHitTesting;                        //@synthesize contextIDsToExcludeFromHitTesting=_contextIDsToExcludeFromHitTesting - In the implementation block
@property (assign,getter=isHitTestingDisabled,nonatomic) BOOL hitTestingDisabled;              //@synthesize hitTestingDisabled=_hitTestingDisabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)contextIDsToAlwaysSendTouches;
-(void)setContextIDsToAlwaysSendTouches:(NSArray *)arg1 ;
-(NSArray *)contextIDsToExcludeFromHitTesting;
-(BOOL)isHitTestingDisabled;
-(void)setContextIDsToExcludeFromHitTesting:(NSArray *)arg1 ;
-(void)setHitTestingDisabled:(BOOL)arg1 ;
@end
