/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TUMotionManagerObserver.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>

@interface TeaUI.BlueprintViewportMonitor : NSObject <TUMotionManagerObserver, UICollectionViewDelegate, UITableViewDelegate> {

	 observers;
	 options;

}
-(void)motionManager:(id)arg1 didUpdateMotionData:(id)arg2 ;
-(void)motionManager:(id)arg1 motionEnabled:(BOOL)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)init;
@end
