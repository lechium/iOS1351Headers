/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFLibraryRunCoordinatorDelegate <NSObject>
@optional
-(void)runCoordinator:(id)arg1 handOffWithState:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)runCoordinator:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(/*^block*/id)arg4;

@required
-(id)runCoordinator:(id)arg1 userInterfaceForWorkflow:(id)arg2;

@end

