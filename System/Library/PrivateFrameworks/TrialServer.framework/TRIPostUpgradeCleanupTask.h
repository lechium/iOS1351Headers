/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:01 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialServer/TRIBaseTask.h>

@class NSMutableSet;

@interface TRIPostUpgradeCleanupTask : TRIBaseTask {

	NSMutableSet* _invalidExperimentIds;

}
+(id)task;
-(int)run;
-(id)nextTasksForRunStatus:(int)arg1 ;
-(BOOL)validateRolloutDescriptorsWithNamespaceCompatibilityVersions:(id)arg1 ;
-(BOOL)validateExperimentDescriptorsWithNamespaceCompatibilityVersions:(id)arg1 ;
@end

