/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:59 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VCSwitchManager : NSObject {

	unsigned _localSwitches;
	unsigned _remoteSwitches;
	unsigned _negotiatedSwitches;

}

@property (assign) unsigned localSwitches;                   //@synthesize localSwitches=_localSwitches - In the implementation block
@property (assign) unsigned remoteSwitches;                  //@synthesize remoteSwitches=_remoteSwitches - In the implementation block
@property (assign) unsigned negotiatedSwitches;              //@synthesize negotiatedSwitches=_negotiatedSwitches - In the implementation block
-(id)description;
-(void)initializeLocalSwitches;
-(BOOL)isLocalSwitchEnabled:(unsigned)arg1 ;
-(unsigned)negotiatedSwitches;
-(unsigned)remoteSwitches;
-(void)setRemoteSwitches:(unsigned)arg1 ;
-(void)negotiateSwitches;
-(BOOL)isSwitchEnabled:(unsigned)arg1 ;
-(unsigned)localSwitches;
-(void)setupLocalSwitchesIndividually;
-(void)updateDuplicationEnhancementSwitches;
-(void)setupLocalOnOffSwitchesFromMasterSwitch;
-(void)setupLocalAudioTestGroupSwitches;
-(void)setupLocalVideoTestGroupSwitches;
-(void)setupLocalNetworkTestGroupSwitches;
-(void)setupLocalRateControlTestGroupSwitches;
-(void)setupLocalDuplicationTestGroupSwitches;
-(void)setupLocalOnOffSwitches;
-(void)setupLocalABTestSwitches;
-(void)setLocalSwitches:(unsigned)arg1 ;
-(void)setNegotiatedSwitches:(unsigned)arg1 ;
@end

