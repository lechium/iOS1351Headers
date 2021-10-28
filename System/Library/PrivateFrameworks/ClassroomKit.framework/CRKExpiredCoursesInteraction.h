/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATOperation.h>

@protocol CRKExpiredCoursesInteractionDelegate, CRKRequestPerformingProtocol;
@class CATRemoteTaskOperation, NSSet;

@interface CRKExpiredCoursesInteraction : CATOperation {

	CATRemoteTaskOperation* mLeaveControlGroupsOperation;
	BOOL mIsPrompting;
	NSSet* _courses;
	id<CRKExpiredCoursesInteractionDelegate> _delegate;
	id<CRKRequestPerformingProtocol> _studentDaemonProxy;

}

@property (nonatomic,readonly) id<CRKExpiredCoursesInteractionDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<CRKRequestPerformingProtocol> studentDaemonProxy;              //@synthesize studentDaemonProxy=_studentDaemonProxy - In the implementation block
@property (nonatomic,readonly) NSSet * courses;                                                  //@synthesize courses=_courses - In the implementation block
+(id)new;
-(id)init;
-(id<CRKExpiredCoursesInteractionDelegate>)delegate;
-(void)cancel;
-(void)main;
-(BOOL)isAsynchronous;
-(NSSet *)courses;
-(void)removeCourses:(id)arg1 ;
-(id<CRKRequestPerformingProtocol>)studentDaemonProxy;
-(void)leaveControlGroupsOperationDidFinish:(id)arg1 ;
-(id)initWithStudentDaemonProxy:(id)arg1 delegate:(id)arg2 courses:(id)arg3 ;
@end
