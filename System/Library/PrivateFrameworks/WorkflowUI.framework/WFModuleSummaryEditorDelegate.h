/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFModuleSummaryEditorDelegate <NSObject>
@required
-(void)summaryEditor:(id)arg1 willUpdateVariable:(id)arg2;
-(void)summaryEditor:(id)arg1 didStageParameterState:(id)arg2;
-(void)summaryEditor:(id)arg1 didCommitParameterState:(id)arg2;
-(void)summaryEditorDidRequestTextEntry:(id)arg1;
-(void)summaryEditorDidFinish:(id)arg1 returnToKeyboard:(BOOL)arg2 withTextAttachmentToEdit:(id)arg3;

@end

