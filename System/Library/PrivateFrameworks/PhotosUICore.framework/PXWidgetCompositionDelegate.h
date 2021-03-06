/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXWidgetCompositionDelegate <NSObject>
@optional
-(BOOL)widgetComposition:(id)arg1 requestViewControllerDismissalAnimated:(BOOL)arg2;
-(BOOL)widgetCompositionHasContentAbove:(id)arg1;
-(BOOL)widgetComposition:(id)arg1 shouldUseEdgeToEdgeLayoutForWidget:(id)arg2;
-(long long)widgetComposition:(id)arg1 loadingPriorityForWidget:(id)arg2;
-(BOOL)widgetComposition:(id)arg1 widget:(id)arg2 transitionToViewController:(id)arg3 withTransitionType:(long long)arg4;
-(void)widgetComposition:(id)arg1 widgetHasLoadedContentDataDidChange:(id)arg2;
-(void)widgetComposition:(id)arg1 didUpdateCompositionWithDefaultAnimationOptions:(id)arg2;

@required
-(id)widgetComposition:(id)arg1 viewControllerHostingWidget:(id)arg2;

@end

