/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATTaskRequest.h>

@class CRKCourseInvitation;

@interface CRKJoinControlGroupRequest : CATTaskRequest {

	CRKCourseInvitation* _invitation;

}

@property (nonatomic,retain) CRKCourseInvitation * invitation;              //@synthesize invitation=_invitation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CRKCourseInvitation *)invitation;
-(void)setInvitation:(CRKCourseInvitation *)arg1 ;
@end
