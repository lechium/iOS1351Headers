/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/ControlCenter/Bundles/MediaControlsModule.bundle/MediaControlsModule
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CCUIContentModule.h>

@class MediaControlsEndpointsViewController, NSString;

@interface MediaControlsModule : NSObject <CCUIContentModule> {

	MediaControlsEndpointsViewController* _contentViewController;

}

@property (nonatomic,retain) MediaControlsEndpointsViewController * contentViewController;                                         //@synthesize contentViewController=_contentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(id)init;
-(void)setContentViewController:(MediaControlsEndpointsViewController *)arg1 ;
-(MediaControlsEndpointsViewController *)contentViewController;
-(void)setContentModuleContext:(id)arg1 ;
@end
