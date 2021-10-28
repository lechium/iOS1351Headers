/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/AccessibilityBundles/AXActionSheetUIServer.axuiservice/AXActionSheetUIServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AXUIAlertDelegate <NSObject>
@optional
-(void)alertWithIdentifierWasEnqueued:(id)arg1;
-(double)delayForDequeuingAlertWithIdentifier:(id)arg1;
-(double)desiredWindowLevelForAlertWithIdentifier:(id)arg1;
-(id)styleProviderForAlertWithIdentifier:(id)arg1;
-(void)alertWithIdentifierDidAppear:(id)arg1;
-(void)alertWithIdentifierDidDisappear:(id)arg1;
-(void)alertWithIdentifierWasActivated:(id)arg1;

@end
