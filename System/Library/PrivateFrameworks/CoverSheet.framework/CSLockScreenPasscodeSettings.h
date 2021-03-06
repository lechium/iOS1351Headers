/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PTSettings.h>

@interface CSLockScreenPasscodeSettings : PTSettings {

	double _lightenSourceOverColorWhite;
	double _lightenSourceOverColorAlpha;
	double _plusDColorWhite;
	double _plusDColorAlpha;

}

@property (assign,nonatomic) double lightenSourceOverColorWhite;              //@synthesize lightenSourceOverColorWhite=_lightenSourceOverColorWhite - In the implementation block
@property (assign,nonatomic) double lightenSourceOverColorAlpha;              //@synthesize lightenSourceOverColorAlpha=_lightenSourceOverColorAlpha - In the implementation block
@property (assign,nonatomic) double plusDColorWhite;                          //@synthesize plusDColorWhite=_plusDColorWhite - In the implementation block
@property (assign,nonatomic) double plusDColorAlpha;                          //@synthesize plusDColorAlpha=_plusDColorAlpha - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setLightenSourceOverColorWhite:(double)arg1 ;
-(void)setLightenSourceOverColorAlpha:(double)arg1 ;
-(void)setPlusDColorWhite:(double)arg1 ;
-(void)setPlusDColorAlpha:(double)arg1 ;
-(double)lightenSourceOverColorWhite;
-(double)lightenSourceOverColorAlpha;
-(double)plusDColorWhite;
-(double)plusDColorAlpha;
@end

