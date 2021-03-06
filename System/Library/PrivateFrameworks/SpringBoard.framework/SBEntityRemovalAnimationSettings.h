/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PTSettings.h>

@class SBEntityRemovalMedusaDefaultAnimationSettings, SBEntityRemovalMedusaSlideOutUpwardAnimationSettings, SBEntityRemovalMedusaSlideOutDownwardAnimationSettings, SBEntityRemovalFloatingDefaultAnimationSettings, SBEntityRemovalFloatingSlideOutUpwardAnimationSettings, SBEntityRemovalFloatingSlideOutDownwardAnimationSettings, SBEntityRemovalDosidoDefaultAnimationSettings, SBEntityRemovalDosidoSlideOutUpwardAnimationSettings, SBEntityRemovalDosidoSlideOutDownwardAnimationSettings;

@interface SBEntityRemovalAnimationSettings : PTSettings {

	SBEntityRemovalMedusaDefaultAnimationSettings* _medusaDeleteIntentAnimationSettings;
	SBEntityRemovalMedusaSlideOutUpwardAnimationSettings* _medusaCommitIntentAnimationSettings;
	SBEntityRemovalMedusaSlideOutDownwardAnimationSettings* _medusaDeclineIntentAnimationSettings;
	SBEntityRemovalFloatingDefaultAnimationSettings* _floatingDeleteIntentAnimationSettings;
	SBEntityRemovalFloatingSlideOutUpwardAnimationSettings* _floatingCommitIntentAnimationSettings;
	SBEntityRemovalFloatingSlideOutDownwardAnimationSettings* _floatingDeclineIntentAnimationSettings;
	SBEntityRemovalDosidoDefaultAnimationSettings* _dosidoDeleteIntentAnimationSettings;
	SBEntityRemovalDosidoSlideOutUpwardAnimationSettings* _dosidoCommitIntentAnimationSettings;
	SBEntityRemovalDosidoSlideOutDownwardAnimationSettings* _dosidoDeclineIntentAnimationSettings;

}

@property (nonatomic,retain) SBEntityRemovalMedusaDefaultAnimationSettings * medusaDeleteIntentAnimationSettings;                            //@synthesize medusaDeleteIntentAnimationSettings=_medusaDeleteIntentAnimationSettings - In the implementation block
@property (nonatomic,retain) SBEntityRemovalMedusaSlideOutUpwardAnimationSettings * medusaCommitIntentAnimationSettings;                     //@synthesize medusaCommitIntentAnimationSettings=_medusaCommitIntentAnimationSettings - In the implementation block
@property (nonatomic,retain) SBEntityRemovalMedusaSlideOutDownwardAnimationSettings * medusaDeclineIntentAnimationSettings;                  //@synthesize medusaDeclineIntentAnimationSettings=_medusaDeclineIntentAnimationSettings - In the implementation block
@property (nonatomic,retain) SBEntityRemovalFloatingDefaultAnimationSettings * floatingDeleteIntentAnimationSettings;                        //@synthesize floatingDeleteIntentAnimationSettings=_floatingDeleteIntentAnimationSettings - In the implementation block
@property (nonatomic,retain) SBEntityRemovalFloatingSlideOutUpwardAnimationSettings * floatingCommitIntentAnimationSettings;                 //@synthesize floatingCommitIntentAnimationSettings=_floatingCommitIntentAnimationSettings - In the implementation block
@property (nonatomic,retain) SBEntityRemovalFloatingSlideOutDownwardAnimationSettings * floatingDeclineIntentAnimationSettings;              //@synthesize floatingDeclineIntentAnimationSettings=_floatingDeclineIntentAnimationSettings - In the implementation block
@property (nonatomic,retain) SBEntityRemovalDosidoDefaultAnimationSettings * dosidoDeleteIntentAnimationSettings;                            //@synthesize dosidoDeleteIntentAnimationSettings=_dosidoDeleteIntentAnimationSettings - In the implementation block
@property (nonatomic,retain) SBEntityRemovalDosidoSlideOutUpwardAnimationSettings * dosidoCommitIntentAnimationSettings;                     //@synthesize dosidoCommitIntentAnimationSettings=_dosidoCommitIntentAnimationSettings - In the implementation block
@property (nonatomic,retain) SBEntityRemovalDosidoSlideOutDownwardAnimationSettings * dosidoDeclineIntentAnimationSettings;                  //@synthesize dosidoDeclineIntentAnimationSettings=_dosidoDeclineIntentAnimationSettings - In the implementation block
+(id)settingsControllerModule;
-(SBEntityRemovalFloatingSlideOutDownwardAnimationSettings *)floatingDeclineIntentAnimationSettings;
-(SBEntityRemovalMedusaDefaultAnimationSettings *)medusaDeleteIntentAnimationSettings;
-(SBEntityRemovalMedusaSlideOutUpwardAnimationSettings *)medusaCommitIntentAnimationSettings;
-(SBEntityRemovalMedusaSlideOutDownwardAnimationSettings *)medusaDeclineIntentAnimationSettings;
-(void)setMedusaDeleteIntentAnimationSettings:(SBEntityRemovalMedusaDefaultAnimationSettings *)arg1 ;
-(void)setMedusaCommitIntentAnimationSettings:(SBEntityRemovalMedusaSlideOutUpwardAnimationSettings *)arg1 ;
-(void)setMedusaDeclineIntentAnimationSettings:(SBEntityRemovalMedusaSlideOutDownwardAnimationSettings *)arg1 ;
-(SBEntityRemovalFloatingDefaultAnimationSettings *)floatingDeleteIntentAnimationSettings;
-(void)setFloatingDeleteIntentAnimationSettings:(SBEntityRemovalFloatingDefaultAnimationSettings *)arg1 ;
-(SBEntityRemovalFloatingSlideOutUpwardAnimationSettings *)floatingCommitIntentAnimationSettings;
-(void)setFloatingCommitIntentAnimationSettings:(SBEntityRemovalFloatingSlideOutUpwardAnimationSettings *)arg1 ;
-(void)setFloatingDeclineIntentAnimationSettings:(SBEntityRemovalFloatingSlideOutDownwardAnimationSettings *)arg1 ;
-(SBEntityRemovalDosidoDefaultAnimationSettings *)dosidoDeleteIntentAnimationSettings;
-(void)setDosidoDeleteIntentAnimationSettings:(SBEntityRemovalDosidoDefaultAnimationSettings *)arg1 ;
-(SBEntityRemovalDosidoSlideOutUpwardAnimationSettings *)dosidoCommitIntentAnimationSettings;
-(void)setDosidoCommitIntentAnimationSettings:(SBEntityRemovalDosidoSlideOutUpwardAnimationSettings *)arg1 ;
-(SBEntityRemovalDosidoSlideOutDownwardAnimationSettings *)dosidoDeclineIntentAnimationSettings;
-(void)setDosidoDeclineIntentAnimationSettings:(SBEntityRemovalDosidoSlideOutDownwardAnimationSettings *)arg1 ;
@end

