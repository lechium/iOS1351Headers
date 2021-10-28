/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATTaskRequest.h>

@interface CRKWaitForUnlockRequest : CATTaskRequest {

	BOOL _shouldBecomeExclusive;

}

@property (assign,nonatomic) BOOL shouldBecomeExclusive;              //@synthesize shouldBecomeExclusive=_shouldBecomeExclusive - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldBecomeExclusive;
-(void)setShouldBecomeExclusive:(BOOL)arg1 ;
@end
