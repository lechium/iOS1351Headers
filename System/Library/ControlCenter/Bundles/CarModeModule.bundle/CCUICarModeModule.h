/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:22 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/ControlCenter/Bundles/CarModeModule.bundle/CarModeModule
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ControlCenterUIKit/CCUIToggleModule.h>

@class CARAutomaticDNDStatus;

@interface CCUICarModeModule : CCUIToggleModule {

	CARAutomaticDNDStatus* _carDNDStatus;
	BOOL _isSelected;
	BOOL _carModeActive;

}
+(id)statusOnString;
+(id)statusOffString;
-(id)init;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateState:(BOOL)arg1 ;
-(id)selectedColor;
-(id)iconGlyph;
-(void)_toggleState:(BOOL)arg1 ;
@end
