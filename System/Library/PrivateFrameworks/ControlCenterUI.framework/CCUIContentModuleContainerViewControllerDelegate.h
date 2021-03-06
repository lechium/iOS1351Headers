/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CCUIContentModuleContainerViewControllerDelegate <NSObject>
@required
-(CGRect*)compactModeFrameForContentModuleContainerViewController:(id)arg1;
-(BOOL)contentModuleContainerViewController:(id)arg1 canBeginInteractionWithModule:(id)arg2;
-(void)contentModuleContainerViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2;
-(void)contentModuleContainerViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2;
-(void)contentModuleContainerViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
-(void)contentModuleContainerViewController:(id)arg1 didOpenExpandedModule:(id)arg2;
-(void)contentModuleContainerViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
-(void)contentModuleContainerViewController:(id)arg1 didCloseExpandedModule:(id)arg2;
-(void)contentModuleContainerViewController:(id)arg1 willPresentViewController:(id)arg2;
-(void)contentModuleContainerViewController:(id)arg1 willDismissViewController:(id)arg2;
-(void)contentModuleContainerViewControllerDismissPresentedContent:(id)arg1;

@end

