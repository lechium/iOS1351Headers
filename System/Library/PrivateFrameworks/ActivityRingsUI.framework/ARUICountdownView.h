/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActivityRingsUI/ARUIRingsView.h>

@class ARUICountdownController;

@interface ARUICountdownView : ARUIRingsView {

	ARUICountdownController* _countdownController;
	ARUICountdownController* _backingTrackController;

}

@property (nonatomic,readonly) ARUICountdownController * countdownController; 
+(id)countdownViewConfiguredForCompanion;
+(id)countdownViewConfiguredForWatch;
-(ARUICountdownController *)countdownController;
-(id)initWithCountdownController:(id)arg1 ;
-(id)initWithCountdownController:(id)arg1 backingTrackController:(id)arg2 ;
-(id)backingTrackController;
@end

